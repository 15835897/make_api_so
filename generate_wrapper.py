#-*- coding=utf-8 -*-
"""
A wrapper for CTP's Api library
author: Lvsoft@gmail.com
date: 2010-07-20

This file is part of python-ctp library

python-ctp is free software; you can redistribute it and/or modify it
under the terms of the GUL Lesser General Public License as published
by the Free Software Foundation; either version 2.1 of the License, or
(at your option) any later version.

python-ctp is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY of FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along the python-ctp; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA
"""

"分析CTP接口文件，产生对应的.cpp和py封装代码"

import re

MD_PREFIX = 'Md'
TRADER_PREFIX = 'Trader'


class Parse:
    "分析cpp头文件结构"
    def __init__(self, fn, prefix,locale='utf-8',output_encoding='utf-8'):
        self.prefix=prefix
        f=open(fn,encoding=locale)
        self.file_data = f.readlines()
        f.close()

        self.locale = locale
        self.output_encoding= output_encoding
        self.parse()

    def parse(self):
        self.struct={}

        i=0
        fd = self.file_data
        while i< len(fd)-1:
            i+=1
            l=fd[i].strip()

            if l.startswith('//'): continue
            if l.startswith('class'):
                name = l.split()[-1]
                methods={}
                while i<len(fd)-1:
                    i+=1
                    l=fd[i].strip()
                    if l.startswith('};'): break
                    if l.startswith('virtual'):
                        func_name, func_args=re.findall('(\w*)\((.*)\)', l)[0]
                        ret = l[7:].strip().split(func_name)[0].strip()
                        if "const" in ret: ret=ret.replace('const','').strip()
                        methods[func_name]={'return':self.parse_var(ret,False),
                                            'func_args':[self.parse_var(x) for x in func_args.split(',') if x.strip()],
                                            #'comment':self.get_comment(i,locale)
                                            'comment':self.get_comment(i)
                                            }
                        
                self.struct[name]=methods

    def get_comment(self, p):
        "获取注释"
        fd=self.file_data
        data=[]
        while p>0:
            p-=1
            l=fd[p].strip()
            if not l.startswith('///'): break
            #data.append(l[3:].decode('utf-8'))
            data.append(l[3:])   #0.04
        data.reverse()
        return data

    def parse_var(self, x, has_vn=True):
        "解析一个变量声明"
        if "*" in x:
            x=[x.strip() for x in x.split("*")]
            x[0]+="*"
            if '[' in x[1]:
                x[0]+='*'
            x[1]=x[1].split('[')[0]
        else:
            x=[x.strip() for x in x.split()]
        if has_vn:
            return {"type":x[0], "name":x[1]}
        else: return x[0]

    def _arg_type_map(self, x):
        "将类型映射成对应的python struct类别"
#        if x=='THOST_TE_RESUME_TYPE': return 'i'
        #if x.startswith('char*'): return 's'
        if x.startswith('char*'): return 'y'        #python3
        if x in ['int', 'bool', 'double']: return x[0]
        if x == 'short': return 'h'
        else: return 'N'


    def generate_wrapper(self):
        k = list(self.struct.keys())
        if "api" in k[0].lower():
            api=k[0]
            spi=k[1]
        else:
            api=k[1]
            spi=k[0]
        self.generate_wrapper_spi(spi)
        self.generate_wrapper_api(api)

    def generate_wrapper_spi(self, spi):
        "产生spi部分封装"
        #generate spi

        prefix=self.prefix

        f=open("generated/wrapper_%s.cpp" % self.prefix,encoding=self.output_encoding,mode='w')
        f.write('/*\n'+__doc__+'*/\n')
        f2=open('generated/wrapper_%s.h' % self.prefix,encoding=self.output_encoding,mode='w')
        f2.write('/*\n'+__doc__+'*/\n')
        f3=open('generated/%sApi.py' % prefix,encoding=self.output_encoding,mode='w')
        f3.write(u'#-*- coding=utf-8 -*-\n"""\n'+__doc__+'"""\n')
        f3.write(u"""
import os
from . import _ctp_%s
from . import UserApiStruct

def tou(x, enc='gbk', err='ignore'):
    return str(x, enc, err) if isinstance(x, bytes) else str(x)


_ctp_%s.register_struct(UserApiStruct)

class %sSpi:
    def register_api(self, api):
        self.api=api

""" % (prefix, prefix, prefix))
        
        f2.write(u"""
#ifndef WRAPPER_H
#define WRAPPER_H

#pragma warning(disable : 4996)
#pragma warning(disable : 4819) //unicode

//#include <Python.h>
#ifdef _DEBUG
#undef _DEBUG   //links to pythonxx.lib
#include <Python.h>
#define _DEBUG
#else
#include <Python.h>
#endif

#include "ThostFtdc%sApi.h"

class MySpiWrapper : public CThostFtdc%sSpi
{
 public:
  MySpiWrapper(PyObject * parent);

""" % (self.prefix, self.prefix))
        f.write(u"""
#include "struct.h"
#include "wrapper_%s.h"
        
MySpiWrapper::MySpiWrapper(PyObject * parent):%s(){
  py_spi = parent;
  Py_INCREF(py_spi);
}

""" % (self.prefix, spi))
        
        methods=self.struct[spi]
        for i in methods:
            args = methods[i]['func_args']
            # 参数声明
            args1=", ".join([x['type']+' '+x['name'] for x in args])
            # 类型描述字符串
            args2="".join([self._arg_type_map(x['type']) for x in args])
            # 参数名
            args3=[]
            for j in args:
                if self._arg_type_map(j['type'])=='N':
                    tn = j['type'].replace('*', '')
                    
                    args3.append("new_%s(%s)" % (tn, j['name']))
                else:
                    args3.append(j['name'])
            args3=", ".join(args3)
            
            #print(prefix,i,methods[i]['return'])
            f3.write(u"    def %s(self, %s):\n" % (i, ", ".join([x['name'] for x in args])))
            #f3.write(u"        '''%s'''\n        pass\n\n" % "\n".join(methods[i]['comment']).encode('utf-8'))
            f3.write(u"        '''%s'''\n        pass\n\n" % "\n".join(methods[i]['comment']))  #0.04
            f2.write(u"  virtual %s %s(%s);\n" % (methods[i]['return'], i, args1))
            f.write(u"""
%s MySpiWrapper::%s(%s){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"%s", """ % (methods[i]['return'],
                                                i,
                                                args1,
                                                i)
                    )
            if args2:
                f.write(u"""(char*)"%s", %s))""" % (args2, args3))
            else:
                f.write(u"NULL))\n")
            f.write(u"""{
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}
""" )


                 
        f2.write(u"""
 private:
  PyObject * py_spi;
};

#endif
""")

        f.close()
        f2.close()
        f3.close()

    def generate_wrapper_api(self, api):
        "产生api部分封装"
        prefix = self.prefix
        #print(self.prefix)
        f=open('generated/_ctp_%s.cpp' % prefix,encoding=self.output_encoding,mode='w')
        f.write(u'/*\n'+__doc__+'*/\n')
        f2=open('generated/%sApi.py' % prefix,encoding=self.output_encoding,mode='a+')

        f.write(u"""
#pragma warning(disable : 4996)

//#include <Python.h>
#ifdef _DEBUG
#undef _DEBUG   //links to pythonxx.lib
#include <Python.h>
#define _DEBUG
#else
#include <Python.h>
#endif

#include "ThostFtdc%sApi.h"
#include "wrapper_%s.h"
#include "struct.h"

/*
#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_MD_API_EXPORT
#define MD_API_EXPORT __declspec(dllexport)
#else
#define MD_API_EXPORT __declspec(dllimport)
#endif
#else
#define MD_API_EXPORT
#endif
*/

//using namespace std;  
""" % (prefix,prefix))

        if prefix == MD_PREFIX:
            f2.write('''
class %sApi:
    @staticmethod
    def Create%sApi(FlowPath="", IsUsingUdp=False,IsMulticast=False):
        if FlowPath:
            FlowPath=os.path.abspath(FlowPath)
        api_ptr=_ctp_%s.create_%sApi(FlowPath, IsUsingUdp,IsMulticast)
        return %sApi(api_ptr)

    def __init__(self, api_ptr):
        self.api_ptr = api_ptr

''' % (prefix, prefix, prefix, prefix, prefix))
            f.write("""
static PyObject* create_%sApi(PyObject* self, PyObject *args)
{
  char * flowpath;
  bool IsUsingUdp,IsMulticast;

  PyArg_ParseTuple(args, "sbb", &flowpath, &IsUsingUdp,&IsMulticast);
  void *p = CThostFtdc%sApi::CreateFtdc%sApi(flowpath, IsUsingUdp,IsMulticast);
  return PyLong_FromLong((long)p);
}

""" % (prefix, prefix, prefix))
        elif prefix == TRADER_PREFIX:
            f2.write('''
class %sApi:
    @staticmethod
    def Create%sApi(FlowPath=""):
        if FlowPath:
            FlowPath=os.path.abspath(FlowPath)
        api_ptr=_ctp_%s.create_%sApi(FlowPath)
        return %sApi(api_ptr)

    def __init__(self, api_ptr):
        self.api_ptr = api_ptr

''' % (prefix, prefix, prefix, prefix, prefix))
            f.write("""
static PyObject* create_%sApi(PyObject* self, PyObject *args)
{
  char * flowpath;

  PyArg_ParseTuple(args, "s", &flowpath);
  void *p = CThostFtdc%sApi::CreateFtdc%sApi(flowpath);
  return PyLong_FromLong((long)p);
}

""" % (prefix, prefix, prefix))
        else:
            pass

        methods = self.struct[api]
        for i in methods:
            if i=="SubscribeMarketData" or i=="UnSubscribeMarketData":
                f.write(u"""
static PyObject * Md_%s(PyObject* self, PyObject * args)
{
  CThostFtdcMdApi * user = (CThostFtdcMdApi *)PyLong_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * instruments = PyTuple_GET_ITEM(args, 1);

  int l = PySequence_Length(instruments);
  char ** pp =(char**)calloc(l, sizeof(char *));
  int i;
  for (i=0; i<l; i++){
    //pp[i] = PyBytes_AsString(PySequence_GetItem(instruments, i));
    pp[i] = PyBytes_AsString(PyUnicode_AsEncodedString(PySequence_GetItem(instruments, i),"%s","Error!"));
  }
  user->%s(pp, l);
  
  free(pp);

  Py_INCREF(Py_None);
  return Py_None;
}
""" % (i,self.locale,i))
                f2.write(u'''
    def %s(self, InstrumentIDs):
        """订阅/退订行情。
        @param ppInstrumentIDs list of 合约ID
        """
        return _ctp_Md.%s(self.api_ptr, InstrumentIDs)

''' % (i,i))
                continue
            f.write(u"""
static PyObject* %s_%s(PyObject * self, PyObject * args){
  CThostFtdc%sApi * user = (CThostFtdc%sApi *) PyLong_AsLong(PyTuple_GET_ITEM(args, 0));
""" % (prefix, i,
       prefix, prefix))

            args=methods[i]
            #print(i,methods[i]['return'])
            f2.write(u"    def %s(self, %s):\n" % (i, ", ".join([x['name'] for x in args['func_args']])))
            #f2.write(u"        '''%s'''\n" % "\n".join(methods[i]['comment']).encode('utf-8'))
            f2.write(u"        '''%s'''\n" % "\n".join(methods[i]['comment']))  #0.04          
            if "RegisterSpi" == i: # 针对这个调用打个补丁
                f2.write(u"        ret = _ctp_%s.%s(self.api_ptr, %s)\n" % (prefix, i,
                                                                           ", ".join([x['name'] for x in args['func_args']])))
                f2.write(u"        %s.register_api(self)\n" % args['func_args'][0]['name'])
                f2.write(u"        return ret\n\n")
            else:
                if self._arg_type_map(methods[i]['return']) == 'y':
                    #print('yyyyy',i,methods[i]['return'])
                    f2.write(u"        return tou(_ctp_%s.%s(self.api_ptr, %s))\n\n" % (prefix, i,
                                                                            ", ".join([x['name'] for x in args['func_args']])))
                else:
                    f2.write(u"        return _ctp_%s.%s(self.api_ptr, %s)\n\n" % (prefix, i,
                                                                            ", ".join([x['name'] for x in args['func_args']])))
                
            for j in range(len(args['func_args'])):
                n = args['func_args'][j]['name']
                t = args['func_args'][j]['type']
                f.write(u"  PyObject * py_%s = PyTuple_GET_ITEM(args, %d);\n" % (n, j+1))
                tt=self._arg_type_map(t)
                if t=='THOST_TE_RESUME_TYPE':
                    f.write(u"  THOST_TE_RESUME_TYPE %s = (THOST_TE_RESUME_TYPE)PyLong_AsLong(py_%s);\n" % (n,n))
                elif tt=='N':
                    tn = t.replace('*','')
                    if 'Spi' in t:
                        f.write(u"  %s %s = new MySpiWrapper(py_pSpi);\n" % (t,n))
                    else:
                        f.write(u"  %s %s = from_%s(py_%s);\n" % (t,n,tn,n))
                elif tt=='i':
                    f.write(u'  int %s = PyLong_AsLong(py_%s);\n' % (n,n))
                #elif tt=='h':
                #    f.write(u'  short %s = PyInt_AsShort(py_%s);\n' % (n,n))   #不应该存在这一类
                elif tt=='y':       #python3 monkey patch
                    #f.write(u'  char* %s = PyBytes_AsString(py_%s);\n' % (n,n))
                    f.write(u'  char* %s = PyBytes_AsString(PyUnicode_AsEncodedString(py_%s,"%s","Error!"));\n' % (n,n,self.locale))
                elif tt=='d':
                    f.write(u'  double %s = PyFloat_AsDouble(py_%s);\n' % (n,n))
                else:
                    print("unknown type mapping:", tt, t, n)
            
            if methods[i]['return']=='void':
                f.write(u'  user->%s(%s);\n' % (i, ", ".join([x['name'] for x in args['func_args']])))
            else:
                #f.write(u'  PyObject * ret = Py_BuildValue("%s", user->%s(%s));\n' % (self._arg_type_map(methods[i]['return']),
                f.write(u'  PyObject * ret = Py_BuildValue("%s", user->%s(%s));\n' % (self._arg_type_map(methods[i]['return']),     #python3
                i, ", ".join([x['name'] for x in args['func_args']])))

            
            for j in args['func_args']:
                if self._arg_type_map(j['type'])=='N':
                    if not 'Spi' in j['name'] and j['type']!='THOST_TE_RESUME_TYPE':
                        f.write(u"  free(%s);\n" % j['name'])

            if methods[i]['return']=='void':            
                f.write(u"""

  Py_INCREF(Py_None);
  return Py_None;
}
""")
            else:
                f.write(u"  return ret;\n}\n")
            
        f.write(u"""
PyMODINIT_FUNC PyInit__ctp_%s()
{
   static PyMethodDef mbMethods[] = {
     {"create_%sApi", create_%sApi, METH_VARARGS},
     {"register_struct", register_struct, METH_VARARGS},

%s,

     {NULL, NULL, NULL} /*sentinel，哨兵，用来标识结束*/
   };

    static struct PyModuleDef moduledef = { //0.04 update
        PyModuleDef_HEAD_INIT,
        "_ctp_%s",     /* m_name */
        "ctp module",  /* m_doc */
        -1,                  /* m_size */
        mbMethods,    /* m_methods */
        NULL,                /* m_reload */
        NULL,                /* m_traverse */
        NULL,                /* m_clear */
        NULL,                /* m_free */
    };
    PyObject *m = PyModule_Create(&moduledef);
   

    PyEval_InitThreads();
    return m;
}

""" % (prefix, prefix, prefix,
       ",\n".join(['     {"%s", %s_%s, METH_VARARGS} ' % (x, prefix, x) for x in methods]),
       prefix))

        f.close()
        f2.close()
                    
def test(locale='utf-8',output_encoding='utf-8'):
    a=Parse("../api/linux64/ThostFtdcMdApi.h", 'Trader',locale)
    from pprint import pprint
    pprint(a.struct)
#test('gbk')

def test2(locale='utf-8',output_encoding='utf-8'):
    a=Parse("../api/linux64/ThostFtdcTraderApi.h", "Trader",locale=locale,output_encoding=output_encoding)
    a.generate_wrapper()
    a=Parse("../api/linux64/ThostFtdcMdApi.h", "Md",locale=locale,output_encoding=output_encoding)
    a.generate_wrapper()

test2('gbk',output_encoding='utf-8')    #上期直接下载的文件是gbk编码
