/*
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
*/

//This file is auto generated! Please don't edit directly.

#include "struct.h"

static PyObject * mod=NULL;
PyObject * register_struct(PyObject * self, PyObject * args){
  mod = PyTuple_GET_ITEM(args,0);
  Py_INCREF(Py_None);
  return Py_None;
}

//查询报单
PyObject * new_CThostFtdcQryOrderField(CThostFtdcQryOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryOrderField", (char*)"yyyyyyy",
p->BrokerID, p->OrderSysID, p->InsertTimeStart, p->InsertTimeEnd, p->InvestorID, p->InstrumentID, p->ExchangeID);
}
CThostFtdcQryOrderField * from_CThostFtdcQryOrderField(PyObject * p){
  CThostFtdcQryOrderField *t = (CThostFtdcQryOrderField *)calloc(1, sizeof(CThostFtdcQryOrderField));
  memset(t,0,sizeof(CThostFtdcQryOrderField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //开始时间
  strcpy(t->InsertTimeStart, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InsertTimeStart"),"gbk","Error!")));
  //结束时间
  strcpy(t->InsertTimeEnd, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InsertTimeEnd"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//查询手续费率
PyObject * new_CThostFtdcQryInstrumentCommissionRateField(CThostFtdcQryInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentCommissionRateField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->InstrumentID);
}
CThostFtdcQryInstrumentCommissionRateField * from_CThostFtdcQryInstrumentCommissionRateField(PyObject * p){
  CThostFtdcQryInstrumentCommissionRateField *t = (CThostFtdcQryInstrumentCommissionRateField *)calloc(1, sizeof(CThostFtdcQryInstrumentCommissionRateField));
  memset(t,0,sizeof(CThostFtdcQryInstrumentCommissionRateField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));

  return t;
};

//查询报单操作
PyObject * new_CThostFtdcQryOrderActionField(CThostFtdcQryOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryOrderActionField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->ExchangeID);
}
CThostFtdcQryOrderActionField * from_CThostFtdcQryOrderActionField(PyObject * p){
  CThostFtdcQryOrderActionField *t = (CThostFtdcQryOrderActionField *)calloc(1, sizeof(CThostFtdcQryOrderActionField));
  memset(t,0,sizeof(CThostFtdcQryOrderActionField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//查询产品
PyObject * new_CThostFtdcQryProductField(CThostFtdcQryProductField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryProductField", (char*)"y",
p->ProductID);
}
CThostFtdcQryProductField * from_CThostFtdcQryProductField(PyObject * p){
  CThostFtdcQryProductField *t = (CThostFtdcQryProductField *)calloc(1, sizeof(CThostFtdcQryProductField));
  memset(t,0,sizeof(CThostFtdcQryProductField));
  //产品代码
  strcpy(t->ProductID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProductID"),"gbk","Error!")));

  return t;
};

//客户端认证响应
PyObject * new_CThostFtdcRspAuthenticateField(CThostFtdcRspAuthenticateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspAuthenticateField", (char*)"yyy",
p->UserProductInfo, p->BrokerID, p->UserID);
}
CThostFtdcRspAuthenticateField * from_CThostFtdcRspAuthenticateField(PyObject * p){
  CThostFtdcRspAuthenticateField *t = (CThostFtdcRspAuthenticateField *)calloc(1, sizeof(CThostFtdcRspAuthenticateField));
  memset(t,0,sizeof(CThostFtdcRspAuthenticateField));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserProductInfo"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//保证金监管系统经纪公司密钥
PyObject * new_CThostFtdcCFMMCBrokerKeyField(CThostFtdcCFMMCBrokerKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCFMMCBrokerKeyField", (char*)"yyyyciy",
p->CreateTime, p->BrokerID, p->CreateDate, p->ParticipantID, p->KeyKind, p->KeyID, p->CurrentKey);
}
CThostFtdcCFMMCBrokerKeyField * from_CThostFtdcCFMMCBrokerKeyField(PyObject * p){
  CThostFtdcCFMMCBrokerKeyField *t = (CThostFtdcCFMMCBrokerKeyField *)calloc(1, sizeof(CThostFtdcCFMMCBrokerKeyField));
  memset(t,0,sizeof(CThostFtdcCFMMCBrokerKeyField));
  //密钥生成时间
  strcpy(t->CreateTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CreateTime"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //密钥生成日期
  strcpy(t->CreateDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CreateDate"),"gbk","Error!")));
  //经纪公司统一编码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //动态密钥类型
  //enum类型
  //THOST_FTDC_CFMMCKK_MANUAL -> 'M', CFMMC手动更新
  //THOST_FTDC_CFMMCKK_AUTO -> 'A', CFMMC自动更新
  //THOST_FTDC_CFMMCKK_REQUEST -> 'R', 主动请求更新
  t->KeyKind =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "KeyKind"),"gbk","Error!"))[0];
  //密钥编号
  t->KeyID =   PyLong_AsLong(PyObject_GetAttrString(p, "KeyID"));
  //动态密钥
  strcpy(t->CurrentKey, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrentKey"),"gbk","Error!")));

  return t;
};

//报单
PyObject * new_CThostFtdcOrderField(CThostFtdcOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcOrderField", (char*)"cyiyycyyyidyycyyiyyiidcyiyicyyyiyyiyciyyyiycciiiycyyicyyi",
p->OrderSource, p->CancelTime, p->VolumeTotal, p->StatusMsg, p->BusinessUnit, p->OrderSubmitStatus, p->GTDDate, p->ActiveTime, p->InsertTime, p->BrokerOrderSeq, p->StopPrice, p->InstrumentID, p->ActiveUserID, p->OrderStatus, p->BrokerID, p->OrderSysID, p->IsSwapOrder, p->TraderID, p->UserProductInfo, p->InstallID, p->SettlementID, p->LimitPrice, p->TimeCondition, p->OrderRef, p->IsAutoSuspend, p->SuspendTime, p->VolumeTotalOriginal, p->ForceCloseReason, p->CombOffsetFlag, p->TradingDay, p->InsertDate, p->SessionID, p->ClientID, p->ActiveTraderID, p->UserForceClose, p->UserID, p->Direction, p->FrontID, p->ExchangeID, p->RelativeOrderSysID, p->CombHedgeFlag, p->VolumeTraded, p->ExchangeInstID, p->OrderType, p->VolumeCondition, p->MinVolume, p->RequestID, p->SequenceNo, p->OrderLocalID, p->OrderPriceType, p->UpdateTime, p->ClearingPartID, p->NotifySequence, p->ContingentCondition, p->InvestorID, p->ParticipantID, p->ZCETotalTradedVolume);
}
CThostFtdcOrderField * from_CThostFtdcOrderField(PyObject * p){
  CThostFtdcOrderField *t = (CThostFtdcOrderField *)calloc(1, sizeof(CThostFtdcOrderField));
  memset(t,0,sizeof(CThostFtdcOrderField));
  //报单来源
  //enum类型
  //THOST_FTDC_OSRC_Participant -> '0', 来自参与者
  //THOST_FTDC_OSRC_Administrator -> '1', 来自管理员
  t->OrderSource =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSource"),"gbk","Error!"))[0];
  //撤销时间
  strcpy(t->CancelTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CancelTime"),"gbk","Error!")));
  //剩余数量
  t->VolumeTotal =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
  //状态信息
  strcpy(t->StatusMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "StatusMsg"),"gbk","Error!")));
  //业务单元
  strcpy(t->BusinessUnit, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BusinessUnit"),"gbk","Error!")));
  //报单提交状态
  //enum类型
  //THOST_FTDC_OSS_InsertRejected -> '4', 报单已经被拒绝
  //THOST_FTDC_OSS_ModifySubmitted -> '2', 修改已经提交
  //THOST_FTDC_OSS_CancelRejected -> '5', 撤单已经被拒绝
  //THOST_FTDC_OSS_InsertSubmitted -> '0', 已经提交
  //THOST_FTDC_OSS_Accepted -> '3', 已经接受
  //THOST_FTDC_OSS_ModifyRejected -> '6', 改单已经被拒绝
  //THOST_FTDC_OSS_CancelSubmitted -> '1', 撤单已经提交
  t->OrderSubmitStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSubmitStatus"),"gbk","Error!"))[0];
  //GTD日期
  strcpy(t->GTDDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "GTDDate"),"gbk","Error!")));
  //激活时间
  strcpy(t->ActiveTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActiveTime"),"gbk","Error!")));
  //委托时间
  strcpy(t->InsertTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InsertTime"),"gbk","Error!")));
  //经纪公司报单编号
  t->BrokerOrderSeq =   PyLong_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //操作用户代码
  strcpy(t->ActiveUserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActiveUserID"),"gbk","Error!")));
  //报单状态
  //enum类型
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', 部分成交不在队列中
  //THOST_FTDC_OST_Unknown -> 'a', 未知
  //THOST_FTDC_OST_NotTouched -> 'b', 尚未触发
  //THOST_FTDC_OST_Canceled -> '5', 撤单
  //THOST_FTDC_OST_PartTradedQueueing -> '1', 部分成交还在队列中
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', 未成交不在队列中
  //THOST_FTDC_OST_NoTradeQueueing -> '3', 未成交还在队列中
  //THOST_FTDC_OST_AllTraded -> '0', 全部成交
  //THOST_FTDC_OST_Touched -> 'c', 已触发
  t->OrderStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderStatus"),"gbk","Error!"))[0];
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //互换单标志
  t->IsSwapOrder =   PyLong_AsLong(PyObject_GetAttrString(p, "IsSwapOrder"));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserProductInfo"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  t->TimeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TimeCondition"),"gbk","Error!"))[0];
  //报单引用
  strcpy(t->OrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderRef"),"gbk","Error!")));
  //自动挂起标志
  t->IsAutoSuspend =   PyLong_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //挂起时间
  strcpy(t->SuspendTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SuspendTime"),"gbk","Error!")));
  //数量
  t->VolumeTotalOriginal =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ForceCloseReason"),"gbk","Error!"))[0];
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombOffsetFlag"),"gbk","Error!")));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //报单日期
  strcpy(t->InsertDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InsertDate"),"gbk","Error!")));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //最后修改交易所交易员代码
  strcpy(t->ActiveTraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActiveTraderID"),"gbk","Error!")));
  //用户强评标志
  t->UserForceClose =   PyLong_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //相关报单
  strcpy(t->RelativeOrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RelativeOrderSysID"),"gbk","Error!")));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombHedgeFlag"),"gbk","Error!")));
  //今成交数量
  t->VolumeTraded =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));
  //报单类型
  //enum类型
  //THOST_FTDC_ORDT_DeriveFromQuote -> '1', 报价衍生
  //THOST_FTDC_ORDT_Combination -> '3', 组合报单
  //THOST_FTDC_ORDT_Normal -> '0', 正常
  //THOST_FTDC_ORDT_ConditionalOrder -> '4', 条件单
  //THOST_FTDC_ORDT_Swap -> '5', 互换单
  //THOST_FTDC_ORDT_DeriveFromCombination -> '2', 组合衍生
  t->OrderType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderType"),"gbk","Error!"))[0];
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VolumeCondition"),"gbk","Error!"))[0];
  //最小成交量
  t->MinVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //序号
  t->SequenceNo =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  t->OrderPriceType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderPriceType"),"gbk","Error!"))[0];
  //最后修改时间
  strcpy(t->UpdateTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UpdateTime"),"gbk","Error!")));
  //结算会员编号
  strcpy(t->ClearingPartID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClearingPartID"),"gbk","Error!")));
  //报单提示序号
  t->NotifySequence =   PyLong_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_Touch -> '2', 止损
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  t->ContingentCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ContingentCondition"),"gbk","Error!"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //郑商所成交数量
  t->ZCETotalTradedVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "ZCETotalTradedVolume"));

  return t;
};

//错误报单
PyObject * new_CThostFtdcErrOrderField(CThostFtdcErrOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcErrOrderField", (char*)"iyycyiydyyciiyicdccyiyicy",
p->UserForceClose, p->UserID, p->ErrorMsg, p->Direction, p->GTDDate, p->ErrorID, p->CombHedgeFlag, p->StopPrice, p->BusinessUnit, p->InstrumentID, p->VolumeCondition, p->MinVolume, p->RequestID, p->BrokerID, p->IsSwapOrder, p->OrderPriceType, p->LimitPrice, p->ContingentCondition, p->TimeCondition, p->OrderRef, p->IsAutoSuspend, p->InvestorID, p->VolumeTotalOriginal, p->ForceCloseReason, p->CombOffsetFlag);
}
CThostFtdcErrOrderField * from_CThostFtdcErrOrderField(PyObject * p){
  CThostFtdcErrOrderField *t = (CThostFtdcErrOrderField *)calloc(1, sizeof(CThostFtdcErrOrderField));
  memset(t,0,sizeof(CThostFtdcErrOrderField));
  //用户强评标志
  t->UserForceClose =   PyLong_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //GTD日期
  strcpy(t->GTDDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "GTDDate"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombHedgeFlag"),"gbk","Error!")));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //业务单元
  strcpy(t->BusinessUnit, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BusinessUnit"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VolumeCondition"),"gbk","Error!"))[0];
  //最小成交量
  t->MinVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //互换单标志
  t->IsSwapOrder =   PyLong_AsLong(PyObject_GetAttrString(p, "IsSwapOrder"));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  t->OrderPriceType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderPriceType"),"gbk","Error!"))[0];
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_Touch -> '2', 止损
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  t->ContingentCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ContingentCondition"),"gbk","Error!"))[0];
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  t->TimeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TimeCondition"),"gbk","Error!"))[0];
  //报单引用
  strcpy(t->OrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderRef"),"gbk","Error!")));
  //自动挂起标志
  t->IsAutoSuspend =   PyLong_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //数量
  t->VolumeTotalOriginal =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ForceCloseReason"),"gbk","Error!"))[0];
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombOffsetFlag"),"gbk","Error!")));

  return t;
};

//查询投资者持仓明细
PyObject * new_CThostFtdcQryInvestorPositionDetailField(CThostFtdcQryInvestorPositionDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorPositionDetailField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->InstrumentID);
}
CThostFtdcQryInvestorPositionDetailField * from_CThostFtdcQryInvestorPositionDetailField(PyObject * p){
  CThostFtdcQryInvestorPositionDetailField *t = (CThostFtdcQryInvestorPositionDetailField *)calloc(1, sizeof(CThostFtdcQryInvestorPositionDetailField));
  memset(t,0,sizeof(CThostFtdcQryInvestorPositionDetailField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));

  return t;
};

//查询管理用户
PyObject * new_CThostFtdcQrySuperUserField(CThostFtdcQrySuperUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySuperUserField", (char*)"y",
p->UserID);
}
CThostFtdcQrySuperUserField * from_CThostFtdcQrySuperUserField(PyObject * p){
  CThostFtdcQrySuperUserField *t = (CThostFtdcQrySuperUserField *)calloc(1, sizeof(CThostFtdcQrySuperUserField));
  memset(t,0,sizeof(CThostFtdcQrySuperUserField));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//查询错误报单操作
PyObject * new_CThostFtdcErrorConditionalOrderField(CThostFtdcErrorConditionalOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcErrorConditionalOrderField", (char*)"cyiyycyyyidyyycyyiyyiidcyiyicyyyiyyiyciyyyiycciiiycyyiicyyi",
p->OrderSource, p->CancelTime, p->VolumeTotal, p->StatusMsg, p->BusinessUnit, p->OrderSubmitStatus, p->GTDDate, p->ActiveTime, p->InsertTime, p->BrokerOrderSeq, p->StopPrice, p->ErrorMsg, p->InstrumentID, p->ActiveUserID, p->OrderStatus, p->BrokerID, p->OrderSysID, p->IsSwapOrder, p->TraderID, p->UserProductInfo, p->InstallID, p->SettlementID, p->LimitPrice, p->TimeCondition, p->OrderRef, p->IsAutoSuspend, p->SuspendTime, p->VolumeTotalOriginal, p->ForceCloseReason, p->CombOffsetFlag, p->TradingDay, p->InsertDate, p->SessionID, p->ClientID, p->ActiveTraderID, p->UserForceClose, p->UserID, p->Direction, p->FrontID, p->ExchangeID, p->RelativeOrderSysID, p->CombHedgeFlag, p->VolumeTraded, p->ExchangeInstID, p->OrderType, p->VolumeCondition, p->MinVolume, p->RequestID, p->SequenceNo, p->OrderLocalID, p->OrderPriceType, p->UpdateTime, p->ClearingPartID, p->ErrorID, p->NotifySequence, p->ContingentCondition, p->InvestorID, p->ParticipantID, p->ZCETotalTradedVolume);
}
CThostFtdcErrorConditionalOrderField * from_CThostFtdcErrorConditionalOrderField(PyObject * p){
  CThostFtdcErrorConditionalOrderField *t = (CThostFtdcErrorConditionalOrderField *)calloc(1, sizeof(CThostFtdcErrorConditionalOrderField));
  memset(t,0,sizeof(CThostFtdcErrorConditionalOrderField));
  //报单来源
  //enum类型
  //THOST_FTDC_OSRC_Participant -> '0', 来自参与者
  //THOST_FTDC_OSRC_Administrator -> '1', 来自管理员
  t->OrderSource =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSource"),"gbk","Error!"))[0];
  //撤销时间
  strcpy(t->CancelTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CancelTime"),"gbk","Error!")));
  //剩余数量
  t->VolumeTotal =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
  //状态信息
  strcpy(t->StatusMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "StatusMsg"),"gbk","Error!")));
  //业务单元
  strcpy(t->BusinessUnit, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BusinessUnit"),"gbk","Error!")));
  //报单提交状态
  //enum类型
  //THOST_FTDC_OSS_InsertRejected -> '4', 报单已经被拒绝
  //THOST_FTDC_OSS_ModifySubmitted -> '2', 修改已经提交
  //THOST_FTDC_OSS_CancelRejected -> '5', 撤单已经被拒绝
  //THOST_FTDC_OSS_InsertSubmitted -> '0', 已经提交
  //THOST_FTDC_OSS_Accepted -> '3', 已经接受
  //THOST_FTDC_OSS_ModifyRejected -> '6', 改单已经被拒绝
  //THOST_FTDC_OSS_CancelSubmitted -> '1', 撤单已经提交
  t->OrderSubmitStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSubmitStatus"),"gbk","Error!"))[0];
  //GTD日期
  strcpy(t->GTDDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "GTDDate"),"gbk","Error!")));
  //激活时间
  strcpy(t->ActiveTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActiveTime"),"gbk","Error!")));
  //委托时间
  strcpy(t->InsertTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InsertTime"),"gbk","Error!")));
  //经纪公司报单编号
  t->BrokerOrderSeq =   PyLong_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //操作用户代码
  strcpy(t->ActiveUserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActiveUserID"),"gbk","Error!")));
  //报单状态
  //enum类型
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', 部分成交不在队列中
  //THOST_FTDC_OST_Unknown -> 'a', 未知
  //THOST_FTDC_OST_NotTouched -> 'b', 尚未触发
  //THOST_FTDC_OST_Canceled -> '5', 撤单
  //THOST_FTDC_OST_PartTradedQueueing -> '1', 部分成交还在队列中
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', 未成交不在队列中
  //THOST_FTDC_OST_NoTradeQueueing -> '3', 未成交还在队列中
  //THOST_FTDC_OST_AllTraded -> '0', 全部成交
  //THOST_FTDC_OST_Touched -> 'c', 已触发
  t->OrderStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderStatus"),"gbk","Error!"))[0];
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //互换单标志
  t->IsSwapOrder =   PyLong_AsLong(PyObject_GetAttrString(p, "IsSwapOrder"));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserProductInfo"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  t->TimeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TimeCondition"),"gbk","Error!"))[0];
  //报单引用
  strcpy(t->OrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderRef"),"gbk","Error!")));
  //自动挂起标志
  t->IsAutoSuspend =   PyLong_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //挂起时间
  strcpy(t->SuspendTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SuspendTime"),"gbk","Error!")));
  //数量
  t->VolumeTotalOriginal =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ForceCloseReason"),"gbk","Error!"))[0];
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombOffsetFlag"),"gbk","Error!")));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //报单日期
  strcpy(t->InsertDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InsertDate"),"gbk","Error!")));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //最后修改交易所交易员代码
  strcpy(t->ActiveTraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActiveTraderID"),"gbk","Error!")));
  //用户强评标志
  t->UserForceClose =   PyLong_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //相关报单
  strcpy(t->RelativeOrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RelativeOrderSysID"),"gbk","Error!")));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombHedgeFlag"),"gbk","Error!")));
  //今成交数量
  t->VolumeTraded =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));
  //报单类型
  //enum类型
  //THOST_FTDC_ORDT_DeriveFromQuote -> '1', 报价衍生
  //THOST_FTDC_ORDT_Combination -> '3', 组合报单
  //THOST_FTDC_ORDT_Normal -> '0', 正常
  //THOST_FTDC_ORDT_ConditionalOrder -> '4', 条件单
  //THOST_FTDC_ORDT_Swap -> '5', 互换单
  //THOST_FTDC_ORDT_DeriveFromCombination -> '2', 组合衍生
  t->OrderType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderType"),"gbk","Error!"))[0];
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VolumeCondition"),"gbk","Error!"))[0];
  //最小成交量
  t->MinVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //序号
  t->SequenceNo =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  t->OrderPriceType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderPriceType"),"gbk","Error!"))[0];
  //最后修改时间
  strcpy(t->UpdateTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UpdateTime"),"gbk","Error!")));
  //结算会员编号
  strcpy(t->ClearingPartID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClearingPartID"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //报单提示序号
  t->NotifySequence =   PyLong_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_Touch -> '2', 止损
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  t->ContingentCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ContingentCondition"),"gbk","Error!"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //郑商所成交数量
  t->ZCETotalTradedVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "ZCETotalTradedVolume"));

  return t;
};

//前置状态
PyObject * new_CThostFtdcFrontStatusField(CThostFtdcFrontStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcFrontStatusField", (char*)"iyyi",
p->FrontID, p->LastReportDate, p->LastReportTime, p->IsActive);
}
CThostFtdcFrontStatusField * from_CThostFtdcFrontStatusField(PyObject * p){
  CThostFtdcFrontStatusField *t = (CThostFtdcFrontStatusField *)calloc(1, sizeof(CThostFtdcFrontStatusField));
  memset(t,0,sizeof(CThostFtdcFrontStatusField));
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //上次报告日期
  strcpy(t->LastReportDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastReportDate"),"gbk","Error!")));
  //上次报告时间
  strcpy(t->LastReportTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastReportTime"),"gbk","Error!")));
  //是否活跃
  t->IsActive =   PyLong_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//货币质押同步
PyObject * new_CThostFtdcSyncFundMortgageField(CThostFtdcSyncFundMortgageField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncFundMortgageField", (char*)"yyyyyd",
p->ToCurrencyID, p->BrokerID, p->MortgageSeqNo, p->FromCurrencyID, p->InvestorID, p->MortgageAmount);
}
CThostFtdcSyncFundMortgageField * from_CThostFtdcSyncFundMortgageField(PyObject * p){
  CThostFtdcSyncFundMortgageField *t = (CThostFtdcSyncFundMortgageField *)calloc(1, sizeof(CThostFtdcSyncFundMortgageField));
  memset(t,0,sizeof(CThostFtdcSyncFundMortgageField));
  //目标币种
  strcpy(t->ToCurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ToCurrencyID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //货币质押流水号
  strcpy(t->MortgageSeqNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MortgageSeqNo"),"gbk","Error!")));
  //源币种
  strcpy(t->FromCurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FromCurrencyID"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //质押金额
  t->MortgageAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MortgageAmount"));

  return t;
};

//仓单折抵信息
PyObject * new_CThostFtdcEWarrantOffsetField(CThostFtdcEWarrantOffsetField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcEWarrantOffsetField", (char*)"yyiyyccy",
p->TradingDay, p->BrokerID, p->Volume, p->InvestorID, p->InstrumentID, p->Direction, p->HedgeFlag, p->ExchangeID);
}
CThostFtdcEWarrantOffsetField * from_CThostFtdcEWarrantOffsetField(PyObject * p){
  CThostFtdcEWarrantOffsetField *t = (CThostFtdcEWarrantOffsetField *)calloc(1, sizeof(CThostFtdcEWarrantOffsetField));
  memset(t,0,sizeof(CThostFtdcEWarrantOffsetField));
  //交易日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //数量
  t->Volume =   PyLong_AsLong(PyObject_GetAttrString(p, "Volume"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//查询前置状态
PyObject * new_CThostFtdcQryFrontStatusField(CThostFtdcQryFrontStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryFrontStatusField", (char*)"i",
p->FrontID);
}
CThostFtdcQryFrontStatusField * from_CThostFtdcQryFrontStatusField(PyObject * p){
  CThostFtdcQryFrontStatusField *t = (CThostFtdcQryFrontStatusField *)calloc(1, sizeof(CThostFtdcQryFrontStatusField));
  memset(t,0,sizeof(CThostFtdcQryFrontStatusField));
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));

  return t;
};

//期商签到签退
PyObject * new_CThostFtdcFutureSignIOField(CThostFtdcFutureSignIOField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcFutureSignIOField", (char*)"yyyyiyiiyyyyiyyyciyyy",
p->TradingDay, p->BrokerID, p->BankID, p->DeviceID, p->PlateSerial, p->UserID, p->InstallID, p->RequestID, p->CurrencyID, p->TradeDate, p->Digest, p->BankSerial, p->TID, p->TradeTime, p->TradeCode, p->BankBranchID, p->LastFragment, p->SessionID, p->BrokerIDByBank, p->OperNo, p->BrokerBranchID);
}
CThostFtdcFutureSignIOField * from_CThostFtdcFutureSignIOField(PyObject * p){
  CThostFtdcFutureSignIOField *t = (CThostFtdcFutureSignIOField *)calloc(1, sizeof(CThostFtdcFutureSignIOField));
  memset(t,0,sizeof(CThostFtdcFutureSignIOField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));

  return t;
};

//查询账户信息请求
PyObject * new_CThostFtdcReqQueryAccountField(CThostFtdcReqQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqQueryAccountField", (char*)"yyyycyyyyicyyyyccyiyyyiyyiiiccycycyy",
p->TradingDay, p->TradeDate, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->UserID, p->OperNo, p->BankSerial, p->Digest, p->SessionID, p->BankPwdFlag, p->CurrencyID, p->BankBranchID, p->TradeCode, p->Password, p->BankAccType, p->SecuPwdFlag, p->BrokerBranchID, p->RequestID, p->BrokerID, p->BankID, p->BankSecuAcc, p->PlateSerial, p->AccountID, p->CustomerName, p->InstallID, p->TID, p->FutureSerial, p->BankSecuAccType, p->CustType, p->BankAccount, p->LastFragment, p->DeviceID, p->VerifyCertNoFlag, p->BrokerIDByBank, p->TradeTime);
}
CThostFtdcReqQueryAccountField * from_CThostFtdcReqQueryAccountField(PyObject * p){
  CThostFtdcReqQueryAccountField *t = (CThostFtdcReqQueryAccountField *)calloc(1, sizeof(CThostFtdcReqQueryAccountField));
  memset(t,0,sizeof(CThostFtdcReqQueryAccountField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAcc"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //期货公司流水号
  t->FutureSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankSecuAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAccType"),"gbk","Error!"))[0];
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));

  return t;
};

//查询投资者结算结果
PyObject * new_CThostFtdcQrySettlementInfoField(CThostFtdcQrySettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySettlementInfoField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->TradingDay);
}
CThostFtdcQrySettlementInfoField * from_CThostFtdcQrySettlementInfoField(PyObject * p){
  CThostFtdcQrySettlementInfoField *t = (CThostFtdcQrySettlementInfoField *)calloc(1, sizeof(CThostFtdcQrySettlementInfoField));
  memset(t,0,sizeof(CThostFtdcQrySettlementInfoField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));

  return t;
};

//返回结果
PyObject * new_CThostFtdcReturnResultField(CThostFtdcReturnResultField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReturnResultField", (char*)"yy",
p->DescrInfoForReturnCode, p->ReturnCode);
}
CThostFtdcReturnResultField * from_CThostFtdcReturnResultField(PyObject * p){
  CThostFtdcReturnResultField *t = (CThostFtdcReturnResultField *)calloc(1, sizeof(CThostFtdcReturnResultField));
  memset(t,0,sizeof(CThostFtdcReturnResultField));
  //返回码描述
  strcpy(t->DescrInfoForReturnCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DescrInfoForReturnCode"),"gbk","Error!")));
  //返回代码
  strcpy(t->ReturnCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ReturnCode"),"gbk","Error!")));

  return t;
};

//会员编码和经纪公司编码对照表
PyObject * new_CThostFtdcPartBrokerField(CThostFtdcPartBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcPartBrokerField", (char*)"yiyy",
p->BrokerID, p->IsActive, p->ParticipantID, p->ExchangeID);
}
CThostFtdcPartBrokerField * from_CThostFtdcPartBrokerField(PyObject * p){
  CThostFtdcPartBrokerField *t = (CThostFtdcPartBrokerField *)calloc(1, sizeof(CThostFtdcPartBrokerField));
  memset(t,0,sizeof(CThostFtdcPartBrokerField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //是否活跃
  t->IsActive =   PyLong_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//响应信息
PyObject * new_CThostFtdcRspInfoField(CThostFtdcRspInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspInfoField", (char*)"yi",
p->ErrorMsg, p->ErrorID);
}
CThostFtdcRspInfoField * from_CThostFtdcRspInfoField(PyObject * p){
  CThostFtdcRspInfoField *t = (CThostFtdcRspInfoField *)calloc(1, sizeof(CThostFtdcRspInfoField));
  memset(t,0,sizeof(CThostFtdcRspInfoField));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));

  return t;
};

//查询经纪公司用户事件
PyObject * new_CThostFtdcQryBrokerUserEventField(CThostFtdcQryBrokerUserEventField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerUserEventField", (char*)"ycy",
p->BrokerID, p->UserEventType, p->UserID);
}
CThostFtdcQryBrokerUserEventField * from_CThostFtdcQryBrokerUserEventField(PyObject * p){
  CThostFtdcQryBrokerUserEventField *t = (CThostFtdcQryBrokerUserEventField *)calloc(1, sizeof(CThostFtdcQryBrokerUserEventField));
  memset(t,0,sizeof(CThostFtdcQryBrokerUserEventField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //用户事件类型
  //enum类型
  //THOST_FTDC_UET_Trading -> '3', 交易成功
  //THOST_FTDC_UET_TradingError -> '4', 交易失败
  //THOST_FTDC_UET_Login -> '1', 登录
  //THOST_FTDC_UET_Other -> '9', 其他
  //THOST_FTDC_UET_UpdatePassword -> '5', 修改密码
  //THOST_FTDC_UET_Logout -> '2', 登出
  //THOST_FTDC_UET_Authenticate -> '6', 客户端认证
  t->UserEventType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserEventType"),"gbk","Error!"))[0];
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//请求查询投资者保证金率模板
PyObject * new_CThostFtdcQryMarginModelField(CThostFtdcQryMarginModelField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryMarginModelField", (char*)"yy",
p->BrokerID, p->MarginModelID);
}
CThostFtdcQryMarginModelField * from_CThostFtdcQryMarginModelField(PyObject * p){
  CThostFtdcQryMarginModelField *t = (CThostFtdcQryMarginModelField *)calloc(1, sizeof(CThostFtdcQryMarginModelField));
  memset(t,0,sizeof(CThostFtdcQryMarginModelField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //保证金率模板代码
  strcpy(t->MarginModelID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MarginModelID"),"gbk","Error!")));

  return t;
};

//查询投资者组
PyObject * new_CThostFtdcQryInvestorGroupField(CThostFtdcQryInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorGroupField", (char*)"y",
p->BrokerID);
}
CThostFtdcQryInvestorGroupField * from_CThostFtdcQryInvestorGroupField(PyObject * p){
  CThostFtdcQryInvestorGroupField *t = (CThostFtdcQryInvestorGroupField *)calloc(1, sizeof(CThostFtdcQryInvestorGroupField));
  memset(t,0,sizeof(CThostFtdcQryInvestorGroupField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//产品
PyObject * new_CThostFtdcProductField(CThostFtdcProductField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcProductField", (char*)"diciyycyiiciccy",
p->PriceTick, p->VolumeMultiple, p->PositionType, p->MaxLimitOrderVolume, p->ProductName, p->TradeCurrencyID, p->CloseDealType, p->ExchangeID, p->MaxMarketOrderVolume, p->MinMarketOrderVolume, p->MortgageFundUseRange, p->MinLimitOrderVolume, p->ProductClass, p->PositionDateType, p->ProductID);
}
CThostFtdcProductField * from_CThostFtdcProductField(PyObject * p){
  CThostFtdcProductField *t = (CThostFtdcProductField *)calloc(1, sizeof(CThostFtdcProductField));
  memset(t,0,sizeof(CThostFtdcProductField));
  //最小变动价位
  t->PriceTick =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PriceTick"));
  //合约数量乘数
  t->VolumeMultiple =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeMultiple"));
  //持仓类型
  //enum类型
  //THOST_FTDC_PT_Net -> '1', 净持仓
  //THOST_FTDC_PT_Gross -> '2', 综合持仓
  t->PositionType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PositionType"),"gbk","Error!"))[0];
  //限价单最大下单量
  t->MaxLimitOrderVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MaxLimitOrderVolume"));
  //产品名称
  strcpy(t->ProductName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProductName"),"gbk","Error!")));
  //交易币种类型
  strcpy(t->TradeCurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCurrencyID"),"gbk","Error!")));
  //平仓处理类型
  //enum类型
  //THOST_FTDC_CDT_Normal -> '0', 正常
  //THOST_FTDC_CDT_SpecFirst -> '1', 投机平仓优先
  t->CloseDealType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CloseDealType"),"gbk","Error!"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //市价单最大下单量
  t->MaxMarketOrderVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MaxMarketOrderVolume"));
  //市价单最小下单量
  t->MinMarketOrderVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MinMarketOrderVolume"));
  //质押资金可用范围
  //enum类型
  //THOST_FTDC_MFUR_Margin -> '1', 用于保证金
  //THOST_FTDC_MFUR_None -> '0', 不能使用
  //THOST_FTDC_MFUR_All -> '2', 用于手续费、盈亏、保证金
  t->MortgageFundUseRange =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MortgageFundUseRange"),"gbk","Error!"))[0];
  //限价单最小下单量
  t->MinLimitOrderVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MinLimitOrderVolume"));
  //产品类型
  //enum类型
  //THOST_FTDC_PC_Spot -> '4', 即期
  //THOST_FTDC_PC_Futures -> '1', 期货
  //THOST_FTDC_PC_Options -> '2', 期权
  //THOST_FTDC_PC_Combination -> '3', 组合
  //THOST_FTDC_PC_EFP -> '5', 期转现
  t->ProductClass =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProductClass"),"gbk","Error!"))[0];
  //持仓日期类型
  //enum类型
  //THOST_FTDC_PDT_NoUseHistory -> '2', 不使用历史持仓
  //THOST_FTDC_PDT_UseHistory -> '1', 使用历史持仓
  t->PositionDateType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PositionDateType"),"gbk","Error!"))[0];
  //产品代码
  strcpy(t->ProductID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProductID"),"gbk","Error!")));

  return t;
};

//查询报单
PyObject * new_CThostFtdcQryHisOrderField(CThostFtdcQryHisOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryHisOrderField", (char*)"yyyyyyyiy",
p->TradingDay, p->BrokerID, p->OrderSysID, p->InsertTimeStart, p->InsertTimeEnd, p->InvestorID, p->InstrumentID, p->SettlementID, p->ExchangeID);
}
CThostFtdcQryHisOrderField * from_CThostFtdcQryHisOrderField(PyObject * p){
  CThostFtdcQryHisOrderField *t = (CThostFtdcQryHisOrderField *)calloc(1, sizeof(CThostFtdcQryHisOrderField));
  memset(t,0,sizeof(CThostFtdcQryHisOrderField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //开始时间
  strcpy(t->InsertTimeStart, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InsertTimeStart"),"gbk","Error!")));
  //结束时间
  strcpy(t->InsertTimeEnd, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InsertTimeEnd"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//灾备中心交易权限
PyObject * new_CThostFtdcUserRightsAssignField(CThostFtdcUserRightsAssignField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserRightsAssignField", (char*)"yiy",
p->BrokerID, p->DRIdentityID, p->UserID);
}
CThostFtdcUserRightsAssignField * from_CThostFtdcUserRightsAssignField(PyObject * p){
  CThostFtdcUserRightsAssignField *t = (CThostFtdcUserRightsAssignField *)calloc(1, sizeof(CThostFtdcUserRightsAssignField));
  memset(t,0,sizeof(CThostFtdcUserRightsAssignField));
  //应用单元代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //交易中心代码
  t->DRIdentityID =   PyLong_AsLong(PyObject_GetAttrString(p, "DRIdentityID"));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//查询监控中心用户令牌
PyObject * new_CThostFtdcQueryCFMMCTradingAccountTokenField(CThostFtdcQueryCFMMCTradingAccountTokenField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQueryCFMMCTradingAccountTokenField", (char*)"yy",
p->InvestorID, p->BrokerID);
}
CThostFtdcQueryCFMMCTradingAccountTokenField * from_CThostFtdcQueryCFMMCTradingAccountTokenField(PyObject * p){
  CThostFtdcQueryCFMMCTradingAccountTokenField *t = (CThostFtdcQueryCFMMCTradingAccountTokenField *)calloc(1, sizeof(CThostFtdcQueryCFMMCTradingAccountTokenField));
  memset(t,0,sizeof(CThostFtdcQueryCFMMCTradingAccountTokenField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//用户登录应答
PyObject * new_CThostFtdcRspUserLoginField(CThostFtdcRspUserLoginField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspUserLoginField", (char*)"yyyyyyyyyyyii",
p->TradingDay, p->BrokerID, p->INETime, p->SystemName, p->FFEXTime, p->UserID, p->LoginTime, p->CZCETime, p->MaxOrderRef, p->DCETime, p->SHFETime, p->FrontID, p->SessionID);
}
CThostFtdcRspUserLoginField * from_CThostFtdcRspUserLoginField(PyObject * p){
  CThostFtdcRspUserLoginField *t = (CThostFtdcRspUserLoginField *)calloc(1, sizeof(CThostFtdcRspUserLoginField));
  memset(t,0,sizeof(CThostFtdcRspUserLoginField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //能源中心时间
  strcpy(t->INETime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "INETime"),"gbk","Error!")));
  //交易系统名称
  strcpy(t->SystemName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SystemName"),"gbk","Error!")));
  //中金所时间
  strcpy(t->FFEXTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FFEXTime"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //登录成功时间
  strcpy(t->LoginTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LoginTime"),"gbk","Error!")));
  //郑商所时间
  strcpy(t->CZCETime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CZCETime"),"gbk","Error!")));
  //最大报单引用
  strcpy(t->MaxOrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MaxOrderRef"),"gbk","Error!")));
  //大商所时间
  strcpy(t->DCETime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DCETime"),"gbk","Error!")));
  //上期所时间
  strcpy(t->SHFETime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SHFETime"),"gbk","Error!")));
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));

  return t;
};

//经纪公司用户
PyObject * new_CThostFtdcBrokerUserField(CThostFtdcBrokerUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserField", (char*)"yyicyi",
p->BrokerID, p->UserName, p->IsActive, p->UserType, p->UserID, p->IsUsingOTP);
}
CThostFtdcBrokerUserField * from_CThostFtdcBrokerUserField(PyObject * p){
  CThostFtdcBrokerUserField *t = (CThostFtdcBrokerUserField *)calloc(1, sizeof(CThostFtdcBrokerUserField));
  memset(t,0,sizeof(CThostFtdcBrokerUserField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //用户名称
  strcpy(t->UserName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserName"),"gbk","Error!")));
  //是否活跃
  t->IsActive =   PyLong_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //用户类型
  //enum类型
  //THOST_FTDC_UT_Operator -> '1', 操作员
  //THOST_FTDC_UT_SuperUser -> '2', 管理员
  //THOST_FTDC_UT_Investor -> '0', 投资者
  t->UserType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserType"),"gbk","Error!"))[0];
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //是否使用令牌
  t->IsUsingOTP =   PyLong_AsLong(PyObject_GetAttrString(p, "IsUsingOTP"));

  return t;
};

//用户登出请求
PyObject * new_CThostFtdcUserLogoutField(CThostFtdcUserLogoutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserLogoutField", (char*)"yy",
p->BrokerID, p->UserID);
}
CThostFtdcUserLogoutField * from_CThostFtdcUserLogoutField(PyObject * p){
  CThostFtdcUserLogoutField *t = (CThostFtdcUserLogoutField *)calloc(1, sizeof(CThostFtdcUserLogoutField));
  memset(t,0,sizeof(CThostFtdcUserLogoutField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//行情最新成交属性
PyObject * new_CThostFtdcMarketDataLastMatchField(CThostFtdcMarketDataLastMatchField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataLastMatchField", (char*)"ddid",
p->OpenInterest, p->LastPrice, p->Volume, p->Turnover);
}
CThostFtdcMarketDataLastMatchField * from_CThostFtdcMarketDataLastMatchField(PyObject * p){
  CThostFtdcMarketDataLastMatchField *t = (CThostFtdcMarketDataLastMatchField *)calloc(1, sizeof(CThostFtdcMarketDataLastMatchField));
  memset(t,0,sizeof(CThostFtdcMarketDataLastMatchField));
  //持仓量
  t->OpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));
  //最新价
  t->LastPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
  //数量
  t->Volume =   PyLong_AsLong(PyObject_GetAttrString(p, "Volume"));
  //成交金额
  t->Turnover =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));

  return t;
};

//查询仓单折抵信息
PyObject * new_CThostFtdcQryEWarrantOffsetField(CThostFtdcQryEWarrantOffsetField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryEWarrantOffsetField", (char*)"yyyy",
p->InvestorID, p->BrokerID, p->InstrumentID, p->ExchangeID);
}
CThostFtdcQryEWarrantOffsetField * from_CThostFtdcQryEWarrantOffsetField(PyObject * p){
  CThostFtdcQryEWarrantOffsetField *t = (CThostFtdcQryEWarrantOffsetField *)calloc(1, sizeof(CThostFtdcQryEWarrantOffsetField));
  memset(t,0,sizeof(CThostFtdcQryEWarrantOffsetField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//输入预埋单操作
PyObject * new_CThostFtdcParkedOrderActionField(CThostFtdcParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcParkedOrderActionField", (char*)"iyiyycyidiyyciiyyyc",
p->RequestID, p->BrokerID, p->SessionID, p->OrderSysID, p->OrderRef, p->UserType, p->UserID, p->FrontID, p->LimitPrice, p->ErrorID, p->ErrorMsg, p->ParkedOrderActionID, p->ActionFlag, p->OrderActionRef, p->VolumeChange, p->InvestorID, p->InstrumentID, p->ExchangeID, p->Status);
}
CThostFtdcParkedOrderActionField * from_CThostFtdcParkedOrderActionField(PyObject * p){
  CThostFtdcParkedOrderActionField *t = (CThostFtdcParkedOrderActionField *)calloc(1, sizeof(CThostFtdcParkedOrderActionField));
  memset(t,0,sizeof(CThostFtdcParkedOrderActionField));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //报单引用
  strcpy(t->OrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderRef"),"gbk","Error!")));
  //用户类型
  //enum类型
  //THOST_FTDC_UT_Operator -> '1', 操作员
  //THOST_FTDC_UT_SuperUser -> '2', 管理员
  //THOST_FTDC_UT_Investor -> '0', 投资者
  t->UserType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserType"),"gbk","Error!"))[0];
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //预埋撤单单编号
  strcpy(t->ParkedOrderActionID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParkedOrderActionID"),"gbk","Error!")));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionFlag"),"gbk","Error!"))[0];
  //报单操作引用
  t->OrderActionRef =   PyLong_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //数量变化
  t->VolumeChange =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //预埋撤单状态
  //enum类型
  //THOST_FTDC_PAOS_Deleted -> '3', 已删除
  //THOST_FTDC_PAOS_Send -> '2', 已发送
  //THOST_FTDC_PAOS_NotSend -> '1', 未发送
  t->Status =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Status"),"gbk","Error!"))[0];

  return t;
};

//查询经纪公司用户权限
PyObject * new_CThostFtdcQryBrokerUserFunctionField(CThostFtdcQryBrokerUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerUserFunctionField", (char*)"yy",
p->BrokerID, p->UserID);
}
CThostFtdcQryBrokerUserFunctionField * from_CThostFtdcQryBrokerUserFunctionField(PyObject * p){
  CThostFtdcQryBrokerUserFunctionField *t = (CThostFtdcQryBrokerUserFunctionField *)calloc(1, sizeof(CThostFtdcQryBrokerUserFunctionField));
  memset(t,0,sizeof(CThostFtdcQryBrokerUserFunctionField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//银期销户信息
PyObject * new_CThostFtdcCancelAccountField(CThostFtdcCancelAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCancelAccountField", (char*)"yyyycyiycyciyyicyyyyyyycyyiyyyyyccyyycyiycyycc",
p->ZipCode, p->TradeDate, p->Address, p->Telephone, p->MoneyAccountStatus, p->ErrorMsg, p->ErrorID, p->BankBranchID, p->SecuPwdFlag, p->BrokerID, p->BankAccType, p->PlateSerial, p->AccountID, p->DeviceID, p->InstallID, p->BankSecuAccType, p->CurrencyID, p->Digest, p->BankAccount, p->TradingDay, p->BrokerBranchID, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->UserID, p->BankSerial, p->SessionID, p->Fax, p->TradeCode, p->Password, p->CountryCode, p->OperNo, p->BankPwdFlag, p->Gender, p->BankID, p->BankSecuAcc, p->EMail, p->CustType, p->BrokerIDByBank, p->TID, p->MobilePhone, p->CashExchangeCode, p->CustomerName, p->TradeTime, p->LastFragment, p->VerifyCertNoFlag);
}
CThostFtdcCancelAccountField * from_CThostFtdcCancelAccountField(PyObject * p){
  CThostFtdcCancelAccountField *t = (CThostFtdcCancelAccountField *)calloc(1, sizeof(CThostFtdcCancelAccountField));
  memset(t,0,sizeof(CThostFtdcCancelAccountField));
  //邮编
  strcpy(t->ZipCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ZipCode"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //地址
  strcpy(t->Address, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Address"),"gbk","Error!")));
  //电话号码
  strcpy(t->Telephone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Telephone"),"gbk","Error!")));
  //资金账户状态
  //enum类型
  //THOST_FTDC_MAS_Cancel -> '1', 销户
  //THOST_FTDC_MAS_Normal -> '0', 正常
  t->MoneyAccountStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MoneyAccountStatus"),"gbk","Error!"))[0];
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankSecuAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAccType"),"gbk","Error!"))[0];
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //传真
  strcpy(t->Fax, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Fax"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //国家代码
  strcpy(t->CountryCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CountryCode"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //性别
  //enum类型
  //THOST_FTDC_GD_Male -> '1', 男
  //THOST_FTDC_GD_Female -> '2', 女
  //THOST_FTDC_GD_Unknown -> '0', 未知状态
  t->Gender =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Gender"),"gbk","Error!"))[0];
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAcc"),"gbk","Error!")));
  //电子邮件
  strcpy(t->EMail, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "EMail"),"gbk","Error!")));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //手机
  strcpy(t->MobilePhone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MobilePhone"),"gbk","Error!")));
  //汇钞标志
  //enum类型
  //THOST_FTDC_CEC_Exchange -> '1', 汇
  //THOST_FTDC_CEC_Cash -> '2', 钞
  t->CashExchangeCode =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CashExchangeCode"),"gbk","Error!"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];

  return t;
};

//登录信息
PyObject * new_CThostFtdcLoginInfoField(CThostFtdcLoginInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLoginInfoField", (char*)"iyyyyyyyyyyiyyyyyyyy",
p->FrontID, p->BrokerID, p->INETime, p->CZCETime, p->FFEXTime, p->ProtocolInfo, p->UserProductInfo, p->UserID, p->LoginTime, p->SystemName, p->OneTimePassword, p->SessionID, p->DCETime, p->SHFETime, p->IPAddress, p->InterfaceProductInfo, p->Password, p->LoginDate, p->MacAddress, p->MaxOrderRef);
}
CThostFtdcLoginInfoField * from_CThostFtdcLoginInfoField(PyObject * p){
  CThostFtdcLoginInfoField *t = (CThostFtdcLoginInfoField *)calloc(1, sizeof(CThostFtdcLoginInfoField));
  memset(t,0,sizeof(CThostFtdcLoginInfoField));
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //能源中心时间
  strcpy(t->INETime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "INETime"),"gbk","Error!")));
  //郑商所时间
  strcpy(t->CZCETime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CZCETime"),"gbk","Error!")));
  //中金所时间
  strcpy(t->FFEXTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FFEXTime"),"gbk","Error!")));
  //协议信息
  strcpy(t->ProtocolInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProtocolInfo"),"gbk","Error!")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserProductInfo"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //登录时间
  strcpy(t->LoginTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LoginTime"),"gbk","Error!")));
  //系统名称
  strcpy(t->SystemName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SystemName"),"gbk","Error!")));
  //动态密码
  strcpy(t->OneTimePassword, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OneTimePassword"),"gbk","Error!")));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //大商所时间
  strcpy(t->DCETime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DCETime"),"gbk","Error!")));
  //上期所时间
  strcpy(t->SHFETime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SHFETime"),"gbk","Error!")));
  //IP地址
  strcpy(t->IPAddress, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IPAddress"),"gbk","Error!")));
  //接口端产品信息
  strcpy(t->InterfaceProductInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InterfaceProductInfo"),"gbk","Error!")));
  //密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //登录日期
  strcpy(t->LoginDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LoginDate"),"gbk","Error!")));
  //Mac地址
  strcpy(t->MacAddress, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MacAddress"),"gbk","Error!")));
  //最大报单引用
  strcpy(t->MaxOrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MaxOrderRef"),"gbk","Error!")));

  return t;
};

//查询交易编码
PyObject * new_CThostFtdcQryTradingCodeField(CThostFtdcQryTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradingCodeField", (char*)"yyycy",
p->InvestorID, p->BrokerID, p->ClientID, p->ClientIDType, p->ExchangeID);
}
CThostFtdcQryTradingCodeField * from_CThostFtdcQryTradingCodeField(PyObject * p){
  CThostFtdcQryTradingCodeField *t = (CThostFtdcQryTradingCodeField *)calloc(1, sizeof(CThostFtdcQryTradingCodeField));
  memset(t,0,sizeof(CThostFtdcQryTradingCodeField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //交易编码类型
  //enum类型
  //THOST_FTDC_CIDT_Arbitrage -> '2', 套利
  //THOST_FTDC_CIDT_Speculation -> '1', 投机
  //THOST_FTDC_CIDT_Hedge -> '3', 套保
  t->ClientIDType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientIDType"),"gbk","Error!"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//当前银期所属交易中心
PyObject * new_CThostFtdcCurrTransferIdentityField(CThostFtdcCurrTransferIdentityField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCurrTransferIdentityField", (char*)"i",
p->IdentityID);
}
CThostFtdcCurrTransferIdentityField * from_CThostFtdcCurrTransferIdentityField(PyObject * p){
  CThostFtdcCurrTransferIdentityField *t = (CThostFtdcCurrTransferIdentityField *)calloc(1, sizeof(CThostFtdcCurrTransferIdentityField));
  memset(t,0,sizeof(CThostFtdcCurrTransferIdentityField));
  //交易中心代码
  t->IdentityID =   PyLong_AsLong(PyObject_GetAttrString(p, "IdentityID"));

  return t;
};

//交易所保证金率调整
PyObject * new_CThostFtdcExchangeMarginRateAdjustField(CThostFtdcExchangeMarginRateAdjustField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeMarginRateAdjustField", (char*)"dyddddddddcdydd",
p->ExchLongMarginRatioByVolume, p->BrokerID, p->NoLongMarginRatioByMoney, p->NoLongMarginRatioByVolume, p->ShortMarginRatioByVolume, p->NoShortMarginRatioByVolume, p->ExchLongMarginRatioByMoney, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->ExchShortMarginRatioByMoney, p->HedgeFlag, p->LongMarginRatioByVolume, p->InstrumentID, p->ExchShortMarginRatioByVolume, p->NoShortMarginRatioByMoney);
}
CThostFtdcExchangeMarginRateAdjustField * from_CThostFtdcExchangeMarginRateAdjustField(PyObject * p){
  CThostFtdcExchangeMarginRateAdjustField *t = (CThostFtdcExchangeMarginRateAdjustField *)calloc(1, sizeof(CThostFtdcExchangeMarginRateAdjustField));
  memset(t,0,sizeof(CThostFtdcExchangeMarginRateAdjustField));
  //交易所多头保证金费
  t->ExchLongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchLongMarginRatioByVolume"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //不跟随交易所投资者多头保证金率
  t->NoLongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoLongMarginRatioByMoney"));
  //不跟随交易所投资者多头保证金费
  t->NoLongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoLongMarginRatioByVolume"));
  //跟随交易所投资者空头保证金费
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //不跟随交易所投资者空头保证金费
  t->NoShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoShortMarginRatioByVolume"));
  //交易所多头保证金率
  t->ExchLongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchLongMarginRatioByMoney"));
  //跟随交易所投资者空头保证金率
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //跟随交易所投资者多头保证金率
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //交易所空头保证金率
  t->ExchShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchShortMarginRatioByMoney"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //跟随交易所投资者多头保证金费
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //交易所空头保证金费
  t->ExchShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchShortMarginRatioByVolume"));
  //不跟随交易所投资者空头保证金率
  t->NoShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoShortMarginRatioByMoney"));

  return t;
};

//交易所行情报盘机
PyObject * new_CThostFtdcMDTraderOfferField(CThostFtdcMDTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMDTraderOfferField", (char*)"yyyyyiyyyyyyyyyyyyc",
p->TradingDay, p->BrokerID, p->StartDate, p->TraderID, p->OrderLocalID, p->InstallID, p->ConnectTime, p->ExchangeID, p->ConnectDate, p->ConnectRequestDate, p->ParticipantID, p->LastReportTime, p->StartTime, p->MaxTradeID, p->LastReportDate, p->Password, p->MaxOrderMessageReference, p->ConnectRequestTime, p->TraderConnectStatus);
}
CThostFtdcMDTraderOfferField * from_CThostFtdcMDTraderOfferField(PyObject * p){
  CThostFtdcMDTraderOfferField *t = (CThostFtdcMDTraderOfferField *)calloc(1, sizeof(CThostFtdcMDTraderOfferField));
  memset(t,0,sizeof(CThostFtdcMDTraderOfferField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //启动日期
  strcpy(t->StartDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "StartDate"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //完成连接时间
  strcpy(t->ConnectTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ConnectTime"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //完成连接日期
  strcpy(t->ConnectDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ConnectDate"),"gbk","Error!")));
  //发出连接请求的日期
  strcpy(t->ConnectRequestDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ConnectRequestDate"),"gbk","Error!")));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //上次报告时间
  strcpy(t->LastReportTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastReportTime"),"gbk","Error!")));
  //启动时间
  strcpy(t->StartTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "StartTime"),"gbk","Error!")));
  //本席位最大成交编号
  strcpy(t->MaxTradeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MaxTradeID"),"gbk","Error!")));
  //上次报告日期
  strcpy(t->LastReportDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastReportDate"),"gbk","Error!")));
  //密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //本席位最大报单备拷
  strcpy(t->MaxOrderMessageReference, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MaxOrderMessageReference"),"gbk","Error!")));
  //发出连接请求的时间
  strcpy(t->ConnectRequestTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ConnectRequestTime"),"gbk","Error!")));
  //交易所交易员连接状态
  //enum类型
  //THOST_FTDC_TCS_NotConnected -> '1', 没有任何连接
  //THOST_FTDC_TCS_SubPrivateFlow -> '4', 订阅私有流
  //THOST_FTDC_TCS_Connected -> '2', 已经连接
  //THOST_FTDC_TCS_QryInstrumentSent -> '3', 已经发出合约查询请求
  t->TraderConnectStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderConnectStatus"),"gbk","Error!"))[0];

  return t;
};

//预埋单
PyObject * new_CThostFtdcParkedOrderField(CThostFtdcParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcParkedOrderField", (char*)"cicyycyyiydyyyciiyicdccyiyicy",
p->Status, p->UserForceClose, p->UserType, p->UserID, p->ErrorMsg, p->Direction, p->ExchangeID, p->GTDDate, p->ErrorID, p->CombHedgeFlag, p->StopPrice, p->BusinessUnit, p->InstrumentID, p->ParkedOrderID, p->VolumeCondition, p->MinVolume, p->RequestID, p->BrokerID, p->IsSwapOrder, p->OrderPriceType, p->LimitPrice, p->ContingentCondition, p->TimeCondition, p->OrderRef, p->IsAutoSuspend, p->InvestorID, p->VolumeTotalOriginal, p->ForceCloseReason, p->CombOffsetFlag);
}
CThostFtdcParkedOrderField * from_CThostFtdcParkedOrderField(PyObject * p){
  CThostFtdcParkedOrderField *t = (CThostFtdcParkedOrderField *)calloc(1, sizeof(CThostFtdcParkedOrderField));
  memset(t,0,sizeof(CThostFtdcParkedOrderField));
  //预埋单状态
  //enum类型
  //THOST_FTDC_PAOS_Deleted -> '3', 已删除
  //THOST_FTDC_PAOS_Send -> '2', 已发送
  //THOST_FTDC_PAOS_NotSend -> '1', 未发送
  t->Status =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Status"),"gbk","Error!"))[0];
  //用户强评标志
  t->UserForceClose =   PyLong_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //用户类型
  //enum类型
  //THOST_FTDC_UT_Operator -> '1', 操作员
  //THOST_FTDC_UT_SuperUser -> '2', 管理员
  //THOST_FTDC_UT_Investor -> '0', 投资者
  t->UserType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserType"),"gbk","Error!"))[0];
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //GTD日期
  strcpy(t->GTDDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "GTDDate"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombHedgeFlag"),"gbk","Error!")));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //业务单元
  strcpy(t->BusinessUnit, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BusinessUnit"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //预埋报单编号
  strcpy(t->ParkedOrderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParkedOrderID"),"gbk","Error!")));
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VolumeCondition"),"gbk","Error!"))[0];
  //最小成交量
  t->MinVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //互换单标志
  t->IsSwapOrder =   PyLong_AsLong(PyObject_GetAttrString(p, "IsSwapOrder"));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  t->OrderPriceType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderPriceType"),"gbk","Error!"))[0];
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_Touch -> '2', 止损
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  t->ContingentCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ContingentCondition"),"gbk","Error!"))[0];
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  t->TimeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TimeCondition"),"gbk","Error!"))[0];
  //报单引用
  strcpy(t->OrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderRef"),"gbk","Error!")));
  //自动挂起标志
  t->IsAutoSuspend =   PyLong_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //数量
  t->VolumeTotalOriginal =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ForceCloseReason"),"gbk","Error!"))[0];
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombOffsetFlag"),"gbk","Error!")));

  return t;
};

//当前时间
PyObject * new_CThostFtdcCurrentTimeField(CThostFtdcCurrentTimeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCurrentTimeField", (char*)"yyyi",
p->ActionDay, p->CurrDate, p->CurrTime, p->CurrMillisec);
}
CThostFtdcCurrentTimeField * from_CThostFtdcCurrentTimeField(PyObject * p){
  CThostFtdcCurrentTimeField *t = (CThostFtdcCurrentTimeField *)calloc(1, sizeof(CThostFtdcCurrentTimeField));
  memset(t,0,sizeof(CThostFtdcCurrentTimeField));
  //业务日期
  strcpy(t->ActionDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionDay"),"gbk","Error!")));
  //当前日期
  strcpy(t->CurrDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrDate"),"gbk","Error!")));
  //当前时间
  strcpy(t->CurrTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrTime"),"gbk","Error!")));
  //当前时间（毫秒）
  t->CurrMillisec =   PyLong_AsLong(PyObject_GetAttrString(p, "CurrMillisec"));

  return t;
};

//查询银行资金请求，TradeCode=204002
PyObject * new_CThostFtdcTransferQryBankReqField(CThostFtdcTransferQryBankReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryBankReqField", (char*)"yyyc",
p->FutureAccPwd, p->FutureAccount, p->CurrencyCode, p->FuturePwdFlag);
}
CThostFtdcTransferQryBankReqField * from_CThostFtdcTransferQryBankReqField(PyObject * p){
  CThostFtdcTransferQryBankReqField *t = (CThostFtdcTransferQryBankReqField *)calloc(1, sizeof(CThostFtdcTransferQryBankReqField));
  memset(t,0,sizeof(CThostFtdcTransferQryBankReqField));
  //密码
  strcpy(t->FutureAccPwd, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccPwd"),"gbk","Error!")));
  //期货资金账户
  strcpy(t->FutureAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccount"),"gbk","Error!")));
  //币种：RMB-人民币 USD-美圆 HKD-港元
  strcpy(t->CurrencyCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyCode"),"gbk","Error!")));
  //密码标志
  //enum类型
  //THOST_FTDC_FPWD_UnCheck -> '0', 不核对
  //THOST_FTDC_FPWD_Check -> '1', 核对
  t->FuturePwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FuturePwdFlag"),"gbk","Error!"))[0];

  return t;
};

//请求查询转帐流水
PyObject * new_CThostFtdcQryTransferSerialField(CThostFtdcQryTransferSerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTransferSerialField", (char*)"yyyy",
p->BrokerID, p->BankID, p->AccountID, p->CurrencyID);
}
CThostFtdcQryTransferSerialField * from_CThostFtdcQryTransferSerialField(PyObject * p){
  CThostFtdcQryTransferSerialField *t = (CThostFtdcQryTransferSerialField *)calloc(1, sizeof(CThostFtdcQryTransferSerialField));
  memset(t,0,sizeof(CThostFtdcQryTransferSerialField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行编码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));

  return t;
};

//验证期货资金密码和客户信息
PyObject * new_CThostFtdcDepositResultInformField(CThostFtdcDepositResultInformField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDepositResultInformField", (char*)"iyyydyy",
p->RequestID, p->BrokerID, p->DescrInfoForReturnCode, p->DepositSeqNo, p->Deposit, p->ReturnCode, p->InvestorID);
}
CThostFtdcDepositResultInformField * from_CThostFtdcDepositResultInformField(PyObject * p){
  CThostFtdcDepositResultInformField *t = (CThostFtdcDepositResultInformField *)calloc(1, sizeof(CThostFtdcDepositResultInformField));
  memset(t,0,sizeof(CThostFtdcDepositResultInformField));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //返回码描述
  strcpy(t->DescrInfoForReturnCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DescrInfoForReturnCode"),"gbk","Error!")));
  //出入金流水号，该流水号为银期报盘返回的流水号
  strcpy(t->DepositSeqNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DepositSeqNo"),"gbk","Error!")));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
  //返回代码
  strcpy(t->ReturnCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ReturnCode"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));

  return t;
};

//交易编码
PyObject * new_CThostFtdcTradingCodeField(CThostFtdcTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingCodeField", (char*)"yyiycy",
p->BrokerID, p->ClientID, p->IsActive, p->InvestorID, p->ClientIDType, p->ExchangeID);
}
CThostFtdcTradingCodeField * from_CThostFtdcTradingCodeField(PyObject * p){
  CThostFtdcTradingCodeField *t = (CThostFtdcTradingCodeField *)calloc(1, sizeof(CThostFtdcTradingCodeField));
  memset(t,0,sizeof(CThostFtdcTradingCodeField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //是否活跃
  t->IsActive =   PyLong_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //交易编码类型
  //enum类型
  //THOST_FTDC_CIDT_Arbitrage -> '2', 套利
  //THOST_FTDC_CIDT_Speculation -> '1', 投机
  //THOST_FTDC_CIDT_Hedge -> '3', 套保
  t->ClientIDType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientIDType"),"gbk","Error!"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//行情交易所代码属性
PyObject * new_CThostFtdcMarketDataExchangeField(CThostFtdcMarketDataExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataExchangeField", (char*)"y",
p->ExchangeID);
}
CThostFtdcMarketDataExchangeField * from_CThostFtdcMarketDataExchangeField(PyObject * p){
  CThostFtdcMarketDataExchangeField *t = (CThostFtdcMarketDataExchangeField *)calloc(1, sizeof(CThostFtdcMarketDataExchangeField));
  memset(t,0,sizeof(CThostFtdcMarketDataExchangeField));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//查询禁止登录用户
PyObject * new_CThostFtdcQryLoginForbiddenUserField(CThostFtdcQryLoginForbiddenUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryLoginForbiddenUserField", (char*)"yy",
p->BrokerID, p->UserID);
}
CThostFtdcQryLoginForbiddenUserField * from_CThostFtdcQryLoginForbiddenUserField(PyObject * p){
  CThostFtdcQryLoginForbiddenUserField *t = (CThostFtdcQryLoginForbiddenUserField *)calloc(1, sizeof(CThostFtdcQryLoginForbiddenUserField));
  memset(t,0,sizeof(CThostFtdcQryLoginForbiddenUserField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//浮动盈亏算法
PyObject * new_CThostFtdcPositionProfitAlgorithmField(CThostFtdcPositionProfitAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcPositionProfitAlgorithmField", (char*)"yycyy",
p->BrokerID, p->Memo, p->Algorithm, p->AccountID, p->CurrencyID);
}
CThostFtdcPositionProfitAlgorithmField * from_CThostFtdcPositionProfitAlgorithmField(PyObject * p){
  CThostFtdcPositionProfitAlgorithmField *t = (CThostFtdcPositionProfitAlgorithmField *)calloc(1, sizeof(CThostFtdcPositionProfitAlgorithmField));
  memset(t,0,sizeof(CThostFtdcPositionProfitAlgorithmField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //备注
  strcpy(t->Memo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Memo"),"gbk","Error!")));
  //盈亏算法
  //enum类型
  //THOST_FTDC_AG_OnlyLost -> '2', 浮盈不计，浮亏计
  //THOST_FTDC_AG_None -> '4', 浮盈浮亏都不计算
  //THOST_FTDC_AG_OnlyGain -> '3', 浮盈计，浮亏不计
  //THOST_FTDC_AG_All -> '1', 浮盈浮亏都计算
  t->Algorithm =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Algorithm"),"gbk","Error!"))[0];
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));

  return t;
};

//查询指定流水号的交易结果请求
PyObject * new_CThostFtdcReqQueryTradeResultBySerialField(CThostFtdcReqQueryTradeResultBySerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqQueryTradeResultBySerialField", (char*)"yyiyycyiyyycyyyyiyyycydcyy",
p->TradingDay, p->TradeDate, p->Reference, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->BankSerial, p->SessionID, p->CurrencyID, p->BankBranchID, p->TradeCode, p->RefrenceIssureType, p->Password, p->BrokerBranchID, p->BrokerID, p->BankID, p->PlateSerial, p->AccountID, p->CustomerName, p->RefrenceIssure, p->CustType, p->BankAccount, p->TradeAmount, p->LastFragment, p->Digest, p->TradeTime);
}
CThostFtdcReqQueryTradeResultBySerialField * from_CThostFtdcReqQueryTradeResultBySerialField(PyObject * p){
  CThostFtdcReqQueryTradeResultBySerialField *t = (CThostFtdcReqQueryTradeResultBySerialField *)calloc(1, sizeof(CThostFtdcReqQueryTradeResultBySerialField));
  memset(t,0,sizeof(CThostFtdcReqQueryTradeResultBySerialField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //流水号
  t->Reference =   PyLong_AsLong(PyObject_GetAttrString(p, "Reference"));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //本流水号发布者的机构类型
  //enum类型
  //THOST_FTDC_TS_Store -> '2', 券商
  //THOST_FTDC_TS_Bank -> '0', 银行
  //THOST_FTDC_TS_Future -> '1', 期商
  t->RefrenceIssureType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RefrenceIssureType"),"gbk","Error!"))[0];
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //本流水号发布者机构编码
  strcpy(t->RefrenceIssure, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RefrenceIssure"),"gbk","Error!")));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));

  return t;
};

//资金账户
PyObject * new_CThostFtdcTradingAccountField(CThostFtdcTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountField", (char*)"dyddddyddddddddddddydydddddddddidddddddddddddd",
p->SpecProductPositionProfit, p->AccountID, p->Credit, p->SpecProductPositionProfitByAlg, p->InterestBase, p->PreMargin, p->BrokerID, p->FrozenCommission, p->DeliveryMargin, p->ExchangeDeliveryMargin, p->Mortgage, p->Commission, p->CurrMargin, p->ExchangeMargin, p->Interest, p->PreDeposit, p->Balance, p->SpecProductExchangeMargin, p->FundMortgageAvailable, p->CurrencyID, p->FundMortgageOut, p->TradingDay, p->Withdraw, p->CloseProfit, p->PreFundMortgageOut, p->Available, p->PreBalance, p->SpecProductMargin, p->MortgageableFund, p->FrozenMargin, p->Deposit, p->SettlementID, p->PositionProfit, p->PreFundMortgageIn, p->SpecProductFrozenCommission, p->CashIn, p->FrozenCash, p->SpecProductFrozenMargin, p->FundMortgageIn, p->WithdrawQuota, p->ReserveBalance, p->PreCredit, p->Reserve, p->SpecProductCommission, p->PreMortgage, p->SpecProductCloseProfit);
}
CThostFtdcTradingAccountField * from_CThostFtdcTradingAccountField(PyObject * p){
  CThostFtdcTradingAccountField *t = (CThostFtdcTradingAccountField *)calloc(1, sizeof(CThostFtdcTradingAccountField));
  memset(t,0,sizeof(CThostFtdcTradingAccountField));
  //特殊产品持仓盈亏
  t->SpecProductPositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductPositionProfit"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //信用额度
  t->Credit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Credit"));
  //根据持仓盈亏算法计算的特殊产品持仓盈亏
  t->SpecProductPositionProfitByAlg =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductPositionProfitByAlg"));
  //利息基数
  t->InterestBase =   PyFloat_AsDouble(PyObject_GetAttrString(p, "InterestBase"));
  //上次占用的保证金
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //冻结的手续费
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //投资者交割保证金
  t->DeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "DeliveryMargin"));
  //交易所交割保证金
  t->ExchangeDeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeDeliveryMargin"));
  //质押金额
  t->Mortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Mortgage"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //当前保证金总额
  t->CurrMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //利息收入
  t->Interest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Interest"));
  //上次存款额
  t->PreDeposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDeposit"));
  //期货结算准备金
  t->Balance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
  //特殊产品交易所保证金
  t->SpecProductExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductExchangeMargin"));
  //货币质押余额
  t->FundMortgageAvailable =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageAvailable"));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //货币质出金额
  t->FundMortgageOut =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageOut"));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //出金金额
  t->Withdraw =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //上次货币质出金额
  t->PreFundMortgageOut =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreFundMortgageOut"));
  //可用资金
  t->Available =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
  //上次结算准备金
  t->PreBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
  //特殊产品占用保证金
  t->SpecProductMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductMargin"));
  //可质押货币金额
  t->MortgageableFund =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MortgageableFund"));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //上次货币质入金额
  t->PreFundMortgageIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreFundMortgageIn"));
  //特殊产品冻结手续费
  t->SpecProductFrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductFrozenCommission"));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //冻结的资金
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //特殊产品冻结保证金
  t->SpecProductFrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductFrozenMargin"));
  //货币质入金额
  t->FundMortgageIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageIn"));
  //可取资金
  t->WithdrawQuota =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WithdrawQuota"));
  //保底期货结算准备金
  t->ReserveBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ReserveBalance"));
  //上次信用额度
  t->PreCredit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreCredit"));
  //基本准备金
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
  //特殊产品手续费
  t->SpecProductCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductCommission"));
  //上次质押金额
  t->PreMortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMortgage"));
  //特殊产品平仓盈亏
  t->SpecProductCloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductCloseProfit"));

  return t;
};

//查询出入金流水
PyObject * new_CThostFtdcQrySyncDepositField(CThostFtdcQrySyncDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySyncDepositField", (char*)"yy",
p->BrokerID, p->DepositSeqNo);
}
CThostFtdcQrySyncDepositField * from_CThostFtdcQrySyncDepositField(PyObject * p){
  CThostFtdcQrySyncDepositField *t = (CThostFtdcQrySyncDepositField *)calloc(1, sizeof(CThostFtdcQrySyncDepositField));
  memset(t,0,sizeof(CThostFtdcQrySyncDepositField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //出入金流水号
  strcpy(t->DepositSeqNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DepositSeqNo"),"gbk","Error!")));

  return t;
};

//银期转帐报文头
PyObject * new_CThostFtdcTransferHeaderField(CThostFtdcTransferHeaderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferHeaderField", (char*)"iyyyyiyyyyyyy",
p->RequestID, p->BankID, p->DeviceID, p->FutureID, p->TradeDate, p->SessionID, p->Version, p->TradeTime, p->TradeCode, p->BankBrchID, p->TradeSerial, p->RecordNum, p->OperNo);
}
CThostFtdcTransferHeaderField * from_CThostFtdcTransferHeaderField(PyObject * p){
  CThostFtdcTransferHeaderField *t = (CThostFtdcTransferHeaderField *)calloc(1, sizeof(CThostFtdcTransferHeaderField));
  memset(t,0,sizeof(CThostFtdcTransferHeaderField));
  //请求编号，N/A
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //银行代码，根据查询银行得到，必填
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //交易设备类型，N/A
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //期货公司代码，必填
  strcpy(t->FutureID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureID"),"gbk","Error!")));
  //交易日期，必填，格式：yyyymmdd
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //会话编号，N/A
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //版本号，常量，1.0
  strcpy(t->Version, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Version"),"gbk","Error!")));
  //交易时间，必填，格式：hhmmss
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //交易代码，必填
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //银行分中心代码，根据查询银行得到，必填
  strcpy(t->BankBrchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBrchID"),"gbk","Error!")));
  //发起方流水号，N/A
  strcpy(t->TradeSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeSerial"),"gbk","Error!")));
  //记录数，N/A
  strcpy(t->RecordNum, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RecordNum"),"gbk","Error!")));
  //操作员，N/A
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));

  return t;
};

//变更银行账户请求
PyObject * new_CThostFtdcReqChangeAccountField(CThostFtdcReqChangeAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqChangeAccountField", (char*)"yyyyycyyyicyycyyyyyyycyyciyyiiyycyycccyy",
p->TradingDay, p->ZipCode, p->TradeDate, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->Telephone, p->BankSerial, p->Address, p->SessionID, p->MoneyAccountStatus, p->EMail, p->Fax, p->BankPwdFlag, p->CurrencyID, p->BankBranchID, p->TradeCode, p->Password, p->CountryCode, p->Digest, p->BrokerBranchID, p->Gender, p->BrokerID, p->BankID, p->BankAccType, p->PlateSerial, p->AccountID, p->CustomerName, p->InstallID, p->TID, p->MobilePhone, p->NewBankAccount, p->CustType, p->NewBankPassWord, p->TradeTime, p->LastFragment, p->SecuPwdFlag, p->VerifyCertNoFlag, p->BrokerIDByBank, p->BankAccount);
}
CThostFtdcReqChangeAccountField * from_CThostFtdcReqChangeAccountField(PyObject * p){
  CThostFtdcReqChangeAccountField *t = (CThostFtdcReqChangeAccountField *)calloc(1, sizeof(CThostFtdcReqChangeAccountField));
  memset(t,0,sizeof(CThostFtdcReqChangeAccountField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //邮编
  strcpy(t->ZipCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ZipCode"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //电话号码
  strcpy(t->Telephone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Telephone"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //地址
  strcpy(t->Address, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Address"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //资金账户状态
  //enum类型
  //THOST_FTDC_MAS_Cancel -> '1', 销户
  //THOST_FTDC_MAS_Normal -> '0', 正常
  t->MoneyAccountStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MoneyAccountStatus"),"gbk","Error!"))[0];
  //电子邮件
  strcpy(t->EMail, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "EMail"),"gbk","Error!")));
  //传真
  strcpy(t->Fax, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Fax"),"gbk","Error!")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //国家代码
  strcpy(t->CountryCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CountryCode"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //性别
  //enum类型
  //THOST_FTDC_GD_Male -> '1', 男
  //THOST_FTDC_GD_Female -> '2', 女
  //THOST_FTDC_GD_Unknown -> '0', 未知状态
  t->Gender =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Gender"),"gbk","Error!"))[0];
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //手机
  strcpy(t->MobilePhone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MobilePhone"),"gbk","Error!")));
  //新银行帐号
  strcpy(t->NewBankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "NewBankAccount"),"gbk","Error!")));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //新银行密码
  strcpy(t->NewBankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "NewBankPassWord"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));

  return t;
};

//查询汇率
PyObject * new_CThostFtdcQryExchangeRateField(CThostFtdcQryExchangeRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeRateField", (char*)"yyy",
p->ToCurrencyID, p->BrokerID, p->FromCurrencyID);
}
CThostFtdcQryExchangeRateField * from_CThostFtdcQryExchangeRateField(PyObject * p){
  CThostFtdcQryExchangeRateField *t = (CThostFtdcQryExchangeRateField *)calloc(1, sizeof(CThostFtdcQryExchangeRateField));
  memset(t,0,sizeof(CThostFtdcQryExchangeRateField));
  //目标币种
  strcpy(t->ToCurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ToCurrencyID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //源币种
  strcpy(t->FromCurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FromCurrencyID"),"gbk","Error!")));

  return t;
};

//行情申买四、五属性
PyObject * new_CThostFtdcMarketDataBid45Field(CThostFtdcMarketDataBid45Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBid45Field", (char*)"ddii",
p->BidPrice4, p->BidPrice5, p->BidVolume4, p->BidVolume5);
}
CThostFtdcMarketDataBid45Field * from_CThostFtdcMarketDataBid45Field(PyObject * p){
  CThostFtdcMarketDataBid45Field *t = (CThostFtdcMarketDataBid45Field *)calloc(1, sizeof(CThostFtdcMarketDataBid45Field));
  memset(t,0,sizeof(CThostFtdcMarketDataBid45Field));
  //申买价四
  t->BidPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice4"));
  //申买价五
  t->BidPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice5"));
  //申买量四
  t->BidVolume4 =   PyLong_AsLong(PyObject_GetAttrString(p, "BidVolume4"));
  //申买量五
  t->BidVolume5 =   PyLong_AsLong(PyObject_GetAttrString(p, "BidVolume5"));

  return t;
};

//投资者组
PyObject * new_CThostFtdcInvestorGroupField(CThostFtdcInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorGroupField", (char*)"yyy",
p->InvestorGroupID, p->BrokerID, p->InvestorGroupName);
}
CThostFtdcInvestorGroupField * from_CThostFtdcInvestorGroupField(PyObject * p){
  CThostFtdcInvestorGroupField *t = (CThostFtdcInvestorGroupField *)calloc(1, sizeof(CThostFtdcInvestorGroupField));
  memset(t,0,sizeof(CThostFtdcInvestorGroupField));
  //投资者分组代码
  strcpy(t->InvestorGroupID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorGroupID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //投资者分组名称
  strcpy(t->InvestorGroupName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorGroupName"),"gbk","Error!")));

  return t;
};

//查询交易所报单
PyObject * new_CThostFtdcQryExchangeOrderField(CThostFtdcQryExchangeOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeOrderField", (char*)"yyyyy",
p->ExchangeID, p->ClientID, p->ParticipantID, p->TraderID, p->ExchangeInstID);
}
CThostFtdcQryExchangeOrderField * from_CThostFtdcQryExchangeOrderField(PyObject * p){
  CThostFtdcQryExchangeOrderField *t = (CThostFtdcQryExchangeOrderField *)calloc(1, sizeof(CThostFtdcQryExchangeOrderField));
  memset(t,0,sizeof(CThostFtdcQryExchangeOrderField));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));

  return t;
};

//资金账户基本准备金
PyObject * new_CThostFtdcTradingAccountReserveField(CThostFtdcTradingAccountReserveField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountReserveField", (char*)"ydyy",
p->BrokerID, p->Reserve, p->AccountID, p->CurrencyID);
}
CThostFtdcTradingAccountReserveField * from_CThostFtdcTradingAccountReserveField(PyObject * p){
  CThostFtdcTradingAccountReserveField *t = (CThostFtdcTradingAccountReserveField *)calloc(1, sizeof(CThostFtdcTradingAccountReserveField));
  memset(t,0,sizeof(CThostFtdcTradingAccountReserveField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //基本准备金
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));

  return t;
};

//查询交易所保证金率
PyObject * new_CThostFtdcQryExchangeMarginRateField(CThostFtdcQryExchangeMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeMarginRateField", (char*)"ycy",
p->BrokerID, p->HedgeFlag, p->InstrumentID);
}
CThostFtdcQryExchangeMarginRateField * from_CThostFtdcQryExchangeMarginRateField(PyObject * p){
  CThostFtdcQryExchangeMarginRateField *t = (CThostFtdcQryExchangeMarginRateField *)calloc(1, sizeof(CThostFtdcQryExchangeMarginRateField));
  memset(t,0,sizeof(CThostFtdcQryExchangeMarginRateField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));

  return t;
};

//期商签退请求
PyObject * new_CThostFtdcReqFutureSignOutField(CThostFtdcReqFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqFutureSignOutField", (char*)"yyyyiyiiyyyyiyyyciyyy",
p->TradingDay, p->BrokerID, p->BankID, p->DeviceID, p->PlateSerial, p->UserID, p->InstallID, p->RequestID, p->CurrencyID, p->TradeDate, p->Digest, p->BankSerial, p->TID, p->TradeTime, p->TradeCode, p->BankBranchID, p->LastFragment, p->SessionID, p->BrokerIDByBank, p->OperNo, p->BrokerBranchID);
}
CThostFtdcReqFutureSignOutField * from_CThostFtdcReqFutureSignOutField(PyObject * p){
  CThostFtdcReqFutureSignOutField *t = (CThostFtdcReqFutureSignOutField *)calloc(1, sizeof(CThostFtdcReqFutureSignOutField));
  memset(t,0,sizeof(CThostFtdcReqFutureSignOutField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));

  return t;
};

//用户权限
PyObject * new_CThostFtdcUserRightField(CThostFtdcUserRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserRightField", (char*)"yicy",
p->BrokerID, p->IsForbidden, p->UserRightType, p->UserID);
}
CThostFtdcUserRightField * from_CThostFtdcUserRightField(PyObject * p){
  CThostFtdcUserRightField *t = (CThostFtdcUserRightField *)calloc(1, sizeof(CThostFtdcUserRightField));
  memset(t,0,sizeof(CThostFtdcUserRightField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //是否禁止
  t->IsForbidden =   PyLong_AsLong(PyObject_GetAttrString(p, "IsForbidden"));
  //客户权限类型
  //enum类型
  //THOST_FTDC_URT_ConditionOrder -> '5', 条件单
  //THOST_FTDC_URT_Transfer -> '2', 银期转帐
  //THOST_FTDC_URT_Fax -> '4', 传真结算单
  //THOST_FTDC_URT_EMail -> '3', 邮寄结算单
  //THOST_FTDC_URT_Logon -> '1', 登录
  t->UserRightType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserRightType"),"gbk","Error!"))[0];
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//强制交易员退出
PyObject * new_CThostFtdcForceUserLogoutField(CThostFtdcForceUserLogoutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcForceUserLogoutField", (char*)"yy",
p->BrokerID, p->UserID);
}
CThostFtdcForceUserLogoutField * from_CThostFtdcForceUserLogoutField(PyObject * p){
  CThostFtdcForceUserLogoutField *t = (CThostFtdcForceUserLogoutField *)calloc(1, sizeof(CThostFtdcForceUserLogoutField));
  memset(t,0,sizeof(CThostFtdcForceUserLogoutField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//信息分发
PyObject * new_CThostFtdcDisseminationField(CThostFtdcDisseminationField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDisseminationField", (char*)"ih",
p->SequenceNo, p->SequenceSeries);
}
CThostFtdcDisseminationField * from_CThostFtdcDisseminationField(PyObject * p){
  CThostFtdcDisseminationField *t = (CThostFtdcDisseminationField *)calloc(1, sizeof(CThostFtdcDisseminationField));
  memset(t,0,sizeof(CThostFtdcDisseminationField));
  //序列号
  t->SequenceNo =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //序列系列号
  t->SequenceSeries =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));

  return t;
};

//查询交易员报盘机
PyObject * new_CThostFtdcQryTraderOfferField(CThostFtdcQryTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTraderOfferField", (char*)"yyy",
p->ParticipantID, p->TraderID, p->ExchangeID);
}
CThostFtdcQryTraderOfferField * from_CThostFtdcQryTraderOfferField(PyObject * p){
  CThostFtdcQryTraderOfferField *t = (CThostFtdcQryTraderOfferField *)calloc(1, sizeof(CThostFtdcQryTraderOfferField));
  memset(t,0,sizeof(CThostFtdcQryTraderOfferField));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//查询用户会话
PyObject * new_CThostFtdcQryUserSessionField(CThostFtdcQryUserSessionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryUserSessionField", (char*)"iyyi",
p->FrontID, p->BrokerID, p->UserID, p->SessionID);
}
CThostFtdcQryUserSessionField * from_CThostFtdcQryUserSessionField(PyObject * p){
  CThostFtdcQryUserSessionField *t = (CThostFtdcQryUserSessionField *)calloc(1, sizeof(CThostFtdcQryUserSessionField));
  memset(t,0,sizeof(CThostFtdcQryUserSessionField));
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));

  return t;
};

//查询货币质押流水
PyObject * new_CThostFtdcQrySyncFundMortgageField(CThostFtdcQrySyncFundMortgageField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySyncFundMortgageField", (char*)"yy",
p->BrokerID, p->MortgageSeqNo);
}
CThostFtdcQrySyncFundMortgageField * from_CThostFtdcQrySyncFundMortgageField(PyObject * p){
  CThostFtdcQrySyncFundMortgageField *t = (CThostFtdcQrySyncFundMortgageField *)calloc(1, sizeof(CThostFtdcQrySyncFundMortgageField));
  memset(t,0,sizeof(CThostFtdcQrySyncFundMortgageField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //货币质押流水号
  strcpy(t->MortgageSeqNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MortgageSeqNo"),"gbk","Error!")));

  return t;
};

//查询银行资金请求响应
PyObject * new_CThostFtdcTransferQryBankRspField(CThostFtdcTransferQryBankRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryBankRspField", (char*)"dyydyyd",
p->TradeAmt, p->CurrencyCode, p->RetInfo, p->FetchAmt, p->RetCode, p->FutureAccount, p->UseAmt);
}
CThostFtdcTransferQryBankRspField * from_CThostFtdcTransferQryBankRspField(PyObject * p){
  CThostFtdcTransferQryBankRspField *t = (CThostFtdcTransferQryBankRspField *)calloc(1, sizeof(CThostFtdcTransferQryBankRspField));
  memset(t,0,sizeof(CThostFtdcTransferQryBankRspField));
  //银行余额
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //币种
  strcpy(t->CurrencyCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyCode"),"gbk","Error!")));
  //响应信息
  strcpy(t->RetInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RetInfo"),"gbk","Error!")));
  //银行可取余额
  t->FetchAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FetchAmt"));
  //响应代码
  strcpy(t->RetCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RetCode"),"gbk","Error!")));
  //资金账户
  strcpy(t->FutureAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccount"),"gbk","Error!")));
  //银行可用余额
  t->UseAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UseAmt"));

  return t;
};

//查询行情报盘机
PyObject * new_CThostFtdcQryMDTraderOfferField(CThostFtdcQryMDTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryMDTraderOfferField", (char*)"yyy",
p->ParticipantID, p->TraderID, p->ExchangeID);
}
CThostFtdcQryMDTraderOfferField * from_CThostFtdcQryMDTraderOfferField(PyObject * p){
  CThostFtdcQryMDTraderOfferField *t = (CThostFtdcQryMDTraderOfferField *)calloc(1, sizeof(CThostFtdcQryMDTraderOfferField));
  memset(t,0,sizeof(CThostFtdcQryMDTraderOfferField));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//二级代理操作员银期权限查询
PyObject * new_CThostFtdcQrySecAgentACIDMapField(CThostFtdcQrySecAgentACIDMapField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySecAgentACIDMapField", (char*)"yyyy",
p->BrokerID, p->CurrencyID, p->AccountID, p->UserID);
}
CThostFtdcQrySecAgentACIDMapField * from_CThostFtdcQrySecAgentACIDMapField(PyObject * p){
  CThostFtdcQrySecAgentACIDMapField *t = (CThostFtdcQrySecAgentACIDMapField *)calloc(1, sizeof(CThostFtdcQrySecAgentACIDMapField));
  memset(t,0,sizeof(CThostFtdcQrySecAgentACIDMapField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //币种
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //资金账户
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//成交均价
PyObject * new_CThostFtdcMarketDataAveragePriceField(CThostFtdcMarketDataAveragePriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataAveragePriceField", (char*)"d",
p->AveragePrice);
}
CThostFtdcMarketDataAveragePriceField * from_CThostFtdcMarketDataAveragePriceField(PyObject * p){
  CThostFtdcMarketDataAveragePriceField *t = (CThostFtdcMarketDataAveragePriceField *)calloc(1, sizeof(CThostFtdcMarketDataAveragePriceField));
  memset(t,0,sizeof(CThostFtdcMarketDataAveragePriceField));
  //当日均价
  t->AveragePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AveragePrice"));

  return t;
};

//查询合约
PyObject * new_CThostFtdcQryInstrumentField(CThostFtdcQryInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentField", (char*)"yyyy",
p->InstrumentID, p->ProductID, p->ExchangeInstID, p->ExchangeID);
}
CThostFtdcQryInstrumentField * from_CThostFtdcQryInstrumentField(PyObject * p){
  CThostFtdcQryInstrumentField *t = (CThostFtdcQryInstrumentField *)calloc(1, sizeof(CThostFtdcQryInstrumentField));
  memset(t,0,sizeof(CThostFtdcQryInstrumentField));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //产品代码
  strcpy(t->ProductID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProductID"),"gbk","Error!")));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//期货资金转银行请求响应
PyObject * new_CThostFtdcTransferFutureToBankRspField(CThostFtdcTransferFutureToBankRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferFutureToBankRspField", (char*)"dyydyy",
p->TradeAmt, p->CurrencyCode, p->RetInfo, p->CustFee, p->RetCode, p->FutureAccount);
}
CThostFtdcTransferFutureToBankRspField * from_CThostFtdcTransferFutureToBankRspField(PyObject * p){
  CThostFtdcTransferFutureToBankRspField *t = (CThostFtdcTransferFutureToBankRspField *)calloc(1, sizeof(CThostFtdcTransferFutureToBankRspField));
  memset(t,0,sizeof(CThostFtdcTransferFutureToBankRspField));
  //转帐金额
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //币种
  strcpy(t->CurrencyCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyCode"),"gbk","Error!")));
  //响应信息
  strcpy(t->RetInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RetInfo"),"gbk","Error!")));
  //应收客户手续费
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //响应代码
  strcpy(t->RetCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RetCode"),"gbk","Error!")));
  //资金账户
  strcpy(t->FutureAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccount"),"gbk","Error!")));

  return t;
};

//查询交易所报单操作
PyObject * new_CThostFtdcQryExchangeOrderActionField(CThostFtdcQryExchangeOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeOrderActionField", (char*)"yyyy",
p->ClientID, p->ParticipantID, p->TraderID, p->ExchangeID);
}
CThostFtdcQryExchangeOrderActionField * from_CThostFtdcQryExchangeOrderActionField(PyObject * p){
  CThostFtdcQryExchangeOrderActionField *t = (CThostFtdcQryExchangeOrderActionField *)calloc(1, sizeof(CThostFtdcQryExchangeOrderActionField));
  memset(t,0,sizeof(CThostFtdcQryExchangeOrderActionField));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//装载结算信息
PyObject * new_CThostFtdcLoadSettlementInfoField(CThostFtdcLoadSettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLoadSettlementInfoField", (char*)"y",
p->BrokerID);
}
CThostFtdcLoadSettlementInfoField * from_CThostFtdcLoadSettlementInfoField(PyObject * p){
  CThostFtdcLoadSettlementInfoField *t = (CThostFtdcLoadSettlementInfoField *)calloc(1, sizeof(CThostFtdcLoadSettlementInfoField));
  memset(t,0,sizeof(CThostFtdcLoadSettlementInfoField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//正在同步中的投资者
PyObject * new_CThostFtdcSyncingInvestorField(CThostFtdcSyncingInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInvestorField", (char*)"yyycyyyyyiyyy",
p->InvestorName, p->BrokerID, p->IdentifiedCardNo, p->IdentifiedCardType, p->Telephone, p->Address, p->MarginModelID, p->CommModelID, p->Mobile, p->IsActive, p->InvestorID, p->InvestorGroupID, p->OpenDate);
}
CThostFtdcSyncingInvestorField * from_CThostFtdcSyncingInvestorField(PyObject * p){
  CThostFtdcSyncingInvestorField *t = (CThostFtdcSyncingInvestorField *)calloc(1, sizeof(CThostFtdcSyncingInvestorField));
  memset(t,0,sizeof(CThostFtdcSyncingInvestorField));
  //投资者名称
  strcpy(t->InvestorName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorName"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdentifiedCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardType"),"gbk","Error!"))[0];
  //联系电话
  strcpy(t->Telephone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Telephone"),"gbk","Error!")));
  //通讯地址
  strcpy(t->Address, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Address"),"gbk","Error!")));
  //保证金率模板代码
  strcpy(t->MarginModelID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MarginModelID"),"gbk","Error!")));
  //手续费率模板代码
  strcpy(t->CommModelID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CommModelID"),"gbk","Error!")));
  //手机
  strcpy(t->Mobile, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Mobile"),"gbk","Error!")));
  //是否活跃
  t->IsActive =   PyLong_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //投资者分组代码
  strcpy(t->InvestorGroupID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorGroupID"),"gbk","Error!")));
  //开户日期
  strcpy(t->OpenDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OpenDate"),"gbk","Error!")));

  return t;
};

//银期开户信息
PyObject * new_CThostFtdcOpenAccountField(CThostFtdcOpenAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcOpenAccountField", (char*)"yyyycyiycyciyyicyyyyyyycyyiyyyyyccyyycyiycyycc",
p->ZipCode, p->TradeDate, p->Address, p->Telephone, p->MoneyAccountStatus, p->ErrorMsg, p->ErrorID, p->BankBranchID, p->SecuPwdFlag, p->BrokerID, p->BankAccType, p->PlateSerial, p->AccountID, p->DeviceID, p->InstallID, p->BankSecuAccType, p->CurrencyID, p->Digest, p->BankAccount, p->TradingDay, p->BrokerBranchID, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->UserID, p->BankSerial, p->SessionID, p->Fax, p->TradeCode, p->Password, p->CountryCode, p->OperNo, p->BankPwdFlag, p->Gender, p->BankID, p->BankSecuAcc, p->EMail, p->CustType, p->BrokerIDByBank, p->TID, p->MobilePhone, p->CashExchangeCode, p->CustomerName, p->TradeTime, p->LastFragment, p->VerifyCertNoFlag);
}
CThostFtdcOpenAccountField * from_CThostFtdcOpenAccountField(PyObject * p){
  CThostFtdcOpenAccountField *t = (CThostFtdcOpenAccountField *)calloc(1, sizeof(CThostFtdcOpenAccountField));
  memset(t,0,sizeof(CThostFtdcOpenAccountField));
  //邮编
  strcpy(t->ZipCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ZipCode"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //地址
  strcpy(t->Address, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Address"),"gbk","Error!")));
  //电话号码
  strcpy(t->Telephone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Telephone"),"gbk","Error!")));
  //资金账户状态
  //enum类型
  //THOST_FTDC_MAS_Cancel -> '1', 销户
  //THOST_FTDC_MAS_Normal -> '0', 正常
  t->MoneyAccountStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MoneyAccountStatus"),"gbk","Error!"))[0];
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankSecuAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAccType"),"gbk","Error!"))[0];
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //传真
  strcpy(t->Fax, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Fax"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //国家代码
  strcpy(t->CountryCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CountryCode"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //性别
  //enum类型
  //THOST_FTDC_GD_Male -> '1', 男
  //THOST_FTDC_GD_Female -> '2', 女
  //THOST_FTDC_GD_Unknown -> '0', 未知状态
  t->Gender =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Gender"),"gbk","Error!"))[0];
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAcc"),"gbk","Error!")));
  //电子邮件
  strcpy(t->EMail, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "EMail"),"gbk","Error!")));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //手机
  strcpy(t->MobilePhone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MobilePhone"),"gbk","Error!")));
  //汇钞标志
  //enum类型
  //THOST_FTDC_CEC_Exchange -> '1', 汇
  //THOST_FTDC_CEC_Cash -> '2', 钞
  t->CashExchangeCode =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CashExchangeCode"),"gbk","Error!"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];

  return t;
};

//合约
PyObject * new_CThostFtdcInstrumentField(CThostFtdcInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentField", (char*)"dyciiyicyyyyyyidiyicdyiicc",
p->PriceTick, p->CreateDate, p->PositionType, p->MaxLimitOrderVolume, p->DeliveryYear, p->ExchangeID, p->MaxMarketOrderVolume, p->MaxMarginSideAlgorithm, p->InstrumentName, p->ExchangeInstID, p->InstrumentID, p->ProductID, p->StartDelivDate, p->OpenDate, p->VolumeMultiple, p->LongMarginRatio, p->MinMarketOrderVolume, p->ExpireDate, p->DeliveryMonth, p->InstLifePhase, p->ShortMarginRatio, p->EndDelivDate, p->IsTrading, p->MinLimitOrderVolume, p->ProductClass, p->PositionDateType);
}
CThostFtdcInstrumentField * from_CThostFtdcInstrumentField(PyObject * p){
  CThostFtdcInstrumentField *t = (CThostFtdcInstrumentField *)calloc(1, sizeof(CThostFtdcInstrumentField));
  memset(t,0,sizeof(CThostFtdcInstrumentField));
  //最小变动价位
  t->PriceTick =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PriceTick"));
  //创建日
  strcpy(t->CreateDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CreateDate"),"gbk","Error!")));
  //持仓类型
  //enum类型
  //THOST_FTDC_PT_Net -> '1', 净持仓
  //THOST_FTDC_PT_Gross -> '2', 综合持仓
  t->PositionType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PositionType"),"gbk","Error!"))[0];
  //限价单最大下单量
  t->MaxLimitOrderVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MaxLimitOrderVolume"));
  //交割年份
  t->DeliveryYear =   PyLong_AsLong(PyObject_GetAttrString(p, "DeliveryYear"));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //市价单最大下单量
  t->MaxMarketOrderVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MaxMarketOrderVolume"));
  //是否使用大额单边保证金算法
  //enum类型
  //THOST_FTDC_MMSA_NO -> '0', 不使用大额单边保证金算法
  //THOST_FTDC_MMSA_YES -> '1', 使用大额单边保证金算法
  t->MaxMarginSideAlgorithm =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MaxMarginSideAlgorithm"),"gbk","Error!"))[0];
  //合约名称
  strcpy(t->InstrumentName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentName"),"gbk","Error!")));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //产品代码
  strcpy(t->ProductID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProductID"),"gbk","Error!")));
  //开始交割日
  strcpy(t->StartDelivDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "StartDelivDate"),"gbk","Error!")));
  //上市日
  strcpy(t->OpenDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OpenDate"),"gbk","Error!")));
  //合约数量乘数
  t->VolumeMultiple =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeMultiple"));
  //多头保证金率
  t->LongMarginRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatio"));
  //市价单最小下单量
  t->MinMarketOrderVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MinMarketOrderVolume"));
  //到期日
  strcpy(t->ExpireDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExpireDate"),"gbk","Error!")));
  //交割月
  t->DeliveryMonth =   PyLong_AsLong(PyObject_GetAttrString(p, "DeliveryMonth"));
  //合约生命周期状态
  //enum类型
  //THOST_FTDC_IP_Expired -> '3', 到期
  //THOST_FTDC_IP_NotStart -> '0', 未上市
  //THOST_FTDC_IP_Started -> '1', 上市
  //THOST_FTDC_IP_Pause -> '2', 停牌
  t->InstLifePhase =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstLifePhase"),"gbk","Error!"))[0];
  //空头保证金率
  t->ShortMarginRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatio"));
  //结束交割日
  strcpy(t->EndDelivDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "EndDelivDate"),"gbk","Error!")));
  //当前是否交易
  t->IsTrading =   PyLong_AsLong(PyObject_GetAttrString(p, "IsTrading"));
  //限价单最小下单量
  t->MinLimitOrderVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MinLimitOrderVolume"));
  //产品类型
  //enum类型
  //THOST_FTDC_PC_Spot -> '4', 即期
  //THOST_FTDC_PC_Futures -> '1', 期货
  //THOST_FTDC_PC_Options -> '2', 期权
  //THOST_FTDC_PC_Combination -> '3', 组合
  //THOST_FTDC_PC_EFP -> '5', 期转现
  t->ProductClass =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProductClass"),"gbk","Error!"))[0];
  //持仓日期类型
  //enum类型
  //THOST_FTDC_PDT_NoUseHistory -> '2', 不使用历史持仓
  //THOST_FTDC_PDT_UseHistory -> '1', 使用历史持仓
  t->PositionDateType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PositionDateType"),"gbk","Error!"))[0];

  return t;
};

//验证期货资金密码
PyObject * new_CThostFtdcVerifyFuturePasswordField(CThostFtdcVerifyFuturePasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyFuturePasswordField", (char*)"yyyyyiyiyyiyyyycyiy",
p->TradingDay, p->BrokerID, p->BankID, p->BankPassWord, p->AccountID, p->PlateSerial, p->CurrencyID, p->InstallID, p->TradeDate, p->BankSerial, p->TID, p->BankAccount, p->TradeTime, p->TradeCode, p->BankBranchID, p->LastFragment, p->Password, p->SessionID, p->BrokerBranchID);
}
CThostFtdcVerifyFuturePasswordField * from_CThostFtdcVerifyFuturePasswordField(PyObject * p){
  CThostFtdcVerifyFuturePasswordField *t = (CThostFtdcVerifyFuturePasswordField *)calloc(1, sizeof(CThostFtdcVerifyFuturePasswordField));
  memset(t,0,sizeof(CThostFtdcVerifyFuturePasswordField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));

  return t;
};

//查询银行交易明细请求，TradeCode=204999
PyObject * new_CThostFtdcTransferQryDetailReqField(CThostFtdcTransferQryDetailReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryDetailReqField", (char*)"y",
p->FutureAccount);
}
CThostFtdcTransferQryDetailReqField * from_CThostFtdcTransferQryDetailReqField(PyObject * p){
  CThostFtdcTransferQryDetailReqField *t = (CThostFtdcTransferQryDetailReqField *)calloc(1, sizeof(CThostFtdcTransferQryDetailReqField));
  memset(t,0,sizeof(CThostFtdcTransferQryDetailReqField));
  //期货资金账户
  strcpy(t->FutureAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccount"),"gbk","Error!")));

  return t;
};

//正在同步中的投资者持仓
PyObject * new_CThostFtdcSyncingInvestorPositionField(CThostFtdcSyncingInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInvestorPositionField", (char*)"ydidicdidddcydiddidyddddidddiddidiydiidc",
p->TradingDay, p->CloseProfitByDate, p->OpenVolume, p->CloseProfit, p->YdPosition, p->HedgeFlag, p->OpenCost, p->CombLongFrozen, p->Commission, p->MarginRateByVolume, p->UseMargin, p->PositionDate, p->InstrumentID, p->CloseProfitByTrade, p->SettlementID, p->PositionProfit, p->PreMargin, p->ShortFrozen, p->OpenAmount, p->BrokerID, p->CashIn, p->FrozenCash, p->MarginRateByMoney, p->FrozenCommission, p->Position, p->LongFrozenAmount, p->CloseAmount, p->PositionCost, p->CloseVolume, p->ExchangeMargin, p->ShortFrozenAmount, p->CombPosition, p->SettlementPrice, p->CombShortFrozen, p->InvestorID, p->FrozenMargin, p->TodayPosition, p->LongFrozen, p->PreSettlementPrice, p->PosiDirection);
}
CThostFtdcSyncingInvestorPositionField * from_CThostFtdcSyncingInvestorPositionField(PyObject * p){
  CThostFtdcSyncingInvestorPositionField *t = (CThostFtdcSyncingInvestorPositionField *)calloc(1, sizeof(CThostFtdcSyncingInvestorPositionField));
  memset(t,0,sizeof(CThostFtdcSyncingInvestorPositionField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //逐日盯市平仓盈亏
  t->CloseProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
  //开仓量
  t->OpenVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "OpenVolume"));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //上日持仓
  t->YdPosition =   PyLong_AsLong(PyObject_GetAttrString(p, "YdPosition"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //开仓成本
  t->OpenCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenCost"));
  //组合多头冻结
  t->CombLongFrozen =   PyLong_AsLong(PyObject_GetAttrString(p, "CombLongFrozen"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //保证金率(按手数)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //占用的保证金
  t->UseMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UseMargin"));
  //持仓日期
  //enum类型
  //THOST_FTDC_PSD_History -> '2', 历史持仓
  //THOST_FTDC_PSD_Today -> '1', 今日持仓
  t->PositionDate =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PositionDate"),"gbk","Error!"))[0];
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //逐笔对冲平仓盈亏
  t->CloseProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //上次占用的保证金
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //空头冻结
  t->ShortFrozen =   PyLong_AsLong(PyObject_GetAttrString(p, "ShortFrozen"));
  //开仓金额
  t->OpenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenAmount"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //冻结的资金
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //保证金率
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //冻结的手续费
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //今日持仓
  t->Position =   PyLong_AsLong(PyObject_GetAttrString(p, "Position"));
  //开仓冻结金额
  t->LongFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenAmount"));
  //平仓金额
  t->CloseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
  //持仓成本
  t->PositionCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionCost"));
  //平仓量
  t->CloseVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //开仓冻结金额
  t->ShortFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenAmount"));
  //组合成交形成的持仓
  t->CombPosition =   PyLong_AsLong(PyObject_GetAttrString(p, "CombPosition"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //组合空头冻结
  t->CombShortFrozen =   PyLong_AsLong(PyObject_GetAttrString(p, "CombShortFrozen"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //今日持仓
  t->TodayPosition =   PyLong_AsLong(PyObject_GetAttrString(p, "TodayPosition"));
  //多头冻结
  t->LongFrozen =   PyLong_AsLong(PyObject_GetAttrString(p, "LongFrozen"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //持仓多空方向
  //enum类型
  //THOST_FTDC_PD_Long -> '2', 多头
  //THOST_FTDC_PD_Net -> '1', 净
  //THOST_FTDC_PD_Short -> '3', 空头
  t->PosiDirection =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PosiDirection"),"gbk","Error!"))[0];

  return t;
};

//手工同步用户动态令牌
PyObject * new_CThostFtdcManualSyncBrokerUserOTPField(CThostFtdcManualSyncBrokerUserOTPField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcManualSyncBrokerUserOTPField", (char*)"ycyyy",
p->BrokerID, p->OTPType, p->SecondOTP, p->FirstOTP, p->UserID);
}
CThostFtdcManualSyncBrokerUserOTPField * from_CThostFtdcManualSyncBrokerUserOTPField(PyObject * p){
  CThostFtdcManualSyncBrokerUserOTPField *t = (CThostFtdcManualSyncBrokerUserOTPField *)calloc(1, sizeof(CThostFtdcManualSyncBrokerUserOTPField));
  memset(t,0,sizeof(CThostFtdcManualSyncBrokerUserOTPField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //动态令牌类型
  //enum类型
  //THOST_FTDC_OTP_TOTP -> '1', 时间令牌
  //THOST_FTDC_OTP_NONE -> '0', 无动态令牌
  t->OTPType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OTPType"),"gbk","Error!"))[0];
  //第二个动态密码
  strcpy(t->SecondOTP, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecondOTP"),"gbk","Error!")));
  //第一个动态密码
  strcpy(t->FirstOTP, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FirstOTP"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//投资者组合持仓明细
PyObject * new_CThostFtdcInvestorPositionCombineDetailField(CThostFtdcInvestorPositionCombineDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorPositionCombineDetailField", (char*)"yyyddyidccdyyyiiyyii",
p->TradingDay, p->BrokerID, p->ExchangeID, p->ExchMargin, p->Margin, p->OpenDate, p->LegID, p->MarginRateByMoney, p->Direction, p->HedgeFlag, p->MarginRateByVolume, p->TradeID, p->CombInstrumentID, p->ComTradeID, p->TotalAmt, p->TradeGroupID, p->InvestorID, p->InstrumentID, p->LegMultiple, p->SettlementID);
}
CThostFtdcInvestorPositionCombineDetailField * from_CThostFtdcInvestorPositionCombineDetailField(PyObject * p){
  CThostFtdcInvestorPositionCombineDetailField *t = (CThostFtdcInvestorPositionCombineDetailField *)calloc(1, sizeof(CThostFtdcInvestorPositionCombineDetailField));
  memset(t,0,sizeof(CThostFtdcInvestorPositionCombineDetailField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //交易所保证金
  t->ExchMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMargin"));
  //投资者保证金
  t->Margin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Margin"));
  //开仓日期
  strcpy(t->OpenDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OpenDate"),"gbk","Error!")));
  //单腿编号
  t->LegID =   PyLong_AsLong(PyObject_GetAttrString(p, "LegID"));
  //保证金率
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //买卖
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //保证金率(按手数)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //撮合编号
  strcpy(t->TradeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeID"),"gbk","Error!")));
  //组合持仓合约编码
  strcpy(t->CombInstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombInstrumentID"),"gbk","Error!")));
  //组合编号
  strcpy(t->ComTradeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ComTradeID"),"gbk","Error!")));
  //持仓量
  t->TotalAmt =   PyLong_AsLong(PyObject_GetAttrString(p, "TotalAmt"));
  //成交组号
  t->TradeGroupID =   PyLong_AsLong(PyObject_GetAttrString(p, "TradeGroupID"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //单腿乘数
  t->LegMultiple =   PyLong_AsLong(PyObject_GetAttrString(p, "LegMultiple"));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));

  return t;
};

//结算引用
PyObject * new_CThostFtdcSettlementRefField(CThostFtdcSettlementRefField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSettlementRefField", (char*)"yi",
p->TradingDay, p->SettlementID);
}
CThostFtdcSettlementRefField * from_CThostFtdcSettlementRefField(PyObject * p){
  CThostFtdcSettlementRefField *t = (CThostFtdcSettlementRefField *)calloc(1, sizeof(CThostFtdcSettlementRefField));
  memset(t,0,sizeof(CThostFtdcSettlementRefField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));

  return t;
};

//经纪公司可提资金算法表
PyObject * new_CThostFtdcBrokerWithdrawAlgorithmField(CThostFtdcBrokerWithdrawAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerWithdrawAlgorithmField", (char*)"ccdiycdyc",
p->WithdrawAlgorithm, p->IncludeCloseProfit, p->FundMortgageRatio, p->IsBrokerUserEvent, p->BrokerID, p->AllWithoutTrade, p->UsingRatio, p->CurrencyID, p->AvailIncludeCloseProfit);
}
CThostFtdcBrokerWithdrawAlgorithmField * from_CThostFtdcBrokerWithdrawAlgorithmField(PyObject * p){
  CThostFtdcBrokerWithdrawAlgorithmField *t = (CThostFtdcBrokerWithdrawAlgorithmField *)calloc(1, sizeof(CThostFtdcBrokerWithdrawAlgorithmField));
  memset(t,0,sizeof(CThostFtdcBrokerWithdrawAlgorithmField));
  //可提资金算法
  //enum类型
  //THOST_FTDC_AG_OnlyLost -> '2', 浮盈不计，浮亏计
  //THOST_FTDC_AG_None -> '4', 浮盈浮亏都不计算
  //THOST_FTDC_AG_OnlyGain -> '3', 浮盈计，浮亏不计
  //THOST_FTDC_AG_All -> '1', 浮盈浮亏都计算
  t->WithdrawAlgorithm =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "WithdrawAlgorithm"),"gbk","Error!"))[0];
  //可提是否包含平仓盈利
  //enum类型
  //THOST_FTDC_ICP_NotInclude -> '2', 不包含平仓盈利
  //THOST_FTDC_ICP_Include -> '0', 包含平仓盈利
  t->IncludeCloseProfit =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IncludeCloseProfit"),"gbk","Error!"))[0];
  //货币质押比率
  t->FundMortgageRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageRatio"));
  //是否启用用户事件
  t->IsBrokerUserEvent =   PyLong_AsLong(PyObject_GetAttrString(p, "IsBrokerUserEvent"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //本日无仓且无成交客户是否受可提比例限制
  //enum类型
  //THOST_FTDC_AWT_Enable -> '0', 无仓无成交不受可提比例限制
  //THOST_FTDC_AWT_NoHoldEnable -> '3', 无仓不受可提比例限制
  //THOST_FTDC_AWT_Disable -> '2', 受可提比例限制
  t->AllWithoutTrade =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AllWithoutTrade"),"gbk","Error!"))[0];
  //资金使用率
  t->UsingRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UsingRatio"));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //可用是否包含平仓盈利
  //enum类型
  //THOST_FTDC_ICP_NotInclude -> '2', 不包含平仓盈利
  //THOST_FTDC_ICP_Include -> '0', 包含平仓盈利
  t->AvailIncludeCloseProfit =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AvailIncludeCloseProfit"),"gbk","Error!"))[0];

  return t;
};

//查询错误报单操作
PyObject * new_CThostFtdcQryErrOrderActionField(CThostFtdcQryErrOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryErrOrderActionField", (char*)"yy",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryErrOrderActionField * from_CThostFtdcQryErrOrderActionField(PyObject * p){
  CThostFtdcQryErrOrderActionField *t = (CThostFtdcQryErrOrderActionField *)calloc(1, sizeof(CThostFtdcQryErrOrderActionField));
  memset(t,0,sizeof(CThostFtdcQryErrOrderActionField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//用户口令变更
PyObject * new_CThostFtdcUserPasswordUpdateField(CThostFtdcUserPasswordUpdateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserPasswordUpdateField", (char*)"yyyy",
p->BrokerID, p->NewPassword, p->OldPassword, p->UserID);
}
CThostFtdcUserPasswordUpdateField * from_CThostFtdcUserPasswordUpdateField(PyObject * p){
  CThostFtdcUserPasswordUpdateField *t = (CThostFtdcUserPasswordUpdateField *)calloc(1, sizeof(CThostFtdcUserPasswordUpdateField));
  memset(t,0,sizeof(CThostFtdcUserPasswordUpdateField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //新的口令
  strcpy(t->NewPassword, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "NewPassword"),"gbk","Error!")));
  //原来的口令
  strcpy(t->OldPassword, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OldPassword"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//转账请求
PyObject * new_CThostFtdcReqTransferField(CThostFtdcReqTransferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqTransferField", (char*)"ycyyycdcyyyyidycyyyyccyiyyyiyyiiidccydcycyy",
p->TradingDay, p->FeePayFlag, p->TradeDate, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->BrokerFee, p->TransferStatus, p->UserID, p->OperNo, p->BankSerial, p->Digest, p->SessionID, p->CustFee, p->BankSecuAcc, p->BankPwdFlag, p->CurrencyID, p->BankBranchID, p->TradeCode, p->Password, p->BankAccType, p->SecuPwdFlag, p->BrokerBranchID, p->RequestID, p->BrokerID, p->BankID, p->Message, p->PlateSerial, p->AccountID, p->CustomerName, p->InstallID, p->TID, p->FutureSerial, p->FutureFetchAmount, p->BankSecuAccType, p->CustType, p->BankAccount, p->TradeAmount, p->LastFragment, p->DeviceID, p->VerifyCertNoFlag, p->BrokerIDByBank, p->TradeTime);
}
CThostFtdcReqTransferField * from_CThostFtdcReqTransferField(PyObject * p){
  CThostFtdcReqTransferField *t = (CThostFtdcReqTransferField *)calloc(1, sizeof(CThostFtdcReqTransferField));
  memset(t,0,sizeof(CThostFtdcReqTransferField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //费用支付标志
  //enum类型
  //THOST_FTDC_FPF_BEN -> '0', 由受益方支付费用
  //THOST_FTDC_FPF_SHA -> '2', 由发送方支付发起的费用，受益方支付接受的费用
  //THOST_FTDC_FPF_OUR -> '1', 由发送方支付费用
  t->FeePayFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FeePayFlag"),"gbk","Error!"))[0];
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //应收期货公司费用
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //转账交易状态
  //enum类型
  //THOST_FTDC_TRFS_Normal -> '0', 正常
  //THOST_FTDC_TRFS_Repealed -> '1', 被冲正
  t->TransferStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TransferStatus"),"gbk","Error!"))[0];
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //应收客户费用
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAcc"),"gbk","Error!")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //发送方给接收方的消息
  strcpy(t->Message, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Message"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //期货公司流水号
  t->FutureSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //期货可取金额
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankSecuAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAccType"),"gbk","Error!"))[0];
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));

  return t;
};

//查询预埋单
PyObject * new_CThostFtdcQryParkedOrderField(CThostFtdcQryParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryParkedOrderField", (char*)"yyyy",
p->InvestorID, p->BrokerID, p->ExchangeID, p->InstrumentID);
}
CThostFtdcQryParkedOrderField * from_CThostFtdcQryParkedOrderField(PyObject * p){
  CThostFtdcQryParkedOrderField *t = (CThostFtdcQryParkedOrderField *)calloc(1, sizeof(CThostFtdcQryParkedOrderField));
  memset(t,0,sizeof(CThostFtdcQryParkedOrderField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));

  return t;
};

//转帐银行
PyObject * new_CThostFtdcTransferBankField(CThostFtdcTransferBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferBankField", (char*)"yiyy",
p->BankID, p->IsActive, p->BankName, p->BankBrchID);
}
CThostFtdcTransferBankField * from_CThostFtdcTransferBankField(PyObject * p){
  CThostFtdcTransferBankField *t = (CThostFtdcTransferBankField *)calloc(1, sizeof(CThostFtdcTransferBankField));
  memset(t,0,sizeof(CThostFtdcTransferBankField));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //是否活跃
  t->IsActive =   PyLong_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //银行名称
  strcpy(t->BankName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankName"),"gbk","Error!")));
  //银行分中心代码
  strcpy(t->BankBrchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBrchID"),"gbk","Error!")));

  return t;
};

//银行发起银行资金转期货响应
PyObject * new_CThostFtdcRspTransferField(CThostFtdcRspTransferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspTransferField", (char*)"dyiyiycyyyicdyccyyyyccyyidyyycyyiyycycyiiycyd",
p->BrokerFee, p->TradeDate, p->PlateSerial, p->ErrorMsg, p->ErrorID, p->BankBranchID, p->SecuPwdFlag, p->BrokerID, p->AccountID, p->DeviceID, p->InstallID, p->BankSecuAccType, p->TradeAmount, p->CurrencyID, p->BankPwdFlag, p->FeePayFlag, p->TradingDay, p->BrokerBranchID, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->TransferStatus, p->UserID, p->BankSerial, p->SessionID, p->CustFee, p->TradeTime, p->TradeCode, p->Password, p->BankAccType, p->OperNo, p->Digest, p->RequestID, p->BankID, p->BankSecuAcc, p->VerifyCertNoFlag, p->CustomerName, p->CustType, p->BrokerIDByBank, p->FutureSerial, p->TID, p->BankAccount, p->LastFragment, p->Message, p->FutureFetchAmount);
}
CThostFtdcRspTransferField * from_CThostFtdcRspTransferField(PyObject * p){
  CThostFtdcRspTransferField *t = (CThostFtdcRspTransferField *)calloc(1, sizeof(CThostFtdcRspTransferField));
  memset(t,0,sizeof(CThostFtdcRspTransferField));
  //应收期货公司费用
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankSecuAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAccType"),"gbk","Error!"))[0];
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //费用支付标志
  //enum类型
  //THOST_FTDC_FPF_BEN -> '0', 由受益方支付费用
  //THOST_FTDC_FPF_SHA -> '2', 由发送方支付发起的费用，受益方支付接受的费用
  //THOST_FTDC_FPF_OUR -> '1', 由发送方支付费用
  t->FeePayFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FeePayFlag"),"gbk","Error!"))[0];
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //转账交易状态
  //enum类型
  //THOST_FTDC_TRFS_Normal -> '0', 正常
  //THOST_FTDC_TRFS_Repealed -> '1', 被冲正
  t->TransferStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TransferStatus"),"gbk","Error!"))[0];
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //应收客户费用
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAcc"),"gbk","Error!")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //期货公司流水号
  t->FutureSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //发送方给接收方的消息
  strcpy(t->Message, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Message"),"gbk","Error!")));
  //期货可取金额
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));

  return t;
};

//查询保证金监管系统经纪公司密钥
PyObject * new_CThostFtdcQryCFMMCBrokerKeyField(CThostFtdcQryCFMMCBrokerKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCFMMCBrokerKeyField", (char*)"y",
p->BrokerID);
}
CThostFtdcQryCFMMCBrokerKeyField * from_CThostFtdcQryCFMMCBrokerKeyField(PyObject * p){
  CThostFtdcQryCFMMCBrokerKeyField *t = (CThostFtdcQryCFMMCBrokerKeyField *)calloc(1, sizeof(CThostFtdcQryCFMMCBrokerKeyField));
  memset(t,0,sizeof(CThostFtdcQryCFMMCBrokerKeyField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//查询交易所调整保证金率
PyObject * new_CThostFtdcQryExchangeMarginRateAdjustField(CThostFtdcQryExchangeMarginRateAdjustField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeMarginRateAdjustField", (char*)"ycy",
p->BrokerID, p->HedgeFlag, p->InstrumentID);
}
CThostFtdcQryExchangeMarginRateAdjustField * from_CThostFtdcQryExchangeMarginRateAdjustField(PyObject * p){
  CThostFtdcQryExchangeMarginRateAdjustField *t = (CThostFtdcQryExchangeMarginRateAdjustField *)calloc(1, sizeof(CThostFtdcQryExchangeMarginRateAdjustField));
  memset(t,0,sizeof(CThostFtdcQryExchangeMarginRateAdjustField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));

  return t;
};

//期商签到通知
PyObject * new_CThostFtdcNotifyFutureSignInField(CThostFtdcNotifyFutureSignInField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifyFutureSignInField", (char*)"yyyiyyiyicyyyyiyyyiyiyyyy",
p->TradingDay, p->TradeDate, p->DeviceID, p->PlateSerial, p->UserID, p->BankSerial, p->SessionID, p->ErrorMsg, p->ErrorID, p->LastFragment, p->BankBranchID, p->TradeCode, p->OperNo, p->Digest, p->RequestID, p->BrokerID, p->BankID, p->PinKey, p->InstallID, p->MacKey, p->TID, p->TradeTime, p->CurrencyID, p->BrokerBranchID, p->BrokerIDByBank);
}
CThostFtdcNotifyFutureSignInField * from_CThostFtdcNotifyFutureSignInField(PyObject * p){
  CThostFtdcNotifyFutureSignInField *t = (CThostFtdcNotifyFutureSignInField *)calloc(1, sizeof(CThostFtdcNotifyFutureSignInField));
  memset(t,0,sizeof(CThostFtdcNotifyFutureSignInField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //PIN密钥
  strcpy(t->PinKey, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PinKey"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //MAC密钥
  strcpy(t->MacKey, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MacKey"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));

  return t;
};

//期商签到响应
PyObject * new_CThostFtdcRspFutureSignInField(CThostFtdcRspFutureSignInField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspFutureSignInField", (char*)"yyyiyyiyicyyyyiyyyiyiyyyy",
p->TradingDay, p->TradeDate, p->DeviceID, p->PlateSerial, p->UserID, p->BankSerial, p->SessionID, p->ErrorMsg, p->ErrorID, p->LastFragment, p->BankBranchID, p->TradeCode, p->OperNo, p->Digest, p->RequestID, p->BrokerID, p->BankID, p->PinKey, p->InstallID, p->MacKey, p->TID, p->TradeTime, p->CurrencyID, p->BrokerBranchID, p->BrokerIDByBank);
}
CThostFtdcRspFutureSignInField * from_CThostFtdcRspFutureSignInField(PyObject * p){
  CThostFtdcRspFutureSignInField *t = (CThostFtdcRspFutureSignInField *)calloc(1, sizeof(CThostFtdcRspFutureSignInField));
  memset(t,0,sizeof(CThostFtdcRspFutureSignInField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //PIN密钥
  strcpy(t->PinKey, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PinKey"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //MAC密钥
  strcpy(t->MacKey, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MacKey"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));

  return t;
};

//用户登录请求
PyObject * new_CThostFtdcReqUserLoginField(CThostFtdcReqUserLoginField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqUserLoginField", (char*)"yyyyyyyyyy",
p->TradingDay, p->BrokerID, p->ClientIPAddress, p->InterfaceProductInfo, p->UserProductInfo, p->UserID, p->Password, p->MacAddress, p->ProtocolInfo, p->OneTimePassword);
}
CThostFtdcReqUserLoginField * from_CThostFtdcReqUserLoginField(PyObject * p){
  CThostFtdcReqUserLoginField *t = (CThostFtdcReqUserLoginField *)calloc(1, sizeof(CThostFtdcReqUserLoginField));
  memset(t,0,sizeof(CThostFtdcReqUserLoginField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //终端IP地址
  strcpy(t->ClientIPAddress, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientIPAddress"),"gbk","Error!")));
  //接口端产品信息
  strcpy(t->InterfaceProductInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InterfaceProductInfo"),"gbk","Error!")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserProductInfo"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //Mac地址
  strcpy(t->MacAddress, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MacAddress"),"gbk","Error!")));
  //协议信息
  strcpy(t->ProtocolInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProtocolInfo"),"gbk","Error!")));
  //动态密码
  strcpy(t->OneTimePassword, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OneTimePassword"),"gbk","Error!")));

  return t;
};

//联系人
PyObject * new_CThostFtdcLinkManField(CThostFtdcLinkManField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLinkManField", (char*)"yyycyycyyyyi",
p->ZipCode, p->BrokerID, p->IdentifiedCardNo, p->IdentifiedCardType, p->Telephone, p->Address, p->PersonType, p->PersonName, p->PersonFullName, p->InvestorID, p->UOAZipCode, p->Priority);
}
CThostFtdcLinkManField * from_CThostFtdcLinkManField(PyObject * p){
  CThostFtdcLinkManField *t = (CThostFtdcLinkManField *)calloc(1, sizeof(CThostFtdcLinkManField));
  memset(t,0,sizeof(CThostFtdcLinkManField));
  //邮政编码
  strcpy(t->ZipCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ZipCode"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdentifiedCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardType"),"gbk","Error!"))[0];
  //联系电话
  strcpy(t->Telephone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Telephone"),"gbk","Error!")));
  //通讯地址
  strcpy(t->Address, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Address"),"gbk","Error!")));
  //联系人类型
  //enum类型
  //THOST_FTDC_PST_Ledger -> '8', 分户管理资产负责人
  //THOST_FTDC_PST_Open -> '2', 开户授权人
  //THOST_FTDC_PST_LinkMan -> '7', 投资者联系人
  //THOST_FTDC_PST_CorporationRefer -> 'E', 法人代表参考证件
  //THOST_FTDC_PST_Company -> '5', 法人
  //THOST_FTDC_PST_Corporation -> '6', 法人代表
  //THOST_FTDC_PST_TrusteeOpen -> 'B', 托（保）管机构开户授权人
  //THOST_FTDC_PST_Order -> '1', 指定下单人
  //THOST_FTDC_PST_Settlement -> '4', 结算单确认人
  //THOST_FTDC_PST_Fund -> '3', 资金调拨人
  //THOST_FTDC_PST_ForeignerRefer -> 'D', 境外自然人参考证件
  //THOST_FTDC_PST_Trustee -> '9', 托（保）管人
  //THOST_FTDC_PST_TrusteeContact -> 'C', 托（保）管机构联系人
  //THOST_FTDC_PST_TrusteeCorporation -> 'A', 托（保）管机构法人代表
  t->PersonType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PersonType"),"gbk","Error!"))[0];
  //名称
  strcpy(t->PersonName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PersonName"),"gbk","Error!")));
  //全称
  strcpy(t->PersonFullName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PersonFullName"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //开户邮政编码
  strcpy(t->UOAZipCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UOAZipCode"),"gbk","Error!")));
  //优先级
  t->Priority =   PyLong_AsLong(PyObject_GetAttrString(p, "Priority"));

  return t;
};

//查询错误报单
PyObject * new_CThostFtdcQryErrOrderField(CThostFtdcQryErrOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryErrOrderField", (char*)"yy",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryErrOrderField * from_CThostFtdcQryErrOrderField(PyObject * p){
  CThostFtdcQryErrOrderField *t = (CThostFtdcQryErrOrderField *)calloc(1, sizeof(CThostFtdcQryErrOrderField));
  memset(t,0,sizeof(CThostFtdcQryErrOrderField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//查询合约保证金率
PyObject * new_CThostFtdcQryInstrumentMarginRateField(CThostFtdcQryInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentMarginRateField", (char*)"yycy",
p->InvestorID, p->BrokerID, p->HedgeFlag, p->InstrumentID);
}
CThostFtdcQryInstrumentMarginRateField * from_CThostFtdcQryInstrumentMarginRateField(PyObject * p){
  CThostFtdcQryInstrumentMarginRateField *t = (CThostFtdcQryInstrumentMarginRateField *)calloc(1, sizeof(CThostFtdcQryInstrumentMarginRateField));
  memset(t,0,sizeof(CThostFtdcQryInstrumentMarginRateField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));

  return t;
};

//查询客户通知
PyObject * new_CThostFtdcQryNoticeField(CThostFtdcQryNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryNoticeField", (char*)"y",
p->BrokerID);
}
CThostFtdcQryNoticeField * from_CThostFtdcQryNoticeField(PyObject * p){
  CThostFtdcQryNoticeField *t = (CThostFtdcQryNoticeField *)calloc(1, sizeof(CThostFtdcQryNoticeField));
  memset(t,0,sizeof(CThostFtdcQryNoticeField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//删除预埋撤单
PyObject * new_CThostFtdcRemoveParkedOrderActionField(CThostFtdcRemoveParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRemoveParkedOrderActionField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->ParkedOrderActionID);
}
CThostFtdcRemoveParkedOrderActionField * from_CThostFtdcRemoveParkedOrderActionField(PyObject * p){
  CThostFtdcRemoveParkedOrderActionField *t = (CThostFtdcRemoveParkedOrderActionField *)calloc(1, sizeof(CThostFtdcRemoveParkedOrderActionField));
  memset(t,0,sizeof(CThostFtdcRemoveParkedOrderActionField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //预埋撤单编号
  strcpy(t->ParkedOrderActionID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParkedOrderActionID"),"gbk","Error!")));

  return t;
};

//查询经纪公司会员代码
PyObject * new_CThostFtdcQryPartBrokerField(CThostFtdcQryPartBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryPartBrokerField", (char*)"yyy",
p->BrokerID, p->ParticipantID, p->ExchangeID);
}
CThostFtdcQryPartBrokerField * from_CThostFtdcQryPartBrokerField(PyObject * p){
  CThostFtdcQryPartBrokerField *t = (CThostFtdcQryPartBrokerField *)calloc(1, sizeof(CThostFtdcQryPartBrokerField));
  memset(t,0,sizeof(CThostFtdcQryPartBrokerField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//查询交易所状态
PyObject * new_CThostFtdcQryExchangeSequenceField(CThostFtdcQryExchangeSequenceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeSequenceField", (char*)"y",
p->ExchangeID);
}
CThostFtdcQryExchangeSequenceField * from_CThostFtdcQryExchangeSequenceField(PyObject * p){
  CThostFtdcQryExchangeSequenceField *t = (CThostFtdcQryExchangeSequenceField *)calloc(1, sizeof(CThostFtdcQryExchangeSequenceField));
  memset(t,0,sizeof(CThostFtdcQryExchangeSequenceField));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//管理用户
PyObject * new_CThostFtdcSuperUserField(CThostFtdcSuperUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSuperUserField", (char*)"yyyi",
p->UserID, p->Password, p->UserName, p->IsActive);
}
CThostFtdcSuperUserField * from_CThostFtdcSuperUserField(PyObject * p){
  CThostFtdcSuperUserField *t = (CThostFtdcSuperUserField *)calloc(1, sizeof(CThostFtdcSuperUserField));
  memset(t,0,sizeof(CThostFtdcSuperUserField));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //用户名称
  strcpy(t->UserName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserName"),"gbk","Error!")));
  //是否活跃
  t->IsActive =   PyLong_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//查询投资者持仓
PyObject * new_CThostFtdcQryInvestorPositionField(CThostFtdcQryInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorPositionField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->InstrumentID);
}
CThostFtdcQryInvestorPositionField * from_CThostFtdcQryInvestorPositionField(PyObject * p){
  CThostFtdcQryInvestorPositionField *t = (CThostFtdcQryInvestorPositionField *)calloc(1, sizeof(CThostFtdcQryInvestorPositionField));
  memset(t,0,sizeof(CThostFtdcQryInvestorPositionField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));

  return t;
};

//正在同步中的合约手续费率
PyObject * new_CThostFtdcSyncingInstrumentCommissionRateField(CThostFtdcSyncingInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInstrumentCommissionRateField", (char*)"dyddcyyddd",
p->OpenRatioByVolume, p->BrokerID, p->OpenRatioByMoney, p->CloseRatioByMoney, p->InvestorRange, p->InvestorID, p->InstrumentID, p->CloseTodayRatioByMoney, p->CloseTodayRatioByVolume, p->CloseRatioByVolume);
}
CThostFtdcSyncingInstrumentCommissionRateField * from_CThostFtdcSyncingInstrumentCommissionRateField(PyObject * p){
  CThostFtdcSyncingInstrumentCommissionRateField *t = (CThostFtdcSyncingInstrumentCommissionRateField *)calloc(1, sizeof(CThostFtdcSyncingInstrumentCommissionRateField));
  memset(t,0,sizeof(CThostFtdcSyncingInstrumentCommissionRateField));
  //开仓手续费
  t->OpenRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByVolume"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //开仓手续费率
  t->OpenRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByMoney"));
  //平仓手续费率
  t->CloseRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByMoney"));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  //THOST_FTDC_IR_All -> '1', 所有
  t->InvestorRange =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorRange"),"gbk","Error!"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //平今手续费率
  t->CloseTodayRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByMoney"));
  //平今手续费
  t->CloseTodayRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByVolume"));
  //平仓手续费
  t->CloseRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByVolume"));

  return t;
};

//客户开销户信息表
PyObject * new_CThostFtdcAccountregisterField(CThostFtdcAccountregisterField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcAccountregisterField", (char*)"yycycyccyiyyyyyyy",
p->BrokerID, p->BankID, p->BankAccType, p->AccountID, p->IdCardType, p->CustomerName, p->CustType, p->OpenOrDestroy, p->RegDate, p->TID, p->BankAccount, p->TradeDay, p->BankBranchID, p->CurrencyID, p->BrokerBranchID, p->OutDate, p->IdentifiedCardNo);
}
CThostFtdcAccountregisterField * from_CThostFtdcAccountregisterField(PyObject * p){
  CThostFtdcAccountregisterField *t = (CThostFtdcAccountregisterField *)calloc(1, sizeof(CThostFtdcAccountregisterField));
  memset(t,0,sizeof(CThostFtdcAccountregisterField));
  //期货公司编码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行编码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //开销户类别
  //enum类型
  //THOST_FTDC_OOD_Open -> '1', 开户
  //THOST_FTDC_OOD_Destroy -> '0', 销户
  t->OpenOrDestroy =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OpenOrDestroy"),"gbk","Error!"))[0];
  //签约日期
  strcpy(t->RegDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RegDate"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDay"),"gbk","Error!")));
  //银行分支机构编码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //期货公司分支机构编码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //解约日期
  strcpy(t->OutDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OutDate"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));

  return t;
};

//合约状态
PyObject * new_CThostFtdcInstrumentStatusField(CThostFtdcInstrumentStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentStatusField", (char*)"cyciyyyy",
p->InstrumentStatus, p->EnterTime, p->EnterReason, p->TradingSegmentSN, p->ExchangeInstID, p->InstrumentID, p->SettlementGroupID, p->ExchangeID);
}
CThostFtdcInstrumentStatusField * from_CThostFtdcInstrumentStatusField(PyObject * p){
  CThostFtdcInstrumentStatusField *t = (CThostFtdcInstrumentStatusField *)calloc(1, sizeof(CThostFtdcInstrumentStatusField));
  memset(t,0,sizeof(CThostFtdcInstrumentStatusField));
  //合约交易状态
  //enum类型
  //THOST_FTDC_IS_NoTrading -> '1', 非交易
  //THOST_FTDC_IS_Continous -> '2', 连续交易
  //THOST_FTDC_IS_AuctionOrdering -> '3', 集合竞价报单
  //THOST_FTDC_IS_AuctionBalance -> '4', 集合竞价价格平衡
  //THOST_FTDC_IS_BeforeTrading -> '0', 开盘前
  //THOST_FTDC_IS_AuctionMatch -> '5', 集合竞价撮合
  //THOST_FTDC_IS_Closed -> '6', 收盘
  t->InstrumentStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentStatus"),"gbk","Error!"))[0];
  //进入本状态时间
  strcpy(t->EnterTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "EnterTime"),"gbk","Error!")));
  //进入本状态原因
  //enum类型
  //THOST_FTDC_IER_Manual -> '2', 手动切换
  //THOST_FTDC_IER_Automatic -> '1', 自动切换
  //THOST_FTDC_IER_Fuse -> '3', 熔断
  t->EnterReason =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "EnterReason"),"gbk","Error!"))[0];
  //交易阶段编号
  t->TradingSegmentSN =   PyLong_AsLong(PyObject_GetAttrString(p, "TradingSegmentSN"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //结算组代码
  strcpy(t->SettlementGroupID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SettlementGroupID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//正在同步中的交易代码
PyObject * new_CThostFtdcSyncingTradingCodeField(CThostFtdcSyncingTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingTradingCodeField", (char*)"yyiycy",
p->BrokerID, p->ClientID, p->IsActive, p->InvestorID, p->ClientIDType, p->ExchangeID);
}
CThostFtdcSyncingTradingCodeField * from_CThostFtdcSyncingTradingCodeField(PyObject * p){
  CThostFtdcSyncingTradingCodeField *t = (CThostFtdcSyncingTradingCodeField *)calloc(1, sizeof(CThostFtdcSyncingTradingCodeField));
  memset(t,0,sizeof(CThostFtdcSyncingTradingCodeField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //是否活跃
  t->IsActive =   PyLong_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //交易编码类型
  //enum类型
  //THOST_FTDC_CIDT_Arbitrage -> '2', 套利
  //THOST_FTDC_CIDT_Speculation -> '1', 投机
  //THOST_FTDC_CIDT_Hedge -> '3', 套保
  t->ClientIDType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientIDType"),"gbk","Error!"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//经济公司是否有在本标示的交易权限
PyObject * new_CThostFtdcBrokerUserRightAssignField(CThostFtdcBrokerUserRightAssignField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserRightAssignField", (char*)"yii",
p->BrokerID, p->Tradeable, p->DRIdentityID);
}
CThostFtdcBrokerUserRightAssignField * from_CThostFtdcBrokerUserRightAssignField(PyObject * p){
  CThostFtdcBrokerUserRightAssignField *t = (CThostFtdcBrokerUserRightAssignField *)calloc(1, sizeof(CThostFtdcBrokerUserRightAssignField));
  memset(t,0,sizeof(CThostFtdcBrokerUserRightAssignField));
  //应用单元代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //能否交易
  t->Tradeable =   PyLong_AsLong(PyObject_GetAttrString(p, "Tradeable"));
  //交易中心代码
  t->DRIdentityID =   PyLong_AsLong(PyObject_GetAttrString(p, "DRIdentityID"));

  return t;
};

//查询银行交易明细请求响应
PyObject * new_CThostFtdcTransferQryDetailRspField(CThostFtdcTransferQryDetailRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryDetailRspField", (char*)"dycyiyiyyyyyyy",
p->TxAmount, p->TradeDate, p->Flag, p->FutureID, p->FutureSerial, p->BankID, p->BankSerial, p->CurrencyCode, p->CertCode, p->TradeTime, p->BankBrchID, p->TradeCode, p->FutureAccount, p->BankAccount);
}
CThostFtdcTransferQryDetailRspField * from_CThostFtdcTransferQryDetailRspField(PyObject * p){
  CThostFtdcTransferQryDetailRspField *t = (CThostFtdcTransferQryDetailRspField *)calloc(1, sizeof(CThostFtdcTransferQryDetailRspField));
  memset(t,0,sizeof(CThostFtdcTransferQryDetailRspField));
  //发生金额
  t->TxAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TxAmount"));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //有效标志
  //enum类型
  //THOST_FTDC_TVF_Invalid -> '0', 无效或失败
  //THOST_FTDC_TVF_Reverse -> '2', 冲正
  //THOST_FTDC_TVF_Valid -> '1', 有效
  t->Flag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Flag"),"gbk","Error!"))[0];
  //期货公司代码
  strcpy(t->FutureID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureID"),"gbk","Error!")));
  //期货流水号
  t->FutureSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //银行流水号
  t->BankSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "BankSerial"));
  //货币代码
  strcpy(t->CurrencyCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyCode"),"gbk","Error!")));
  //证件号码
  strcpy(t->CertCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CertCode"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //银行分中心代码
  strcpy(t->BankBrchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBrchID"),"gbk","Error!")));
  //交易代码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //资金帐号
  strcpy(t->FutureAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccount"),"gbk","Error!")));
  //银行账号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));

  return t;
};

//合约保证金率调整
PyObject * new_CThostFtdcInstrumentMarginRateAdjustField(CThostFtdcInstrumentMarginRateAdjustField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentMarginRateAdjustField", (char*)"ydcyyidcdd",
p->BrokerID, p->ShortMarginRatioByVolume, p->InvestorRange, p->InvestorID, p->InstrumentID, p->IsRelative, p->ShortMarginRatioByMoney, p->HedgeFlag, p->LongMarginRatioByVolume, p->LongMarginRatioByMoney);
}
CThostFtdcInstrumentMarginRateAdjustField * from_CThostFtdcInstrumentMarginRateAdjustField(PyObject * p){
  CThostFtdcInstrumentMarginRateAdjustField *t = (CThostFtdcInstrumentMarginRateAdjustField *)calloc(1, sizeof(CThostFtdcInstrumentMarginRateAdjustField));
  memset(t,0,sizeof(CThostFtdcInstrumentMarginRateAdjustField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //空头保证金费
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  //THOST_FTDC_IR_All -> '1', 所有
  t->InvestorRange =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorRange"),"gbk","Error!"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //是否相对交易所收取
  t->IsRelative =   PyLong_AsLong(PyObject_GetAttrString(p, "IsRelative"));
  //空头保证金率
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //多头保证金费
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));
  //多头保证金率
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));

  return t;
};

//查询经纪公司
PyObject * new_CThostFtdcQryBrokerField(CThostFtdcQryBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerField", (char*)"y",
p->BrokerID);
}
CThostFtdcQryBrokerField * from_CThostFtdcQryBrokerField(PyObject * p){
  CThostFtdcQryBrokerField *t = (CThostFtdcQryBrokerField *)calloc(1, sizeof(CThostFtdcQryBrokerField));
  memset(t,0,sizeof(CThostFtdcQryBrokerField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//日终文件就绪请求
PyObject * new_CThostFtdcReqDayEndFileReadyField(CThostFtdcReqDayEndFileReadyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqDayEndFileReadyField", (char*)"yyyiyyyycyyciy",
p->TradingDay, p->BrokerID, p->BankID, p->PlateSerial, p->TradeDate, p->Digest, p->BankSerial, p->TradeTime, p->FileBusinessCode, p->TradeCode, p->BankBranchID, p->LastFragment, p->SessionID, p->BrokerBranchID);
}
CThostFtdcReqDayEndFileReadyField * from_CThostFtdcReqDayEndFileReadyField(PyObject * p){
  CThostFtdcReqDayEndFileReadyField *t = (CThostFtdcReqDayEndFileReadyField *)calloc(1, sizeof(CThostFtdcReqDayEndFileReadyField));
  memset(t,0,sizeof(CThostFtdcReqDayEndFileReadyField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //文件业务功能
  //enum类型
  //THOST_FTDC_FBC_CorporationMoneyTotal -> 'b', 法人存管银行资金交收汇总
  //THOST_FTDC_FBC_TransferDetails -> '1', 转账交易明细对账
  //THOST_FTDC_FBC_FutureAccountChangeInfoDetails -> '4', 期货账户信息变更明细对账
  //THOST_FTDC_FBC_Others -> '0', 其他
  //THOST_FTDC_FBC_CustInterestNetMoneyDetails -> '9', 客户结息净额明细
  //THOST_FTDC_FBC_CustMoneyDetail -> '5', 客户资金台账余额明细对账
  //THOST_FTDC_FBC_CustAccStatus -> '2', 客户账户状态对账
  //THOST_FTDC_FBC_MainbodyMoneyTotal -> 'c', 主体间资金交收汇总
  //THOST_FTDC_FBC_MainPartMonitorData -> 'd', 总分平衡监管数据
  //THOST_FTDC_FBC_CustMoneySendAndReceiveDetails -> 'a', 客户资金交收明细
  //THOST_FTDC_FBC_BankMoneyMonitorData -> 'f', 协办存管银行资金监管数据
  //THOST_FTDC_FBC_CustMoneyResult -> '7', 客户资金余额对账结果
  //THOST_FTDC_FBC_CustCancelAccountInfo -> '6', 客户销户结息明细对账
  //THOST_FTDC_FBC_OthersExceptionResult -> '8', 其它对账异常结果文件
  //THOST_FTDC_FBC_PreparationMoney -> 'e', 存管银行备付金余额
  //THOST_FTDC_FBC_AccountTradeDetails -> '3', 账户类交易明细对账
  t->FileBusinessCode =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FileBusinessCode"),"gbk","Error!"))[0];
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));

  return t;
};

//资金账户口令域
PyObject * new_CThostFtdcTradingAccountPasswordField(CThostFtdcTradingAccountPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountPasswordField", (char*)"yyyy",
p->BrokerID, p->Password, p->AccountID, p->CurrencyID);
}
CThostFtdcTradingAccountPasswordField * from_CThostFtdcTradingAccountPasswordField(PyObject * p){
  CThostFtdcTradingAccountPasswordField *t = (CThostFtdcTradingAccountPasswordField *)calloc(1, sizeof(CThostFtdcTradingAccountPasswordField));
  memset(t,0,sizeof(CThostFtdcTradingAccountPasswordField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));

  return t;
};

//期货资金转银行请求，TradeCode=202002
PyObject * new_CThostFtdcTransferFutureToBankReqField(CThostFtdcTransferFutureToBankReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferFutureToBankReqField", (char*)"ydycdy",
p->FutureAccPwd, p->TradeAmt, p->CurrencyCode, p->FuturePwdFlag, p->CustFee, p->FutureAccount);
}
CThostFtdcTransferFutureToBankReqField * from_CThostFtdcTransferFutureToBankReqField(PyObject * p){
  CThostFtdcTransferFutureToBankReqField *t = (CThostFtdcTransferFutureToBankReqField *)calloc(1, sizeof(CThostFtdcTransferFutureToBankReqField));
  memset(t,0,sizeof(CThostFtdcTransferFutureToBankReqField));
  //密码
  strcpy(t->FutureAccPwd, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccPwd"),"gbk","Error!")));
  //转账金额
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //币种：RMB-人民币 USD-美圆 HKD-港元
  strcpy(t->CurrencyCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyCode"),"gbk","Error!")));
  //密码标志
  //enum类型
  //THOST_FTDC_FPWD_UnCheck -> '0', 不核对
  //THOST_FTDC_FPWD_Check -> '1', 核对
  t->FuturePwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FuturePwdFlag"),"gbk","Error!"))[0];
  //客户手续费
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //期货资金账户
  strcpy(t->FutureAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccount"),"gbk","Error!")));

  return t;
};

//行情申买二、三属性
PyObject * new_CThostFtdcMarketDataBid23Field(CThostFtdcMarketDataBid23Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBid23Field", (char*)"iidd",
p->BidVolume2, p->BidVolume3, p->BidPrice2, p->BidPrice3);
}
CThostFtdcMarketDataBid23Field * from_CThostFtdcMarketDataBid23Field(PyObject * p){
  CThostFtdcMarketDataBid23Field *t = (CThostFtdcMarketDataBid23Field *)calloc(1, sizeof(CThostFtdcMarketDataBid23Field));
  memset(t,0,sizeof(CThostFtdcMarketDataBid23Field));
  //申买量二
  t->BidVolume2 =   PyLong_AsLong(PyObject_GetAttrString(p, "BidVolume2"));
  //申买量三
  t->BidVolume3 =   PyLong_AsLong(PyObject_GetAttrString(p, "BidVolume3"));
  //申买价二
  t->BidPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice2"));
  //申买价三
  t->BidPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice3"));

  return t;
};

//输入报单操作
PyObject * new_CThostFtdcInputOrderActionField(CThostFtdcInputOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInputOrderActionField", (char*)"iyiyyyidciiyyy",
p->RequestID, p->BrokerID, p->SessionID, p->OrderSysID, p->OrderRef, p->UserID, p->FrontID, p->LimitPrice, p->ActionFlag, p->OrderActionRef, p->VolumeChange, p->InvestorID, p->InstrumentID, p->ExchangeID);
}
CThostFtdcInputOrderActionField * from_CThostFtdcInputOrderActionField(PyObject * p){
  CThostFtdcInputOrderActionField *t = (CThostFtdcInputOrderActionField *)calloc(1, sizeof(CThostFtdcInputOrderActionField));
  memset(t,0,sizeof(CThostFtdcInputOrderActionField));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //报单引用
  strcpy(t->OrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderRef"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionFlag"),"gbk","Error!"))[0];
  //报单操作引用
  t->OrderActionRef =   PyLong_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //数量变化
  t->VolumeChange =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//组合交易合约的单腿
PyObject * new_CThostFtdcCombinationLegField(CThostFtdcCombinationLegField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCombinationLegField", (char*)"iyiciy",
p->LegID, p->LegInstrumentID, p->LegMultiple, p->Direction, p->ImplyLevel, p->CombInstrumentID);
}
CThostFtdcCombinationLegField * from_CThostFtdcCombinationLegField(PyObject * p){
  CThostFtdcCombinationLegField *t = (CThostFtdcCombinationLegField *)calloc(1, sizeof(CThostFtdcCombinationLegField));
  memset(t,0,sizeof(CThostFtdcCombinationLegField));
  //单腿编号
  t->LegID =   PyLong_AsLong(PyObject_GetAttrString(p, "LegID"));
  //单腿合约代码
  strcpy(t->LegInstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LegInstrumentID"),"gbk","Error!")));
  //单腿乘数
  t->LegMultiple =   PyLong_AsLong(PyObject_GetAttrString(p, "LegMultiple"));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //派生层数
  t->ImplyLevel =   PyLong_AsLong(PyObject_GetAttrString(p, "ImplyLevel"));
  //组合合约代码
  strcpy(t->CombInstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombInstrumentID"),"gbk","Error!")));

  return t;
};

//查询签约银行响应
PyObject * new_CThostFtdcContractBankField(CThostFtdcContractBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcContractBankField", (char*)"yyyy",
p->BrokerID, p->BankID, p->BankName, p->BankBrchID);
}
CThostFtdcContractBankField * from_CThostFtdcContractBankField(PyObject * p){
  CThostFtdcContractBankField *t = (CThostFtdcContractBankField *)calloc(1, sizeof(CThostFtdcContractBankField));
  memset(t,0,sizeof(CThostFtdcContractBankField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //银行名称
  strcpy(t->BankName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankName"),"gbk","Error!")));
  //银行分中心代码
  strcpy(t->BankBrchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBrchID"),"gbk","Error!")));

  return t;
};

//交易所
PyObject * new_CThostFtdcExchangeField(CThostFtdcExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeField", (char*)"cyy",
p->ExchangeProperty, p->ExchangeName, p->ExchangeID);
}
CThostFtdcExchangeField * from_CThostFtdcExchangeField(PyObject * p){
  CThostFtdcExchangeField *t = (CThostFtdcExchangeField *)calloc(1, sizeof(CThostFtdcExchangeField));
  memset(t,0,sizeof(CThostFtdcExchangeField));
  //交易所属性
  //enum类型
  //THOST_FTDC_EXP_GenOrderByTrade -> '1', 根据成交生成报单
  //THOST_FTDC_EXP_Normal -> '0', 正常
  t->ExchangeProperty =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeProperty"),"gbk","Error!"))[0];
  //交易所名称
  strcpy(t->ExchangeName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeName"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//灾备交易转换报文
PyObject * new_CThostFtdcDRTransferField(CThostFtdcDRTransferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDRTransferField", (char*)"iiyy",
p->OrigDRIdentityID, p->DestDRIdentityID, p->DestBrokerID, p->OrigBrokerID);
}
CThostFtdcDRTransferField * from_CThostFtdcDRTransferField(PyObject * p){
  CThostFtdcDRTransferField *t = (CThostFtdcDRTransferField *)calloc(1, sizeof(CThostFtdcDRTransferField));
  memset(t,0,sizeof(CThostFtdcDRTransferField));
  //原交易中心代码
  t->OrigDRIdentityID =   PyLong_AsLong(PyObject_GetAttrString(p, "OrigDRIdentityID"));
  //目标交易中心代码
  t->DestDRIdentityID =   PyLong_AsLong(PyObject_GetAttrString(p, "DestDRIdentityID"));
  //目标易用单元代码
  strcpy(t->DestBrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DestBrokerID"),"gbk","Error!")));
  //原应用单元代码
  strcpy(t->OrigBrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrigBrokerID"),"gbk","Error!")));

  return t;
};

//合约保证金率
PyObject * new_CThostFtdcInstrumentMarginRateField(CThostFtdcInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentMarginRateField", (char*)"ydcyyidcdd",
p->BrokerID, p->ShortMarginRatioByVolume, p->InvestorRange, p->InvestorID, p->InstrumentID, p->IsRelative, p->ShortMarginRatioByMoney, p->HedgeFlag, p->LongMarginRatioByVolume, p->LongMarginRatioByMoney);
}
CThostFtdcInstrumentMarginRateField * from_CThostFtdcInstrumentMarginRateField(PyObject * p){
  CThostFtdcInstrumentMarginRateField *t = (CThostFtdcInstrumentMarginRateField *)calloc(1, sizeof(CThostFtdcInstrumentMarginRateField));
  memset(t,0,sizeof(CThostFtdcInstrumentMarginRateField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //空头保证金费
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  //THOST_FTDC_IR_All -> '1', 所有
  t->InvestorRange =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorRange"),"gbk","Error!"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //是否相对交易所收取
  t->IsRelative =   PyLong_AsLong(PyObject_GetAttrString(p, "IsRelative"));
  //空头保证金率
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //多头保证金费
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));
  //多头保证金率
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));

  return t;
};

//二级代理操作员银期权限
PyObject * new_CThostFtdcSecAgentACIDMapField(CThostFtdcSecAgentACIDMapField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSecAgentACIDMapField", (char*)"yyyyy",
p->BrokerID, p->BrokerSecAgentID, p->CurrencyID, p->AccountID, p->UserID);
}
CThostFtdcSecAgentACIDMapField * from_CThostFtdcSecAgentACIDMapField(PyObject * p){
  CThostFtdcSecAgentACIDMapField *t = (CThostFtdcSecAgentACIDMapField *)calloc(1, sizeof(CThostFtdcSecAgentACIDMapField));
  memset(t,0,sizeof(CThostFtdcSecAgentACIDMapField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //境外中介机构资金帐号
  strcpy(t->BrokerSecAgentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerSecAgentID"),"gbk","Error!")));
  //币种
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //资金账户
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//数据同步状态
PyObject * new_CThostFtdcSyncStatusField(CThostFtdcSyncStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncStatusField", (char*)"yc",
p->TradingDay, p->DataSyncStatus);
}
CThostFtdcSyncStatusField * from_CThostFtdcSyncStatusField(PyObject * p){
  CThostFtdcSyncStatusField *t = (CThostFtdcSyncStatusField *)calloc(1, sizeof(CThostFtdcSyncStatusField));
  memset(t,0,sizeof(CThostFtdcSyncStatusField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //数据同步状态
  //enum类型
  //THOST_FTDC_DS_Asynchronous -> '1', 未同步
  //THOST_FTDC_DS_Synchronizing -> '2', 同步中
  //THOST_FTDC_DS_Synchronized -> '3', 已同步
  t->DataSyncStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DataSyncStatus"),"gbk","Error!"))[0];

  return t;
};

//成交
PyObject * new_CThostFtdcTradeField(CThostFtdcTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradeField", (char*)"yyyccyccyyyiyyyyyiyyccicdiyyyy",
p->TradingDay, p->TradeDate, p->ClientID, p->PriceSource, p->TradeType, p->UserID, p->Direction, p->HedgeFlag, p->TradeID, p->ClearingPartID, p->ParticipantID, p->BrokerOrderSeq, p->ExchangeInstID, p->InstrumentID, p->ExchangeID, p->BrokerID, p->OrderSysID, p->SequenceNo, p->TraderID, p->OrderLocalID, p->OffsetFlag, p->TradeSource, p->SettlementID, p->TradingRole, p->Price, p->Volume, p->OrderRef, p->BusinessUnit, p->InvestorID, p->TradeTime);
}
CThostFtdcTradeField * from_CThostFtdcTradeField(PyObject * p){
  CThostFtdcTradeField *t = (CThostFtdcTradeField *)calloc(1, sizeof(CThostFtdcTradeField));
  memset(t,0,sizeof(CThostFtdcTradeField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //成交时期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //成交价来源
  //enum类型
  //THOST_FTDC_PSRC_Buy -> '1', 买委托价
  //THOST_FTDC_PSRC_LastPrice -> '0', 前成交价
  //THOST_FTDC_PSRC_Sell -> '2', 卖委托价
  t->PriceSource =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PriceSource"),"gbk","Error!"))[0];
  //成交类型
  //enum类型
  //THOST_FTDC_TRDT_Common -> '0', 普通成交
  //THOST_FTDC_TRDT_OptionsExecution -> '1', 期权执行
  //THOST_FTDC_TRDT_EFPDerived -> '3', 期转现衍生成交
  //THOST_FTDC_TRDT_OTC -> '2', OTC成交
  //THOST_FTDC_TRDT_SplitCombination -> '#', 组合持仓拆分为单一持仓,初始化不应包含该类型的持仓
  //THOST_FTDC_TRDT_CombinationDerived -> '4', 组合衍生成交
  t->TradeType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeType"),"gbk","Error!"))[0];
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //成交编号
  strcpy(t->TradeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeID"),"gbk","Error!")));
  //结算会员编号
  strcpy(t->ClearingPartID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClearingPartID"),"gbk","Error!")));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //经纪公司报单编号
  t->BrokerOrderSeq =   PyLong_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //序号
  t->SequenceNo =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //开平标志
  //enum类型
  //THOST_FTDC_OF_LocalForceClose -> '6', 本地强平
  //THOST_FTDC_OF_ForceOff -> '5', 强减
  //THOST_FTDC_OF_CloseToday -> '3', 平今
  //THOST_FTDC_OF_CloseYesterday -> '4', 平昨
  //THOST_FTDC_OF_Close -> '1', 平仓
  //THOST_FTDC_OF_Open -> '0', 开仓
  //THOST_FTDC_OF_ForceClose -> '2', 强平
  t->OffsetFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OffsetFlag"),"gbk","Error!"))[0];
  //成交来源
  //enum类型
  //THOST_FTDC_TSRC_QUERY -> '1', 来自查询
  //THOST_FTDC_TSRC_NORMAL -> '0', 来自交易所普通回报
  t->TradeSource =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeSource"),"gbk","Error!"))[0];
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //交易角色
  //enum类型
  //THOST_FTDC_ER_Broker -> '1', 代理
  //THOST_FTDC_ER_Host -> '2', 自营
  //THOST_FTDC_ER_Maker -> '3', 做市商
  t->TradingRole =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingRole"),"gbk","Error!"))[0];
  //价格
  t->Price =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));
  //数量
  t->Volume =   PyLong_AsLong(PyObject_GetAttrString(p, "Volume"));
  //报单引用
  strcpy(t->OrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderRef"),"gbk","Error!")));
  //业务单元
  strcpy(t->BusinessUnit, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BusinessUnit"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //成交时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));

  return t;
};

//验证期货资金密码和客户信息
PyObject * new_CThostFtdcVerifyFuturePasswordAndCustInfoField(CThostFtdcVerifyFuturePasswordAndCustInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyFuturePasswordAndCustInfoField", (char*)"cycyyyy",
p->CustType, p->IdentifiedCardNo, p->IdCardType, p->AccountID, p->CustomerName, p->CurrencyID, p->Password);
}
CThostFtdcVerifyFuturePasswordAndCustInfoField * from_CThostFtdcVerifyFuturePasswordAndCustInfoField(PyObject * p){
  CThostFtdcVerifyFuturePasswordAndCustInfoField *t = (CThostFtdcVerifyFuturePasswordAndCustInfoField *)calloc(1, sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField));
  memset(t,0,sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));

  return t;
};

//银期转账交易流水表
PyObject * new_CThostFtdcTransferSerialField(CThostFtdcTransferSerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferSerialField", (char*)"ycyycdyyidiyycyyyyidyiyyycyy",
p->TradingDay, p->FutureAccType, p->TradeDate, p->IdentifiedCardNo, p->IdCardType, p->BrokerFee, p->ErrorMsg, p->BankSerial, p->SessionID, p->TradeAmount, p->ErrorID, p->BankBranchID, p->TradeCode, p->BankAccType, p->BrokerBranchID, p->BrokerID, p->BankID, p->AccountID, p->PlateSerial, p->CustFee, p->BankNewAccount, p->FutureSerial, p->BankAccount, p->InvestorID, p->CurrencyID, p->AvailabilityFlag, p->OperatorCode, p->TradeTime);
}
CThostFtdcTransferSerialField * from_CThostFtdcTransferSerialField(PyObject * p){
  CThostFtdcTransferSerialField *t = (CThostFtdcTransferSerialField *)calloc(1, sizeof(CThostFtdcTransferSerialField));
  memset(t,0,sizeof(CThostFtdcTransferSerialField));
  //交易日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //期货公司帐号类型
  //enum类型
  //THOST_FTDC_FAT_BankBook -> '1', 银行存折
  //THOST_FTDC_FAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_FAT_SavingCard -> '2', 储蓄卡
  t->FutureAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccType"),"gbk","Error!"))[0];
  //交易发起方日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //应收期货公司费用
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //交易金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行分支机构编码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //交易代码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //期货公司编码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行编码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //平台流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //应收客户费用
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //新银行帐号
  strcpy(t->BankNewAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankNewAccount"),"gbk","Error!")));
  //期货公司流水号
  t->FutureSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //有效标志
  //enum类型
  //THOST_FTDC_AVAF_Valid -> '1', 有效
  //THOST_FTDC_AVAF_Repeal -> '2', 冲正
  //THOST_FTDC_AVAF_Invalid -> '0', 未确认
  t->AvailabilityFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AvailabilityFlag"),"gbk","Error!"))[0];
  //操作员
  strcpy(t->OperatorCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperatorCode"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));

  return t;
};

//投资者手续费率模板
PyObject * new_CThostFtdcCommRateModelField(CThostFtdcCommRateModelField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCommRateModelField", (char*)"yyy",
p->BrokerID, p->CommModelID, p->CommModelName);
}
CThostFtdcCommRateModelField * from_CThostFtdcCommRateModelField(PyObject * p){
  CThostFtdcCommRateModelField *t = (CThostFtdcCommRateModelField *)calloc(1, sizeof(CThostFtdcCommRateModelField));
  memset(t,0,sizeof(CThostFtdcCommRateModelField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //手续费率模板代码
  strcpy(t->CommModelID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CommModelID"),"gbk","Error!")));
  //模板名称
  strcpy(t->CommModelName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CommModelName"),"gbk","Error!")));

  return t;
};

//投资者保证金率模板
PyObject * new_CThostFtdcMarginModelField(CThostFtdcMarginModelField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarginModelField", (char*)"yyy",
p->BrokerID, p->MarginModelName, p->MarginModelID);
}
CThostFtdcMarginModelField * from_CThostFtdcMarginModelField(PyObject * p){
  CThostFtdcMarginModelField *t = (CThostFtdcMarginModelField *)calloc(1, sizeof(CThostFtdcMarginModelField));
  memset(t,0,sizeof(CThostFtdcMarginModelField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //模板名称
  strcpy(t->MarginModelName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MarginModelName"),"gbk","Error!")));
  //保证金率模板代码
  strcpy(t->MarginModelID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MarginModelID"),"gbk","Error!")));

  return t;
};

//根据价格查询最大报单数量
PyObject * new_CThostFtdcQueryMaxOrderVolumeWithPriceField(CThostFtdcQueryMaxOrderVolumeWithPriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQueryMaxOrderVolumeWithPriceField", (char*)"ydyycicc",
p->BrokerID, p->Price, p->InvestorID, p->InstrumentID, p->Direction, p->MaxVolume, p->HedgeFlag, p->OffsetFlag);
}
CThostFtdcQueryMaxOrderVolumeWithPriceField * from_CThostFtdcQueryMaxOrderVolumeWithPriceField(PyObject * p){
  CThostFtdcQueryMaxOrderVolumeWithPriceField *t = (CThostFtdcQueryMaxOrderVolumeWithPriceField *)calloc(1, sizeof(CThostFtdcQueryMaxOrderVolumeWithPriceField));
  memset(t,0,sizeof(CThostFtdcQueryMaxOrderVolumeWithPriceField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //报单价格
  t->Price =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //最大允许报单数量
  t->MaxVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MaxVolume"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //开平标志
  //enum类型
  //THOST_FTDC_OF_LocalForceClose -> '6', 本地强平
  //THOST_FTDC_OF_ForceOff -> '5', 强减
  //THOST_FTDC_OF_CloseToday -> '3', 平今
  //THOST_FTDC_OF_CloseYesterday -> '4', 平昨
  //THOST_FTDC_OF_Close -> '1', 平仓
  //THOST_FTDC_OF_Open -> '0', 开仓
  //THOST_FTDC_OF_ForceClose -> '2', 强平
  t->OffsetFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OffsetFlag"),"gbk","Error!"))[0];

  return t;
};

//行情申卖二、三属性
PyObject * new_CThostFtdcMarketDataAsk23Field(CThostFtdcMarketDataAsk23Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataAsk23Field", (char*)"ddii",
p->AskPrice2, p->AskPrice3, p->AskVolume2, p->AskVolume3);
}
CThostFtdcMarketDataAsk23Field * from_CThostFtdcMarketDataAsk23Field(PyObject * p){
  CThostFtdcMarketDataAsk23Field *t = (CThostFtdcMarketDataAsk23Field *)calloc(1, sizeof(CThostFtdcMarketDataAsk23Field));
  memset(t,0,sizeof(CThostFtdcMarketDataAsk23Field));
  //申卖价二
  t->AskPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice2"));
  //申卖价三
  t->AskPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice3"));
  //申卖量二
  t->AskVolume2 =   PyLong_AsLong(PyObject_GetAttrString(p, "AskVolume2"));
  //申卖量三
  t->AskVolume3 =   PyLong_AsLong(PyObject_GetAttrString(p, "AskVolume3"));

  return t;
};

//登录信息
PyObject * new_CThostFtdcLogoutAllField(CThostFtdcLogoutAllField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLogoutAllField", (char*)"iyi",
p->FrontID, p->SystemName, p->SessionID);
}
CThostFtdcLogoutAllField * from_CThostFtdcLogoutAllField(PyObject * p){
  CThostFtdcLogoutAllField *t = (CThostFtdcLogoutAllField *)calloc(1, sizeof(CThostFtdcLogoutAllField));
  memset(t,0,sizeof(CThostFtdcLogoutAllField));
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //系统名称
  strcpy(t->SystemName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SystemName"),"gbk","Error!")));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));

  return t;
};

//通讯阶段
PyObject * new_CThostFtdcCommPhaseField(CThostFtdcCommPhaseField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCommPhaseField", (char*)"yyh",
p->TradingDay, p->SystemID, p->CommPhaseNo);
}
CThostFtdcCommPhaseField * from_CThostFtdcCommPhaseField(PyObject * p){
  CThostFtdcCommPhaseField *t = (CThostFtdcCommPhaseField *)calloc(1, sizeof(CThostFtdcCommPhaseField));
  memset(t,0,sizeof(CThostFtdcCommPhaseField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //系统编号
  strcpy(t->SystemID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SystemID"),"gbk","Error!")));
  //通讯时段编号
  t->CommPhaseNo =   PyLong_AsLong(PyObject_GetAttrString(p, "CommPhaseNo"));

  return t;
};

//错误报单操作
PyObject * new_CThostFtdcErrOrderActionField(CThostFtdcErrOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcErrOrderActionField", (char*)"iyiyyyicyyyyyiyyyyiydcyiyiy",
p->FrontID, p->ClientID, p->OrderActionRef, p->StatusMsg, p->ActionLocalID, p->BusinessUnit, p->SessionID, p->ActionFlag, p->ParticipantID, p->InstrumentID, p->ErrorMsg, p->ActionDate, p->ExchangeID, p->RequestID, p->BrokerID, p->OrderSysID, p->TraderID, p->OrderLocalID, p->InstallID, p->ActionTime, p->LimitPrice, p->OrderActionStatus, p->UserID, p->ErrorID, p->OrderRef, p->VolumeChange, p->InvestorID);
}
CThostFtdcErrOrderActionField * from_CThostFtdcErrOrderActionField(PyObject * p){
  CThostFtdcErrOrderActionField *t = (CThostFtdcErrOrderActionField *)calloc(1, sizeof(CThostFtdcErrOrderActionField));
  memset(t,0,sizeof(CThostFtdcErrOrderActionField));
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //报单操作引用
  t->OrderActionRef =   PyLong_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //状态信息
  strcpy(t->StatusMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "StatusMsg"),"gbk","Error!")));
  //操作本地编号
  strcpy(t->ActionLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionLocalID"),"gbk","Error!")));
  //业务单元
  strcpy(t->BusinessUnit, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BusinessUnit"),"gbk","Error!")));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionFlag"),"gbk","Error!"))[0];
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //操作日期
  strcpy(t->ActionDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionDate"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //操作时间
  strcpy(t->ActionTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionTime"),"gbk","Error!")));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //报单操作状态
  //enum类型
  //THOST_FTDC_OAS_Accepted -> 'b', 已经接受
  //THOST_FTDC_OAS_Submitted -> 'a', 已经提交
  //THOST_FTDC_OAS_Rejected -> 'c', 已经被拒绝
  t->OrderActionStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderActionStatus"),"gbk","Error!"))[0];
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //报单引用
  strcpy(t->OrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderRef"),"gbk","Error!")));
  //数量变化
  t->VolumeChange =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));

  return t;
};

//校验投资者密码
PyObject * new_CThostFtdcVerifyInvestorPasswordField(CThostFtdcVerifyInvestorPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyInvestorPasswordField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->Password);
}
CThostFtdcVerifyInvestorPasswordField * from_CThostFtdcVerifyInvestorPasswordField(PyObject * p){
  CThostFtdcVerifyInvestorPasswordField *t = (CThostFtdcVerifyInvestorPasswordField *)calloc(1, sizeof(CThostFtdcVerifyInvestorPasswordField));
  memset(t,0,sizeof(CThostFtdcVerifyInvestorPasswordField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));

  return t;
};

//验证客户信息
PyObject * new_CThostFtdcVerifyCustInfoField(CThostFtdcVerifyCustInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyCustInfoField", (char*)"ycyc",
p->CustomerName, p->CustType, p->IdentifiedCardNo, p->IdCardType);
}
CThostFtdcVerifyCustInfoField * from_CThostFtdcVerifyCustInfoField(PyObject * p){
  CThostFtdcVerifyCustInfoField *t = (CThostFtdcVerifyCustInfoField *)calloc(1, sizeof(CThostFtdcVerifyCustInfoField));
  memset(t,0,sizeof(CThostFtdcVerifyCustInfoField));
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];

  return t;
};

//资金账户口令变更域
PyObject * new_CThostFtdcTradingAccountPasswordUpdateV1Field(CThostFtdcTradingAccountPasswordUpdateV1Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountPasswordUpdateV1Field", (char*)"yyyy",
p->InvestorID, p->BrokerID, p->NewPassword, p->OldPassword);
}
CThostFtdcTradingAccountPasswordUpdateV1Field * from_CThostFtdcTradingAccountPasswordUpdateV1Field(PyObject * p){
  CThostFtdcTradingAccountPasswordUpdateV1Field *t = (CThostFtdcTradingAccountPasswordUpdateV1Field *)calloc(1, sizeof(CThostFtdcTradingAccountPasswordUpdateV1Field));
  memset(t,0,sizeof(CThostFtdcTradingAccountPasswordUpdateV1Field));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //新的口令
  strcpy(t->NewPassword, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "NewPassword"),"gbk","Error!")));
  //原来的口令
  strcpy(t->OldPassword, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OldPassword"),"gbk","Error!")));

  return t;
};

//行情申卖四、五属性
PyObject * new_CThostFtdcMarketDataAsk45Field(CThostFtdcMarketDataAsk45Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataAsk45Field", (char*)"iidd",
p->AskVolume4, p->AskVolume5, p->AskPrice4, p->AskPrice5);
}
CThostFtdcMarketDataAsk45Field * from_CThostFtdcMarketDataAsk45Field(PyObject * p){
  CThostFtdcMarketDataAsk45Field *t = (CThostFtdcMarketDataAsk45Field *)calloc(1, sizeof(CThostFtdcMarketDataAsk45Field));
  memset(t,0,sizeof(CThostFtdcMarketDataAsk45Field));
  //申卖量四
  t->AskVolume4 =   PyLong_AsLong(PyObject_GetAttrString(p, "AskVolume4"));
  //申卖量五
  t->AskVolume5 =   PyLong_AsLong(PyObject_GetAttrString(p, "AskVolume5"));
  //申卖价四
  t->AskPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice4"));
  //申卖价五
  t->AskPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice5"));

  return t;
};

//用户会话
PyObject * new_CThostFtdcUserSessionField(CThostFtdcUserSessionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserSessionField", (char*)"iyyyyyyiyyy",
p->FrontID, p->BrokerID, p->IPAddress, p->MacAddress, p->InterfaceProductInfo, p->UserProductInfo, p->UserID, p->SessionID, p->LoginTime, p->ProtocolInfo, p->LoginDate);
}
CThostFtdcUserSessionField * from_CThostFtdcUserSessionField(PyObject * p){
  CThostFtdcUserSessionField *t = (CThostFtdcUserSessionField *)calloc(1, sizeof(CThostFtdcUserSessionField));
  memset(t,0,sizeof(CThostFtdcUserSessionField));
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //IP地址
  strcpy(t->IPAddress, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IPAddress"),"gbk","Error!")));
  //Mac地址
  strcpy(t->MacAddress, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MacAddress"),"gbk","Error!")));
  //接口端产品信息
  strcpy(t->InterfaceProductInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InterfaceProductInfo"),"gbk","Error!")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserProductInfo"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //登录时间
  strcpy(t->LoginTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LoginTime"),"gbk","Error!")));
  //协议信息
  strcpy(t->ProtocolInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProtocolInfo"),"gbk","Error!")));
  //登录日期
  strcpy(t->LoginDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LoginDate"),"gbk","Error!")));

  return t;
};

//管理用户功能权限
PyObject * new_CThostFtdcSuperUserFunctionField(CThostFtdcSuperUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSuperUserFunctionField", (char*)"yc",
p->UserID, p->FunctionCode);
}
CThostFtdcSuperUserFunctionField * from_CThostFtdcSuperUserFunctionField(PyObject * p){
  CThostFtdcSuperUserFunctionField *t = (CThostFtdcSuperUserFunctionField *)calloc(1, sizeof(CThostFtdcSuperUserFunctionField));
  memset(t,0,sizeof(CThostFtdcSuperUserFunctionField));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //功能代码
  //enum类型
  //THOST_FTDC_FC_InvestorPasswordUpdate -> '5', 变更投资者口令
  //THOST_FTDC_FC_OrderAction -> '7', 报单操作
  //THOST_FTDC_FC_BachSyncBrokerData -> 'A', 批量同步经纪公司数据
  //THOST_FTDC_FC_SyncOTP -> 'E', 同步动态令牌
  //THOST_FTDC_FC_UserPasswordUpdate -> '3', 变更管理用户口令
  //THOST_FTDC_FC_SyncBrokerData -> '9', 同步经纪公司数据
  //THOST_FTDC_FC_BrokerPasswordUpdate -> '4', 变更经纪公司口令
  //THOST_FTDC_FC_ParkedOrderInsert -> 'C', 预埋报单插入
  //THOST_FTDC_FC_OrderInsert -> '6', 报单插入
  //THOST_FTDC_FC_ParkedOrderAction -> 'D', 预埋报单操作
  //THOST_FTDC_FC_SuperQuery -> 'B', 超级查询
  //THOST_FTDC_FC_DeleteOrder -> 'F', 删除未知单
  //THOST_FTDC_FC_SyncSystemData -> '8', 同步系统数据
  //THOST_FTDC_FC_ForceUserLogout -> '2', 强制用户登出
  //THOST_FTDC_FC_DataAsync -> '1', 数据异步化
  t->FunctionCode =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FunctionCode"),"gbk","Error!"))[0];

  return t;
};

//投资者品种/跨品种保证金
PyObject * new_CThostFtdcInvestorProductGroupMarginField(CThostFtdcInvestorProductGroupMarginField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorProductGroupMarginField", (char*)"ydddddcddddddiddydddddddyyd",
p->TradingDay, p->LongUseMargin, p->ShortUseMargin, p->ExchMargin, p->CloseProfit, p->ShortOffsetAmount, p->HedgeFlag, p->ExchOffsetAmount, p->LongExchOffsetAmount, p->LongOffsetAmount, p->UseMargin, p->OffsetAmount, p->FrozenCash, p->SettlementID, p->PositionProfit, p->LongExchMargin, p->BrokerID, p->CashIn, p->FrozenCommission, p->ShortExchMargin, p->ShortExchOffsetAmount, p->Commission, p->ShortFrozenMargin, p->LongFrozenMargin, p->ProductGroupID, p->InvestorID, p->FrozenMargin);
}
CThostFtdcInvestorProductGroupMarginField * from_CThostFtdcInvestorProductGroupMarginField(PyObject * p){
  CThostFtdcInvestorProductGroupMarginField *t = (CThostFtdcInvestorProductGroupMarginField *)calloc(1, sizeof(CThostFtdcInvestorProductGroupMarginField));
  memset(t,0,sizeof(CThostFtdcInvestorProductGroupMarginField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //多头保证金
  t->LongUseMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongUseMargin"));
  //空头保证金
  t->ShortUseMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortUseMargin"));
  //交易所保证金
  t->ExchMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMargin"));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //空头折抵总金额
  t->ShortOffsetAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortOffsetAmount"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //交易所折抵总金额
  t->ExchOffsetAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchOffsetAmount"));
  //交易所多头折抵总金额
  t->LongExchOffsetAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongExchOffsetAmount"));
  //多头折抵总金额
  t->LongOffsetAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongOffsetAmount"));
  //占用的保证金
  t->UseMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UseMargin"));
  //折抵总金额
  t->OffsetAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OffsetAmount"));
  //冻结的资金
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //交易所多头保证金
  t->LongExchMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongExchMargin"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //冻结的手续费
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //交易所空头保证金
  t->ShortExchMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortExchMargin"));
  //交易所空头折抵总金额
  t->ShortExchOffsetAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortExchOffsetAmount"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //空头冻结的保证金
  t->ShortFrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenMargin"));
  //多头冻结的保证金
  t->LongFrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenMargin"));
  //品种/跨品种标示
  strcpy(t->ProductGroupID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProductGroupID"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));

  return t;
};

//经纪公司交易算法
PyObject * new_CThostFtdcBrokerTradingAlgosField(CThostFtdcBrokerTradingAlgosField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerTradingAlgosField", (char*)"yccycy",
p->BrokerID, p->HandleTradingAccountAlgoID, p->HandlePositionAlgoID, p->InstrumentID, p->FindMarginRateAlgoID, p->ExchangeID);
}
CThostFtdcBrokerTradingAlgosField * from_CThostFtdcBrokerTradingAlgosField(PyObject * p){
  CThostFtdcBrokerTradingAlgosField *t = (CThostFtdcBrokerTradingAlgosField *)calloc(1, sizeof(CThostFtdcBrokerTradingAlgosField));
  memset(t,0,sizeof(CThostFtdcBrokerTradingAlgosField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //资金处理算法编号
  //enum类型
  //THOST_FTDC_HTAA_Base -> '1', 基本
  //THOST_FTDC_HTAA_CZCE -> '3', 郑州商品交易所
  //THOST_FTDC_HTAA_DCE -> '2', 大连商品交易所
  t->HandleTradingAccountAlgoID =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HandleTradingAccountAlgoID"),"gbk","Error!"))[0];
  //持仓处理算法编号
  //enum类型
  //THOST_FTDC_HPA_Base -> '1', 基本
  //THOST_FTDC_HPA_CZCE -> '3', 郑州商品交易所
  //THOST_FTDC_HPA_DCE -> '2', 大连商品交易所
  t->HandlePositionAlgoID =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HandlePositionAlgoID"),"gbk","Error!"))[0];
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //寻找保证金率算法编号
  //enum类型
  //THOST_FTDC_FMRA_Base -> '1', 基本
  //THOST_FTDC_FMRA_DCE -> '2', 大连商品交易所
  //THOST_FTDC_FMRA_CZCE -> '3', 郑州商品交易所
  t->FindMarginRateAlgoID =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FindMarginRateAlgoID"),"gbk","Error!"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//投资者持仓明细
PyObject * new_CThostFtdcInvestorPositionDetailField(CThostFtdcInvestorPositionDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorPositionDetailField", (char*)"ydccdcydyyddyyiyddiddiddyd",
p->TradingDay, p->ExchMargin, p->TradeType, p->Direction, p->Margin, p->HedgeFlag, p->ExchangeID, p->LastSettlementPrice, p->CombInstrumentID, p->InstrumentID, p->PositionProfitByDate, p->CloseProfitByTrade, p->TradeID, p->BrokerID, p->SettlementID, p->OpenDate, p->CloseProfitByDate, p->CloseAmount, p->CloseVolume, p->MarginRateByVolume, p->PositionProfitByTrade, p->Volume, p->SettlementPrice, p->MarginRateByMoney, p->InvestorID, p->OpenPrice);
}
CThostFtdcInvestorPositionDetailField * from_CThostFtdcInvestorPositionDetailField(PyObject * p){
  CThostFtdcInvestorPositionDetailField *t = (CThostFtdcInvestorPositionDetailField *)calloc(1, sizeof(CThostFtdcInvestorPositionDetailField));
  memset(t,0,sizeof(CThostFtdcInvestorPositionDetailField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易所保证金
  t->ExchMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMargin"));
  //成交类型
  //enum类型
  //THOST_FTDC_TRDT_Common -> '0', 普通成交
  //THOST_FTDC_TRDT_OptionsExecution -> '1', 期权执行
  //THOST_FTDC_TRDT_EFPDerived -> '3', 期转现衍生成交
  //THOST_FTDC_TRDT_OTC -> '2', OTC成交
  //THOST_FTDC_TRDT_SplitCombination -> '#', 组合持仓拆分为单一持仓,初始化不应包含该类型的持仓
  //THOST_FTDC_TRDT_CombinationDerived -> '4', 组合衍生成交
  t->TradeType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeType"),"gbk","Error!"))[0];
  //买卖
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //投资者保证金
  t->Margin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Margin"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //昨结算价
  t->LastSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastSettlementPrice"));
  //组合合约代码
  strcpy(t->CombInstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombInstrumentID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //逐日盯市持仓盈亏
  t->PositionProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfitByDate"));
  //逐笔对冲平仓盈亏
  t->CloseProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
  //成交编号
  strcpy(t->TradeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //开仓日期
  strcpy(t->OpenDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OpenDate"),"gbk","Error!")));
  //逐日盯市平仓盈亏
  t->CloseProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
  //平仓金额
  t->CloseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
  //平仓量
  t->CloseVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
  //保证金率(按手数)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //逐笔对冲持仓盈亏
  t->PositionProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfitByTrade"));
  //数量
  t->Volume =   PyLong_AsLong(PyObject_GetAttrString(p, "Volume"));
  //结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //保证金率
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //开仓价
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));

  return t;
};

//查询最大报单数量
PyObject * new_CThostFtdcQueryMaxOrderVolumeField(CThostFtdcQueryMaxOrderVolumeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQueryMaxOrderVolumeField", (char*)"yyycicc",
p->BrokerID, p->InvestorID, p->InstrumentID, p->Direction, p->MaxVolume, p->HedgeFlag, p->OffsetFlag);
}
CThostFtdcQueryMaxOrderVolumeField * from_CThostFtdcQueryMaxOrderVolumeField(PyObject * p){
  CThostFtdcQueryMaxOrderVolumeField *t = (CThostFtdcQueryMaxOrderVolumeField *)calloc(1, sizeof(CThostFtdcQueryMaxOrderVolumeField));
  memset(t,0,sizeof(CThostFtdcQueryMaxOrderVolumeField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //最大允许报单数量
  t->MaxVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MaxVolume"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //开平标志
  //enum类型
  //THOST_FTDC_OF_LocalForceClose -> '6', 本地强平
  //THOST_FTDC_OF_ForceOff -> '5', 强减
  //THOST_FTDC_OF_CloseToday -> '3', 平今
  //THOST_FTDC_OF_CloseYesterday -> '4', 平昨
  //THOST_FTDC_OF_Close -> '1', 平仓
  //THOST_FTDC_OF_Open -> '0', 开仓
  //THOST_FTDC_OF_ForceClose -> '2', 强平
  t->OffsetFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OffsetFlag"),"gbk","Error!"))[0];

  return t;
};

//输入报单
PyObject * new_CThostFtdcInputOrderField(CThostFtdcInputOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInputOrderField", (char*)"iycyydyyciiyicdccyiyicy",
p->UserForceClose, p->UserID, p->Direction, p->GTDDate, p->CombHedgeFlag, p->StopPrice, p->BusinessUnit, p->InstrumentID, p->VolumeCondition, p->MinVolume, p->RequestID, p->BrokerID, p->IsSwapOrder, p->OrderPriceType, p->LimitPrice, p->ContingentCondition, p->TimeCondition, p->OrderRef, p->IsAutoSuspend, p->InvestorID, p->VolumeTotalOriginal, p->ForceCloseReason, p->CombOffsetFlag);
}
CThostFtdcInputOrderField * from_CThostFtdcInputOrderField(PyObject * p){
  CThostFtdcInputOrderField *t = (CThostFtdcInputOrderField *)calloc(1, sizeof(CThostFtdcInputOrderField));
  memset(t,0,sizeof(CThostFtdcInputOrderField));
  //用户强评标志
  t->UserForceClose =   PyLong_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //GTD日期
  strcpy(t->GTDDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "GTDDate"),"gbk","Error!")));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombHedgeFlag"),"gbk","Error!")));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //业务单元
  strcpy(t->BusinessUnit, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BusinessUnit"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VolumeCondition"),"gbk","Error!"))[0];
  //最小成交量
  t->MinVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //互换单标志
  t->IsSwapOrder =   PyLong_AsLong(PyObject_GetAttrString(p, "IsSwapOrder"));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  t->OrderPriceType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderPriceType"),"gbk","Error!"))[0];
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_Touch -> '2', 止损
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  t->ContingentCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ContingentCondition"),"gbk","Error!"))[0];
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  t->TimeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TimeCondition"),"gbk","Error!"))[0];
  //报单引用
  strcpy(t->OrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderRef"),"gbk","Error!")));
  //自动挂起标志
  t->IsAutoSuspend =   PyLong_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //数量
  t->VolumeTotalOriginal =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ForceCloseReason"),"gbk","Error!"))[0];
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombOffsetFlag"),"gbk","Error!")));

  return t;
};

//期商签退响应
PyObject * new_CThostFtdcRspFutureSignOutField(CThostFtdcRspFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspFutureSignOutField", (char*)"yyyiyyiyicyyyyiyyiiyyyy",
p->TradingDay, p->TradeDate, p->DeviceID, p->PlateSerial, p->UserID, p->BankSerial, p->SessionID, p->ErrorMsg, p->ErrorID, p->LastFragment, p->BankBranchID, p->TradeCode, p->OperNo, p->Digest, p->RequestID, p->BrokerID, p->BankID, p->InstallID, p->TID, p->TradeTime, p->CurrencyID, p->BrokerBranchID, p->BrokerIDByBank);
}
CThostFtdcRspFutureSignOutField * from_CThostFtdcRspFutureSignOutField(PyObject * p){
  CThostFtdcRspFutureSignOutField *t = (CThostFtdcRspFutureSignOutField *)calloc(1, sizeof(CThostFtdcRspFutureSignOutField));
  memset(t,0,sizeof(CThostFtdcRspFutureSignOutField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));

  return t;
};

//正在同步中的投资者分组
PyObject * new_CThostFtdcSyncingInvestorGroupField(CThostFtdcSyncingInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInvestorGroupField", (char*)"yyy",
p->InvestorGroupID, p->BrokerID, p->InvestorGroupName);
}
CThostFtdcSyncingInvestorGroupField * from_CThostFtdcSyncingInvestorGroupField(PyObject * p){
  CThostFtdcSyncingInvestorGroupField *t = (CThostFtdcSyncingInvestorGroupField *)calloc(1, sizeof(CThostFtdcSyncingInvestorGroupField));
  memset(t,0,sizeof(CThostFtdcSyncingInvestorGroupField));
  //投资者分组代码
  strcpy(t->InvestorGroupID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorGroupID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //投资者分组名称
  strcpy(t->InvestorGroupName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorGroupName"),"gbk","Error!")));

  return t;
};

//请求查询投资者手续费率模板
PyObject * new_CThostFtdcQryCommRateModelField(CThostFtdcQryCommRateModelField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCommRateModelField", (char*)"yy",
p->BrokerID, p->CommModelID);
}
CThostFtdcQryCommRateModelField * from_CThostFtdcQryCommRateModelField(PyObject * p){
  CThostFtdcQryCommRateModelField *t = (CThostFtdcQryCommRateModelField *)calloc(1, sizeof(CThostFtdcQryCommRateModelField));
  memset(t,0,sizeof(CThostFtdcQryCommRateModelField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //手续费率模板代码
  strcpy(t->CommModelID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CommModelID"),"gbk","Error!")));

  return t;
};

//用户IP
PyObject * new_CThostFtdcUserIPField(CThostFtdcUserIPField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserIPField", (char*)"yyyyy",
p->BrokerID, p->IPMask, p->IPAddress, p->MacAddress, p->UserID);
}
CThostFtdcUserIPField * from_CThostFtdcUserIPField(PyObject * p){
  CThostFtdcUserIPField *t = (CThostFtdcUserIPField *)calloc(1, sizeof(CThostFtdcUserIPField));
  memset(t,0,sizeof(CThostFtdcUserIPField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //IP地址掩码
  strcpy(t->IPMask, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IPMask"),"gbk","Error!")));
  //IP地址
  strcpy(t->IPAddress, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IPAddress"),"gbk","Error!")));
  //Mac地址
  strcpy(t->MacAddress, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MacAddress"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//交易所状态
PyObject * new_CThostFtdcExchangeSequenceField(CThostFtdcExchangeSequenceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeSequenceField", (char*)"ciy",
p->MarketStatus, p->SequenceNo, p->ExchangeID);
}
CThostFtdcExchangeSequenceField * from_CThostFtdcExchangeSequenceField(PyObject * p){
  CThostFtdcExchangeSequenceField *t = (CThostFtdcExchangeSequenceField *)calloc(1, sizeof(CThostFtdcExchangeSequenceField));
  memset(t,0,sizeof(CThostFtdcExchangeSequenceField));
  //合约交易状态
  //enum类型
  //THOST_FTDC_IS_NoTrading -> '1', 非交易
  //THOST_FTDC_IS_Continous -> '2', 连续交易
  //THOST_FTDC_IS_AuctionOrdering -> '3', 集合竞价报单
  //THOST_FTDC_IS_AuctionBalance -> '4', 集合竞价价格平衡
  //THOST_FTDC_IS_BeforeTrading -> '0', 开盘前
  //THOST_FTDC_IS_AuctionMatch -> '5', 集合竞价撮合
  //THOST_FTDC_IS_Closed -> '6', 收盘
  t->MarketStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MarketStatus"),"gbk","Error!"))[0];
  //序号
  t->SequenceNo =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//查询转帐银行
PyObject * new_CThostFtdcQryTransferBankField(CThostFtdcQryTransferBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTransferBankField", (char*)"yy",
p->BankID, p->BankBrchID);
}
CThostFtdcQryTransferBankField * from_CThostFtdcQryTransferBankField(PyObject * p){
  CThostFtdcQryTransferBankField *t = (CThostFtdcQryTransferBankField *)calloc(1, sizeof(CThostFtdcQryTransferBankField));
  memset(t,0,sizeof(CThostFtdcQryTransferBankField));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //银行分中心代码
  strcpy(t->BankBrchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBrchID"),"gbk","Error!")));

  return t;
};

//用户事件通知信息
PyObject * new_CThostFtdcTradingNoticeInfoField(CThostFtdcTradingNoticeInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingNoticeInfoField", (char*)"yiyyyh",
p->BrokerID, p->SequenceNo, p->InvestorID, p->SendTime, p->FieldContent, p->SequenceSeries);
}
CThostFtdcTradingNoticeInfoField * from_CThostFtdcTradingNoticeInfoField(PyObject * p){
  CThostFtdcTradingNoticeInfoField *t = (CThostFtdcTradingNoticeInfoField *)calloc(1, sizeof(CThostFtdcTradingNoticeInfoField));
  memset(t,0,sizeof(CThostFtdcTradingNoticeInfoField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //序列号
  t->SequenceNo =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //发送时间
  strcpy(t->SendTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SendTime"),"gbk","Error!")));
  //消息正文
  strcpy(t->FieldContent, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FieldContent"),"gbk","Error!")));
  //序列系列号
  t->SequenceSeries =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));

  return t;
};

//合约手续费率
PyObject * new_CThostFtdcInstrumentCommissionRateField(CThostFtdcInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentCommissionRateField", (char*)"dyddcyyddd",
p->OpenRatioByVolume, p->BrokerID, p->OpenRatioByMoney, p->CloseRatioByMoney, p->InvestorRange, p->InvestorID, p->InstrumentID, p->CloseTodayRatioByMoney, p->CloseTodayRatioByVolume, p->CloseRatioByVolume);
}
CThostFtdcInstrumentCommissionRateField * from_CThostFtdcInstrumentCommissionRateField(PyObject * p){
  CThostFtdcInstrumentCommissionRateField *t = (CThostFtdcInstrumentCommissionRateField *)calloc(1, sizeof(CThostFtdcInstrumentCommissionRateField));
  memset(t,0,sizeof(CThostFtdcInstrumentCommissionRateField));
  //开仓手续费
  t->OpenRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByVolume"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //开仓手续费率
  t->OpenRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByMoney"));
  //平仓手续费率
  t->CloseRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByMoney"));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  //THOST_FTDC_IR_All -> '1', 所有
  t->InvestorRange =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorRange"),"gbk","Error!"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //平今手续费率
  t->CloseTodayRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByMoney"));
  //平今手续费
  t->CloseTodayRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByVolume"));
  //平仓手续费
  t->CloseRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByVolume"));

  return t;
};

//UDP组播组信息
PyObject * new_CThostFtdcMulticastGroupInfoField(CThostFtdcMulticastGroupInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMulticastGroupInfoField", (char*)"iyy",
p->GroupPort, p->GroupIP, p->SourceIP);
}
CThostFtdcMulticastGroupInfoField * from_CThostFtdcMulticastGroupInfoField(PyObject * p){
  CThostFtdcMulticastGroupInfoField *t = (CThostFtdcMulticastGroupInfoField *)calloc(1, sizeof(CThostFtdcMulticastGroupInfoField));
  memset(t,0,sizeof(CThostFtdcMulticastGroupInfoField));
  //组播组IP端口
  t->GroupPort =   PyLong_AsLong(PyObject_GetAttrString(p, "GroupPort"));
  //组播组IP地址
  strcpy(t->GroupIP, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "GroupIP"),"gbk","Error!")));
  //源地址
  strcpy(t->SourceIP, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SourceIP"),"gbk","Error!")));

  return t;
};

//经纪公司可提资金算法表
PyObject * new_CThostFtdcInvestorWithdrawAlgorithmField(CThostFtdcInvestorWithdrawAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorWithdrawAlgorithmField", (char*)"ydcyyd",
p->BrokerID, p->FundMortgageRatio, p->InvestorRange, p->InvestorID, p->CurrencyID, p->UsingRatio);
}
CThostFtdcInvestorWithdrawAlgorithmField * from_CThostFtdcInvestorWithdrawAlgorithmField(PyObject * p){
  CThostFtdcInvestorWithdrawAlgorithmField *t = (CThostFtdcInvestorWithdrawAlgorithmField *)calloc(1, sizeof(CThostFtdcInvestorWithdrawAlgorithmField));
  memset(t,0,sizeof(CThostFtdcInvestorWithdrawAlgorithmField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //货币质押比率
  t->FundMortgageRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageRatio"));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  //THOST_FTDC_IR_All -> '1', 所有
  t->InvestorRange =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorRange"),"gbk","Error!"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //可提资金比例
  t->UsingRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UsingRatio"));

  return t;
};

//银期变更银行账号信息
PyObject * new_CThostFtdcChangeAccountField(CThostFtdcChangeAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcChangeAccountField", (char*)"yyyyycyyyyicyycyyyyyyycyyciyyiiyycyiycccyy",
p->TradingDay, p->ZipCode, p->TradeDate, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->Telephone, p->ErrorMsg, p->BankSerial, p->Address, p->SessionID, p->MoneyAccountStatus, p->EMail, p->Fax, p->BankPwdFlag, p->CurrencyID, p->BankBranchID, p->TradeCode, p->Password, p->CountryCode, p->Digest, p->BrokerBranchID, p->Gender, p->BrokerID, p->BankID, p->BankAccType, p->PlateSerial, p->AccountID, p->CustomerName, p->InstallID, p->TID, p->MobilePhone, p->NewBankAccount, p->CustType, p->NewBankPassWord, p->ErrorID, p->TradeTime, p->LastFragment, p->SecuPwdFlag, p->VerifyCertNoFlag, p->BrokerIDByBank, p->BankAccount);
}
CThostFtdcChangeAccountField * from_CThostFtdcChangeAccountField(PyObject * p){
  CThostFtdcChangeAccountField *t = (CThostFtdcChangeAccountField *)calloc(1, sizeof(CThostFtdcChangeAccountField));
  memset(t,0,sizeof(CThostFtdcChangeAccountField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //邮编
  strcpy(t->ZipCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ZipCode"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //电话号码
  strcpy(t->Telephone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Telephone"),"gbk","Error!")));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //地址
  strcpy(t->Address, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Address"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //资金账户状态
  //enum类型
  //THOST_FTDC_MAS_Cancel -> '1', 销户
  //THOST_FTDC_MAS_Normal -> '0', 正常
  t->MoneyAccountStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MoneyAccountStatus"),"gbk","Error!"))[0];
  //电子邮件
  strcpy(t->EMail, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "EMail"),"gbk","Error!")));
  //传真
  strcpy(t->Fax, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Fax"),"gbk","Error!")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //国家代码
  strcpy(t->CountryCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CountryCode"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //性别
  //enum类型
  //THOST_FTDC_GD_Male -> '1', 男
  //THOST_FTDC_GD_Female -> '2', 女
  //THOST_FTDC_GD_Unknown -> '0', 未知状态
  t->Gender =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Gender"),"gbk","Error!"))[0];
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //手机
  strcpy(t->MobilePhone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MobilePhone"),"gbk","Error!")));
  //新银行帐号
  strcpy(t->NewBankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "NewBankAccount"),"gbk","Error!")));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //新银行密码
  strcpy(t->NewBankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "NewBankPassWord"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));

  return t;
};

//保证金监管系统经纪公司资金账户密钥
PyObject * new_CThostFtdcCFMMCTradingAccountKeyField(CThostFtdcCFMMCTradingAccountKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCFMMCTradingAccountKeyField", (char*)"yyyiy",
p->BrokerID, p->CurrentKey, p->ParticipantID, p->KeyID, p->AccountID);
}
CThostFtdcCFMMCTradingAccountKeyField * from_CThostFtdcCFMMCTradingAccountKeyField(PyObject * p){
  CThostFtdcCFMMCTradingAccountKeyField *t = (CThostFtdcCFMMCTradingAccountKeyField *)calloc(1, sizeof(CThostFtdcCFMMCTradingAccountKeyField));
  memset(t,0,sizeof(CThostFtdcCFMMCTradingAccountKeyField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //动态密钥
  strcpy(t->CurrentKey, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrentKey"),"gbk","Error!")));
  //经纪公司统一编码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //密钥编号
  t->KeyID =   PyLong_AsLong(PyObject_GetAttrString(p, "KeyID"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));

  return t;
};

//出入金同步
PyObject * new_CThostFtdcSyncDepositField(CThostFtdcSyncDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncDepositField", (char*)"yydiyy",
p->BrokerID, p->DepositSeqNo, p->Deposit, p->IsForce, p->InvestorID, p->CurrencyID);
}
CThostFtdcSyncDepositField * from_CThostFtdcSyncDepositField(PyObject * p){
  CThostFtdcSyncDepositField *t = (CThostFtdcSyncDepositField *)calloc(1, sizeof(CThostFtdcSyncDepositField));
  memset(t,0,sizeof(CThostFtdcSyncDepositField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //出入金流水号
  strcpy(t->DepositSeqNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DepositSeqNo"),"gbk","Error!")));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
  //是否强制进行
  t->IsForce =   PyLong_AsLong(PyObject_GetAttrString(p, "IsForce"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));

  return t;
};

//银行资金转期货请求响应
PyObject * new_CThostFtdcTransferBankToFutureRspField(CThostFtdcTransferBankToFutureRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferBankToFutureRspField", (char*)"dyydyy",
p->TradeAmt, p->CurrencyCode, p->RetInfo, p->CustFee, p->RetCode, p->FutureAccount);
}
CThostFtdcTransferBankToFutureRspField * from_CThostFtdcTransferBankToFutureRspField(PyObject * p){
  CThostFtdcTransferBankToFutureRspField *t = (CThostFtdcTransferBankToFutureRspField *)calloc(1, sizeof(CThostFtdcTransferBankToFutureRspField));
  memset(t,0,sizeof(CThostFtdcTransferBankToFutureRspField));
  //转帐金额
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //币种
  strcpy(t->CurrencyCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyCode"),"gbk","Error!")));
  //响应信息
  strcpy(t->RetInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RetInfo"),"gbk","Error!")));
  //应收客户手续费
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //响应代码
  strcpy(t->RetCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RetCode"),"gbk","Error!")));
  //资金账户
  strcpy(t->FutureAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccount"),"gbk","Error!")));

  return t;
};

//客户端认证信息
PyObject * new_CThostFtdcAuthenticationInfoField(CThostFtdcAuthenticationInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcAuthenticationInfoField", (char*)"yyiyy",
p->UserProductInfo, p->BrokerID, p->IsResult, p->AuthInfo, p->UserID);
}
CThostFtdcAuthenticationInfoField * from_CThostFtdcAuthenticationInfoField(PyObject * p){
  CThostFtdcAuthenticationInfoField *t = (CThostFtdcAuthenticationInfoField *)calloc(1, sizeof(CThostFtdcAuthenticationInfoField));
  memset(t,0,sizeof(CThostFtdcAuthenticationInfoField));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserProductInfo"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //是否为认证结果
  t->IsResult =   PyLong_AsLong(PyObject_GetAttrString(p, "IsResult"));
  //认证信息
  strcpy(t->AuthInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AuthInfo"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//查询投资者
PyObject * new_CThostFtdcQryInvestorField(CThostFtdcQryInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorField", (char*)"yy",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryInvestorField * from_CThostFtdcQryInvestorField(PyObject * p){
  CThostFtdcQryInvestorField *t = (CThostFtdcQryInvestorField *)calloc(1, sizeof(CThostFtdcQryInvestorField));
  memset(t,0,sizeof(CThostFtdcQryInvestorField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//交易核心向银期报盘发出密钥同步请求
PyObject * new_CThostFtdcReqSyncKeyField(CThostFtdcReqSyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqSyncKeyField", (char*)"yyyyyiyiiyyiyyyciyyy",
p->TradingDay, p->BrokerID, p->BankID, p->Message, p->DeviceID, p->PlateSerial, p->UserID, p->InstallID, p->RequestID, p->TradeDate, p->BankSerial, p->TID, p->TradeTime, p->TradeCode, p->BankBranchID, p->LastFragment, p->SessionID, p->BrokerIDByBank, p->OperNo, p->BrokerBranchID);
}
CThostFtdcReqSyncKeyField * from_CThostFtdcReqSyncKeyField(PyObject * p){
  CThostFtdcReqSyncKeyField *t = (CThostFtdcReqSyncKeyField *)calloc(1, sizeof(CThostFtdcReqSyncKeyField));
  memset(t,0,sizeof(CThostFtdcReqSyncKeyField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //交易核心给银期报盘的消息
  strcpy(t->Message, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Message"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));

  return t;
};

//转帐开户请求
PyObject * new_CThostFtdcReqOpenAccountField(CThostFtdcReqOpenAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqOpenAccountField", (char*)"yyyycycyciyyicyyyyyyycyyiyyyyyccyyycyiycyycc",
p->ZipCode, p->TradeDate, p->Address, p->Telephone, p->MoneyAccountStatus, p->BankBranchID, p->SecuPwdFlag, p->BrokerID, p->BankAccType, p->PlateSerial, p->AccountID, p->DeviceID, p->InstallID, p->BankSecuAccType, p->CurrencyID, p->Digest, p->BankAccount, p->TradingDay, p->BrokerBranchID, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->UserID, p->BankSerial, p->SessionID, p->Fax, p->TradeCode, p->Password, p->CountryCode, p->OperNo, p->BankPwdFlag, p->Gender, p->BankID, p->BankSecuAcc, p->EMail, p->CustType, p->BrokerIDByBank, p->TID, p->MobilePhone, p->CashExchangeCode, p->CustomerName, p->TradeTime, p->LastFragment, p->VerifyCertNoFlag);
}
CThostFtdcReqOpenAccountField * from_CThostFtdcReqOpenAccountField(PyObject * p){
  CThostFtdcReqOpenAccountField *t = (CThostFtdcReqOpenAccountField *)calloc(1, sizeof(CThostFtdcReqOpenAccountField));
  memset(t,0,sizeof(CThostFtdcReqOpenAccountField));
  //邮编
  strcpy(t->ZipCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ZipCode"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //地址
  strcpy(t->Address, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Address"),"gbk","Error!")));
  //电话号码
  strcpy(t->Telephone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Telephone"),"gbk","Error!")));
  //资金账户状态
  //enum类型
  //THOST_FTDC_MAS_Cancel -> '1', 销户
  //THOST_FTDC_MAS_Normal -> '0', 正常
  t->MoneyAccountStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MoneyAccountStatus"),"gbk","Error!"))[0];
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankSecuAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAccType"),"gbk","Error!"))[0];
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //传真
  strcpy(t->Fax, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Fax"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //国家代码
  strcpy(t->CountryCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CountryCode"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //性别
  //enum类型
  //THOST_FTDC_GD_Male -> '1', 男
  //THOST_FTDC_GD_Female -> '2', 女
  //THOST_FTDC_GD_Unknown -> '0', 未知状态
  t->Gender =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Gender"),"gbk","Error!"))[0];
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAcc"),"gbk","Error!")));
  //电子邮件
  strcpy(t->EMail, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "EMail"),"gbk","Error!")));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //手机
  strcpy(t->MobilePhone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MobilePhone"),"gbk","Error!")));
  //汇钞标志
  //enum类型
  //THOST_FTDC_CEC_Exchange -> '1', 汇
  //THOST_FTDC_CEC_Cash -> '2', 钞
  t->CashExchangeCode =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CashExchangeCode"),"gbk","Error!"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];

  return t;
};

//客户端认证请求
PyObject * new_CThostFtdcReqAuthenticateField(CThostFtdcReqAuthenticateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqAuthenticateField", (char*)"yyyy",
p->UserProductInfo, p->BrokerID, p->AuthCode, p->UserID);
}
CThostFtdcReqAuthenticateField * from_CThostFtdcReqAuthenticateField(PyObject * p){
  CThostFtdcReqAuthenticateField *t = (CThostFtdcReqAuthenticateField *)calloc(1, sizeof(CThostFtdcReqAuthenticateField));
  memset(t,0,sizeof(CThostFtdcReqAuthenticateField));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserProductInfo"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //认证码
  strcpy(t->AuthCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AuthCode"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//资金账户口令变更域
PyObject * new_CThostFtdcTradingAccountPasswordUpdateField(CThostFtdcTradingAccountPasswordUpdateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountPasswordUpdateField", (char*)"yyyyy",
p->BrokerID, p->NewPassword, p->OldPassword, p->AccountID, p->CurrencyID);
}
CThostFtdcTradingAccountPasswordUpdateField * from_CThostFtdcTradingAccountPasswordUpdateField(PyObject * p){
  CThostFtdcTradingAccountPasswordUpdateField *t = (CThostFtdcTradingAccountPasswordUpdateField *)calloc(1, sizeof(CThostFtdcTradingAccountPasswordUpdateField));
  memset(t,0,sizeof(CThostFtdcTradingAccountPasswordUpdateField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //新的口令
  strcpy(t->NewPassword, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "NewPassword"),"gbk","Error!")));
  //原来的口令
  strcpy(t->OldPassword, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OldPassword"),"gbk","Error!")));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));

  return t;
};

//会员资金折扣
PyObject * new_CThostFtdcDiscountField(CThostFtdcDiscountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDiscountField", (char*)"yydc",
p->InvestorID, p->BrokerID, p->Discount, p->InvestorRange);
}
CThostFtdcDiscountField * from_CThostFtdcDiscountField(PyObject * p){
  CThostFtdcDiscountField *t = (CThostFtdcDiscountField *)calloc(1, sizeof(CThostFtdcDiscountField));
  memset(t,0,sizeof(CThostFtdcDiscountField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //资金折扣比例
  t->Discount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Discount"));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  //THOST_FTDC_IR_All -> '1', 所有
  t->InvestorRange =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorRange"),"gbk","Error!"))[0];

  return t;
};

//深度行情
PyObject * new_CThostFtdcDepthMarketDataField(CThostFtdcDepthMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDepthMarketDataField", (char*)"dddddiidiiiddiiiydddiyddddyidydddddydiyidddd",
p->BidPrice4, p->BidPrice5, p->BidPrice1, p->BidPrice2, p->BidPrice3, p->BidVolume2, p->BidVolume3, p->LastPrice, p->BidVolume4, p->BidVolume5, p->AskVolume4, p->AveragePrice, p->HighestPrice, p->AskVolume1, p->AskVolume2, p->AskVolume3, p->InstrumentID, p->UpperLimitPrice, p->PreSettlementPrice, p->OpenInterest, p->UpdateMillisec, p->ActionDay, p->PreClosePrice, p->LowerLimitPrice, p->CurrDelta, p->OpenPrice, p->TradingDay, p->BidVolume1, p->PreOpenInterest, p->ExchangeID, p->ClosePrice, p->AskPrice4, p->AskPrice5, p->AskPrice2, p->PreDelta, p->ExchangeInstID, p->AskPrice1, p->AskVolume5, p->UpdateTime, p->Volume, p->SettlementPrice, p->LowestPrice, p->Turnover, p->AskPrice3);
}
CThostFtdcDepthMarketDataField * from_CThostFtdcDepthMarketDataField(PyObject * p){
  CThostFtdcDepthMarketDataField *t = (CThostFtdcDepthMarketDataField *)calloc(1, sizeof(CThostFtdcDepthMarketDataField));
  memset(t,0,sizeof(CThostFtdcDepthMarketDataField));
  //申买价四
  t->BidPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice4"));
  //申买价五
  t->BidPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice5"));
  //申买价一
  t->BidPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice1"));
  //申买价二
  t->BidPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice2"));
  //申买价三
  t->BidPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice3"));
  //申买量二
  t->BidVolume2 =   PyLong_AsLong(PyObject_GetAttrString(p, "BidVolume2"));
  //申买量三
  t->BidVolume3 =   PyLong_AsLong(PyObject_GetAttrString(p, "BidVolume3"));
  //最新价
  t->LastPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
  //申买量四
  t->BidVolume4 =   PyLong_AsLong(PyObject_GetAttrString(p, "BidVolume4"));
  //申买量五
  t->BidVolume5 =   PyLong_AsLong(PyObject_GetAttrString(p, "BidVolume5"));
  //申卖量四
  t->AskVolume4 =   PyLong_AsLong(PyObject_GetAttrString(p, "AskVolume4"));
  //当日均价
  t->AveragePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AveragePrice"));
  //最高价
  t->HighestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
  //申卖量一
  t->AskVolume1 =   PyLong_AsLong(PyObject_GetAttrString(p, "AskVolume1"));
  //申卖量二
  t->AskVolume2 =   PyLong_AsLong(PyObject_GetAttrString(p, "AskVolume2"));
  //申卖量三
  t->AskVolume3 =   PyLong_AsLong(PyObject_GetAttrString(p, "AskVolume3"));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //涨停板价
  t->UpperLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //持仓量
  t->OpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));
  //最后修改毫秒
  t->UpdateMillisec =   PyLong_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));
  //业务日期
  strcpy(t->ActionDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionDay"),"gbk","Error!")));
  //昨收盘
  t->PreClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
  //跌停板价
  t->LowerLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
  //今虚实度
  t->CurrDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));
  //今开盘
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //申买量一
  t->BidVolume1 =   PyLong_AsLong(PyObject_GetAttrString(p, "BidVolume1"));
  //昨持仓量
  t->PreOpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //今收盘
  t->ClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
  //申卖价四
  t->AskPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice4"));
  //申卖价五
  t->AskPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice5"));
  //申卖价二
  t->AskPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice2"));
  //昨虚实度
  t->PreDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));
  //申卖价一
  t->AskPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice1"));
  //申卖量五
  t->AskVolume5 =   PyLong_AsLong(PyObject_GetAttrString(p, "AskVolume5"));
  //最后修改时间
  strcpy(t->UpdateTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UpdateTime"),"gbk","Error!")));
  //数量
  t->Volume =   PyLong_AsLong(PyObject_GetAttrString(p, "Volume"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //最低价
  t->LowestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));
  //成交金额
  t->Turnover =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));
  //申卖价三
  t->AskPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice3"));

  return t;
};

//查询管理用户功能权限
PyObject * new_CThostFtdcQrySuperUserFunctionField(CThostFtdcQrySuperUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySuperUserFunctionField", (char*)"y",
p->UserID);
}
CThostFtdcQrySuperUserFunctionField * from_CThostFtdcQrySuperUserFunctionField(PyObject * p){
  CThostFtdcQrySuperUserFunctionField *t = (CThostFtdcQrySuperUserFunctionField *)calloc(1, sizeof(CThostFtdcQrySuperUserFunctionField));
  memset(t,0,sizeof(CThostFtdcQrySuperUserFunctionField));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//投资者账户
PyObject * new_CThostFtdcInvestorAccountField(CThostFtdcInvestorAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorAccountField", (char*)"yyyy",
p->InvestorID, p->BrokerID, p->AccountID, p->CurrencyID);
}
CThostFtdcInvestorAccountField * from_CThostFtdcInvestorAccountField(PyObject * p){
  CThostFtdcInvestorAccountField *t = (CThostFtdcInvestorAccountField *)calloc(1, sizeof(CThostFtdcInvestorAccountField));
  memset(t,0,sizeof(CThostFtdcInvestorAccountField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));

  return t;
};

//交易所交易员报盘机
PyObject * new_CThostFtdcTraderOfferField(CThostFtdcTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTraderOfferField", (char*)"yyyyyiyyyyyyyyyyyyc",
p->TradingDay, p->BrokerID, p->StartDate, p->TraderID, p->OrderLocalID, p->InstallID, p->ConnectTime, p->ExchangeID, p->ConnectDate, p->ConnectRequestDate, p->ParticipantID, p->LastReportTime, p->StartTime, p->MaxTradeID, p->LastReportDate, p->Password, p->MaxOrderMessageReference, p->ConnectRequestTime, p->TraderConnectStatus);
}
CThostFtdcTraderOfferField * from_CThostFtdcTraderOfferField(PyObject * p){
  CThostFtdcTraderOfferField *t = (CThostFtdcTraderOfferField *)calloc(1, sizeof(CThostFtdcTraderOfferField));
  memset(t,0,sizeof(CThostFtdcTraderOfferField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //启动日期
  strcpy(t->StartDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "StartDate"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //完成连接时间
  strcpy(t->ConnectTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ConnectTime"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //完成连接日期
  strcpy(t->ConnectDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ConnectDate"),"gbk","Error!")));
  //发出连接请求的日期
  strcpy(t->ConnectRequestDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ConnectRequestDate"),"gbk","Error!")));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //上次报告时间
  strcpy(t->LastReportTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastReportTime"),"gbk","Error!")));
  //启动时间
  strcpy(t->StartTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "StartTime"),"gbk","Error!")));
  //本席位最大成交编号
  strcpy(t->MaxTradeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MaxTradeID"),"gbk","Error!")));
  //上次报告日期
  strcpy(t->LastReportDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastReportDate"),"gbk","Error!")));
  //密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //本席位最大报单备拷
  strcpy(t->MaxOrderMessageReference, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MaxOrderMessageReference"),"gbk","Error!")));
  //发出连接请求的时间
  strcpy(t->ConnectRequestTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ConnectRequestTime"),"gbk","Error!")));
  //交易所交易员连接状态
  //enum类型
  //THOST_FTDC_TCS_NotConnected -> '1', 没有任何连接
  //THOST_FTDC_TCS_SubPrivateFlow -> '4', 订阅私有流
  //THOST_FTDC_TCS_Connected -> '2', 已经连接
  //THOST_FTDC_TCS_QryInstrumentSent -> '3', 已经发出合约查询请求
  t->TraderConnectStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderConnectStatus"),"gbk","Error!"))[0];

  return t;
};

//交易所报单操作
PyObject * new_CThostFtdcExchangeOrderActionField(CThostFtdcExchangeOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderActionField", (char*)"yyyyyiyycycyiyyd",
p->OrderSysID, p->TraderID, p->OrderLocalID, p->ActionLocalID, p->BusinessUnit, p->InstallID, p->ActionTime, p->ExchangeID, p->OrderActionStatus, p->UserID, p->ActionFlag, p->ParticipantID, p->VolumeChange, p->ActionDate, p->ClientID, p->LimitPrice);
}
CThostFtdcExchangeOrderActionField * from_CThostFtdcExchangeOrderActionField(PyObject * p){
  CThostFtdcExchangeOrderActionField *t = (CThostFtdcExchangeOrderActionField *)calloc(1, sizeof(CThostFtdcExchangeOrderActionField));
  memset(t,0,sizeof(CThostFtdcExchangeOrderActionField));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //操作本地编号
  strcpy(t->ActionLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionLocalID"),"gbk","Error!")));
  //业务单元
  strcpy(t->BusinessUnit, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BusinessUnit"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //操作时间
  strcpy(t->ActionTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionTime"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //报单操作状态
  //enum类型
  //THOST_FTDC_OAS_Accepted -> 'b', 已经接受
  //THOST_FTDC_OAS_Submitted -> 'a', 已经提交
  //THOST_FTDC_OAS_Rejected -> 'c', 已经被拒绝
  t->OrderActionStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderActionStatus"),"gbk","Error!"))[0];
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionFlag"),"gbk","Error!"))[0];
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //数量变化
  t->VolumeChange =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //操作日期
  strcpy(t->ActionDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionDate"),"gbk","Error!")));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));

  return t;
};

//正在同步中的合约交易权限
PyObject * new_CThostFtdcSyncingInstrumentTradingRightField(CThostFtdcSyncingInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInstrumentTradingRightField", (char*)"yyycc",
p->InvestorID, p->InstrumentID, p->BrokerID, p->TradingRight, p->InvestorRange);
}
CThostFtdcSyncingInstrumentTradingRightField * from_CThostFtdcSyncingInstrumentTradingRightField(PyObject * p){
  CThostFtdcSyncingInstrumentTradingRightField *t = (CThostFtdcSyncingInstrumentTradingRightField *)calloc(1, sizeof(CThostFtdcSyncingInstrumentTradingRightField));
  memset(t,0,sizeof(CThostFtdcSyncingInstrumentTradingRightField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //交易权限
  //enum类型
  //THOST_FTDC_TR_CloseOnly -> '1', 只能平仓
  //THOST_FTDC_TR_Allow -> '0', 可以交易
  //THOST_FTDC_TR_Forbidden -> '2', 不能交易
  t->TradingRight =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingRight"),"gbk","Error!"))[0];
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  //THOST_FTDC_IR_All -> '1', 所有
  t->InvestorRange =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorRange"),"gbk","Error!"))[0];

  return t;
};

//查询经纪公司用户事件
PyObject * new_CThostFtdcBrokerUserEventField(CThostFtdcBrokerUserEventField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserEventField", (char*)"yyyiyyyyc",
p->EventDate, p->BrokerID, p->EventTime, p->EventSequenceNo, p->InstrumentID, p->InvestorID, p->UserID, p->UserEventInfo, p->UserEventType);
}
CThostFtdcBrokerUserEventField * from_CThostFtdcBrokerUserEventField(PyObject * p){
  CThostFtdcBrokerUserEventField *t = (CThostFtdcBrokerUserEventField *)calloc(1, sizeof(CThostFtdcBrokerUserEventField));
  memset(t,0,sizeof(CThostFtdcBrokerUserEventField));
  //事件发生日期
  strcpy(t->EventDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "EventDate"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //事件发生时间
  strcpy(t->EventTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "EventTime"),"gbk","Error!")));
  //用户事件序号
  t->EventSequenceNo =   PyLong_AsLong(PyObject_GetAttrString(p, "EventSequenceNo"));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //用户事件信息
  strcpy(t->UserEventInfo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserEventInfo"),"gbk","Error!")));
  //用户事件类型
  //enum类型
  //THOST_FTDC_UET_Trading -> '3', 交易成功
  //THOST_FTDC_UET_TradingError -> '4', 交易失败
  //THOST_FTDC_UET_Login -> '1', 登录
  //THOST_FTDC_UET_Other -> '9', 其他
  //THOST_FTDC_UET_UpdatePassword -> '5', 修改密码
  //THOST_FTDC_UET_Logout -> '2', 登出
  //THOST_FTDC_UET_Authenticate -> '6', 客户端认证
  t->UserEventType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserEventType"),"gbk","Error!"))[0];

  return t;
};

//冲正响应
PyObject * new_CThostFtdcRspRepealField(CThostFtdcRspRepealField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspRepealField", (char*)"cyiidyiccyyyyicyicidyycyyyccyyidiyycyyiyycyyiicyycyd",
p->BrokerRepealFlag, p->TradeDate, p->PlateRepealSerial, p->PlateSerial, p->BrokerFee, p->ErrorMsg, p->ErrorID, p->BankPwdFlag, p->SecuPwdFlag, p->BankBranchID, p->DeviceID, p->BrokerID, p->BankRepealSerial, p->FutureRepealSerial, p->IdCardType, p->AccountID, p->InstallID, p->BankSecuAccType, p->RepealedTimes, p->TradeAmount, p->CurrencyID, p->BrokerBranchID, p->FeePayFlag, p->TradingDay, p->BankPassWord, p->IdentifiedCardNo, p->BankRepealFlag, p->TransferStatus, p->UserID, p->BankSerial, p->SessionID, p->CustFee, p->RepealTimeInterval, p->TradeCode, p->Password, p->BankAccType, p->OperNo, p->Digest, p->RequestID, p->BankID, p->BankSecuAcc, p->VerifyCertNoFlag, p->CustomerName, p->BrokerIDByBank, p->TID, p->FutureSerial, p->CustType, p->BankAccount, p->TradeTime, p->LastFragment, p->Message, p->FutureFetchAmount);
}
CThostFtdcRspRepealField * from_CThostFtdcRspRepealField(PyObject * p){
  CThostFtdcRspRepealField *t = (CThostFtdcRspRepealField *)calloc(1, sizeof(CThostFtdcRspRepealField));
  memset(t,0,sizeof(CThostFtdcRspRepealField));
  //期商冲正标志
  //enum类型
  //THOST_FTDC_BRORF_BrokerBeenRepealed -> '2', 期商已自动冲正
  //THOST_FTDC_BRORF_BrokerNotNeedRepeal -> '0', 期商无需自动冲正
  //THOST_FTDC_BRORF_BrokerWaitingRepeal -> '1', 期商待自动冲正
  t->BrokerRepealFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerRepealFlag"),"gbk","Error!"))[0];
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //被冲正平台流水号
  t->PlateRepealSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateRepealSerial"));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //应收期货公司费用
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //被冲正银行流水号
  strcpy(t->BankRepealSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankRepealSerial"),"gbk","Error!")));
  //被冲正期货流水号
  t->FutureRepealSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "FutureRepealSerial"));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankSecuAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAccType"),"gbk","Error!"))[0];
  //已经冲正次数
  t->RepealedTimes =   PyLong_AsLong(PyObject_GetAttrString(p, "RepealedTimes"));
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //费用支付标志
  //enum类型
  //THOST_FTDC_FPF_BEN -> '0', 由受益方支付费用
  //THOST_FTDC_FPF_SHA -> '2', 由发送方支付发起的费用，受益方支付接受的费用
  //THOST_FTDC_FPF_OUR -> '1', 由发送方支付费用
  t->FeePayFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FeePayFlag"),"gbk","Error!"))[0];
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //银行冲正标志
  //enum类型
  //THOST_FTDC_BRF_BankBeenRepealed -> '2', 银行已自动冲正
  //THOST_FTDC_BRF_BankNotNeedRepeal -> '0', 银行无需自动冲正
  //THOST_FTDC_BRF_BankWaitingRepeal -> '1', 银行待自动冲正
  t->BankRepealFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankRepealFlag"),"gbk","Error!"))[0];
  //转账交易状态
  //enum类型
  //THOST_FTDC_TRFS_Normal -> '0', 正常
  //THOST_FTDC_TRFS_Repealed -> '1', 被冲正
  t->TransferStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TransferStatus"),"gbk","Error!"))[0];
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //应收客户费用
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //冲正时间间隔
  t->RepealTimeInterval =   PyLong_AsLong(PyObject_GetAttrString(p, "RepealTimeInterval"));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAcc"),"gbk","Error!")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //期货公司流水号
  t->FutureSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //发送方给接收方的消息
  strcpy(t->Message, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Message"),"gbk","Error!")));
  //期货可取金额
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));

  return t;
};

//查询投资者品种/跨品种保证金
PyObject * new_CThostFtdcQryInvestorProductGroupMarginField(CThostFtdcQryInvestorProductGroupMarginField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorProductGroupMarginField", (char*)"yycy",
p->InvestorID, p->BrokerID, p->HedgeFlag, p->ProductGroupID);
}
CThostFtdcQryInvestorProductGroupMarginField * from_CThostFtdcQryInvestorProductGroupMarginField(PyObject * p){
  CThostFtdcQryInvestorProductGroupMarginField *t = (CThostFtdcQryInvestorProductGroupMarginField *)calloc(1, sizeof(CThostFtdcQryInvestorProductGroupMarginField));
  memset(t,0,sizeof(CThostFtdcQryInvestorProductGroupMarginField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //品种/跨品种标示
  strcpy(t->ProductGroupID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ProductGroupID"),"gbk","Error!")));

  return t;
};

//查询指定流水号的交易结果响应
PyObject * new_CThostFtdcRspQueryTradeResultBySerialField(CThostFtdcRspQueryTradeResultBySerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspQueryTradeResultBySerialField", (char*)"yyiyiyiyiyyycyyyyyyydyycyy",
p->TradingDay, p->TradeDate, p->Reference, p->BankPassWord, p->PlateSerial, p->BankSerial, p->SessionID, p->BankBranchID, p->ErrorID, p->CurrencyID, p->ErrorMsg, p->TradeCode, p->RefrenceIssureType, p->OriginDescrInfoForReturnCode, p->BrokerBranchID, p->BrokerID, p->BankID, p->AccountID, p->RefrenceIssure, p->OriginReturnCode, p->TradeAmount, p->TradeTime, p->Password, p->LastFragment, p->Digest, p->BankAccount);
}
CThostFtdcRspQueryTradeResultBySerialField * from_CThostFtdcRspQueryTradeResultBySerialField(PyObject * p){
  CThostFtdcRspQueryTradeResultBySerialField *t = (CThostFtdcRspQueryTradeResultBySerialField *)calloc(1, sizeof(CThostFtdcRspQueryTradeResultBySerialField));
  memset(t,0,sizeof(CThostFtdcRspQueryTradeResultBySerialField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //流水号
  t->Reference =   PyLong_AsLong(PyObject_GetAttrString(p, "Reference"));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //本流水号发布者的机构类型
  //enum类型
  //THOST_FTDC_TS_Store -> '2', 券商
  //THOST_FTDC_TS_Bank -> '0', 银行
  //THOST_FTDC_TS_Future -> '1', 期商
  t->RefrenceIssureType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RefrenceIssureType"),"gbk","Error!"))[0];
  //原始返回码描述
  strcpy(t->OriginDescrInfoForReturnCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OriginDescrInfoForReturnCode"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //本流水号发布者机构编码
  strcpy(t->RefrenceIssure, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "RefrenceIssure"),"gbk","Error!")));
  //原始返回代码
  strcpy(t->OriginReturnCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OriginReturnCode"),"gbk","Error!")));
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));

  return t;
};

//交易核心向银期报盘发出密钥同步响应
PyObject * new_CThostFtdcRspSyncKeyField(CThostFtdcRspSyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspSyncKeyField", (char*)"yyyiyyiyiyyyyiyyiiycyy",
p->TradingDay, p->TradeDate, p->DeviceID, p->PlateSerial, p->UserID, p->BankSerial, p->SessionID, p->ErrorMsg, p->ErrorID, p->BankBranchID, p->TradeCode, p->OperNo, p->BrokerBranchID, p->RequestID, p->BrokerID, p->BankID, p->InstallID, p->TID, p->TradeTime, p->LastFragment, p->Message, p->BrokerIDByBank);
}
CThostFtdcRspSyncKeyField * from_CThostFtdcRspSyncKeyField(PyObject * p){
  CThostFtdcRspSyncKeyField *t = (CThostFtdcRspSyncKeyField *)calloc(1, sizeof(CThostFtdcRspSyncKeyField));
  memset(t,0,sizeof(CThostFtdcRspSyncKeyField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //交易核心给银期报盘的消息
  strcpy(t->Message, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Message"),"gbk","Error!")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));

  return t;
};

//经纪公司用户功能权限
PyObject * new_CThostFtdcBrokerUserFunctionField(CThostFtdcBrokerUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserFunctionField", (char*)"ycy",
p->BrokerID, p->BrokerFunctionCode, p->UserID);
}
CThostFtdcBrokerUserFunctionField * from_CThostFtdcBrokerUserFunctionField(PyObject * p){
  CThostFtdcBrokerUserFunctionField *t = (CThostFtdcBrokerUserFunctionField *)calloc(1, sizeof(CThostFtdcBrokerUserFunctionField));
  memset(t,0,sizeof(CThostFtdcBrokerUserFunctionField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //经纪公司功能代码
  //enum类型
  //THOST_FTDC_BFC_QueryTrade -> 'm', 成交查询
  //THOST_FTDC_BFC_QueryFund -> 'k', 资金查询
  //THOST_FTDC_BFC_SendBizNotice -> 'F', 发送业务通知
  //THOST_FTDC_BFC_ParkedOrderAction -> 'L', 预埋报单操作
  //THOST_FTDC_BFC_DeleteOrder -> 'J', 删除未知单
  //THOST_FTDC_BFC_CfgRiskLevelStd -> 'G', 风险级别标准设置
  //THOST_FTDC_BFC_MarketDataWarn -> 'B', 行情预警
  //THOST_FTDC_BFC_CfgBizNotice -> 'D', 业务通知模板设置
  //THOST_FTDC_BFC_QueryOrder -> 'l', 报单查询
  //THOST_FTDC_BFC_BrokerDeposit -> 'j', 察看经纪公司资金权限
  //THOST_FTDC_BFC_Risk -> 'f', 风险监控
  //THOST_FTDC_BFC_UserPasswordUpdate -> '2', 变更用户口令
  //THOST_FTDC_BFC_QueryRiskNotify -> 'q', 风险通知查询
  //THOST_FTDC_BFC_TbCommand -> 'H', 交易终端应急功能
  //THOST_FTDC_BFC_QueryUserEvent -> 'p', 用户事件查询
  //THOST_FTDC_BFC_Trade -> 'd', 交易功能：报单，撤单
  //THOST_FTDC_BFC_QueryPosition -> 'n', 持仓查询
  //THOST_FTDC_BFC_RiskTargetSetup -> 'A', 风控指标设置
  //THOST_FTDC_BFC_ForceClose -> 'u', 强平
  //THOST_FTDC_BFC_NetPositionInd -> 'x', 净持仓保证金指标
  //THOST_FTDC_BFC_DataExport -> 'z', 数据导出
  //THOST_FTDC_BFC_RiskNoticeCtl -> 'h', 风控通知控制
  //THOST_FTDC_BFC_QryBizNotice -> 'C', 业务通知查询
  //THOST_FTDC_BFC_QueryTradingCode -> 't', 交易编码查询
  //THOST_FTDC_BFC_SyncOTP -> 'E', 同步动态令牌
  //THOST_FTDC_BFC_OrderAction -> '6', 报单操作
  //THOST_FTDC_BFC_BaseQry -> 'b', 基本查询：查询基础数据，如合约，交易所等常量
  //THOST_FTDC_BFC_Session -> 'g', 查询/管理：查询会话，踢人等
  //THOST_FTDC_BFC_QueryFundChange -> 'r', 出入金查询
  //THOST_FTDC_BFC_SyncBrokerData -> '3', 同步经纪公司数据
  //THOST_FTDC_BFC_ParkedOrderInsert -> 'K', 预埋报单插入
  //THOST_FTDC_BFC_OrderInsert -> '5', 报单插入
  //THOST_FTDC_BFC_AllQuery -> '7', 全部查询
  //THOST_FTDC_BFC_RemainCalc -> 'w', 权益反算
  //THOST_FTDC_BFC_QueryInvestor -> 's', 投资者信息查询
  //THOST_FTDC_BFC_TradeQry -> 'c', 交易查询：如查成交，委托
  //THOST_FTDC_BFC_RiskNotice -> 'i', 风控通知发送
  //THOST_FTDC_BFC_RiskPredict -> 'y', 风险预算
  //THOST_FTDC_BFC_log -> 'a', 系统功能：登入/登出/修改密码等
  //THOST_FTDC_BFC_PressTest -> 'v', 压力测试
  //THOST_FTDC_BFC_QueryMarketData -> 'o', 行情查询
  //THOST_FTDC_BFC_ForceUserLogout -> '1', 强制用户登出
  //THOST_FTDC_BFC_Virement -> 'e', 银期转账
  //THOST_FTDC_BFC_BachSyncBrokerData -> '4', 批量同步经纪公司数据
  t->BrokerFunctionCode =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerFunctionCode"),"gbk","Error!"))[0];
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//正在同步中的合约保证金率
PyObject * new_CThostFtdcSyncingInstrumentMarginRateField(CThostFtdcSyncingInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInstrumentMarginRateField", (char*)"ydcyyidcdd",
p->BrokerID, p->ShortMarginRatioByVolume, p->InvestorRange, p->InvestorID, p->InstrumentID, p->IsRelative, p->ShortMarginRatioByMoney, p->HedgeFlag, p->LongMarginRatioByVolume, p->LongMarginRatioByMoney);
}
CThostFtdcSyncingInstrumentMarginRateField * from_CThostFtdcSyncingInstrumentMarginRateField(PyObject * p){
  CThostFtdcSyncingInstrumentMarginRateField *t = (CThostFtdcSyncingInstrumentMarginRateField *)calloc(1, sizeof(CThostFtdcSyncingInstrumentMarginRateField));
  memset(t,0,sizeof(CThostFtdcSyncingInstrumentMarginRateField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //空头保证金费
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  //THOST_FTDC_IR_All -> '1', 所有
  t->InvestorRange =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorRange"),"gbk","Error!"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //是否相对交易所收取
  t->IsRelative =   PyLong_AsLong(PyObject_GetAttrString(p, "IsRelative"));
  //空头保证金率
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //多头保证金费
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));
  //多头保证金率
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));

  return t;
};

//查询成交
PyObject * new_CThostFtdcQryTradeField(CThostFtdcQryTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradeField", (char*)"yyyyyyy",
p->TradeTimeStart, p->BrokerID, p->TradeTimeEnd, p->InvestorID, p->InstrumentID, p->TradeID, p->ExchangeID);
}
CThostFtdcQryTradeField * from_CThostFtdcQryTradeField(PyObject * p){
  CThostFtdcQryTradeField *t = (CThostFtdcQryTradeField *)calloc(1, sizeof(CThostFtdcQryTradeField));
  memset(t,0,sizeof(CThostFtdcQryTradeField));
  //开始时间
  strcpy(t->TradeTimeStart, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTimeStart"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //结束时间
  strcpy(t->TradeTimeEnd, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTimeEnd"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //成交编号
  strcpy(t->TradeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//市场行情
PyObject * new_CThostFtdcMarketDataField(CThostFtdcMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataField", (char*)"ydddydddyydddiyyidddddd",
p->TradingDay, p->PreOpenInterest, p->LastPrice, p->PreDelta, p->ExchangeID, p->ClosePrice, p->Turnover, p->HighestPrice, p->ExchangeInstID, p->InstrumentID, p->UpperLimitPrice, p->PreSettlementPrice, p->OpenInterest, p->UpdateMillisec, p->ActionDay, p->UpdateTime, p->Volume, p->SettlementPrice, p->PreClosePrice, p->LowestPrice, p->LowerLimitPrice, p->CurrDelta, p->OpenPrice);
}
CThostFtdcMarketDataField * from_CThostFtdcMarketDataField(PyObject * p){
  CThostFtdcMarketDataField *t = (CThostFtdcMarketDataField *)calloc(1, sizeof(CThostFtdcMarketDataField));
  memset(t,0,sizeof(CThostFtdcMarketDataField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //昨持仓量
  t->PreOpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
  //最新价
  t->LastPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
  //昨虚实度
  t->PreDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //今收盘
  t->ClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
  //成交金额
  t->Turnover =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));
  //最高价
  t->HighestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //涨停板价
  t->UpperLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //持仓量
  t->OpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));
  //最后修改毫秒
  t->UpdateMillisec =   PyLong_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));
  //业务日期
  strcpy(t->ActionDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionDay"),"gbk","Error!")));
  //最后修改时间
  strcpy(t->UpdateTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UpdateTime"),"gbk","Error!")));
  //数量
  t->Volume =   PyLong_AsLong(PyObject_GetAttrString(p, "Volume"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //昨收盘
  t->PreClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
  //最低价
  t->LowestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));
  //跌停板价
  t->LowerLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
  //今虚实度
  t->CurrDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));
  //今开盘
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));

  return t;
};

//禁止登录用户
PyObject * new_CThostFtdcLoginForbiddenUserField(CThostFtdcLoginForbiddenUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLoginForbiddenUserField", (char*)"yy",
p->BrokerID, p->UserID);
}
CThostFtdcLoginForbiddenUserField * from_CThostFtdcLoginForbiddenUserField(PyObject * p){
  CThostFtdcLoginForbiddenUserField *t = (CThostFtdcLoginForbiddenUserField *)calloc(1, sizeof(CThostFtdcLoginForbiddenUserField));
  memset(t,0,sizeof(CThostFtdcLoginForbiddenUserField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//银行资金转期货请求，TradeCode=202001
PyObject * new_CThostFtdcTransferBankToFutureReqField(CThostFtdcTransferBankToFutureReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferBankToFutureReqField", (char*)"ydycdy",
p->FutureAccPwd, p->TradeAmt, p->CurrencyCode, p->FuturePwdFlag, p->CustFee, p->FutureAccount);
}
CThostFtdcTransferBankToFutureReqField * from_CThostFtdcTransferBankToFutureReqField(PyObject * p){
  CThostFtdcTransferBankToFutureReqField *t = (CThostFtdcTransferBankToFutureReqField *)calloc(1, sizeof(CThostFtdcTransferBankToFutureReqField));
  memset(t,0,sizeof(CThostFtdcTransferBankToFutureReqField));
  //密码
  strcpy(t->FutureAccPwd, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccPwd"),"gbk","Error!")));
  //转账金额
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //币种：RMB-人民币 USD-美圆 HKD-港元
  strcpy(t->CurrencyCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyCode"),"gbk","Error!")));
  //密码标志
  //enum类型
  //THOST_FTDC_FPWD_UnCheck -> '0', 不核对
  //THOST_FTDC_FPWD_Check -> '1', 核对
  t->FuturePwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FuturePwdFlag"),"gbk","Error!"))[0];
  //客户手续费
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //期货资金账户
  strcpy(t->FutureAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FutureAccount"),"gbk","Error!")));

  return t;
};

//交易所报单
PyObject * new_CThostFtdcExchangeOrderField(CThostFtdcExchangeOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderField", (char*)"ycyyiycccyyydyiycycyciiiyyyciyyydyiciiyicy",
p->TradingDay, p->OrderSource, p->ClientID, p->CancelTime, p->VolumeTotal, p->BusinessUnit, p->OrderSubmitStatus, p->Direction, p->OrderType, p->ExchangeID, p->GTDDate, p->InsertTime, p->StopPrice, p->ParticipantID, p->VolumeTraded, p->ExchangeInstID, p->OrderStatus, p->ActiveTime, p->VolumeCondition, p->ClearingPartID, p->TimeCondition, p->SequenceNo, p->RequestID, p->SettlementID, p->OrderSysID, p->TraderID, p->OrderLocalID, p->OrderPriceType, p->InstallID, p->UpdateTime, p->InsertDate, p->ActiveTraderID, p->LimitPrice, p->SuspendTime, p->NotifySequence, p->ContingentCondition, p->MinVolume, p->IsAutoSuspend, p->CombHedgeFlag, p->VolumeTotalOriginal, p->ForceCloseReason, p->CombOffsetFlag);
}
CThostFtdcExchangeOrderField * from_CThostFtdcExchangeOrderField(PyObject * p){
  CThostFtdcExchangeOrderField *t = (CThostFtdcExchangeOrderField *)calloc(1, sizeof(CThostFtdcExchangeOrderField));
  memset(t,0,sizeof(CThostFtdcExchangeOrderField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //报单来源
  //enum类型
  //THOST_FTDC_OSRC_Participant -> '0', 来自参与者
  //THOST_FTDC_OSRC_Administrator -> '1', 来自管理员
  t->OrderSource =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSource"),"gbk","Error!"))[0];
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //撤销时间
  strcpy(t->CancelTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CancelTime"),"gbk","Error!")));
  //剩余数量
  t->VolumeTotal =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
  //业务单元
  strcpy(t->BusinessUnit, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BusinessUnit"),"gbk","Error!")));
  //报单提交状态
  //enum类型
  //THOST_FTDC_OSS_InsertRejected -> '4', 报单已经被拒绝
  //THOST_FTDC_OSS_ModifySubmitted -> '2', 修改已经提交
  //THOST_FTDC_OSS_CancelRejected -> '5', 撤单已经被拒绝
  //THOST_FTDC_OSS_InsertSubmitted -> '0', 已经提交
  //THOST_FTDC_OSS_Accepted -> '3', 已经接受
  //THOST_FTDC_OSS_ModifyRejected -> '6', 改单已经被拒绝
  //THOST_FTDC_OSS_CancelSubmitted -> '1', 撤单已经提交
  t->OrderSubmitStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSubmitStatus"),"gbk","Error!"))[0];
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //报单类型
  //enum类型
  //THOST_FTDC_ORDT_DeriveFromQuote -> '1', 报价衍生
  //THOST_FTDC_ORDT_Combination -> '3', 组合报单
  //THOST_FTDC_ORDT_Normal -> '0', 正常
  //THOST_FTDC_ORDT_ConditionalOrder -> '4', 条件单
  //THOST_FTDC_ORDT_Swap -> '5', 互换单
  //THOST_FTDC_ORDT_DeriveFromCombination -> '2', 组合衍生
  t->OrderType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderType"),"gbk","Error!"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //GTD日期
  strcpy(t->GTDDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "GTDDate"),"gbk","Error!")));
  //委托时间
  strcpy(t->InsertTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InsertTime"),"gbk","Error!")));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //今成交数量
  t->VolumeTraded =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));
  //报单状态
  //enum类型
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', 部分成交不在队列中
  //THOST_FTDC_OST_Unknown -> 'a', 未知
  //THOST_FTDC_OST_NotTouched -> 'b', 尚未触发
  //THOST_FTDC_OST_Canceled -> '5', 撤单
  //THOST_FTDC_OST_PartTradedQueueing -> '1', 部分成交还在队列中
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', 未成交不在队列中
  //THOST_FTDC_OST_NoTradeQueueing -> '3', 未成交还在队列中
  //THOST_FTDC_OST_AllTraded -> '0', 全部成交
  //THOST_FTDC_OST_Touched -> 'c', 已触发
  t->OrderStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderStatus"),"gbk","Error!"))[0];
  //激活时间
  strcpy(t->ActiveTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActiveTime"),"gbk","Error!")));
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VolumeCondition"),"gbk","Error!"))[0];
  //结算会员编号
  strcpy(t->ClearingPartID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClearingPartID"),"gbk","Error!")));
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  t->TimeCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TimeCondition"),"gbk","Error!"))[0];
  //序号
  t->SequenceNo =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  t->OrderPriceType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderPriceType"),"gbk","Error!"))[0];
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //最后修改时间
  strcpy(t->UpdateTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UpdateTime"),"gbk","Error!")));
  //报单日期
  strcpy(t->InsertDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InsertDate"),"gbk","Error!")));
  //最后修改交易所交易员代码
  strcpy(t->ActiveTraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActiveTraderID"),"gbk","Error!")));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //挂起时间
  strcpy(t->SuspendTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SuspendTime"),"gbk","Error!")));
  //报单提示序号
  t->NotifySequence =   PyLong_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_Touch -> '2', 止损
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  t->ContingentCondition =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ContingentCondition"),"gbk","Error!"))[0];
  //最小成交量
  t->MinVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //自动挂起标志
  t->IsAutoSuspend =   PyLong_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombHedgeFlag"),"gbk","Error!")));
  //数量
  t->VolumeTotalOriginal =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ForceCloseReason"),"gbk","Error!"))[0];
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombOffsetFlag"),"gbk","Error!")));

  return t;
};

//行情最优价属性
PyObject * new_CThostFtdcMarketDataBestPriceField(CThostFtdcMarketDataBestPriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBestPriceField", (char*)"iidd",
p->BidVolume1, p->AskVolume1, p->BidPrice1, p->AskPrice1);
}
CThostFtdcMarketDataBestPriceField * from_CThostFtdcMarketDataBestPriceField(PyObject * p){
  CThostFtdcMarketDataBestPriceField *t = (CThostFtdcMarketDataBestPriceField *)calloc(1, sizeof(CThostFtdcMarketDataBestPriceField));
  memset(t,0,sizeof(CThostFtdcMarketDataBestPriceField));
  //申买量一
  t->BidVolume1 =   PyLong_AsLong(PyObject_GetAttrString(p, "BidVolume1"));
  //申卖量一
  t->AskVolume1 =   PyLong_AsLong(PyObject_GetAttrString(p, "AskVolume1"));
  //申买价一
  t->BidPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice1"));
  //申卖价一
  t->AskPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice1"));

  return t;
};

//查询账户信息响应
PyObject * new_CThostFtdcRspQueryAccountField(CThostFtdcRspQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspQueryAccountField", (char*)"yyyycdyyyyicyyyyccyiyyyiyyiiidccycycyy",
p->TradingDay, p->TradeDate, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->BankFetchAmount, p->UserID, p->OperNo, p->BankSerial, p->Digest, p->SessionID, p->BankPwdFlag, p->CurrencyID, p->BankBranchID, p->TradeCode, p->Password, p->BankAccType, p->SecuPwdFlag, p->BrokerBranchID, p->RequestID, p->BrokerID, p->BankID, p->BankSecuAcc, p->PlateSerial, p->AccountID, p->CustomerName, p->InstallID, p->TID, p->FutureSerial, p->BankUseAmount, p->BankSecuAccType, p->CustType, p->BankAccount, p->LastFragment, p->DeviceID, p->VerifyCertNoFlag, p->BrokerIDByBank, p->TradeTime);
}
CThostFtdcRspQueryAccountField * from_CThostFtdcRspQueryAccountField(PyObject * p){
  CThostFtdcRspQueryAccountField *t = (CThostFtdcRspQueryAccountField *)calloc(1, sizeof(CThostFtdcRspQueryAccountField));
  memset(t,0,sizeof(CThostFtdcRspQueryAccountField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //银行可取金额
  t->BankFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankFetchAmount"));
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAcc"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //期货公司流水号
  t->FutureSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //银行可用金额
  t->BankUseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankUseAmount"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankSecuAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAccType"),"gbk","Error!"))[0];
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));

  return t;
};

//查询合约交易权限
PyObject * new_CThostFtdcQryInstrumentTradingRightField(CThostFtdcQryInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentTradingRightField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->InstrumentID);
}
CThostFtdcQryInstrumentTradingRightField * from_CThostFtdcQryInstrumentTradingRightField(PyObject * p){
  CThostFtdcQryInstrumentTradingRightField *t = (CThostFtdcQryInstrumentTradingRightField *)calloc(1, sizeof(CThostFtdcQryInstrumentTradingRightField));
  memset(t,0,sizeof(CThostFtdcQryInstrumentTradingRightField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));

  return t;
};

//监控中心用户令牌
PyObject * new_CThostFtdcCFMMCTradingAccountTokenField(CThostFtdcCFMMCTradingAccountTokenField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCFMMCTradingAccountTokenField", (char*)"yyiyy",
p->BrokerID, p->ParticipantID, p->KeyID, p->AccountID, p->Token);
}
CThostFtdcCFMMCTradingAccountTokenField * from_CThostFtdcCFMMCTradingAccountTokenField(PyObject * p){
  CThostFtdcCFMMCTradingAccountTokenField *t = (CThostFtdcCFMMCTradingAccountTokenField *)calloc(1, sizeof(CThostFtdcCFMMCTradingAccountTokenField));
  memset(t,0,sizeof(CThostFtdcCFMMCTradingAccountTokenField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //经纪公司统一编码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //密钥编号
  t->KeyID =   PyLong_AsLong(PyObject_GetAttrString(p, "KeyID"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //动态令牌
  strcpy(t->Token, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Token"),"gbk","Error!")));

  return t;
};

//投资者持仓
PyObject * new_CThostFtdcInvestorPositionField(CThostFtdcInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorPositionField", (char*)"ydidicdidddcydiddidyddddidddiddidiydiidc",
p->TradingDay, p->CloseProfitByDate, p->OpenVolume, p->CloseProfit, p->YdPosition, p->HedgeFlag, p->OpenCost, p->CombLongFrozen, p->Commission, p->MarginRateByVolume, p->UseMargin, p->PositionDate, p->InstrumentID, p->CloseProfitByTrade, p->SettlementID, p->PositionProfit, p->PreMargin, p->ShortFrozen, p->OpenAmount, p->BrokerID, p->CashIn, p->FrozenCash, p->MarginRateByMoney, p->FrozenCommission, p->Position, p->LongFrozenAmount, p->CloseAmount, p->PositionCost, p->CloseVolume, p->ExchangeMargin, p->ShortFrozenAmount, p->CombPosition, p->SettlementPrice, p->CombShortFrozen, p->InvestorID, p->FrozenMargin, p->TodayPosition, p->LongFrozen, p->PreSettlementPrice, p->PosiDirection);
}
CThostFtdcInvestorPositionField * from_CThostFtdcInvestorPositionField(PyObject * p){
  CThostFtdcInvestorPositionField *t = (CThostFtdcInvestorPositionField *)calloc(1, sizeof(CThostFtdcInvestorPositionField));
  memset(t,0,sizeof(CThostFtdcInvestorPositionField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //逐日盯市平仓盈亏
  t->CloseProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
  //开仓量
  t->OpenVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "OpenVolume"));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //上日持仓
  t->YdPosition =   PyLong_AsLong(PyObject_GetAttrString(p, "YdPosition"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //开仓成本
  t->OpenCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenCost"));
  //组合多头冻结
  t->CombLongFrozen =   PyLong_AsLong(PyObject_GetAttrString(p, "CombLongFrozen"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //保证金率(按手数)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //占用的保证金
  t->UseMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UseMargin"));
  //持仓日期
  //enum类型
  //THOST_FTDC_PSD_History -> '2', 历史持仓
  //THOST_FTDC_PSD_Today -> '1', 今日持仓
  t->PositionDate =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PositionDate"),"gbk","Error!"))[0];
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //逐笔对冲平仓盈亏
  t->CloseProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //上次占用的保证金
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //空头冻结
  t->ShortFrozen =   PyLong_AsLong(PyObject_GetAttrString(p, "ShortFrozen"));
  //开仓金额
  t->OpenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenAmount"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //冻结的资金
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //保证金率
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //冻结的手续费
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //今日持仓
  t->Position =   PyLong_AsLong(PyObject_GetAttrString(p, "Position"));
  //开仓冻结金额
  t->LongFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenAmount"));
  //平仓金额
  t->CloseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
  //持仓成本
  t->PositionCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionCost"));
  //平仓量
  t->CloseVolume =   PyLong_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //开仓冻结金额
  t->ShortFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenAmount"));
  //组合成交形成的持仓
  t->CombPosition =   PyLong_AsLong(PyObject_GetAttrString(p, "CombPosition"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //组合空头冻结
  t->CombShortFrozen =   PyLong_AsLong(PyObject_GetAttrString(p, "CombShortFrozen"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //今日持仓
  t->TodayPosition =   PyLong_AsLong(PyObject_GetAttrString(p, "TodayPosition"));
  //多头冻结
  t->LongFrozen =   PyLong_AsLong(PyObject_GetAttrString(p, "LongFrozen"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //持仓多空方向
  //enum类型
  //THOST_FTDC_PD_Long -> '2', 多头
  //THOST_FTDC_PD_Net -> '1', 净
  //THOST_FTDC_PD_Short -> '3', 空头
  t->PosiDirection =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PosiDirection"),"gbk","Error!"))[0];

  return t;
};

//冲正请求
PyObject * new_CThostFtdcReqRepealField(CThostFtdcReqRepealField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqRepealField", (char*)"cyiidccyyyyicyicidyycyyyccyyidiyycyyiyycyyiicyycyd",
p->BrokerRepealFlag, p->TradeDate, p->PlateRepealSerial, p->PlateSerial, p->BrokerFee, p->BankPwdFlag, p->SecuPwdFlag, p->BankBranchID, p->DeviceID, p->BrokerID, p->BankRepealSerial, p->FutureRepealSerial, p->IdCardType, p->AccountID, p->InstallID, p->BankSecuAccType, p->RepealedTimes, p->TradeAmount, p->CurrencyID, p->BrokerBranchID, p->FeePayFlag, p->TradingDay, p->BankPassWord, p->IdentifiedCardNo, p->BankRepealFlag, p->TransferStatus, p->UserID, p->BankSerial, p->SessionID, p->CustFee, p->RepealTimeInterval, p->TradeCode, p->Password, p->BankAccType, p->OperNo, p->Digest, p->RequestID, p->BankID, p->BankSecuAcc, p->VerifyCertNoFlag, p->CustomerName, p->BrokerIDByBank, p->TID, p->FutureSerial, p->CustType, p->BankAccount, p->TradeTime, p->LastFragment, p->Message, p->FutureFetchAmount);
}
CThostFtdcReqRepealField * from_CThostFtdcReqRepealField(PyObject * p){
  CThostFtdcReqRepealField *t = (CThostFtdcReqRepealField *)calloc(1, sizeof(CThostFtdcReqRepealField));
  memset(t,0,sizeof(CThostFtdcReqRepealField));
  //期商冲正标志
  //enum类型
  //THOST_FTDC_BRORF_BrokerBeenRepealed -> '2', 期商已自动冲正
  //THOST_FTDC_BRORF_BrokerNotNeedRepeal -> '0', 期商无需自动冲正
  //THOST_FTDC_BRORF_BrokerWaitingRepeal -> '1', 期商待自动冲正
  t->BrokerRepealFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerRepealFlag"),"gbk","Error!"))[0];
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //被冲正平台流水号
  t->PlateRepealSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateRepealSerial"));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //应收期货公司费用
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //被冲正银行流水号
  strcpy(t->BankRepealSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankRepealSerial"),"gbk","Error!")));
  //被冲正期货流水号
  t->FutureRepealSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "FutureRepealSerial"));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankSecuAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAccType"),"gbk","Error!"))[0];
  //已经冲正次数
  t->RepealedTimes =   PyLong_AsLong(PyObject_GetAttrString(p, "RepealedTimes"));
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //费用支付标志
  //enum类型
  //THOST_FTDC_FPF_BEN -> '0', 由受益方支付费用
  //THOST_FTDC_FPF_SHA -> '2', 由发送方支付发起的费用，受益方支付接受的费用
  //THOST_FTDC_FPF_OUR -> '1', 由发送方支付费用
  t->FeePayFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FeePayFlag"),"gbk","Error!"))[0];
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //银行冲正标志
  //enum类型
  //THOST_FTDC_BRF_BankBeenRepealed -> '2', 银行已自动冲正
  //THOST_FTDC_BRF_BankNotNeedRepeal -> '0', 银行无需自动冲正
  //THOST_FTDC_BRF_BankWaitingRepeal -> '1', 银行待自动冲正
  t->BankRepealFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankRepealFlag"),"gbk","Error!"))[0];
  //转账交易状态
  //enum类型
  //THOST_FTDC_TRFS_Normal -> '0', 正常
  //THOST_FTDC_TRFS_Repealed -> '1', 被冲正
  t->TransferStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TransferStatus"),"gbk","Error!"))[0];
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //应收客户费用
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //冲正时间间隔
  t->RepealTimeInterval =   PyLong_AsLong(PyObject_GetAttrString(p, "RepealTimeInterval"));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAcc"),"gbk","Error!")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //期货公司流水号
  t->FutureSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //发送方给接收方的消息
  strcpy(t->Message, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Message"),"gbk","Error!")));
  //期货可取金额
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));

  return t;
};

//行情基础属性
PyObject * new_CThostFtdcMarketDataBaseField(CThostFtdcMarketDataBaseField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBaseField", (char*)"ydddd",
p->TradingDay, p->PreClosePrice, p->PreSettlementPrice, p->PreOpenInterest, p->PreDelta);
}
CThostFtdcMarketDataBaseField * from_CThostFtdcMarketDataBaseField(PyObject * p){
  CThostFtdcMarketDataBaseField *t = (CThostFtdcMarketDataBaseField *)calloc(1, sizeof(CThostFtdcMarketDataBaseField));
  memset(t,0,sizeof(CThostFtdcMarketDataBaseField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //昨收盘
  t->PreClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //昨持仓量
  t->PreOpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
  //昨虚实度
  t->PreDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));

  return t;
};

//经纪公司同步
PyObject * new_CThostFtdcBrokerSyncField(CThostFtdcBrokerSyncField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerSyncField", (char*)"y",
p->BrokerID);
}
CThostFtdcBrokerSyncField * from_CThostFtdcBrokerSyncField(PyObject * p){
  CThostFtdcBrokerSyncField *t = (CThostFtdcBrokerSyncField *)calloc(1, sizeof(CThostFtdcBrokerSyncField));
  memset(t,0,sizeof(CThostFtdcBrokerSyncField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//行情更新时间属性
PyObject * new_CThostFtdcMarketDataUpdateTimeField(CThostFtdcMarketDataUpdateTimeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataUpdateTimeField", (char*)"yyyi",
p->ActionDay, p->InstrumentID, p->UpdateTime, p->UpdateMillisec);
}
CThostFtdcMarketDataUpdateTimeField * from_CThostFtdcMarketDataUpdateTimeField(PyObject * p){
  CThostFtdcMarketDataUpdateTimeField *t = (CThostFtdcMarketDataUpdateTimeField *)calloc(1, sizeof(CThostFtdcMarketDataUpdateTimeField));
  memset(t,0,sizeof(CThostFtdcMarketDataUpdateTimeField));
  //业务日期
  strcpy(t->ActionDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionDay"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //最后修改时间
  strcpy(t->UpdateTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UpdateTime"),"gbk","Error!")));
  //最后修改毫秒
  t->UpdateMillisec =   PyLong_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));

  return t;
};

//投资者结算结果确认信息
PyObject * new_CThostFtdcSettlementInfoConfirmField(CThostFtdcSettlementInfoConfirmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSettlementInfoConfirmField", (char*)"yyyy",
p->InvestorID, p->BrokerID, p->ConfirmTime, p->ConfirmDate);
}
CThostFtdcSettlementInfoConfirmField * from_CThostFtdcSettlementInfoConfirmField(PyObject * p){
  CThostFtdcSettlementInfoConfirmField *t = (CThostFtdcSettlementInfoConfirmField *)calloc(1, sizeof(CThostFtdcSettlementInfoConfirmField));
  memset(t,0,sizeof(CThostFtdcSettlementInfoConfirmField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //确认时间
  strcpy(t->ConfirmTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ConfirmTime"),"gbk","Error!")));
  //确认日期
  strcpy(t->ConfirmDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ConfirmDate"),"gbk","Error!")));

  return t;
};

//查询交易事件通知
PyObject * new_CThostFtdcQryTradingNoticeField(CThostFtdcQryTradingNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradingNoticeField", (char*)"yy",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryTradingNoticeField * from_CThostFtdcQryTradingNoticeField(PyObject * p){
  CThostFtdcQryTradingNoticeField *t = (CThostFtdcQryTradingNoticeField *)calloc(1, sizeof(CThostFtdcQryTradingNoticeField));
  memset(t,0,sizeof(CThostFtdcQryTradingNoticeField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//期商签退通知
PyObject * new_CThostFtdcNotifyFutureSignOutField(CThostFtdcNotifyFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifyFutureSignOutField", (char*)"yyyiyyiyicyyyyiyyiiyyyy",
p->TradingDay, p->TradeDate, p->DeviceID, p->PlateSerial, p->UserID, p->BankSerial, p->SessionID, p->ErrorMsg, p->ErrorID, p->LastFragment, p->BankBranchID, p->TradeCode, p->OperNo, p->Digest, p->RequestID, p->BrokerID, p->BankID, p->InstallID, p->TID, p->TradeTime, p->CurrencyID, p->BrokerBranchID, p->BrokerIDByBank);
}
CThostFtdcNotifyFutureSignOutField * from_CThostFtdcNotifyFutureSignOutField(PyObject * p){
  CThostFtdcNotifyFutureSignOutField *t = (CThostFtdcNotifyFutureSignOutField *)calloc(1, sizeof(CThostFtdcNotifyFutureSignOutField));
  memset(t,0,sizeof(CThostFtdcNotifyFutureSignOutField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));

  return t;
};

//交易核心向银期报盘发出密钥同步处理结果的通知
PyObject * new_CThostFtdcNotifySyncKeyField(CThostFtdcNotifySyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifySyncKeyField", (char*)"yyyiyyiyiyyyyiyyiiycyy",
p->TradingDay, p->TradeDate, p->DeviceID, p->PlateSerial, p->UserID, p->BankSerial, p->SessionID, p->ErrorMsg, p->ErrorID, p->BankBranchID, p->TradeCode, p->OperNo, p->BrokerBranchID, p->RequestID, p->BrokerID, p->BankID, p->InstallID, p->TID, p->TradeTime, p->LastFragment, p->Message, p->BrokerIDByBank);
}
CThostFtdcNotifySyncKeyField * from_CThostFtdcNotifySyncKeyField(PyObject * p){
  CThostFtdcNotifySyncKeyField *t = (CThostFtdcNotifySyncKeyField *)calloc(1, sizeof(CThostFtdcNotifySyncKeyField));
  memset(t,0,sizeof(CThostFtdcNotifySyncKeyField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //交易核心给银期报盘的消息
  strcpy(t->Message, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Message"),"gbk","Error!")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));

  return t;
};

//查询账户信息通知
PyObject * new_CThostFtdcNotifyQueryAccountField(CThostFtdcNotifyQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifyQueryAccountField", (char*)"yyyycdyyyyiyicyyyyccyiyyyiyyiiidccycycyy",
p->TradingDay, p->TradeDate, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->BankFetchAmount, p->UserID, p->OperNo, p->BankSerial, p->Digest, p->SessionID, p->ErrorMsg, p->ErrorID, p->BankPwdFlag, p->CurrencyID, p->BankBranchID, p->TradeCode, p->Password, p->BankAccType, p->SecuPwdFlag, p->BrokerBranchID, p->RequestID, p->BrokerID, p->BankID, p->BankSecuAcc, p->PlateSerial, p->AccountID, p->CustomerName, p->InstallID, p->TID, p->FutureSerial, p->BankUseAmount, p->BankSecuAccType, p->CustType, p->BankAccount, p->LastFragment, p->DeviceID, p->VerifyCertNoFlag, p->BrokerIDByBank, p->TradeTime);
}
CThostFtdcNotifyQueryAccountField * from_CThostFtdcNotifyQueryAccountField(PyObject * p){
  CThostFtdcNotifyQueryAccountField *t = (CThostFtdcNotifyQueryAccountField *)calloc(1, sizeof(CThostFtdcNotifyQueryAccountField));
  memset(t,0,sizeof(CThostFtdcNotifyQueryAccountField));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //银行可取金额
  t->BankFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankFetchAmount"));
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAcc"),"gbk","Error!")));
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //期货公司流水号
  t->FutureSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //银行可用金额
  t->BankUseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankUseAmount"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankSecuAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAccType"),"gbk","Error!"))[0];
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));

  return t;
};

//交易所交易员
PyObject * new_CThostFtdcTraderField(CThostFtdcTraderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTraderField", (char*)"yiyyyy",
p->BrokerID, p->InstallCount, p->ParticipantID, p->TraderID, p->Password, p->ExchangeID);
}
CThostFtdcTraderField * from_CThostFtdcTraderField(PyObject * p){
  CThostFtdcTraderField *t = (CThostFtdcTraderField *)calloc(1, sizeof(CThostFtdcTraderField));
  memset(t,0,sizeof(CThostFtdcTraderField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //安装数量
  t->InstallCount =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallCount"));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//交易所保证金率
PyObject * new_CThostFtdcExchangeMarginRateField(CThostFtdcExchangeMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeMarginRateField", (char*)"ydydddc",
p->BrokerID, p->ShortMarginRatioByVolume, p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->LongMarginRatioByVolume, p->HedgeFlag);
}
CThostFtdcExchangeMarginRateField * from_CThostFtdcExchangeMarginRateField(PyObject * p){
  CThostFtdcExchangeMarginRateField *t = (CThostFtdcExchangeMarginRateField *)calloc(1, sizeof(CThostFtdcExchangeMarginRateField));
  memset(t,0,sizeof(CThostFtdcExchangeMarginRateField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //空头保证金费
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //空头保证金率
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //多头保证金率
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //多头保证金费
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];

  return t;
};

//投资者
PyObject * new_CThostFtdcInvestorField(CThostFtdcInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorField", (char*)"yyycyyyyyiyyy",
p->InvestorName, p->BrokerID, p->IdentifiedCardNo, p->IdentifiedCardType, p->Telephone, p->Address, p->MarginModelID, p->CommModelID, p->Mobile, p->IsActive, p->InvestorID, p->InvestorGroupID, p->OpenDate);
}
CThostFtdcInvestorField * from_CThostFtdcInvestorField(PyObject * p){
  CThostFtdcInvestorField *t = (CThostFtdcInvestorField *)calloc(1, sizeof(CThostFtdcInvestorField));
  memset(t,0,sizeof(CThostFtdcInvestorField));
  //投资者名称
  strcpy(t->InvestorName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorName"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdentifiedCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardType"),"gbk","Error!"))[0];
  //联系电话
  strcpy(t->Telephone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Telephone"),"gbk","Error!")));
  //通讯地址
  strcpy(t->Address, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Address"),"gbk","Error!")));
  //保证金率模板代码
  strcpy(t->MarginModelID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MarginModelID"),"gbk","Error!")));
  //手续费率模板代码
  strcpy(t->CommModelID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CommModelID"),"gbk","Error!")));
  //手机
  strcpy(t->Mobile, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Mobile"),"gbk","Error!")));
  //是否活跃
  t->IsActive =   PyLong_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //投资者分组代码
  strcpy(t->InvestorGroupID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorGroupID"),"gbk","Error!")));
  //开户日期
  strcpy(t->OpenDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OpenDate"),"gbk","Error!")));

  return t;
};

//交易所成交
PyObject * new_CThostFtdcExchangeTradeField(CThostFtdcExchangeTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeTradeField", (char*)"yycyccyyyyyyiyyccdiccy",
p->TradeDate, p->ClientID, p->TradeType, p->BusinessUnit, p->Direction, p->HedgeFlag, p->ExchangeID, p->ClearingPartID, p->ParticipantID, p->ExchangeInstID, p->TradeID, p->OrderSysID, p->SequenceNo, p->TraderID, p->OrderLocalID, p->OffsetFlag, p->TradingRole, p->Price, p->Volume, p->PriceSource, p->TradeSource, p->TradeTime);
}
CThostFtdcExchangeTradeField * from_CThostFtdcExchangeTradeField(PyObject * p){
  CThostFtdcExchangeTradeField *t = (CThostFtdcExchangeTradeField *)calloc(1, sizeof(CThostFtdcExchangeTradeField));
  memset(t,0,sizeof(CThostFtdcExchangeTradeField));
  //成交时期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //成交类型
  //enum类型
  //THOST_FTDC_TRDT_Common -> '0', 普通成交
  //THOST_FTDC_TRDT_OptionsExecution -> '1', 期权执行
  //THOST_FTDC_TRDT_EFPDerived -> '3', 期转现衍生成交
  //THOST_FTDC_TRDT_OTC -> '2', OTC成交
  //THOST_FTDC_TRDT_SplitCombination -> '#', 组合持仓拆分为单一持仓,初始化不应包含该类型的持仓
  //THOST_FTDC_TRDT_CombinationDerived -> '4', 组合衍生成交
  t->TradeType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeType"),"gbk","Error!"))[0];
  //业务单元
  strcpy(t->BusinessUnit, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BusinessUnit"),"gbk","Error!")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_Buy -> '0', 买
  t->Direction =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Direction"),"gbk","Error!"))[0];
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Hedge -> '3', 套保
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  t->HedgeFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "HedgeFlag"),"gbk","Error!"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //结算会员编号
  strcpy(t->ClearingPartID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClearingPartID"),"gbk","Error!")));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));
  //成交编号
  strcpy(t->TradeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeID"),"gbk","Error!")));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //序号
  t->SequenceNo =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //开平标志
  //enum类型
  //THOST_FTDC_OF_LocalForceClose -> '6', 本地强平
  //THOST_FTDC_OF_ForceOff -> '5', 强减
  //THOST_FTDC_OF_CloseToday -> '3', 平今
  //THOST_FTDC_OF_CloseYesterday -> '4', 平昨
  //THOST_FTDC_OF_Close -> '1', 平仓
  //THOST_FTDC_OF_Open -> '0', 开仓
  //THOST_FTDC_OF_ForceClose -> '2', 强平
  t->OffsetFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OffsetFlag"),"gbk","Error!"))[0];
  //交易角色
  //enum类型
  //THOST_FTDC_ER_Broker -> '1', 代理
  //THOST_FTDC_ER_Host -> '2', 自营
  //THOST_FTDC_ER_Maker -> '3', 做市商
  t->TradingRole =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingRole"),"gbk","Error!"))[0];
  //价格
  t->Price =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));
  //数量
  t->Volume =   PyLong_AsLong(PyObject_GetAttrString(p, "Volume"));
  //成交价来源
  //enum类型
  //THOST_FTDC_PSRC_Buy -> '1', 买委托价
  //THOST_FTDC_PSRC_LastPrice -> '0', 前成交价
  //THOST_FTDC_PSRC_Sell -> '2', 卖委托价
  t->PriceSource =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "PriceSource"),"gbk","Error!"))[0];
  //成交来源
  //enum类型
  //THOST_FTDC_TSRC_QUERY -> '1', 来自查询
  //THOST_FTDC_TSRC_NORMAL -> '0', 来自交易所普通回报
  t->TradeSource =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeSource"),"gbk","Error!"))[0];
  //成交时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));

  return t;
};

//查询组合持仓明细
PyObject * new_CThostFtdcQryInvestorPositionCombineDetailField(CThostFtdcQryInvestorPositionCombineDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorPositionCombineDetailField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->CombInstrumentID);
}
CThostFtdcQryInvestorPositionCombineDetailField * from_CThostFtdcQryInvestorPositionCombineDetailField(PyObject * p){
  CThostFtdcQryInvestorPositionCombineDetailField *t = (CThostFtdcQryInvestorPositionCombineDetailField *)calloc(1, sizeof(CThostFtdcQryInvestorPositionCombineDetailField));
  memset(t,0,sizeof(CThostFtdcQryInvestorPositionCombineDetailField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //组合持仓合约编码
  strcpy(t->CombInstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombInstrumentID"),"gbk","Error!")));

  return t;
};

//查询资金账户
PyObject * new_CThostFtdcQryTradingAccountField(CThostFtdcQryTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradingAccountField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->CurrencyID);
}
CThostFtdcQryTradingAccountField * from_CThostFtdcQryTradingAccountField(PyObject * p){
  CThostFtdcQryTradingAccountField *t = (CThostFtdcQryTradingAccountField *)calloc(1, sizeof(CThostFtdcQryTradingAccountField));
  memset(t,0,sizeof(CThostFtdcQryTradingAccountField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));

  return t;
};

//请求查询银期签约关系
PyObject * new_CThostFtdcQryAccountregisterField(CThostFtdcQryAccountregisterField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryAccountregisterField", (char*)"yyyyy",
p->BankBranchID, p->BrokerID, p->BankID, p->AccountID, p->CurrencyID);
}
CThostFtdcQryAccountregisterField * from_CThostFtdcQryAccountregisterField(PyObject * p){
  CThostFtdcQryAccountregisterField *t = (CThostFtdcQryAccountregisterField *)calloc(1, sizeof(CThostFtdcQryAccountregisterField));
  memset(t,0,sizeof(CThostFtdcQryAccountregisterField));
  //银行分支机构编码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行编码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));

  return t;
};

//汇率
PyObject * new_CThostFtdcExchangeRateField(CThostFtdcExchangeRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeRateField", (char*)"yyddy",
p->ToCurrencyID, p->BrokerID, p->FromCurrencyUnit, p->ExchangeRate, p->FromCurrencyID);
}
CThostFtdcExchangeRateField * from_CThostFtdcExchangeRateField(PyObject * p){
  CThostFtdcExchangeRateField *t = (CThostFtdcExchangeRateField *)calloc(1, sizeof(CThostFtdcExchangeRateField));
  memset(t,0,sizeof(CThostFtdcExchangeRateField));
  //目标币种
  strcpy(t->ToCurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ToCurrencyID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //源币种单位数量
  t->FromCurrencyUnit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FromCurrencyUnit"));
  //汇率
  t->ExchangeRate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeRate"));
  //源币种
  strcpy(t->FromCurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FromCurrencyID"),"gbk","Error!")));

  return t;
};

//删除预埋单
PyObject * new_CThostFtdcRemoveParkedOrderField(CThostFtdcRemoveParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRemoveParkedOrderField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->ParkedOrderID);
}
CThostFtdcRemoveParkedOrderField * from_CThostFtdcRemoveParkedOrderField(PyObject * p){
  CThostFtdcRemoveParkedOrderField *t = (CThostFtdcRemoveParkedOrderField *)calloc(1, sizeof(CThostFtdcRemoveParkedOrderField));
  memset(t,0,sizeof(CThostFtdcRemoveParkedOrderField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //预埋报单编号
  strcpy(t->ParkedOrderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParkedOrderID"),"gbk","Error!")));

  return t;
};

//查询行情
PyObject * new_CThostFtdcQryDepthMarketDataField(CThostFtdcQryDepthMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryDepthMarketDataField", (char*)"y",
p->InstrumentID);
}
CThostFtdcQryDepthMarketDataField * from_CThostFtdcQryDepthMarketDataField(PyObject * p){
  CThostFtdcQryDepthMarketDataField *t = (CThostFtdcQryDepthMarketDataField *)calloc(1, sizeof(CThostFtdcQryDepthMarketDataField));
  memset(t,0,sizeof(CThostFtdcQryDepthMarketDataField));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));

  return t;
};

//请求查询保证金监管系统经纪公司资金账户密钥
PyObject * new_CThostFtdcQryCFMMCTradingAccountKeyField(CThostFtdcQryCFMMCTradingAccountKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCFMMCTradingAccountKeyField", (char*)"yy",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryCFMMCTradingAccountKeyField * from_CThostFtdcQryCFMMCTradingAccountKeyField(PyObject * p){
  CThostFtdcQryCFMMCTradingAccountKeyField *t = (CThostFtdcQryCFMMCTradingAccountKeyField *)calloc(1, sizeof(CThostFtdcQryCFMMCTradingAccountKeyField));
  memset(t,0,sizeof(CThostFtdcQryCFMMCTradingAccountKeyField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//查询合约状态
PyObject * new_CThostFtdcQryInstrumentStatusField(CThostFtdcQryInstrumentStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentStatusField", (char*)"yy",
p->ExchangeInstID, p->ExchangeID);
}
CThostFtdcQryInstrumentStatusField * from_CThostFtdcQryInstrumentStatusField(PyObject * p){
  CThostFtdcQryInstrumentStatusField *t = (CThostFtdcQryInstrumentStatusField *)calloc(1, sizeof(CThostFtdcQryInstrumentStatusField));
  memset(t,0,sizeof(CThostFtdcQryInstrumentStatusField));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeInstID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//查询交易所
PyObject * new_CThostFtdcQryExchangeField(CThostFtdcQryExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeField", (char*)"y",
p->ExchangeID);
}
CThostFtdcQryExchangeField * from_CThostFtdcQryExchangeField(PyObject * p){
  CThostFtdcQryExchangeField *t = (CThostFtdcQryExchangeField *)calloc(1, sizeof(CThostFtdcQryExchangeField));
  memset(t,0,sizeof(CThostFtdcQryExchangeField));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//查询经纪公司用户
PyObject * new_CThostFtdcQryBrokerUserField(CThostFtdcQryBrokerUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerUserField", (char*)"yy",
p->BrokerID, p->UserID);
}
CThostFtdcQryBrokerUserField * from_CThostFtdcQryBrokerUserField(PyObject * p){
  CThostFtdcQryBrokerUserField *t = (CThostFtdcQryBrokerUserField *)calloc(1, sizeof(CThostFtdcQryBrokerUserField));
  memset(t,0,sizeof(CThostFtdcQryBrokerUserField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//经纪公司资金
PyObject * new_CThostFtdcBrokerDepositField(CThostFtdcBrokerDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerDepositField", (char*)"yydddddddydyd",
p->TradingDay, p->BrokerID, p->Deposit, p->Withdraw, p->CloseProfit, p->Available, p->PreBalance, p->CurrMargin, p->Balance, p->ParticipantID, p->FrozenMargin, p->ExchangeID, p->Reserve);
}
CThostFtdcBrokerDepositField * from_CThostFtdcBrokerDepositField(PyObject * p){
  CThostFtdcBrokerDepositField *t = (CThostFtdcBrokerDepositField *)calloc(1, sizeof(CThostFtdcBrokerDepositField));
  memset(t,0,sizeof(CThostFtdcBrokerDepositField));
  //交易日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
  //出金金额
  t->Withdraw =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //可提资金
  t->Available =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
  //上次结算准备金
  t->PreBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
  //当前保证金总额
  t->CurrMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
  //期货结算准备金
  t->Balance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //基本准备金
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));

  return t;
};

//经纪公司
PyObject * new_CThostFtdcBrokerField(CThostFtdcBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerField", (char*)"yyiy",
p->BrokerID, p->BrokerName, p->IsActive, p->BrokerAbbr);
}
CThostFtdcBrokerField * from_CThostFtdcBrokerField(PyObject * p){
  CThostFtdcBrokerField *t = (CThostFtdcBrokerField *)calloc(1, sizeof(CThostFtdcBrokerField));
  memset(t,0,sizeof(CThostFtdcBrokerField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //经纪公司名称
  strcpy(t->BrokerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerName"),"gbk","Error!")));
  //是否活跃
  t->IsActive =   PyLong_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //经纪公司简称
  strcpy(t->BrokerAbbr, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerAbbr"),"gbk","Error!")));

  return t;
};

//查询经纪公司交易参数
PyObject * new_CThostFtdcQryBrokerTradingParamsField(CThostFtdcQryBrokerTradingParamsField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerTradingParamsField", (char*)"yyy",
p->InvestorID, p->BrokerID, p->CurrencyID);
}
CThostFtdcQryBrokerTradingParamsField * from_CThostFtdcQryBrokerTradingParamsField(PyObject * p){
  CThostFtdcQryBrokerTradingParamsField *t = (CThostFtdcQryBrokerTradingParamsField *)calloc(1, sizeof(CThostFtdcQryBrokerTradingParamsField));
  memset(t,0,sizeof(CThostFtdcQryBrokerTradingParamsField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));

  return t;
};

//查询交易员
PyObject * new_CThostFtdcQryTraderField(CThostFtdcQryTraderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTraderField", (char*)"yyy",
p->ParticipantID, p->TraderID, p->ExchangeID);
}
CThostFtdcQryTraderField * from_CThostFtdcQryTraderField(PyObject * p){
  CThostFtdcQryTraderField *t = (CThostFtdcQryTraderField *)calloc(1, sizeof(CThostFtdcQryTraderField));
  memset(t,0,sizeof(CThostFtdcQryTraderField));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//投资者结算结果
PyObject * new_CThostFtdcSettlementInfoField(CThostFtdcSettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSettlementInfoField", (char*)"yyiyyi",
p->TradingDay, p->BrokerID, p->SequenceNo, p->Content, p->InvestorID, p->SettlementID);
}
CThostFtdcSettlementInfoField * from_CThostFtdcSettlementInfoField(PyObject * p){
  CThostFtdcSettlementInfoField *t = (CThostFtdcSettlementInfoField *)calloc(1, sizeof(CThostFtdcSettlementInfoField));
  memset(t,0,sizeof(CThostFtdcSettlementInfoField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //序号
  t->SequenceNo =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //消息正文
  strcpy(t->Content, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Content"),"gbk","Error!")));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));

  return t;
};

//查询签约银行请求
PyObject * new_CThostFtdcQryContractBankField(CThostFtdcQryContractBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryContractBankField", (char*)"yyy",
p->BrokerID, p->BankID, p->BankBrchID);
}
CThostFtdcQryContractBankField * from_CThostFtdcQryContractBankField(PyObject * p){
  CThostFtdcQryContractBankField *t = (CThostFtdcQryContractBankField *)calloc(1, sizeof(CThostFtdcQryContractBankField));
  memset(t,0,sizeof(CThostFtdcQryContractBankField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //银行分中心代码
  strcpy(t->BankBrchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBrchID"),"gbk","Error!")));

  return t;
};

//指定的合约
PyObject * new_CThostFtdcSpecificInstrumentField(CThostFtdcSpecificInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSpecificInstrumentField", (char*)"y",
p->InstrumentID);
}
CThostFtdcSpecificInstrumentField * from_CThostFtdcSpecificInstrumentField(PyObject * p){
  CThostFtdcSpecificInstrumentField *t = (CThostFtdcSpecificInstrumentField *)calloc(1, sizeof(CThostFtdcSpecificInstrumentField));
  memset(t,0,sizeof(CThostFtdcSpecificInstrumentField));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));

  return t;
};

//正在同步中的交易账号
PyObject * new_CThostFtdcSyncingTradingAccountField(CThostFtdcSyncingTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingTradingAccountField", (char*)"dyddddyddddddddddddydydddddddddidddddddddddddd",
p->SpecProductPositionProfit, p->AccountID, p->Credit, p->SpecProductPositionProfitByAlg, p->InterestBase, p->PreMargin, p->BrokerID, p->FrozenCommission, p->DeliveryMargin, p->ExchangeDeliveryMargin, p->Mortgage, p->Commission, p->CurrMargin, p->ExchangeMargin, p->Interest, p->PreDeposit, p->Balance, p->SpecProductExchangeMargin, p->FundMortgageAvailable, p->CurrencyID, p->FundMortgageOut, p->TradingDay, p->Withdraw, p->CloseProfit, p->PreFundMortgageOut, p->Available, p->PreBalance, p->SpecProductMargin, p->MortgageableFund, p->FrozenMargin, p->Deposit, p->SettlementID, p->PositionProfit, p->PreFundMortgageIn, p->SpecProductFrozenCommission, p->CashIn, p->FrozenCash, p->SpecProductFrozenMargin, p->FundMortgageIn, p->WithdrawQuota, p->ReserveBalance, p->PreCredit, p->Reserve, p->SpecProductCommission, p->PreMortgage, p->SpecProductCloseProfit);
}
CThostFtdcSyncingTradingAccountField * from_CThostFtdcSyncingTradingAccountField(PyObject * p){
  CThostFtdcSyncingTradingAccountField *t = (CThostFtdcSyncingTradingAccountField *)calloc(1, sizeof(CThostFtdcSyncingTradingAccountField));
  memset(t,0,sizeof(CThostFtdcSyncingTradingAccountField));
  //特殊产品持仓盈亏
  t->SpecProductPositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductPositionProfit"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //信用额度
  t->Credit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Credit"));
  //根据持仓盈亏算法计算的特殊产品持仓盈亏
  t->SpecProductPositionProfitByAlg =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductPositionProfitByAlg"));
  //利息基数
  t->InterestBase =   PyFloat_AsDouble(PyObject_GetAttrString(p, "InterestBase"));
  //上次占用的保证金
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //冻结的手续费
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //投资者交割保证金
  t->DeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "DeliveryMargin"));
  //交易所交割保证金
  t->ExchangeDeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeDeliveryMargin"));
  //质押金额
  t->Mortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Mortgage"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //当前保证金总额
  t->CurrMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //利息收入
  t->Interest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Interest"));
  //上次存款额
  t->PreDeposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDeposit"));
  //期货结算准备金
  t->Balance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
  //特殊产品交易所保证金
  t->SpecProductExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductExchangeMargin"));
  //货币质押余额
  t->FundMortgageAvailable =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageAvailable"));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //货币质出金额
  t->FundMortgageOut =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageOut"));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //出金金额
  t->Withdraw =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //上次货币质出金额
  t->PreFundMortgageOut =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreFundMortgageOut"));
  //可用资金
  t->Available =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
  //上次结算准备金
  t->PreBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
  //特殊产品占用保证金
  t->SpecProductMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductMargin"));
  //可质押货币金额
  t->MortgageableFund =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MortgageableFund"));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
  //结算编号
  t->SettlementID =   PyLong_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //上次货币质入金额
  t->PreFundMortgageIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreFundMortgageIn"));
  //特殊产品冻结手续费
  t->SpecProductFrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductFrozenCommission"));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //冻结的资金
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //特殊产品冻结保证金
  t->SpecProductFrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductFrozenMargin"));
  //货币质入金额
  t->FundMortgageIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageIn"));
  //可取资金
  t->WithdrawQuota =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WithdrawQuota"));
  //保底期货结算准备金
  t->ReserveBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ReserveBalance"));
  //上次信用额度
  t->PreCredit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreCredit"));
  //基本准备金
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
  //特殊产品手续费
  t->SpecProductCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductCommission"));
  //上次质押金额
  t->PreMortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMortgage"));
  //特殊产品平仓盈亏
  t->SpecProductCloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductCloseProfit"));

  return t;
};

//经纪公司交易参数
PyObject * new_CThostFtdcBrokerTradingParamsField(CThostFtdcBrokerTradingParamsField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerTradingParamsField", (char*)"yccyyc",
p->BrokerID, p->MarginPriceType, p->AvailIncludeCloseProfit, p->InvestorID, p->CurrencyID, p->Algorithm);
}
CThostFtdcBrokerTradingParamsField * from_CThostFtdcBrokerTradingParamsField(PyObject * p){
  CThostFtdcBrokerTradingParamsField *t = (CThostFtdcBrokerTradingParamsField *)calloc(1, sizeof(CThostFtdcBrokerTradingParamsField));
  memset(t,0,sizeof(CThostFtdcBrokerTradingParamsField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //保证金价格类型
  //enum类型
  //THOST_FTDC_MPT_PreSettlementPrice -> '1', 昨结算价
  //THOST_FTDC_MPT_OpenPrice -> '4', 开仓价
  //THOST_FTDC_MPT_SettlementPrice -> '2', 最新价
  //THOST_FTDC_MPT_AveragePrice -> '3', 成交均价
  t->MarginPriceType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MarginPriceType"),"gbk","Error!"))[0];
  //可用是否包含平仓盈利
  //enum类型
  //THOST_FTDC_ICP_NotInclude -> '2', 不包含平仓盈利
  //THOST_FTDC_ICP_Include -> '0', 包含平仓盈利
  t->AvailIncludeCloseProfit =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AvailIncludeCloseProfit"),"gbk","Error!"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //盈亏算法
  //enum类型
  //THOST_FTDC_AG_OnlyLost -> '2', 浮盈不计，浮亏计
  //THOST_FTDC_AG_None -> '4', 浮盈浮亏都不计算
  //THOST_FTDC_AG_OnlyGain -> '3', 浮盈计，浮亏不计
  //THOST_FTDC_AG_All -> '1', 浮盈浮亏都计算
  t->Algorithm =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Algorithm"),"gbk","Error!"))[0];

  return t;
};

//转帐销户请求
PyObject * new_CThostFtdcReqCancelAccountField(CThostFtdcReqCancelAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqCancelAccountField", (char*)"yyyycycyciyyicyyyyyyycyyiyyyyyccyyycyiycyycc",
p->ZipCode, p->TradeDate, p->Address, p->Telephone, p->MoneyAccountStatus, p->BankBranchID, p->SecuPwdFlag, p->BrokerID, p->BankAccType, p->PlateSerial, p->AccountID, p->DeviceID, p->InstallID, p->BankSecuAccType, p->CurrencyID, p->Digest, p->BankAccount, p->TradingDay, p->BrokerBranchID, p->BankPassWord, p->IdentifiedCardNo, p->IdCardType, p->UserID, p->BankSerial, p->SessionID, p->Fax, p->TradeCode, p->Password, p->CountryCode, p->OperNo, p->BankPwdFlag, p->Gender, p->BankID, p->BankSecuAcc, p->EMail, p->CustType, p->BrokerIDByBank, p->TID, p->MobilePhone, p->CashExchangeCode, p->CustomerName, p->TradeTime, p->LastFragment, p->VerifyCertNoFlag);
}
CThostFtdcReqCancelAccountField * from_CThostFtdcReqCancelAccountField(PyObject * p){
  CThostFtdcReqCancelAccountField *t = (CThostFtdcReqCancelAccountField *)calloc(1, sizeof(CThostFtdcReqCancelAccountField));
  memset(t,0,sizeof(CThostFtdcReqCancelAccountField));
  //邮编
  strcpy(t->ZipCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ZipCode"),"gbk","Error!")));
  //交易日期
  strcpy(t->TradeDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeDate"),"gbk","Error!")));
  //地址
  strcpy(t->Address, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Address"),"gbk","Error!")));
  //电话号码
  strcpy(t->Telephone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Telephone"),"gbk","Error!")));
  //资金账户状态
  //enum类型
  //THOST_FTDC_MAS_Cancel -> '1', 销户
  //THOST_FTDC_MAS_Normal -> '0', 正常
  t->MoneyAccountStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MoneyAccountStatus"),"gbk","Error!"))[0];
  //银行分支机构代码
  strcpy(t->BankBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankBranchID"),"gbk","Error!")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->SecuPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SecuPwdFlag"),"gbk","Error!"))[0];
  //期商代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccType"),"gbk","Error!"))[0];
  //银期平台消息流水号
  t->PlateSerial =   PyLong_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AccountID"),"gbk","Error!")));
  //渠道标志
  strcpy(t->DeviceID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "DeviceID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  t->BankSecuAccType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAccType"),"gbk","Error!"))[0];
  //币种代码
  strcpy(t->CurrencyID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CurrencyID"),"gbk","Error!")));
  //摘要
  strcpy(t->Digest, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Digest"),"gbk","Error!")));
  //银行帐号
  strcpy(t->BankAccount, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankAccount"),"gbk","Error!")));
  //交易系统日期
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerBranchID"),"gbk","Error!")));
  //银行密码
  strcpy(t->BankPassWord, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPassWord"),"gbk","Error!")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdentifiedCardNo"),"gbk","Error!")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HKMCIDCard -> 'I', 港澳永久性居民身份证
  //THOST_FTDC_ICT_BusinessRegistration -> 'H', 商业登记证
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_DrivingLicense -> 'D', 驾照
  //THOST_FTDC_ICT_LocalID -> 'G', 当地身份证
  //THOST_FTDC_ICT_SocialID -> 'F', 当地社保ID
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 中国公民身份证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  //THOST_FTDC_ICT_HMMainlandTravelPermit -> 'B', 港澳居民来往内地通行证
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TwMainlandTravelPermit -> 'C', 台湾居民来往大陆通行证
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号/当地纳税ID
  t->IdCardType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "IdCardType"),"gbk","Error!"))[0];
  //用户标识
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //银行流水号
  strcpy(t->BankSerial, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSerial"),"gbk","Error!")));
  //会话号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //传真
  strcpy(t->Fax, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Fax"),"gbk","Error!")));
  //业务功能码
  strcpy(t->TradeCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeCode"),"gbk","Error!")));
  //期货密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //国家代码
  strcpy(t->CountryCode, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CountryCode"),"gbk","Error!")));
  //交易柜员
  strcpy(t->OperNo, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OperNo"),"gbk","Error!")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  t->BankPwdFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankPwdFlag"),"gbk","Error!"))[0];
  //性别
  //enum类型
  //THOST_FTDC_GD_Male -> '1', 男
  //THOST_FTDC_GD_Female -> '2', 女
  //THOST_FTDC_GD_Unknown -> '0', 未知状态
  t->Gender =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Gender"),"gbk","Error!"))[0];
  //银行代码
  strcpy(t->BankID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankID"),"gbk","Error!")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BankSecuAcc"),"gbk","Error!")));
  //电子邮件
  strcpy(t->EMail, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "EMail"),"gbk","Error!")));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  t->CustType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustType"),"gbk","Error!"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerIDByBank"),"gbk","Error!")));
  //交易ID
  t->TID =   PyLong_AsLong(PyObject_GetAttrString(p, "TID"));
  //手机
  strcpy(t->MobilePhone, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "MobilePhone"),"gbk","Error!")));
  //汇钞标志
  //enum类型
  //THOST_FTDC_CEC_Exchange -> '1', 汇
  //THOST_FTDC_CEC_Cash -> '2', 钞
  t->CashExchangeCode =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CashExchangeCode"),"gbk","Error!"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CustomerName"),"gbk","Error!")));
  //交易时间
  strcpy(t->TradeTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradeTime"),"gbk","Error!")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LastFragment"),"gbk","Error!"))[0];
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "VerifyCertNoFlag"),"gbk","Error!"))[0];

  return t;
};

//交易所报单操作失败
PyObject * new_CThostFtdcExchangeOrderActionErrorField(CThostFtdcExchangeOrderActionErrorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderActionErrorField", (char*)"iyyyyyiy",
p->ErrorID, p->ErrorMsg, p->OrderSysID, p->TraderID, p->OrderLocalID, p->ActionLocalID, p->InstallID, p->ExchangeID);
}
CThostFtdcExchangeOrderActionErrorField * from_CThostFtdcExchangeOrderActionErrorField(PyObject * p){
  CThostFtdcExchangeOrderActionErrorField *t = (CThostFtdcExchangeOrderActionErrorField *)calloc(1, sizeof(CThostFtdcExchangeOrderActionErrorField));
  memset(t,0,sizeof(CThostFtdcExchangeOrderActionErrorField));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //操作本地编号
  strcpy(t->ActionLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionLocalID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//查询预埋撤单
PyObject * new_CThostFtdcQryParkedOrderActionField(CThostFtdcQryParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryParkedOrderActionField", (char*)"yyyy",
p->InvestorID, p->BrokerID, p->ExchangeID, p->InstrumentID);
}
CThostFtdcQryParkedOrderActionField * from_CThostFtdcQryParkedOrderActionField(PyObject * p){
  CThostFtdcQryParkedOrderActionField *t = (CThostFtdcQryParkedOrderActionField *)calloc(1, sizeof(CThostFtdcQryParkedOrderActionField));
  memset(t,0,sizeof(CThostFtdcQryParkedOrderActionField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));

  return t;
};

//查询经纪公司资金
PyObject * new_CThostFtdcQueryBrokerDepositField(CThostFtdcQueryBrokerDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQueryBrokerDepositField", (char*)"yy",
p->BrokerID, p->ExchangeID);
}
CThostFtdcQueryBrokerDepositField * from_CThostFtdcQueryBrokerDepositField(PyObject * p){
  CThostFtdcQueryBrokerDepositField *t = (CThostFtdcQueryBrokerDepositField *)calloc(1, sizeof(CThostFtdcQueryBrokerDepositField));
  memset(t,0,sizeof(CThostFtdcQueryBrokerDepositField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//用户事件通知
PyObject * new_CThostFtdcTradingNoticeField(CThostFtdcTradingNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingNoticeField", (char*)"yicyyyyh",
p->BrokerID, p->SequenceNo, p->InvestorRange, p->InvestorID, p->UserID, p->SendTime, p->FieldContent, p->SequenceSeries);
}
CThostFtdcTradingNoticeField * from_CThostFtdcTradingNoticeField(PyObject * p){
  CThostFtdcTradingNoticeField *t = (CThostFtdcTradingNoticeField *)calloc(1, sizeof(CThostFtdcTradingNoticeField));
  memset(t,0,sizeof(CThostFtdcTradingNoticeField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //序列号
  t->SequenceNo =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  //THOST_FTDC_IR_All -> '1', 所有
  t->InvestorRange =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorRange"),"gbk","Error!"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //发送时间
  strcpy(t->SendTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SendTime"),"gbk","Error!")));
  //消息正文
  strcpy(t->FieldContent, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "FieldContent"),"gbk","Error!")));
  //序列系列号
  t->SequenceSeries =   PyLong_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));

  return t;
};

//报单操作
PyObject * new_CThostFtdcOrderActionField(CThostFtdcOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcOrderActionField", (char*)"iyiyyyicyyyyiyyyyiydcyyiy",
p->FrontID, p->ClientID, p->OrderActionRef, p->StatusMsg, p->ActionLocalID, p->BusinessUnit, p->SessionID, p->ActionFlag, p->ParticipantID, p->InstrumentID, p->ActionDate, p->ExchangeID, p->RequestID, p->BrokerID, p->OrderSysID, p->TraderID, p->OrderLocalID, p->InstallID, p->ActionTime, p->LimitPrice, p->OrderActionStatus, p->UserID, p->OrderRef, p->VolumeChange, p->InvestorID);
}
CThostFtdcOrderActionField * from_CThostFtdcOrderActionField(PyObject * p){
  CThostFtdcOrderActionField *t = (CThostFtdcOrderActionField *)calloc(1, sizeof(CThostFtdcOrderActionField));
  memset(t,0,sizeof(CThostFtdcOrderActionField));
  //前置编号
  t->FrontID =   PyLong_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //客户代码
  strcpy(t->ClientID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ClientID"),"gbk","Error!")));
  //报单操作引用
  t->OrderActionRef =   PyLong_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //状态信息
  strcpy(t->StatusMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "StatusMsg"),"gbk","Error!")));
  //操作本地编号
  strcpy(t->ActionLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionLocalID"),"gbk","Error!")));
  //业务单元
  strcpy(t->BusinessUnit, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BusinessUnit"),"gbk","Error!")));
  //会话编号
  t->SessionID =   PyLong_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionFlag"),"gbk","Error!"))[0];
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //操作日期
  strcpy(t->ActionDate, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionDate"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));
  //请求编号
  t->RequestID =   PyLong_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //报单编号
  strcpy(t->OrderSysID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderSysID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //操作时间
  strcpy(t->ActionTime, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ActionTime"),"gbk","Error!")));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //报单操作状态
  //enum类型
  //THOST_FTDC_OAS_Accepted -> 'b', 已经接受
  //THOST_FTDC_OAS_Submitted -> 'a', 已经提交
  //THOST_FTDC_OAS_Rejected -> 'c', 已经被拒绝
  t->OrderActionStatus =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderActionStatus"),"gbk","Error!"))[0];
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //报单引用
  strcpy(t->OrderRef, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderRef"),"gbk","Error!")));
  //数量变化
  t->VolumeChange =   PyLong_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));

  return t;
};

//经纪公司用户口令
PyObject * new_CThostFtdcBrokerUserPasswordField(CThostFtdcBrokerUserPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserPasswordField", (char*)"yyy",
p->BrokerID, p->Password, p->UserID);
}
CThostFtdcBrokerUserPasswordField * from_CThostFtdcBrokerUserPasswordField(PyObject * p){
  CThostFtdcBrokerUserPasswordField *t = (CThostFtdcBrokerUserPasswordField *)calloc(1, sizeof(CThostFtdcBrokerUserPasswordField));
  memset(t,0,sizeof(CThostFtdcBrokerUserPasswordField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //密码
  strcpy(t->Password, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Password"),"gbk","Error!")));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//查询结算信息确认域
PyObject * new_CThostFtdcQrySettlementInfoConfirmField(CThostFtdcQrySettlementInfoConfirmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySettlementInfoConfirmField", (char*)"yy",
p->InvestorID, p->BrokerID);
}
CThostFtdcQrySettlementInfoConfirmField * from_CThostFtdcQrySettlementInfoConfirmField(PyObject * p){
  CThostFtdcQrySettlementInfoConfirmField *t = (CThostFtdcQrySettlementInfoConfirmField *)calloc(1, sizeof(CThostFtdcQrySettlementInfoConfirmField));
  memset(t,0,sizeof(CThostFtdcQrySettlementInfoConfirmField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//客户通知
PyObject * new_CThostFtdcNoticeField(CThostFtdcNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNoticeField", (char*)"yyy",
p->BrokerID, p->SequenceLabel, p->Content);
}
CThostFtdcNoticeField * from_CThostFtdcNoticeField(PyObject * p){
  CThostFtdcNoticeField *t = (CThostFtdcNoticeField *)calloc(1, sizeof(CThostFtdcNoticeField));
  memset(t,0,sizeof(CThostFtdcNoticeField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //经纪公司通知内容序列号
  strcpy(t->SequenceLabel, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SequenceLabel"),"gbk","Error!")));
  //消息正文
  strcpy(t->Content, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "Content"),"gbk","Error!")));

  return t;
};

//行情静态属性
PyObject * new_CThostFtdcMarketDataStaticField(CThostFtdcMarketDataStaticField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataStaticField", (char*)"dddddddd",
p->ClosePrice, p->HighestPrice, p->CurrDelta, p->SettlementPrice, p->LowerLimitPrice, p->LowestPrice, p->UpperLimitPrice, p->OpenPrice);
}
CThostFtdcMarketDataStaticField * from_CThostFtdcMarketDataStaticField(PyObject * p){
  CThostFtdcMarketDataStaticField *t = (CThostFtdcMarketDataStaticField *)calloc(1, sizeof(CThostFtdcMarketDataStaticField));
  memset(t,0,sizeof(CThostFtdcMarketDataStaticField));
  //今收盘
  t->ClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
  //最高价
  t->HighestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
  //今虚实度
  t->CurrDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //跌停板价
  t->LowerLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
  //最低价
  t->LowestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));
  //涨停板价
  t->UpperLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
  //今开盘
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));

  return t;
};

//查询组合合约分腿
PyObject * new_CThostFtdcQrySyncStatusField(CThostFtdcQrySyncStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySyncStatusField", (char*)"y",
p->TradingDay);
}
CThostFtdcQrySyncStatusField * from_CThostFtdcQrySyncStatusField(PyObject * p){
  CThostFtdcQrySyncStatusField *t = (CThostFtdcQrySyncStatusField *)calloc(1, sizeof(CThostFtdcQrySyncStatusField));
  memset(t,0,sizeof(CThostFtdcQrySyncStatusField));
  //交易日
  strcpy(t->TradingDay, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingDay"),"gbk","Error!")));

  return t;
};

//查询组合合约分腿
PyObject * new_CThostFtdcQryCombinationLegField(CThostFtdcQryCombinationLegField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCombinationLegField", (char*)"iyy",
p->LegID, p->LegInstrumentID, p->CombInstrumentID);
}
CThostFtdcQryCombinationLegField * from_CThostFtdcQryCombinationLegField(PyObject * p){
  CThostFtdcQryCombinationLegField *t = (CThostFtdcQryCombinationLegField *)calloc(1, sizeof(CThostFtdcQryCombinationLegField));
  memset(t,0,sizeof(CThostFtdcQryCombinationLegField));
  //单腿编号
  t->LegID =   PyLong_AsLong(PyObject_GetAttrString(p, "LegID"));
  //单腿合约代码
  strcpy(t->LegInstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LegInstrumentID"),"gbk","Error!")));
  //组合合约代码
  strcpy(t->CombInstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "CombInstrumentID"),"gbk","Error!")));

  return t;
};

//投资者合约交易权限
PyObject * new_CThostFtdcInstrumentTradingRightField(CThostFtdcInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentTradingRightField", (char*)"yyycc",
p->InvestorID, p->InstrumentID, p->BrokerID, p->TradingRight, p->InvestorRange);
}
CThostFtdcInstrumentTradingRightField * from_CThostFtdcInstrumentTradingRightField(PyObject * p){
  CThostFtdcInstrumentTradingRightField *t = (CThostFtdcInstrumentTradingRightField *)calloc(1, sizeof(CThostFtdcInstrumentTradingRightField));
  memset(t,0,sizeof(CThostFtdcInstrumentTradingRightField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //交易权限
  //enum类型
  //THOST_FTDC_TR_CloseOnly -> '1', 只能平仓
  //THOST_FTDC_TR_Allow -> '0', 可以交易
  //THOST_FTDC_TR_Forbidden -> '2', 不能交易
  t->TradingRight =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TradingRight"),"gbk","Error!"))[0];
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  //THOST_FTDC_IR_All -> '1', 所有
  t->InvestorRange =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorRange"),"gbk","Error!"))[0];

  return t;
};

//Fens用户信息
PyObject * new_CThostFtdcFensUserInfoField(CThostFtdcFensUserInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcFensUserInfoField", (char*)"ycy",
p->BrokerID, p->LoginMode, p->UserID);
}
CThostFtdcFensUserInfoField * from_CThostFtdcFensUserInfoField(PyObject * p){
  CThostFtdcFensUserInfoField *t = (CThostFtdcFensUserInfoField *)calloc(1, sizeof(CThostFtdcFensUserInfoField));
  memset(t,0,sizeof(CThostFtdcFensUserInfoField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //登录模式
  //enum类型
  //THOST_FTDC_LM_Trade -> '0', 交易
  //THOST_FTDC_LM_Transfer -> '1', 转账
  t->LoginMode =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "LoginMode"),"gbk","Error!"))[0];
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));

  return t;
};

//查询联系人
PyObject * new_CThostFtdcQryLinkManField(CThostFtdcQryLinkManField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryLinkManField", (char*)"yy",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryLinkManField * from_CThostFtdcQryLinkManField(PyObject * p){
  CThostFtdcQryLinkManField *t = (CThostFtdcQryLinkManField *)calloc(1, sizeof(CThostFtdcQryLinkManField));
  memset(t,0,sizeof(CThostFtdcQryLinkManField));
  //投资者代码
  strcpy(t->InvestorID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InvestorID"),"gbk","Error!")));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));

  return t;
};

//交易所报单插入失败
PyObject * new_CThostFtdcExchangeOrderInsertErrorField(CThostFtdcExchangeOrderInsertErrorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderInsertErrorField", (char*)"iyyyyiy",
p->ErrorID, p->ParticipantID, p->TraderID, p->OrderLocalID, p->ErrorMsg, p->InstallID, p->ExchangeID);
}
CThostFtdcExchangeOrderInsertErrorField * from_CThostFtdcExchangeOrderInsertErrorField(PyObject * p){
  CThostFtdcExchangeOrderInsertErrorField *t = (CThostFtdcExchangeOrderInsertErrorField *)calloc(1, sizeof(CThostFtdcExchangeOrderInsertErrorField));
  memset(t,0,sizeof(CThostFtdcExchangeOrderInsertErrorField));
  //错误代码
  t->ErrorID =   PyLong_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //会员代码
  strcpy(t->ParticipantID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ParticipantID"),"gbk","Error!")));
  //交易所交易员代码
  strcpy(t->TraderID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "TraderID"),"gbk","Error!")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OrderLocalID"),"gbk","Error!")));
  //错误信息
  strcpy(t->ErrorMsg, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ErrorMsg"),"gbk","Error!")));
  //安装编号
  t->InstallID =   PyLong_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};

//用户动态令牌参数
PyObject * new_CThostFtdcBrokerUserOTPParamField(CThostFtdcBrokerUserOTPParamField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserOTPParamField", (char*)"ycyiyyyi",
p->BrokerID, p->OTPType, p->AuthKey, p->LastDrift, p->UserID, p->OTPVendorsID, p->SerialNumber, p->LastSuccess);
}
CThostFtdcBrokerUserOTPParamField * from_CThostFtdcBrokerUserOTPParamField(PyObject * p){
  CThostFtdcBrokerUserOTPParamField *t = (CThostFtdcBrokerUserOTPParamField *)calloc(1, sizeof(CThostFtdcBrokerUserOTPParamField));
  memset(t,0,sizeof(CThostFtdcBrokerUserOTPParamField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //动态令牌类型
  //enum类型
  //THOST_FTDC_OTP_TOTP -> '1', 时间令牌
  //THOST_FTDC_OTP_NONE -> '0', 无动态令牌
  t->OTPType =   PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OTPType"),"gbk","Error!"))[0];
  //令牌密钥
  strcpy(t->AuthKey, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "AuthKey"),"gbk","Error!")));
  //漂移值
  t->LastDrift =   PyLong_AsLong(PyObject_GetAttrString(p, "LastDrift"));
  //用户代码
  strcpy(t->UserID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "UserID"),"gbk","Error!")));
  //动态令牌提供商
  strcpy(t->OTPVendorsID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "OTPVendorsID"),"gbk","Error!")));
  //动态令牌序列号
  strcpy(t->SerialNumber, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "SerialNumber"),"gbk","Error!")));
  //成功值
  t->LastSuccess =   PyLong_AsLong(PyObject_GetAttrString(p, "LastSuccess"));

  return t;
};

//查询经纪公司交易算法
PyObject * new_CThostFtdcQryBrokerTradingAlgosField(CThostFtdcQryBrokerTradingAlgosField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerTradingAlgosField", (char*)"yyy",
p->BrokerID, p->InstrumentID, p->ExchangeID);
}
CThostFtdcQryBrokerTradingAlgosField * from_CThostFtdcQryBrokerTradingAlgosField(PyObject * p){
  CThostFtdcQryBrokerTradingAlgosField *t = (CThostFtdcQryBrokerTradingAlgosField *)calloc(1, sizeof(CThostFtdcQryBrokerTradingAlgosField));
  memset(t,0,sizeof(CThostFtdcQryBrokerTradingAlgosField));
  //经纪公司代码
  strcpy(t->BrokerID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "BrokerID"),"gbk","Error!")));
  //合约代码
  strcpy(t->InstrumentID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "InstrumentID"),"gbk","Error!")));
  //交易所代码
  strcpy(t->ExchangeID, PyBytes_AsString(PyUnicode_AsEncodedString(PyObject_GetAttrString(p, "ExchangeID"),"gbk","Error!")));

  return t;
};
