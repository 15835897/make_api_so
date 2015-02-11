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

#This file is auto generated! Please don't edit directly.

def tou(x, enc='gbk', err='ignore'):
    return str(x, enc, err) if isinstance(x, bytes) else str(x)
    

class CThostFtdcQryOrderField:
    def __init__(self, BrokerID="", OrderSysID="", InsertTimeStart="", InsertTimeEnd="", InvestorID="", InstrumentID="", ExchangeID=""):
        self.BrokerID=tou(BrokerID)
        self.OrderSysID=tou(OrderSysID)
        self.InsertTimeStart=tou(InsertTimeStart)
        self.InsertTimeEnd=tou(InsertTimeEnd)
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'OrderSysID', 'InsertTimeStart', 'InsertTimeEnd', 'InvestorID', 'InstrumentID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('OrderSysID', u'报单编号'),('InsertTimeStart', u'开始时间'),('InsertTimeEnd', u'结束时间'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryInstrumentCommissionRateField:
    def __init__(self, InvestorID="", BrokerID="", InstrumentID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.InstrumentID=tou(InstrumentID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryOrderActionField:
    def __init__(self, InvestorID="", BrokerID="", ExchangeID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryProductField:
    def __init__(self, ProductID=""):
        self.ProductID=tou(ProductID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ProductID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ProductID', u'产品代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRspAuthenticateField:
    def __init__(self, UserProductInfo="", BrokerID="", UserID=""):
        self.UserProductInfo=tou(UserProductInfo)
        self.BrokerID=tou(BrokerID)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserProductInfo', 'BrokerID', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserProductInfo', u'用户端产品信息'),('BrokerID', u'经纪公司代码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcCFMMCBrokerKeyField:
    def __init__(self, CreateTime="", BrokerID="", CreateDate="", ParticipantID="", KeyKind='R', KeyID=0, CurrentKey=""):
        self.CreateTime=tou(CreateTime)
        self.BrokerID=tou(BrokerID)
        self.CreateDate=tou(CreateDate)
        self.ParticipantID=tou(ParticipantID)
        self.KeyKind=tou(KeyKind)
        self.KeyID=KeyID
        self.CurrentKey=tou(CurrentKey)
        self.vcmap={'KeyKind': {"'A'": 'CFMMC自动更新', "'R'": '主动请求更新', "'M'": 'CFMMC手动更新'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CreateTime', 'BrokerID', 'CreateDate', 'ParticipantID', 'KeyKind', 'KeyID', 'CurrentKey']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CreateTime', u'密钥生成时间'),('BrokerID', u'经纪公司代码'),('CreateDate', u'密钥生成日期'),('ParticipantID', u'经纪公司统一编码'),('KeyKind', u'动态密钥类型'),('KeyID', u'密钥编号'),('CurrentKey', u'动态密钥')]])
    def getval(self, n):
        if n in ['KeyKind']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcOrderField:
    def __init__(self, OrderSource='0', CancelTime="", VolumeTotal=0, StatusMsg="", BusinessUnit="", OrderSubmitStatus='0', GTDDate="", ActiveTime="", InsertTime="", BrokerOrderSeq=0, StopPrice=0, InstrumentID="", ActiveUserID="", OrderStatus='0', BrokerID="", OrderSysID="", IsSwapOrder=0, TraderID="", UserProductInfo="", InstallID=0, SettlementID=0, LimitPrice=0, TimeCondition='1', OrderRef="", IsAutoSuspend=0, SuspendTime="", VolumeTotalOriginal=0, ForceCloseReason='0', CombOffsetFlag="", TradingDay="", InsertDate="", SessionID=0, ClientID="", ActiveTraderID="", UserForceClose=0, UserID="", Direction='0', FrontID=0, ExchangeID="", RelativeOrderSysID="", CombHedgeFlag="", VolumeTraded=0, ExchangeInstID="", OrderType='0', VolumeCondition='1', MinVolume=0, RequestID=0, SequenceNo=0, OrderLocalID="", OrderPriceType='1', UpdateTime="", ClearingPartID="", NotifySequence=0, ContingentCondition='1', InvestorID="", ParticipantID="", ZCETotalTradedVolume=0):
        self.OrderSource=tou(OrderSource)
        self.CancelTime=tou(CancelTime)
        self.VolumeTotal=VolumeTotal
        self.StatusMsg=tou(StatusMsg)
        self.BusinessUnit=tou(BusinessUnit)
        self.OrderSubmitStatus=tou(OrderSubmitStatus)
        self.GTDDate=tou(GTDDate)
        self.ActiveTime=tou(ActiveTime)
        self.InsertTime=tou(InsertTime)
        self.BrokerOrderSeq=BrokerOrderSeq
        self.StopPrice=StopPrice
        self.InstrumentID=tou(InstrumentID)
        self.ActiveUserID=tou(ActiveUserID)
        self.OrderStatus=tou(OrderStatus)
        self.BrokerID=tou(BrokerID)
        self.OrderSysID=tou(OrderSysID)
        self.IsSwapOrder=IsSwapOrder
        self.TraderID=tou(TraderID)
        self.UserProductInfo=tou(UserProductInfo)
        self.InstallID=InstallID
        self.SettlementID=SettlementID
        self.LimitPrice=LimitPrice
        self.TimeCondition=tou(TimeCondition)
        self.OrderRef=tou(OrderRef)
        self.IsAutoSuspend=IsAutoSuspend
        self.SuspendTime=tou(SuspendTime)
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ForceCloseReason=tou(ForceCloseReason)
        self.CombOffsetFlag=tou(CombOffsetFlag)
        self.TradingDay=tou(TradingDay)
        self.InsertDate=tou(InsertDate)
        self.SessionID=SessionID
        self.ClientID=tou(ClientID)
        self.ActiveTraderID=tou(ActiveTraderID)
        self.UserForceClose=UserForceClose
        self.UserID=tou(UserID)
        self.Direction=tou(Direction)
        self.FrontID=FrontID
        self.ExchangeID=tou(ExchangeID)
        self.RelativeOrderSysID=tou(RelativeOrderSysID)
        self.CombHedgeFlag=tou(CombHedgeFlag)
        self.VolumeTraded=VolumeTraded
        self.ExchangeInstID=tou(ExchangeInstID)
        self.OrderType=tou(OrderType)
        self.VolumeCondition=tou(VolumeCondition)
        self.MinVolume=MinVolume
        self.RequestID=RequestID
        self.SequenceNo=SequenceNo
        self.OrderLocalID=tou(OrderLocalID)
        self.OrderPriceType=tou(OrderPriceType)
        self.UpdateTime=tou(UpdateTime)
        self.ClearingPartID=tou(ClearingPartID)
        self.NotifySequence=NotifySequence
        self.ContingentCondition=tou(ContingentCondition)
        self.InvestorID=tou(InvestorID)
        self.ParticipantID=tou(ParticipantID)
        self.ZCETotalTradedVolume=ZCETotalTradedVolume
        self.vcmap={'OrderStatus': {"'c'": '已触发', "'0'": '全部成交', "'1'": '部分成交还在队列中', "'a'": '未知', "'4'": '未成交不在队列中', "'3'": '未成交还在队列中', "'2'": '部分成交不在队列中', "'5'": '撤单', "'b'": '尚未触发'}, 'OrderSource': {"'1'": '来自管理员', "'0'": '来自参与者'}, 'VolumeCondition': {"'1'": '任何数量', "'2'": '最小数量', "'3'": '全部数量'}, 'ContingentCondition': {"'F'": '买一价小于条件价', "'9'": '卖一价大于条件价', "'A'": '卖一价大于等于条件价', "'4'": '预埋单', "'B'": '卖一价小于条件价', "'5'": '最新价大于条件价', "'H'": '买一价小于等于条件价', "'C'": '卖一价小于等于条件价', "'6'": '最新价大于等于条件价', "'7'": '最新价小于条件价', "'1'": '立即', "'D'": '买一价大于条件价', "'2'": '止损', "'E'": '买一价大于等于条件价', "'8'": '最新价小于等于条件价', "'3'": '止赢'}, 'TimeCondition': {"'6'": '集合竞价有效', "'1'": '立即完成，否则撤销', "'4'": '指定日期前有效', "'2'": '本节有效', "'5'": '撤销前有效', "'3'": '当日有效'}, 'OrderType': {"'0'": '正常', "'1'": '报价衍生', "'4'": '条件单', "'2'": '组合衍生', "'5'": '互换单', "'3'": '组合报单'}, 'OrderPriceType': {"'F'": '买一价浮动上浮3个ticks', "'9'": '卖一价浮动上浮1个ticks', "'A'": '卖一价浮动上浮2个ticks', "'4'": '最新价', "'B'": '卖一价浮动上浮3个ticks', "'5'": '最新价浮动上浮1个ticks', "'C'": '买一价', "'6'": '最新价浮动上浮2个ticks', "'7'": '最新价浮动上浮3个ticks', "'1'": '任意价', "'D'": '买一价浮动上浮1个ticks', "'2'": '限价', "'E'": '买一价浮动上浮2个ticks', "'8'": '卖一价', "'3'": '最优价'}, 'OrderSubmitStatus': {"'6'": '改单已经被拒绝', "'0'": '已经提交', "'1'": '撤单已经提交', "'4'": '报单已经被拒绝', "'2'": '修改已经提交', "'5'": '撤单已经被拒绝', "'3'": '已经接受'}, 'Direction': {"'1'": '卖', "'0'": '买'}, 'ForceCloseReason': {"'6'": '其它', "'7'": '自然人临近交割', "'0'": '非强平', "'1'": '资金不足', "'4'": '持仓非整数倍', "'2'": '客户超仓', "'5'": '违规', "'3'": '会员超仓'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OrderSource', 'CancelTime', 'VolumeTotal', 'StatusMsg', 'BusinessUnit', 'OrderSubmitStatus', 'GTDDate', 'ActiveTime', 'InsertTime', 'BrokerOrderSeq', 'StopPrice', 'InstrumentID', 'ActiveUserID', 'OrderStatus', 'BrokerID', 'OrderSysID', 'IsSwapOrder', 'TraderID', 'UserProductInfo', 'InstallID', 'SettlementID', 'LimitPrice', 'TimeCondition', 'OrderRef', 'IsAutoSuspend', 'SuspendTime', 'VolumeTotalOriginal', 'ForceCloseReason', 'CombOffsetFlag', 'TradingDay', 'InsertDate', 'SessionID', 'ClientID', 'ActiveTraderID', 'UserForceClose', 'UserID', 'Direction', 'FrontID', 'ExchangeID', 'RelativeOrderSysID', 'CombHedgeFlag', 'VolumeTraded', 'ExchangeInstID', 'OrderType', 'VolumeCondition', 'MinVolume', 'RequestID', 'SequenceNo', 'OrderLocalID', 'OrderPriceType', 'UpdateTime', 'ClearingPartID', 'NotifySequence', 'ContingentCondition', 'InvestorID', 'ParticipantID', 'ZCETotalTradedVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OrderSource', u'报单来源'),('CancelTime', u'撤销时间'),('VolumeTotal', u'剩余数量'),('StatusMsg', u'状态信息'),('BusinessUnit', u'业务单元'),('OrderSubmitStatus', u'报单提交状态'),('GTDDate', u'GTD日期'),('ActiveTime', u'激活时间'),('InsertTime', u'委托时间'),('BrokerOrderSeq', u'经纪公司报单编号'),('StopPrice', u'止损价'),('InstrumentID', u'合约代码'),('ActiveUserID', u'操作用户代码'),('OrderStatus', u'报单状态'),('BrokerID', u'经纪公司代码'),('OrderSysID', u'报单编号'),('IsSwapOrder', u'互换单标志'),('TraderID', u'交易所交易员代码'),('UserProductInfo', u'用户端产品信息'),('InstallID', u'安装编号'),('SettlementID', u'结算编号'),('LimitPrice', u'价格'),('TimeCondition', u'有效期类型'),('OrderRef', u'报单引用'),('IsAutoSuspend', u'自动挂起标志'),('SuspendTime', u'挂起时间'),('VolumeTotalOriginal', u'数量'),('ForceCloseReason', u'强平原因'),('CombOffsetFlag', u'组合开平标志'),('TradingDay', u'交易日'),('InsertDate', u'报单日期'),('SessionID', u'会话编号'),('ClientID', u'客户代码'),('ActiveTraderID', u'最后修改交易所交易员代码'),('UserForceClose', u'用户强评标志'),('UserID', u'用户代码'),('Direction', u'买卖方向'),('FrontID', u'前置编号'),('ExchangeID', u'交易所代码'),('RelativeOrderSysID', u'相关报单'),('CombHedgeFlag', u'组合投机套保标志'),('VolumeTraded', u'今成交数量'),('ExchangeInstID', u'合约在交易所的代码'),('OrderType', u'报单类型'),('VolumeCondition', u'成交量类型'),('MinVolume', u'最小成交量'),('RequestID', u'请求编号'),('SequenceNo', u'序号'),('OrderLocalID', u'本地报单编号'),('OrderPriceType', u'报单价格条件'),('UpdateTime', u'最后修改时间'),('ClearingPartID', u'结算会员编号'),('NotifySequence', u'报单提示序号'),('ContingentCondition', u'触发条件'),('InvestorID', u'投资者代码'),('ParticipantID', u'会员代码'),('ZCETotalTradedVolume', u'郑商所成交数量')]])
    def getval(self, n):
        if n in ['OrderSource', 'OrderSubmitStatus', 'OrderStatus', 'TimeCondition', 'ForceCloseReason', 'Direction', 'OrderType', 'VolumeCondition', 'OrderPriceType', 'ContingentCondition']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcErrOrderField:
    def __init__(self, UserForceClose=0, UserID="", ErrorMsg="", Direction='0', GTDDate="", ErrorID=0, CombHedgeFlag="", StopPrice=0, BusinessUnit="", InstrumentID="", VolumeCondition='1', MinVolume=0, RequestID=0, BrokerID="", IsSwapOrder=0, OrderPriceType='1', LimitPrice=0, ContingentCondition='1', TimeCondition='1', OrderRef="", IsAutoSuspend=0, InvestorID="", VolumeTotalOriginal=0, ForceCloseReason='0', CombOffsetFlag=""):
        self.UserForceClose=UserForceClose
        self.UserID=tou(UserID)
        self.ErrorMsg=tou(ErrorMsg)
        self.Direction=tou(Direction)
        self.GTDDate=tou(GTDDate)
        self.ErrorID=ErrorID
        self.CombHedgeFlag=tou(CombHedgeFlag)
        self.StopPrice=StopPrice
        self.BusinessUnit=tou(BusinessUnit)
        self.InstrumentID=tou(InstrumentID)
        self.VolumeCondition=tou(VolumeCondition)
        self.MinVolume=MinVolume
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.IsSwapOrder=IsSwapOrder
        self.OrderPriceType=tou(OrderPriceType)
        self.LimitPrice=LimitPrice
        self.ContingentCondition=tou(ContingentCondition)
        self.TimeCondition=tou(TimeCondition)
        self.OrderRef=tou(OrderRef)
        self.IsAutoSuspend=IsAutoSuspend
        self.InvestorID=tou(InvestorID)
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ForceCloseReason=tou(ForceCloseReason)
        self.CombOffsetFlag=tou(CombOffsetFlag)
        self.vcmap={'VolumeCondition': {"'1'": '任何数量', "'2'": '最小数量', "'3'": '全部数量'}, 'ContingentCondition': {"'F'": '买一价小于条件价', "'9'": '卖一价大于条件价', "'A'": '卖一价大于等于条件价', "'4'": '预埋单', "'B'": '卖一价小于条件价', "'5'": '最新价大于条件价', "'H'": '买一价小于等于条件价', "'C'": '卖一价小于等于条件价', "'6'": '最新价大于等于条件价', "'7'": '最新价小于条件价', "'1'": '立即', "'D'": '买一价大于条件价', "'2'": '止损', "'E'": '买一价大于等于条件价', "'8'": '最新价小于等于条件价', "'3'": '止赢'}, 'ForceCloseReason': {"'6'": '其它', "'7'": '自然人临近交割', "'0'": '非强平', "'1'": '资金不足', "'4'": '持仓非整数倍', "'2'": '客户超仓', "'5'": '违规', "'3'": '会员超仓'}, 'OrderPriceType': {"'F'": '买一价浮动上浮3个ticks', "'9'": '卖一价浮动上浮1个ticks', "'A'": '卖一价浮动上浮2个ticks', "'4'": '最新价', "'B'": '卖一价浮动上浮3个ticks', "'5'": '最新价浮动上浮1个ticks', "'C'": '买一价', "'6'": '最新价浮动上浮2个ticks', "'7'": '最新价浮动上浮3个ticks', "'1'": '任意价', "'D'": '买一价浮动上浮1个ticks', "'2'": '限价', "'E'": '买一价浮动上浮2个ticks', "'8'": '卖一价', "'3'": '最优价'}, 'Direction': {"'1'": '卖', "'0'": '买'}, 'TimeCondition': {"'6'": '集合竞价有效', "'1'": '立即完成，否则撤销', "'4'": '指定日期前有效', "'2'": '本节有效', "'5'": '撤销前有效', "'3'": '当日有效'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserForceClose', 'UserID', 'ErrorMsg', 'Direction', 'GTDDate', 'ErrorID', 'CombHedgeFlag', 'StopPrice', 'BusinessUnit', 'InstrumentID', 'VolumeCondition', 'MinVolume', 'RequestID', 'BrokerID', 'IsSwapOrder', 'OrderPriceType', 'LimitPrice', 'ContingentCondition', 'TimeCondition', 'OrderRef', 'IsAutoSuspend', 'InvestorID', 'VolumeTotalOriginal', 'ForceCloseReason', 'CombOffsetFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserForceClose', u'用户强评标志'),('UserID', u'用户代码'),('ErrorMsg', u'错误信息'),('Direction', u'买卖方向'),('GTDDate', u'GTD日期'),('ErrorID', u'错误代码'),('CombHedgeFlag', u'组合投机套保标志'),('StopPrice', u'止损价'),('BusinessUnit', u'业务单元'),('InstrumentID', u'合约代码'),('VolumeCondition', u'成交量类型'),('MinVolume', u'最小成交量'),('RequestID', u'请求编号'),('BrokerID', u'经纪公司代码'),('IsSwapOrder', u'互换单标志'),('OrderPriceType', u'报单价格条件'),('LimitPrice', u'价格'),('ContingentCondition', u'触发条件'),('TimeCondition', u'有效期类型'),('OrderRef', u'报单引用'),('IsAutoSuspend', u'自动挂起标志'),('InvestorID', u'投资者代码'),('VolumeTotalOriginal', u'数量'),('ForceCloseReason', u'强平原因'),('CombOffsetFlag', u'组合开平标志')]])
    def getval(self, n):
        if n in ['Direction', 'VolumeCondition', 'OrderPriceType', 'ContingentCondition', 'TimeCondition', 'ForceCloseReason']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryInvestorPositionDetailField:
    def __init__(self, InvestorID="", BrokerID="", InstrumentID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.InstrumentID=tou(InstrumentID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQrySuperUserField:
    def __init__(self, UserID=""):
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcErrorConditionalOrderField:
    def __init__(self, OrderSource='0', CancelTime="", VolumeTotal=0, StatusMsg="", BusinessUnit="", OrderSubmitStatus='0', GTDDate="", ActiveTime="", InsertTime="", BrokerOrderSeq=0, StopPrice=0, ErrorMsg="", InstrumentID="", ActiveUserID="", OrderStatus='0', BrokerID="", OrderSysID="", IsSwapOrder=0, TraderID="", UserProductInfo="", InstallID=0, SettlementID=0, LimitPrice=0, TimeCondition='1', OrderRef="", IsAutoSuspend=0, SuspendTime="", VolumeTotalOriginal=0, ForceCloseReason='0', CombOffsetFlag="", TradingDay="", InsertDate="", SessionID=0, ClientID="", ActiveTraderID="", UserForceClose=0, UserID="", Direction='0', FrontID=0, ExchangeID="", RelativeOrderSysID="", CombHedgeFlag="", VolumeTraded=0, ExchangeInstID="", OrderType='0', VolumeCondition='1', MinVolume=0, RequestID=0, SequenceNo=0, OrderLocalID="", OrderPriceType='1', UpdateTime="", ClearingPartID="", ErrorID=0, NotifySequence=0, ContingentCondition='1', InvestorID="", ParticipantID="", ZCETotalTradedVolume=0):
        self.OrderSource=tou(OrderSource)
        self.CancelTime=tou(CancelTime)
        self.VolumeTotal=VolumeTotal
        self.StatusMsg=tou(StatusMsg)
        self.BusinessUnit=tou(BusinessUnit)
        self.OrderSubmitStatus=tou(OrderSubmitStatus)
        self.GTDDate=tou(GTDDate)
        self.ActiveTime=tou(ActiveTime)
        self.InsertTime=tou(InsertTime)
        self.BrokerOrderSeq=BrokerOrderSeq
        self.StopPrice=StopPrice
        self.ErrorMsg=tou(ErrorMsg)
        self.InstrumentID=tou(InstrumentID)
        self.ActiveUserID=tou(ActiveUserID)
        self.OrderStatus=tou(OrderStatus)
        self.BrokerID=tou(BrokerID)
        self.OrderSysID=tou(OrderSysID)
        self.IsSwapOrder=IsSwapOrder
        self.TraderID=tou(TraderID)
        self.UserProductInfo=tou(UserProductInfo)
        self.InstallID=InstallID
        self.SettlementID=SettlementID
        self.LimitPrice=LimitPrice
        self.TimeCondition=tou(TimeCondition)
        self.OrderRef=tou(OrderRef)
        self.IsAutoSuspend=IsAutoSuspend
        self.SuspendTime=tou(SuspendTime)
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ForceCloseReason=tou(ForceCloseReason)
        self.CombOffsetFlag=tou(CombOffsetFlag)
        self.TradingDay=tou(TradingDay)
        self.InsertDate=tou(InsertDate)
        self.SessionID=SessionID
        self.ClientID=tou(ClientID)
        self.ActiveTraderID=tou(ActiveTraderID)
        self.UserForceClose=UserForceClose
        self.UserID=tou(UserID)
        self.Direction=tou(Direction)
        self.FrontID=FrontID
        self.ExchangeID=tou(ExchangeID)
        self.RelativeOrderSysID=tou(RelativeOrderSysID)
        self.CombHedgeFlag=tou(CombHedgeFlag)
        self.VolumeTraded=VolumeTraded
        self.ExchangeInstID=tou(ExchangeInstID)
        self.OrderType=tou(OrderType)
        self.VolumeCondition=tou(VolumeCondition)
        self.MinVolume=MinVolume
        self.RequestID=RequestID
        self.SequenceNo=SequenceNo
        self.OrderLocalID=tou(OrderLocalID)
        self.OrderPriceType=tou(OrderPriceType)
        self.UpdateTime=tou(UpdateTime)
        self.ClearingPartID=tou(ClearingPartID)
        self.ErrorID=ErrorID
        self.NotifySequence=NotifySequence
        self.ContingentCondition=tou(ContingentCondition)
        self.InvestorID=tou(InvestorID)
        self.ParticipantID=tou(ParticipantID)
        self.ZCETotalTradedVolume=ZCETotalTradedVolume
        self.vcmap={'OrderStatus': {"'c'": '已触发', "'0'": '全部成交', "'1'": '部分成交还在队列中', "'a'": '未知', "'4'": '未成交不在队列中', "'3'": '未成交还在队列中', "'2'": '部分成交不在队列中', "'5'": '撤单', "'b'": '尚未触发'}, 'OrderSource': {"'1'": '来自管理员', "'0'": '来自参与者'}, 'VolumeCondition': {"'1'": '任何数量', "'2'": '最小数量', "'3'": '全部数量'}, 'ContingentCondition': {"'F'": '买一价小于条件价', "'9'": '卖一价大于条件价', "'A'": '卖一价大于等于条件价', "'4'": '预埋单', "'B'": '卖一价小于条件价', "'5'": '最新价大于条件价', "'H'": '买一价小于等于条件价', "'C'": '卖一价小于等于条件价', "'6'": '最新价大于等于条件价', "'7'": '最新价小于条件价', "'1'": '立即', "'D'": '买一价大于条件价', "'2'": '止损', "'E'": '买一价大于等于条件价', "'8'": '最新价小于等于条件价', "'3'": '止赢'}, 'TimeCondition': {"'6'": '集合竞价有效', "'1'": '立即完成，否则撤销', "'4'": '指定日期前有效', "'2'": '本节有效', "'5'": '撤销前有效', "'3'": '当日有效'}, 'OrderType': {"'0'": '正常', "'1'": '报价衍生', "'4'": '条件单', "'2'": '组合衍生', "'5'": '互换单', "'3'": '组合报单'}, 'OrderPriceType': {"'F'": '买一价浮动上浮3个ticks', "'9'": '卖一价浮动上浮1个ticks', "'A'": '卖一价浮动上浮2个ticks', "'4'": '最新价', "'B'": '卖一价浮动上浮3个ticks', "'5'": '最新价浮动上浮1个ticks', "'C'": '买一价', "'6'": '最新价浮动上浮2个ticks', "'7'": '最新价浮动上浮3个ticks', "'1'": '任意价', "'D'": '买一价浮动上浮1个ticks', "'2'": '限价', "'E'": '买一价浮动上浮2个ticks', "'8'": '卖一价', "'3'": '最优价'}, 'OrderSubmitStatus': {"'6'": '改单已经被拒绝', "'0'": '已经提交', "'1'": '撤单已经提交', "'4'": '报单已经被拒绝', "'2'": '修改已经提交', "'5'": '撤单已经被拒绝', "'3'": '已经接受'}, 'Direction': {"'1'": '卖', "'0'": '买'}, 'ForceCloseReason': {"'6'": '其它', "'7'": '自然人临近交割', "'0'": '非强平', "'1'": '资金不足', "'4'": '持仓非整数倍', "'2'": '客户超仓', "'5'": '违规', "'3'": '会员超仓'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OrderSource', 'CancelTime', 'VolumeTotal', 'StatusMsg', 'BusinessUnit', 'OrderSubmitStatus', 'GTDDate', 'ActiveTime', 'InsertTime', 'BrokerOrderSeq', 'StopPrice', 'ErrorMsg', 'InstrumentID', 'ActiveUserID', 'OrderStatus', 'BrokerID', 'OrderSysID', 'IsSwapOrder', 'TraderID', 'UserProductInfo', 'InstallID', 'SettlementID', 'LimitPrice', 'TimeCondition', 'OrderRef', 'IsAutoSuspend', 'SuspendTime', 'VolumeTotalOriginal', 'ForceCloseReason', 'CombOffsetFlag', 'TradingDay', 'InsertDate', 'SessionID', 'ClientID', 'ActiveTraderID', 'UserForceClose', 'UserID', 'Direction', 'FrontID', 'ExchangeID', 'RelativeOrderSysID', 'CombHedgeFlag', 'VolumeTraded', 'ExchangeInstID', 'OrderType', 'VolumeCondition', 'MinVolume', 'RequestID', 'SequenceNo', 'OrderLocalID', 'OrderPriceType', 'UpdateTime', 'ClearingPartID', 'ErrorID', 'NotifySequence', 'ContingentCondition', 'InvestorID', 'ParticipantID', 'ZCETotalTradedVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OrderSource', u'报单来源'),('CancelTime', u'撤销时间'),('VolumeTotal', u'剩余数量'),('StatusMsg', u'状态信息'),('BusinessUnit', u'业务单元'),('OrderSubmitStatus', u'报单提交状态'),('GTDDate', u'GTD日期'),('ActiveTime', u'激活时间'),('InsertTime', u'委托时间'),('BrokerOrderSeq', u'经纪公司报单编号'),('StopPrice', u'止损价'),('ErrorMsg', u'错误信息'),('InstrumentID', u'合约代码'),('ActiveUserID', u'操作用户代码'),('OrderStatus', u'报单状态'),('BrokerID', u'经纪公司代码'),('OrderSysID', u'报单编号'),('IsSwapOrder', u'互换单标志'),('TraderID', u'交易所交易员代码'),('UserProductInfo', u'用户端产品信息'),('InstallID', u'安装编号'),('SettlementID', u'结算编号'),('LimitPrice', u'价格'),('TimeCondition', u'有效期类型'),('OrderRef', u'报单引用'),('IsAutoSuspend', u'自动挂起标志'),('SuspendTime', u'挂起时间'),('VolumeTotalOriginal', u'数量'),('ForceCloseReason', u'强平原因'),('CombOffsetFlag', u'组合开平标志'),('TradingDay', u'交易日'),('InsertDate', u'报单日期'),('SessionID', u'会话编号'),('ClientID', u'客户代码'),('ActiveTraderID', u'最后修改交易所交易员代码'),('UserForceClose', u'用户强评标志'),('UserID', u'用户代码'),('Direction', u'买卖方向'),('FrontID', u'前置编号'),('ExchangeID', u'交易所代码'),('RelativeOrderSysID', u'相关报单'),('CombHedgeFlag', u'组合投机套保标志'),('VolumeTraded', u'今成交数量'),('ExchangeInstID', u'合约在交易所的代码'),('OrderType', u'报单类型'),('VolumeCondition', u'成交量类型'),('MinVolume', u'最小成交量'),('RequestID', u'请求编号'),('SequenceNo', u'序号'),('OrderLocalID', u'本地报单编号'),('OrderPriceType', u'报单价格条件'),('UpdateTime', u'最后修改时间'),('ClearingPartID', u'结算会员编号'),('ErrorID', u'错误代码'),('NotifySequence', u'报单提示序号'),('ContingentCondition', u'触发条件'),('InvestorID', u'投资者代码'),('ParticipantID', u'会员代码'),('ZCETotalTradedVolume', u'郑商所成交数量')]])
    def getval(self, n):
        if n in ['OrderSource', 'OrderSubmitStatus', 'OrderStatus', 'TimeCondition', 'ForceCloseReason', 'Direction', 'OrderType', 'VolumeCondition', 'OrderPriceType', 'ContingentCondition']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcFrontStatusField:
    def __init__(self, FrontID=0, LastReportDate="", LastReportTime="", IsActive=0):
        self.FrontID=FrontID
        self.LastReportDate=tou(LastReportDate)
        self.LastReportTime=tou(LastReportTime)
        self.IsActive=IsActive
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'LastReportDate', 'LastReportTime', 'IsActive']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('LastReportDate', u'上次报告日期'),('LastReportTime', u'上次报告时间'),('IsActive', u'是否活跃')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSyncFundMortgageField:
    def __init__(self, ToCurrencyID="", BrokerID="", MortgageSeqNo="", FromCurrencyID="", InvestorID="", MortgageAmount=0):
        self.ToCurrencyID=tou(ToCurrencyID)
        self.BrokerID=tou(BrokerID)
        self.MortgageSeqNo=tou(MortgageSeqNo)
        self.FromCurrencyID=tou(FromCurrencyID)
        self.InvestorID=tou(InvestorID)
        self.MortgageAmount=MortgageAmount
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ToCurrencyID', 'BrokerID', 'MortgageSeqNo', 'FromCurrencyID', 'InvestorID', 'MortgageAmount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ToCurrencyID', u'目标币种'),('BrokerID', u'经纪公司代码'),('MortgageSeqNo', u'货币质押流水号'),('FromCurrencyID', u'源币种'),('InvestorID', u'投资者代码'),('MortgageAmount', u'质押金额')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcEWarrantOffsetField:
    def __init__(self, TradingDay="", BrokerID="", Volume=0, InvestorID="", InstrumentID="", Direction='0', HedgeFlag='1', ExchangeID=""):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.Volume=Volume
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.Direction=tou(Direction)
        self.HedgeFlag=tou(HedgeFlag)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={'Direction': {"'1'": '卖', "'0'": '买'}, 'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'Volume', 'InvestorID', 'InstrumentID', 'Direction', 'HedgeFlag', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日期'),('BrokerID', u'经纪公司代码'),('Volume', u'数量'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('Direction', u'买卖方向'),('HedgeFlag', u'投机套保标志'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in ['Direction', 'HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryFrontStatusField:
    def __init__(self, FrontID=0):
        self.FrontID=FrontID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcFutureSignIOField:
    def __init__(self, TradingDay="", BrokerID="", BankID="", DeviceID="", PlateSerial=0, UserID="", InstallID=0, RequestID=0, CurrencyID="", TradeDate="", Digest="", BankSerial="", TID=0, TradeTime="", TradeCode="", BankBranchID="", LastFragment='0', SessionID=0, BrokerIDByBank="", OperNo="", BrokerBranchID=""):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.DeviceID=tou(DeviceID)
        self.PlateSerial=PlateSerial
        self.UserID=tou(UserID)
        self.InstallID=InstallID
        self.RequestID=RequestID
        self.CurrencyID=tou(CurrencyID)
        self.TradeDate=tou(TradeDate)
        self.Digest=tou(Digest)
        self.BankSerial=tou(BankSerial)
        self.TID=TID
        self.TradeTime=tou(TradeTime)
        self.TradeCode=tou(TradeCode)
        self.BankBranchID=tou(BankBranchID)
        self.LastFragment=tou(LastFragment)
        self.SessionID=SessionID
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.OperNo=tou(OperNo)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'BankID', 'DeviceID', 'PlateSerial', 'UserID', 'InstallID', 'RequestID', 'CurrencyID', 'TradeDate', 'Digest', 'BankSerial', 'TID', 'TradeTime', 'TradeCode', 'BankBranchID', 'LastFragment', 'SessionID', 'BrokerIDByBank', 'OperNo', 'BrokerBranchID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('DeviceID', u'渠道标志'),('PlateSerial', u'银期平台消息流水号'),('UserID', u'用户标识'),('InstallID', u'安装编号'),('RequestID', u'请求编号'),('CurrencyID', u'币种代码'),('TradeDate', u'交易日期'),('Digest', u'摘要'),('BankSerial', u'银行流水号'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('LastFragment', u'最后分片标志'),('SessionID', u'会话号'),('BrokerIDByBank', u'期货公司银行编码'),('OperNo', u'交易柜员'),('BrokerBranchID', u'期商分支机构代码')]])
    def getval(self, n):
        if n in ['LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqQueryAccountField:
    def __init__(self, TradingDay="", TradeDate="", BankPassWord="", IdentifiedCardNo="", IdCardType='0', UserID="", OperNo="", BankSerial="", Digest="", SessionID=0, BankPwdFlag='0', CurrencyID="", BankBranchID="", TradeCode="", Password="", BankAccType='1', SecuPwdFlag='0', BrokerBranchID="", RequestID=0, BrokerID="", BankID="", BankSecuAcc="", PlateSerial=0, AccountID="", CustomerName="", InstallID=0, TID=0, FutureSerial=0, BankSecuAccType='1', CustType='0', BankAccount="", LastFragment='0', DeviceID="", VerifyCertNoFlag='0', BrokerIDByBank="", TradeTime=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.UserID=tou(UserID)
        self.OperNo=tou(OperNo)
        self.BankSerial=tou(BankSerial)
        self.Digest=tou(Digest)
        self.SessionID=SessionID
        self.BankPwdFlag=tou(BankPwdFlag)
        self.CurrencyID=tou(CurrencyID)
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.BankAccType=tou(BankAccType)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.BankSecuAcc=tou(BankSecuAcc)
        self.PlateSerial=PlateSerial
        self.AccountID=tou(AccountID)
        self.CustomerName=tou(CustomerName)
        self.InstallID=InstallID
        self.TID=TID
        self.FutureSerial=FutureSerial
        self.BankSecuAccType=tou(BankSecuAccType)
        self.CustType=tou(CustType)
        self.BankAccount=tou(BankAccount)
        self.LastFragment=tou(LastFragment)
        self.DeviceID=tou(DeviceID)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.TradeTime=tou(TradeTime)
        self.vcmap={'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'BankSecuAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'UserID', 'OperNo', 'BankSerial', 'Digest', 'SessionID', 'BankPwdFlag', 'CurrencyID', 'BankBranchID', 'TradeCode', 'Password', 'BankAccType', 'SecuPwdFlag', 'BrokerBranchID', 'RequestID', 'BrokerID', 'BankID', 'BankSecuAcc', 'PlateSerial', 'AccountID', 'CustomerName', 'InstallID', 'TID', 'FutureSerial', 'BankSecuAccType', 'CustType', 'BankAccount', 'LastFragment', 'DeviceID', 'VerifyCertNoFlag', 'BrokerIDByBank', 'TradeTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('TradeDate', u'交易日期'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('UserID', u'用户标识'),('OperNo', u'交易柜员'),('BankSerial', u'银行流水号'),('Digest', u'摘要'),('SessionID', u'会话号'),('BankPwdFlag', u'银行密码标志'),('CurrencyID', u'币种代码'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('BankAccType', u'银行帐号类型'),('SecuPwdFlag', u'期货资金密码核对标志'),('BrokerBranchID', u'期商分支机构代码'),('RequestID', u'请求编号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('BankSecuAcc', u'期货单位帐号'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号'),('CustomerName', u'客户姓名'),('InstallID', u'安装编号'),('TID', u'交易ID'),('FutureSerial', u'期货公司流水号'),('BankSecuAccType', u'期货单位帐号类型'),('CustType', u'客户类型'),('BankAccount', u'银行帐号'),('LastFragment', u'最后分片标志'),('DeviceID', u'渠道标志'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('BrokerIDByBank', u'期货公司银行编码'),('TradeTime', u'交易时间')]])
    def getval(self, n):
        if n in ['IdCardType', 'BankPwdFlag', 'BankAccType', 'SecuPwdFlag', 'BankSecuAccType', 'CustType', 'LastFragment', 'VerifyCertNoFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQrySettlementInfoField:
    def __init__(self, InvestorID="", BrokerID="", TradingDay=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.TradingDay=tou(TradingDay)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'TradingDay']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('TradingDay', u'交易日')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReturnResultField:
    def __init__(self, DescrInfoForReturnCode="", ReturnCode=""):
        self.DescrInfoForReturnCode=tou(DescrInfoForReturnCode)
        self.ReturnCode=tou(ReturnCode)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['DescrInfoForReturnCode', 'ReturnCode']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('DescrInfoForReturnCode', u'返回码描述'),('ReturnCode', u'返回代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcPartBrokerField:
    def __init__(self, BrokerID="", IsActive=0, ParticipantID="", ExchangeID=""):
        self.BrokerID=tou(BrokerID)
        self.IsActive=IsActive
        self.ParticipantID=tou(ParticipantID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'IsActive', 'ParticipantID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('IsActive', u'是否活跃'),('ParticipantID', u'会员代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRspInfoField:
    def __init__(self, ErrorMsg="", ErrorID=0):
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ErrorMsg', 'ErrorID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryBrokerUserEventField:
    def __init__(self, BrokerID="", UserEventType='1', UserID=""):
        self.BrokerID=tou(BrokerID)
        self.UserEventType=tou(UserEventType)
        self.UserID=tou(UserID)
        self.vcmap={'UserEventType': {"'6'": '客户端认证', "'9'": '其他', "'1'": '登录', "'4'": '交易失败', "'2'": '登出', "'5'": '修改密码', "'3'": '交易成功'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'UserEventType', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('UserEventType', u'用户事件类型'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in ['UserEventType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryMarginModelField:
    def __init__(self, BrokerID="", MarginModelID=""):
        self.BrokerID=tou(BrokerID)
        self.MarginModelID=tou(MarginModelID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'MarginModelID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('MarginModelID', u'保证金率模板代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryInvestorGroupField:
    def __init__(self, BrokerID=""):
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcProductField:
    def __init__(self, PriceTick=0, VolumeMultiple=0, PositionType='1', MaxLimitOrderVolume=0, ProductName="", TradeCurrencyID="", CloseDealType='0', ExchangeID="", MaxMarketOrderVolume=0, MinMarketOrderVolume=0, MortgageFundUseRange='0', MinLimitOrderVolume=0, ProductClass='1', PositionDateType='1', ProductID=""):
        self.PriceTick=PriceTick
        self.VolumeMultiple=VolumeMultiple
        self.PositionType=tou(PositionType)
        self.MaxLimitOrderVolume=MaxLimitOrderVolume
        self.ProductName=tou(ProductName)
        self.TradeCurrencyID=tou(TradeCurrencyID)
        self.CloseDealType=tou(CloseDealType)
        self.ExchangeID=tou(ExchangeID)
        self.MaxMarketOrderVolume=MaxMarketOrderVolume
        self.MinMarketOrderVolume=MinMarketOrderVolume
        self.MortgageFundUseRange=tou(MortgageFundUseRange)
        self.MinLimitOrderVolume=MinLimitOrderVolume
        self.ProductClass=tou(ProductClass)
        self.PositionDateType=tou(PositionDateType)
        self.ProductID=tou(ProductID)
        self.vcmap={'PositionDateType': {"'1'": '使用历史持仓', "'2'": '不使用历史持仓'}, 'ProductClass': {"'1'": '期货', "'4'": '即期', "'2'": '期权', "'5'": '期转现', "'3'": '组合'}, 'PositionType': {"'1'": '净持仓', "'2'": '综合持仓'}, 'MortgageFundUseRange': {"'1'": '用于保证金', "'2'": '用于手续费、盈亏、保证金', "'0'": '不能使用'}, 'CloseDealType': {"'1'": '投机平仓优先', "'0'": '正常'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['PriceTick', 'VolumeMultiple', 'PositionType', 'MaxLimitOrderVolume', 'ProductName', 'TradeCurrencyID', 'CloseDealType', 'ExchangeID', 'MaxMarketOrderVolume', 'MinMarketOrderVolume', 'MortgageFundUseRange', 'MinLimitOrderVolume', 'ProductClass', 'PositionDateType', 'ProductID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('PriceTick', u'最小变动价位'),('VolumeMultiple', u'合约数量乘数'),('PositionType', u'持仓类型'),('MaxLimitOrderVolume', u'限价单最大下单量'),('ProductName', u'产品名称'),('TradeCurrencyID', u'交易币种类型'),('CloseDealType', u'平仓处理类型'),('ExchangeID', u'交易所代码'),('MaxMarketOrderVolume', u'市价单最大下单量'),('MinMarketOrderVolume', u'市价单最小下单量'),('MortgageFundUseRange', u'质押资金可用范围'),('MinLimitOrderVolume', u'限价单最小下单量'),('ProductClass', u'产品类型'),('PositionDateType', u'持仓日期类型'),('ProductID', u'产品代码')]])
    def getval(self, n):
        if n in ['PositionType', 'CloseDealType', 'MortgageFundUseRange', 'ProductClass', 'PositionDateType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryHisOrderField:
    def __init__(self, TradingDay="", BrokerID="", OrderSysID="", InsertTimeStart="", InsertTimeEnd="", InvestorID="", InstrumentID="", SettlementID=0, ExchangeID=""):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.OrderSysID=tou(OrderSysID)
        self.InsertTimeStart=tou(InsertTimeStart)
        self.InsertTimeEnd=tou(InsertTimeEnd)
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.SettlementID=SettlementID
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'OrderSysID', 'InsertTimeStart', 'InsertTimeEnd', 'InvestorID', 'InstrumentID', 'SettlementID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码'),('OrderSysID', u'报单编号'),('InsertTimeStart', u'开始时间'),('InsertTimeEnd', u'结束时间'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('SettlementID', u'结算编号'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcUserRightsAssignField:
    def __init__(self, BrokerID="", DRIdentityID=0, UserID=""):
        self.BrokerID=tou(BrokerID)
        self.DRIdentityID=DRIdentityID
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'DRIdentityID', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'应用单元代码'),('DRIdentityID', u'交易中心代码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQueryCFMMCTradingAccountTokenField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRspUserLoginField:
    def __init__(self, TradingDay="", BrokerID="", INETime="", SystemName="", FFEXTime="", UserID="", LoginTime="", CZCETime="", MaxOrderRef="", DCETime="", SHFETime="", FrontID=0, SessionID=0):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.INETime=tou(INETime)
        self.SystemName=tou(SystemName)
        self.FFEXTime=tou(FFEXTime)
        self.UserID=tou(UserID)
        self.LoginTime=tou(LoginTime)
        self.CZCETime=tou(CZCETime)
        self.MaxOrderRef=tou(MaxOrderRef)
        self.DCETime=tou(DCETime)
        self.SHFETime=tou(SHFETime)
        self.FrontID=FrontID
        self.SessionID=SessionID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'INETime', 'SystemName', 'FFEXTime', 'UserID', 'LoginTime', 'CZCETime', 'MaxOrderRef', 'DCETime', 'SHFETime', 'FrontID', 'SessionID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码'),('INETime', u'能源中心时间'),('SystemName', u'交易系统名称'),('FFEXTime', u'中金所时间'),('UserID', u'用户代码'),('LoginTime', u'登录成功时间'),('CZCETime', u'郑商所时间'),('MaxOrderRef', u'最大报单引用'),('DCETime', u'大商所时间'),('SHFETime', u'上期所时间'),('FrontID', u'前置编号'),('SessionID', u'会话编号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerUserField:
    def __init__(self, BrokerID="", UserName="", IsActive=0, UserType='0', UserID="", IsUsingOTP=0):
        self.BrokerID=tou(BrokerID)
        self.UserName=tou(UserName)
        self.IsActive=IsActive
        self.UserType=tou(UserType)
        self.UserID=tou(UserID)
        self.IsUsingOTP=IsUsingOTP
        self.vcmap={'UserType': {"'1'": '操作员', "'2'": '管理员', "'0'": '投资者'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'UserName', 'IsActive', 'UserType', 'UserID', 'IsUsingOTP']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('UserName', u'用户名称'),('IsActive', u'是否活跃'),('UserType', u'用户类型'),('UserID', u'用户代码'),('IsUsingOTP', u'是否使用令牌')]])
    def getval(self, n):
        if n in ['UserType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcUserLogoutField:
    def __init__(self, BrokerID="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataLastMatchField:
    def __init__(self, OpenInterest=0, LastPrice=0, Volume=0, Turnover=0):
        self.OpenInterest=OpenInterest
        self.LastPrice=LastPrice
        self.Volume=Volume
        self.Turnover=Turnover
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OpenInterest', 'LastPrice', 'Volume', 'Turnover']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OpenInterest', u'持仓量'),('LastPrice', u'最新价'),('Volume', u'数量'),('Turnover', u'成交金额')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryEWarrantOffsetField:
    def __init__(self, InvestorID="", BrokerID="", InstrumentID="", ExchangeID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.InstrumentID=tou(InstrumentID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'InstrumentID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcParkedOrderActionField:
    def __init__(self, RequestID=0, BrokerID="", SessionID=0, OrderSysID="", OrderRef="", UserType='0', UserID="", FrontID=0, LimitPrice=0, ErrorID=0, ErrorMsg="", ParkedOrderActionID="", ActionFlag='0', OrderActionRef=0, VolumeChange=0, InvestorID="", InstrumentID="", ExchangeID="", Status='1'):
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.SessionID=SessionID
        self.OrderSysID=tou(OrderSysID)
        self.OrderRef=tou(OrderRef)
        self.UserType=tou(UserType)
        self.UserID=tou(UserID)
        self.FrontID=FrontID
        self.LimitPrice=LimitPrice
        self.ErrorID=ErrorID
        self.ErrorMsg=tou(ErrorMsg)
        self.ParkedOrderActionID=tou(ParkedOrderActionID)
        self.ActionFlag=tou(ActionFlag)
        self.OrderActionRef=OrderActionRef
        self.VolumeChange=VolumeChange
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.ExchangeID=tou(ExchangeID)
        self.Status=tou(Status)
        self.vcmap={'UserType': {"'1'": '操作员', "'2'": '管理员', "'0'": '投资者'}, 'ActionFlag': {"'0'": '删除', "'3'": '修改'}, 'Status': {"'1'": '未发送', "'2'": '已发送', "'3'": '已删除'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['RequestID', 'BrokerID', 'SessionID', 'OrderSysID', 'OrderRef', 'UserType', 'UserID', 'FrontID', 'LimitPrice', 'ErrorID', 'ErrorMsg', 'ParkedOrderActionID', 'ActionFlag', 'OrderActionRef', 'VolumeChange', 'InvestorID', 'InstrumentID', 'ExchangeID', 'Status']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('RequestID', u'请求编号'),('BrokerID', u'经纪公司代码'),('SessionID', u'会话编号'),('OrderSysID', u'报单编号'),('OrderRef', u'报单引用'),('UserType', u'用户类型'),('UserID', u'用户代码'),('FrontID', u'前置编号'),('LimitPrice', u'价格'),('ErrorID', u'错误代码'),('ErrorMsg', u'错误信息'),('ParkedOrderActionID', u'预埋撤单单编号'),('ActionFlag', u'操作标志'),('OrderActionRef', u'报单操作引用'),('VolumeChange', u'数量变化'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('Status', u'预埋撤单状态')]])
    def getval(self, n):
        if n in ['UserType', 'ActionFlag', 'Status']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryBrokerUserFunctionField:
    def __init__(self, BrokerID="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcCancelAccountField:
    def __init__(self, ZipCode="", TradeDate="", Address="", Telephone="", MoneyAccountStatus='0', ErrorMsg="", ErrorID=0, BankBranchID="", SecuPwdFlag='0', BrokerID="", BankAccType='1', PlateSerial=0, AccountID="", DeviceID="", InstallID=0, BankSecuAccType='1', CurrencyID="", Digest="", BankAccount="", TradingDay="", BrokerBranchID="", BankPassWord="", IdentifiedCardNo="", IdCardType='0', UserID="", BankSerial="", SessionID=0, Fax="", TradeCode="", Password="", CountryCode="", OperNo="", BankPwdFlag='0', Gender='0', BankID="", BankSecuAcc="", EMail="", CustType='0', BrokerIDByBank="", TID=0, MobilePhone="", CashExchangeCode='1', CustomerName="", TradeTime="", LastFragment='0', VerifyCertNoFlag='0'):
        self.ZipCode=tou(ZipCode)
        self.TradeDate=tou(TradeDate)
        self.Address=tou(Address)
        self.Telephone=tou(Telephone)
        self.MoneyAccountStatus=tou(MoneyAccountStatus)
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.BankBranchID=tou(BankBranchID)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.BrokerID=tou(BrokerID)
        self.BankAccType=tou(BankAccType)
        self.PlateSerial=PlateSerial
        self.AccountID=tou(AccountID)
        self.DeviceID=tou(DeviceID)
        self.InstallID=InstallID
        self.BankSecuAccType=tou(BankSecuAccType)
        self.CurrencyID=tou(CurrencyID)
        self.Digest=tou(Digest)
        self.BankAccount=tou(BankAccount)
        self.TradingDay=tou(TradingDay)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.Fax=tou(Fax)
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.CountryCode=tou(CountryCode)
        self.OperNo=tou(OperNo)
        self.BankPwdFlag=tou(BankPwdFlag)
        self.Gender=tou(Gender)
        self.BankID=tou(BankID)
        self.BankSecuAcc=tou(BankSecuAcc)
        self.EMail=tou(EMail)
        self.CustType=tou(CustType)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.TID=TID
        self.MobilePhone=tou(MobilePhone)
        self.CashExchangeCode=tou(CashExchangeCode)
        self.CustomerName=tou(CustomerName)
        self.TradeTime=tou(TradeTime)
        self.LastFragment=tou(LastFragment)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.vcmap={'MoneyAccountStatus': {"'1'": '销户', "'0'": '正常'}, 'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'CashExchangeCode': {"'1'": '汇', "'2'": '钞'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'Gender': {"'1'": '男', "'2'": '女', "'0'": '未知状态'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}, 'BankSecuAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ZipCode', 'TradeDate', 'Address', 'Telephone', 'MoneyAccountStatus', 'ErrorMsg', 'ErrorID', 'BankBranchID', 'SecuPwdFlag', 'BrokerID', 'BankAccType', 'PlateSerial', 'AccountID', 'DeviceID', 'InstallID', 'BankSecuAccType', 'CurrencyID', 'Digest', 'BankAccount', 'TradingDay', 'BrokerBranchID', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'UserID', 'BankSerial', 'SessionID', 'Fax', 'TradeCode', 'Password', 'CountryCode', 'OperNo', 'BankPwdFlag', 'Gender', 'BankID', 'BankSecuAcc', 'EMail', 'CustType', 'BrokerIDByBank', 'TID', 'MobilePhone', 'CashExchangeCode', 'CustomerName', 'TradeTime', 'LastFragment', 'VerifyCertNoFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ZipCode', u'邮编'),('TradeDate', u'交易日期'),('Address', u'地址'),('Telephone', u'电话号码'),('MoneyAccountStatus', u'资金账户状态'),('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码'),('BankBranchID', u'银行分支机构代码'),('SecuPwdFlag', u'期货资金密码核对标志'),('BrokerID', u'期商代码'),('BankAccType', u'银行帐号类型'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号'),('DeviceID', u'渠道标志'),('InstallID', u'安装编号'),('BankSecuAccType', u'期货单位帐号类型'),('CurrencyID', u'币种代码'),('Digest', u'摘要'),('BankAccount', u'银行帐号'),('TradingDay', u'交易系统日期'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('Fax', u'传真'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('CountryCode', u'国家代码'),('OperNo', u'交易柜员'),('BankPwdFlag', u'银行密码标志'),('Gender', u'性别'),('BankID', u'银行代码'),('BankSecuAcc', u'期货单位帐号'),('EMail', u'电子邮件'),('CustType', u'客户类型'),('BrokerIDByBank', u'期货公司银行编码'),('TID', u'交易ID'),('MobilePhone', u'手机'),('CashExchangeCode', u'汇钞标志'),('CustomerName', u'客户姓名'),('TradeTime', u'交易时间'),('LastFragment', u'最后分片标志'),('VerifyCertNoFlag', u'验证客户证件号码标志')]])
    def getval(self, n):
        if n in ['MoneyAccountStatus', 'SecuPwdFlag', 'BankAccType', 'BankSecuAccType', 'IdCardType', 'BankPwdFlag', 'Gender', 'CustType', 'CashExchangeCode', 'LastFragment', 'VerifyCertNoFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcLoginInfoField:
    def __init__(self, FrontID=0, BrokerID="", INETime="", CZCETime="", FFEXTime="", ProtocolInfo="", UserProductInfo="", UserID="", LoginTime="", SystemName="", OneTimePassword="", SessionID=0, DCETime="", SHFETime="", IPAddress="", InterfaceProductInfo="", Password="", LoginDate="", MacAddress="", MaxOrderRef=""):
        self.FrontID=FrontID
        self.BrokerID=tou(BrokerID)
        self.INETime=tou(INETime)
        self.CZCETime=tou(CZCETime)
        self.FFEXTime=tou(FFEXTime)
        self.ProtocolInfo=tou(ProtocolInfo)
        self.UserProductInfo=tou(UserProductInfo)
        self.UserID=tou(UserID)
        self.LoginTime=tou(LoginTime)
        self.SystemName=tou(SystemName)
        self.OneTimePassword=tou(OneTimePassword)
        self.SessionID=SessionID
        self.DCETime=tou(DCETime)
        self.SHFETime=tou(SHFETime)
        self.IPAddress=tou(IPAddress)
        self.InterfaceProductInfo=tou(InterfaceProductInfo)
        self.Password=tou(Password)
        self.LoginDate=tou(LoginDate)
        self.MacAddress=tou(MacAddress)
        self.MaxOrderRef=tou(MaxOrderRef)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'BrokerID', 'INETime', 'CZCETime', 'FFEXTime', 'ProtocolInfo', 'UserProductInfo', 'UserID', 'LoginTime', 'SystemName', 'OneTimePassword', 'SessionID', 'DCETime', 'SHFETime', 'IPAddress', 'InterfaceProductInfo', 'Password', 'LoginDate', 'MacAddress', 'MaxOrderRef']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('BrokerID', u'经纪公司代码'),('INETime', u'能源中心时间'),('CZCETime', u'郑商所时间'),('FFEXTime', u'中金所时间'),('ProtocolInfo', u'协议信息'),('UserProductInfo', u'用户端产品信息'),('UserID', u'用户代码'),('LoginTime', u'登录时间'),('SystemName', u'系统名称'),('OneTimePassword', u'动态密码'),('SessionID', u'会话编号'),('DCETime', u'大商所时间'),('SHFETime', u'上期所时间'),('IPAddress', u'IP地址'),('InterfaceProductInfo', u'接口端产品信息'),('Password', u'密码'),('LoginDate', u'登录日期'),('MacAddress', u'Mac地址'),('MaxOrderRef', u'最大报单引用')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryTradingCodeField:
    def __init__(self, InvestorID="", BrokerID="", ClientID="", ClientIDType='1', ExchangeID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.ClientID=tou(ClientID)
        self.ClientIDType=tou(ClientIDType)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={'ClientIDType': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ClientID', 'ClientIDType', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ClientID', u'客户代码'),('ClientIDType', u'交易编码类型'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in ['ClientIDType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcCurrTransferIdentityField:
    def __init__(self, IdentityID=0):
        self.IdentityID=IdentityID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['IdentityID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('IdentityID', u'交易中心代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcExchangeMarginRateAdjustField:
    def __init__(self, ExchLongMarginRatioByVolume=0, BrokerID="", NoLongMarginRatioByMoney=0, NoLongMarginRatioByVolume=0, ShortMarginRatioByVolume=0, NoShortMarginRatioByVolume=0, ExchLongMarginRatioByMoney=0, ShortMarginRatioByMoney=0, LongMarginRatioByMoney=0, ExchShortMarginRatioByMoney=0, HedgeFlag='1', LongMarginRatioByVolume=0, InstrumentID="", ExchShortMarginRatioByVolume=0, NoShortMarginRatioByMoney=0):
        self.ExchLongMarginRatioByVolume=ExchLongMarginRatioByVolume
        self.BrokerID=tou(BrokerID)
        self.NoLongMarginRatioByMoney=NoLongMarginRatioByMoney
        self.NoLongMarginRatioByVolume=NoLongMarginRatioByVolume
        self.ShortMarginRatioByVolume=ShortMarginRatioByVolume
        self.NoShortMarginRatioByVolume=NoShortMarginRatioByVolume
        self.ExchLongMarginRatioByMoney=ExchLongMarginRatioByMoney
        self.ShortMarginRatioByMoney=ShortMarginRatioByMoney
        self.LongMarginRatioByMoney=LongMarginRatioByMoney
        self.ExchShortMarginRatioByMoney=ExchShortMarginRatioByMoney
        self.HedgeFlag=tou(HedgeFlag)
        self.LongMarginRatioByVolume=LongMarginRatioByVolume
        self.InstrumentID=tou(InstrumentID)
        self.ExchShortMarginRatioByVolume=ExchShortMarginRatioByVolume
        self.NoShortMarginRatioByMoney=NoShortMarginRatioByMoney
        self.vcmap={'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchLongMarginRatioByVolume', 'BrokerID', 'NoLongMarginRatioByMoney', 'NoLongMarginRatioByVolume', 'ShortMarginRatioByVolume', 'NoShortMarginRatioByVolume', 'ExchLongMarginRatioByMoney', 'ShortMarginRatioByMoney', 'LongMarginRatioByMoney', 'ExchShortMarginRatioByMoney', 'HedgeFlag', 'LongMarginRatioByVolume', 'InstrumentID', 'ExchShortMarginRatioByVolume', 'NoShortMarginRatioByMoney']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchLongMarginRatioByVolume', u'交易所多头保证金费'),('BrokerID', u'经纪公司代码'),('NoLongMarginRatioByMoney', u'不跟随交易所投资者多头保证金率'),('NoLongMarginRatioByVolume', u'不跟随交易所投资者多头保证金费'),('ShortMarginRatioByVolume', u'跟随交易所投资者空头保证金费'),('NoShortMarginRatioByVolume', u'不跟随交易所投资者空头保证金费'),('ExchLongMarginRatioByMoney', u'交易所多头保证金率'),('ShortMarginRatioByMoney', u'跟随交易所投资者空头保证金率'),('LongMarginRatioByMoney', u'跟随交易所投资者多头保证金率'),('ExchShortMarginRatioByMoney', u'交易所空头保证金率'),('HedgeFlag', u'投机套保标志'),('LongMarginRatioByVolume', u'跟随交易所投资者多头保证金费'),('InstrumentID', u'合约代码'),('ExchShortMarginRatioByVolume', u'交易所空头保证金费'),('NoShortMarginRatioByMoney', u'不跟随交易所投资者空头保证金率')]])
    def getval(self, n):
        if n in ['HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMDTraderOfferField:
    def __init__(self, TradingDay="", BrokerID="", StartDate="", TraderID="", OrderLocalID="", InstallID=0, ConnectTime="", ExchangeID="", ConnectDate="", ConnectRequestDate="", ParticipantID="", LastReportTime="", StartTime="", MaxTradeID="", LastReportDate="", Password="", MaxOrderMessageReference="", ConnectRequestTime="", TraderConnectStatus='1'):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.StartDate=tou(StartDate)
        self.TraderID=tou(TraderID)
        self.OrderLocalID=tou(OrderLocalID)
        self.InstallID=InstallID
        self.ConnectTime=tou(ConnectTime)
        self.ExchangeID=tou(ExchangeID)
        self.ConnectDate=tou(ConnectDate)
        self.ConnectRequestDate=tou(ConnectRequestDate)
        self.ParticipantID=tou(ParticipantID)
        self.LastReportTime=tou(LastReportTime)
        self.StartTime=tou(StartTime)
        self.MaxTradeID=tou(MaxTradeID)
        self.LastReportDate=tou(LastReportDate)
        self.Password=tou(Password)
        self.MaxOrderMessageReference=tou(MaxOrderMessageReference)
        self.ConnectRequestTime=tou(ConnectRequestTime)
        self.TraderConnectStatus=tou(TraderConnectStatus)
        self.vcmap={'TraderConnectStatus': {"'1'": '没有任何连接', "'4'": '订阅私有流', "'2'": '已经连接', "'3'": '已经发出合约查询请求'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'StartDate', 'TraderID', 'OrderLocalID', 'InstallID', 'ConnectTime', 'ExchangeID', 'ConnectDate', 'ConnectRequestDate', 'ParticipantID', 'LastReportTime', 'StartTime', 'MaxTradeID', 'LastReportDate', 'Password', 'MaxOrderMessageReference', 'ConnectRequestTime', 'TraderConnectStatus']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码'),('StartDate', u'启动日期'),('TraderID', u'交易所交易员代码'),('OrderLocalID', u'本地报单编号'),('InstallID', u'安装编号'),('ConnectTime', u'完成连接时间'),('ExchangeID', u'交易所代码'),('ConnectDate', u'完成连接日期'),('ConnectRequestDate', u'发出连接请求的日期'),('ParticipantID', u'会员代码'),('LastReportTime', u'上次报告时间'),('StartTime', u'启动时间'),('MaxTradeID', u'本席位最大成交编号'),('LastReportDate', u'上次报告日期'),('Password', u'密码'),('MaxOrderMessageReference', u'本席位最大报单备拷'),('ConnectRequestTime', u'发出连接请求的时间'),('TraderConnectStatus', u'交易所交易员连接状态')]])
    def getval(self, n):
        if n in ['TraderConnectStatus']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcParkedOrderField:
    def __init__(self, Status='1', UserForceClose=0, UserType='0', UserID="", ErrorMsg="", Direction='0', ExchangeID="", GTDDate="", ErrorID=0, CombHedgeFlag="", StopPrice=0, BusinessUnit="", InstrumentID="", ParkedOrderID="", VolumeCondition='1', MinVolume=0, RequestID=0, BrokerID="", IsSwapOrder=0, OrderPriceType='1', LimitPrice=0, ContingentCondition='1', TimeCondition='1', OrderRef="", IsAutoSuspend=0, InvestorID="", VolumeTotalOriginal=0, ForceCloseReason='0', CombOffsetFlag=""):
        self.Status=tou(Status)
        self.UserForceClose=UserForceClose
        self.UserType=tou(UserType)
        self.UserID=tou(UserID)
        self.ErrorMsg=tou(ErrorMsg)
        self.Direction=tou(Direction)
        self.ExchangeID=tou(ExchangeID)
        self.GTDDate=tou(GTDDate)
        self.ErrorID=ErrorID
        self.CombHedgeFlag=tou(CombHedgeFlag)
        self.StopPrice=StopPrice
        self.BusinessUnit=tou(BusinessUnit)
        self.InstrumentID=tou(InstrumentID)
        self.ParkedOrderID=tou(ParkedOrderID)
        self.VolumeCondition=tou(VolumeCondition)
        self.MinVolume=MinVolume
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.IsSwapOrder=IsSwapOrder
        self.OrderPriceType=tou(OrderPriceType)
        self.LimitPrice=LimitPrice
        self.ContingentCondition=tou(ContingentCondition)
        self.TimeCondition=tou(TimeCondition)
        self.OrderRef=tou(OrderRef)
        self.IsAutoSuspend=IsAutoSuspend
        self.InvestorID=tou(InvestorID)
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ForceCloseReason=tou(ForceCloseReason)
        self.CombOffsetFlag=tou(CombOffsetFlag)
        self.vcmap={'OrderPriceType': {"'F'": '买一价浮动上浮3个ticks', "'9'": '卖一价浮动上浮1个ticks', "'A'": '卖一价浮动上浮2个ticks', "'4'": '最新价', "'B'": '卖一价浮动上浮3个ticks', "'5'": '最新价浮动上浮1个ticks', "'C'": '买一价', "'6'": '最新价浮动上浮2个ticks', "'7'": '最新价浮动上浮3个ticks', "'1'": '任意价', "'D'": '买一价浮动上浮1个ticks', "'2'": '限价', "'E'": '买一价浮动上浮2个ticks', "'8'": '卖一价', "'3'": '最优价'}, 'VolumeCondition': {"'1'": '任何数量', "'2'": '最小数量', "'3'": '全部数量'}, 'ContingentCondition': {"'F'": '买一价小于条件价', "'9'": '卖一价大于条件价', "'A'": '卖一价大于等于条件价', "'4'": '预埋单', "'B'": '卖一价小于条件价', "'5'": '最新价大于条件价', "'H'": '买一价小于等于条件价', "'C'": '卖一价小于等于条件价', "'6'": '最新价大于等于条件价', "'7'": '最新价小于条件价', "'1'": '立即', "'D'": '买一价大于条件价', "'2'": '止损', "'E'": '买一价大于等于条件价', "'8'": '最新价小于等于条件价', "'3'": '止赢'}, 'Status': {"'1'": '未发送', "'2'": '已发送', "'3'": '已删除'}, 'UserType': {"'1'": '操作员', "'2'": '管理员', "'0'": '投资者'}, 'Direction': {"'1'": '卖', "'0'": '买'}, 'ForceCloseReason': {"'6'": '其它', "'7'": '自然人临近交割', "'0'": '非强平', "'1'": '资金不足', "'4'": '持仓非整数倍', "'2'": '客户超仓', "'5'": '违规', "'3'": '会员超仓'}, 'TimeCondition': {"'6'": '集合竞价有效', "'1'": '立即完成，否则撤销', "'4'": '指定日期前有效', "'2'": '本节有效', "'5'": '撤销前有效', "'3'": '当日有效'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['Status', 'UserForceClose', 'UserType', 'UserID', 'ErrorMsg', 'Direction', 'ExchangeID', 'GTDDate', 'ErrorID', 'CombHedgeFlag', 'StopPrice', 'BusinessUnit', 'InstrumentID', 'ParkedOrderID', 'VolumeCondition', 'MinVolume', 'RequestID', 'BrokerID', 'IsSwapOrder', 'OrderPriceType', 'LimitPrice', 'ContingentCondition', 'TimeCondition', 'OrderRef', 'IsAutoSuspend', 'InvestorID', 'VolumeTotalOriginal', 'ForceCloseReason', 'CombOffsetFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('Status', u'预埋单状态'),('UserForceClose', u'用户强评标志'),('UserType', u'用户类型'),('UserID', u'用户代码'),('ErrorMsg', u'错误信息'),('Direction', u'买卖方向'),('ExchangeID', u'交易所代码'),('GTDDate', u'GTD日期'),('ErrorID', u'错误代码'),('CombHedgeFlag', u'组合投机套保标志'),('StopPrice', u'止损价'),('BusinessUnit', u'业务单元'),('InstrumentID', u'合约代码'),('ParkedOrderID', u'预埋报单编号'),('VolumeCondition', u'成交量类型'),('MinVolume', u'最小成交量'),('RequestID', u'请求编号'),('BrokerID', u'经纪公司代码'),('IsSwapOrder', u'互换单标志'),('OrderPriceType', u'报单价格条件'),('LimitPrice', u'价格'),('ContingentCondition', u'触发条件'),('TimeCondition', u'有效期类型'),('OrderRef', u'报单引用'),('IsAutoSuspend', u'自动挂起标志'),('InvestorID', u'投资者代码'),('VolumeTotalOriginal', u'数量'),('ForceCloseReason', u'强平原因'),('CombOffsetFlag', u'组合开平标志')]])
    def getval(self, n):
        if n in ['Status', 'UserType', 'Direction', 'VolumeCondition', 'OrderPriceType', 'ContingentCondition', 'TimeCondition', 'ForceCloseReason']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcCurrentTimeField:
    def __init__(self, ActionDay="", CurrDate="", CurrTime="", CurrMillisec=0):
        self.ActionDay=tou(ActionDay)
        self.CurrDate=tou(CurrDate)
        self.CurrTime=tou(CurrTime)
        self.CurrMillisec=CurrMillisec
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ActionDay', 'CurrDate', 'CurrTime', 'CurrMillisec']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ActionDay', u'业务日期'),('CurrDate', u'当前日期'),('CurrTime', u'当前时间'),('CurrMillisec', u'当前时间（毫秒）')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTransferQryBankReqField:
    def __init__(self, FutureAccPwd="", FutureAccount="", CurrencyCode="", FuturePwdFlag='0'):
        self.FutureAccPwd=tou(FutureAccPwd)
        self.FutureAccount=tou(FutureAccount)
        self.CurrencyCode=tou(CurrencyCode)
        self.FuturePwdFlag=tou(FuturePwdFlag)
        self.vcmap={'FuturePwdFlag': {"'1'": '核对', "'0'": '不核对'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FutureAccPwd', 'FutureAccount', 'CurrencyCode', 'FuturePwdFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FutureAccPwd', u'密码'),('FutureAccount', u'期货资金账户'),('CurrencyCode', u'币种：RMB-人民币 USD-美圆 HKD-港元'),('FuturePwdFlag', u'密码标志')]])
    def getval(self, n):
        if n in ['FuturePwdFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryTransferSerialField:
    def __init__(self, BrokerID="", BankID="", AccountID="", CurrencyID=""):
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.AccountID=tou(AccountID)
        self.CurrencyID=tou(CurrencyID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'BankID', 'AccountID', 'CurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('BankID', u'银行编码'),('AccountID', u'投资者帐号'),('CurrencyID', u'币种代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcDepositResultInformField:
    def __init__(self, RequestID=0, BrokerID="", DescrInfoForReturnCode="", DepositSeqNo="", Deposit=0, ReturnCode="", InvestorID=""):
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.DescrInfoForReturnCode=tou(DescrInfoForReturnCode)
        self.DepositSeqNo=tou(DepositSeqNo)
        self.Deposit=Deposit
        self.ReturnCode=tou(ReturnCode)
        self.InvestorID=tou(InvestorID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['RequestID', 'BrokerID', 'DescrInfoForReturnCode', 'DepositSeqNo', 'Deposit', 'ReturnCode', 'InvestorID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('RequestID', u'请求编号'),('BrokerID', u'经纪公司代码'),('DescrInfoForReturnCode', u'返回码描述'),('DepositSeqNo', u'出入金流水号，该流水号为银期报盘返回的流水号'),('Deposit', u'入金金额'),('ReturnCode', u'返回代码'),('InvestorID', u'投资者代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTradingCodeField:
    def __init__(self, BrokerID="", ClientID="", IsActive=0, InvestorID="", ClientIDType='1', ExchangeID=""):
        self.BrokerID=tou(BrokerID)
        self.ClientID=tou(ClientID)
        self.IsActive=IsActive
        self.InvestorID=tou(InvestorID)
        self.ClientIDType=tou(ClientIDType)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={'ClientIDType': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'ClientID', 'IsActive', 'InvestorID', 'ClientIDType', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('ClientID', u'客户代码'),('IsActive', u'是否活跃'),('InvestorID', u'投资者代码'),('ClientIDType', u'交易编码类型'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in ['ClientIDType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataExchangeField:
    def __init__(self, ExchangeID=""):
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryLoginForbiddenUserField:
    def __init__(self, BrokerID="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcPositionProfitAlgorithmField:
    def __init__(self, BrokerID="", Memo="", Algorithm='1', AccountID="", CurrencyID=""):
        self.BrokerID=tou(BrokerID)
        self.Memo=tou(Memo)
        self.Algorithm=tou(Algorithm)
        self.AccountID=tou(AccountID)
        self.CurrencyID=tou(CurrencyID)
        self.vcmap={'Algorithm': {"'1'": '浮盈浮亏都计算', "'4'": '浮盈浮亏都不计算', "'2'": '浮盈不计，浮亏计', "'3'": '浮盈计，浮亏不计'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'Memo', 'Algorithm', 'AccountID', 'CurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('Memo', u'备注'),('Algorithm', u'盈亏算法'),('AccountID', u'投资者帐号'),('CurrencyID', u'币种代码')]])
    def getval(self, n):
        if n in ['Algorithm']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqQueryTradeResultBySerialField:
    def __init__(self, TradingDay="", TradeDate="", Reference=0, BankPassWord="", IdentifiedCardNo="", IdCardType='0', BankSerial="", SessionID=0, CurrencyID="", BankBranchID="", TradeCode="", RefrenceIssureType='0', Password="", BrokerBranchID="", BrokerID="", BankID="", PlateSerial=0, AccountID="", CustomerName="", RefrenceIssure="", CustType='0', BankAccount="", TradeAmount=0, LastFragment='0', Digest="", TradeTime=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.Reference=Reference
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.CurrencyID=tou(CurrencyID)
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.RefrenceIssureType=tou(RefrenceIssureType)
        self.Password=tou(Password)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.PlateSerial=PlateSerial
        self.AccountID=tou(AccountID)
        self.CustomerName=tou(CustomerName)
        self.RefrenceIssure=tou(RefrenceIssure)
        self.CustType=tou(CustType)
        self.BankAccount=tou(BankAccount)
        self.TradeAmount=TradeAmount
        self.LastFragment=tou(LastFragment)
        self.Digest=tou(Digest)
        self.TradeTime=tou(TradeTime)
        self.vcmap={'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'RefrenceIssureType': {"'1'": '期商', "'2'": '券商', "'0'": '银行'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'Reference', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'BankSerial', 'SessionID', 'CurrencyID', 'BankBranchID', 'TradeCode', 'RefrenceIssureType', 'Password', 'BrokerBranchID', 'BrokerID', 'BankID', 'PlateSerial', 'AccountID', 'CustomerName', 'RefrenceIssure', 'CustType', 'BankAccount', 'TradeAmount', 'LastFragment', 'Digest', 'TradeTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('TradeDate', u'交易日期'),('Reference', u'流水号'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('CurrencyID', u'币种代码'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('RefrenceIssureType', u'本流水号发布者的机构类型'),('Password', u'期货密码'),('BrokerBranchID', u'期商分支机构代码'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号'),('CustomerName', u'客户姓名'),('RefrenceIssure', u'本流水号发布者机构编码'),('CustType', u'客户类型'),('BankAccount', u'银行帐号'),('TradeAmount', u'转帐金额'),('LastFragment', u'最后分片标志'),('Digest', u'摘要'),('TradeTime', u'交易时间')]])
    def getval(self, n):
        if n in ['IdCardType', 'RefrenceIssureType', 'CustType', 'LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTradingAccountField:
    def __init__(self, SpecProductPositionProfit=0, AccountID="", Credit=0, SpecProductPositionProfitByAlg=0, InterestBase=0, PreMargin=0, BrokerID="", FrozenCommission=0, DeliveryMargin=0, ExchangeDeliveryMargin=0, Mortgage=0, Commission=0, CurrMargin=0, ExchangeMargin=0, Interest=0, PreDeposit=0, Balance=0, SpecProductExchangeMargin=0, FundMortgageAvailable=0, CurrencyID="", FundMortgageOut=0, TradingDay="", Withdraw=0, CloseProfit=0, PreFundMortgageOut=0, Available=0, PreBalance=0, SpecProductMargin=0, MortgageableFund=0, FrozenMargin=0, Deposit=0, SettlementID=0, PositionProfit=0, PreFundMortgageIn=0, SpecProductFrozenCommission=0, CashIn=0, FrozenCash=0, SpecProductFrozenMargin=0, FundMortgageIn=0, WithdrawQuota=0, ReserveBalance=0, PreCredit=0, Reserve=0, SpecProductCommission=0, PreMortgage=0, SpecProductCloseProfit=0):
        self.SpecProductPositionProfit=SpecProductPositionProfit
        self.AccountID=tou(AccountID)
        self.Credit=Credit
        self.SpecProductPositionProfitByAlg=SpecProductPositionProfitByAlg
        self.InterestBase=InterestBase
        self.PreMargin=PreMargin
        self.BrokerID=tou(BrokerID)
        self.FrozenCommission=FrozenCommission
        self.DeliveryMargin=DeliveryMargin
        self.ExchangeDeliveryMargin=ExchangeDeliveryMargin
        self.Mortgage=Mortgage
        self.Commission=Commission
        self.CurrMargin=CurrMargin
        self.ExchangeMargin=ExchangeMargin
        self.Interest=Interest
        self.PreDeposit=PreDeposit
        self.Balance=Balance
        self.SpecProductExchangeMargin=SpecProductExchangeMargin
        self.FundMortgageAvailable=FundMortgageAvailable
        self.CurrencyID=tou(CurrencyID)
        self.FundMortgageOut=FundMortgageOut
        self.TradingDay=tou(TradingDay)
        self.Withdraw=Withdraw
        self.CloseProfit=CloseProfit
        self.PreFundMortgageOut=PreFundMortgageOut
        self.Available=Available
        self.PreBalance=PreBalance
        self.SpecProductMargin=SpecProductMargin
        self.MortgageableFund=MortgageableFund
        self.FrozenMargin=FrozenMargin
        self.Deposit=Deposit
        self.SettlementID=SettlementID
        self.PositionProfit=PositionProfit
        self.PreFundMortgageIn=PreFundMortgageIn
        self.SpecProductFrozenCommission=SpecProductFrozenCommission
        self.CashIn=CashIn
        self.FrozenCash=FrozenCash
        self.SpecProductFrozenMargin=SpecProductFrozenMargin
        self.FundMortgageIn=FundMortgageIn
        self.WithdrawQuota=WithdrawQuota
        self.ReserveBalance=ReserveBalance
        self.PreCredit=PreCredit
        self.Reserve=Reserve
        self.SpecProductCommission=SpecProductCommission
        self.PreMortgage=PreMortgage
        self.SpecProductCloseProfit=SpecProductCloseProfit
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['SpecProductPositionProfit', 'AccountID', 'Credit', 'SpecProductPositionProfitByAlg', 'InterestBase', 'PreMargin', 'BrokerID', 'FrozenCommission', 'DeliveryMargin', 'ExchangeDeliveryMargin', 'Mortgage', 'Commission', 'CurrMargin', 'ExchangeMargin', 'Interest', 'PreDeposit', 'Balance', 'SpecProductExchangeMargin', 'FundMortgageAvailable', 'CurrencyID', 'FundMortgageOut', 'TradingDay', 'Withdraw', 'CloseProfit', 'PreFundMortgageOut', 'Available', 'PreBalance', 'SpecProductMargin', 'MortgageableFund', 'FrozenMargin', 'Deposit', 'SettlementID', 'PositionProfit', 'PreFundMortgageIn', 'SpecProductFrozenCommission', 'CashIn', 'FrozenCash', 'SpecProductFrozenMargin', 'FundMortgageIn', 'WithdrawQuota', 'ReserveBalance', 'PreCredit', 'Reserve', 'SpecProductCommission', 'PreMortgage', 'SpecProductCloseProfit']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('SpecProductPositionProfit', u'特殊产品持仓盈亏'),('AccountID', u'投资者帐号'),('Credit', u'信用额度'),('SpecProductPositionProfitByAlg', u'根据持仓盈亏算法计算的特殊产品持仓盈亏'),('InterestBase', u'利息基数'),('PreMargin', u'上次占用的保证金'),('BrokerID', u'经纪公司代码'),('FrozenCommission', u'冻结的手续费'),('DeliveryMargin', u'投资者交割保证金'),('ExchangeDeliveryMargin', u'交易所交割保证金'),('Mortgage', u'质押金额'),('Commission', u'手续费'),('CurrMargin', u'当前保证金总额'),('ExchangeMargin', u'交易所保证金'),('Interest', u'利息收入'),('PreDeposit', u'上次存款额'),('Balance', u'期货结算准备金'),('SpecProductExchangeMargin', u'特殊产品交易所保证金'),('FundMortgageAvailable', u'货币质押余额'),('CurrencyID', u'币种代码'),('FundMortgageOut', u'货币质出金额'),('TradingDay', u'交易日'),('Withdraw', u'出金金额'),('CloseProfit', u'平仓盈亏'),('PreFundMortgageOut', u'上次货币质出金额'),('Available', u'可用资金'),('PreBalance', u'上次结算准备金'),('SpecProductMargin', u'特殊产品占用保证金'),('MortgageableFund', u'可质押货币金额'),('FrozenMargin', u'冻结的保证金'),('Deposit', u'入金金额'),('SettlementID', u'结算编号'),('PositionProfit', u'持仓盈亏'),('PreFundMortgageIn', u'上次货币质入金额'),('SpecProductFrozenCommission', u'特殊产品冻结手续费'),('CashIn', u'资金差额'),('FrozenCash', u'冻结的资金'),('SpecProductFrozenMargin', u'特殊产品冻结保证金'),('FundMortgageIn', u'货币质入金额'),('WithdrawQuota', u'可取资金'),('ReserveBalance', u'保底期货结算准备金'),('PreCredit', u'上次信用额度'),('Reserve', u'基本准备金'),('SpecProductCommission', u'特殊产品手续费'),('PreMortgage', u'上次质押金额'),('SpecProductCloseProfit', u'特殊产品平仓盈亏')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQrySyncDepositField:
    def __init__(self, BrokerID="", DepositSeqNo=""):
        self.BrokerID=tou(BrokerID)
        self.DepositSeqNo=tou(DepositSeqNo)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'DepositSeqNo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('DepositSeqNo', u'出入金流水号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTransferHeaderField:
    def __init__(self, RequestID=0, BankID="", DeviceID="", FutureID="", TradeDate="", SessionID=0, Version="", TradeTime="", TradeCode="", BankBrchID="", TradeSerial="", RecordNum="", OperNo=""):
        self.RequestID=RequestID
        self.BankID=tou(BankID)
        self.DeviceID=tou(DeviceID)
        self.FutureID=tou(FutureID)
        self.TradeDate=tou(TradeDate)
        self.SessionID=SessionID
        self.Version=tou(Version)
        self.TradeTime=tou(TradeTime)
        self.TradeCode=tou(TradeCode)
        self.BankBrchID=tou(BankBrchID)
        self.TradeSerial=tou(TradeSerial)
        self.RecordNum=tou(RecordNum)
        self.OperNo=tou(OperNo)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['RequestID', 'BankID', 'DeviceID', 'FutureID', 'TradeDate', 'SessionID', 'Version', 'TradeTime', 'TradeCode', 'BankBrchID', 'TradeSerial', 'RecordNum', 'OperNo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('RequestID', u'请求编号，N/A'),('BankID', u'银行代码，根据查询银行得到，必填'),('DeviceID', u'交易设备类型，N/A'),('FutureID', u'期货公司代码，必填'),('TradeDate', u'交易日期，必填，格式：yyyymmdd'),('SessionID', u'会话编号，N/A'),('Version', u'版本号，常量，1.0'),('TradeTime', u'交易时间，必填，格式：hhmmss'),('TradeCode', u'交易代码，必填'),('BankBrchID', u'银行分中心代码，根据查询银行得到，必填'),('TradeSerial', u'发起方流水号，N/A'),('RecordNum', u'记录数，N/A'),('OperNo', u'操作员，N/A')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqChangeAccountField:
    def __init__(self, TradingDay="", ZipCode="", TradeDate="", BankPassWord="", IdentifiedCardNo="", IdCardType='0', Telephone="", BankSerial="", Address="", SessionID=0, MoneyAccountStatus='0', EMail="", Fax="", BankPwdFlag='0', CurrencyID="", BankBranchID="", TradeCode="", Password="", CountryCode="", Digest="", BrokerBranchID="", Gender='0', BrokerID="", BankID="", BankAccType='1', PlateSerial=0, AccountID="", CustomerName="", InstallID=0, TID=0, MobilePhone="", NewBankAccount="", CustType='0', NewBankPassWord="", TradeTime="", LastFragment='0', SecuPwdFlag='0', VerifyCertNoFlag='0', BrokerIDByBank="", BankAccount=""):
        self.TradingDay=tou(TradingDay)
        self.ZipCode=tou(ZipCode)
        self.TradeDate=tou(TradeDate)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.Telephone=tou(Telephone)
        self.BankSerial=tou(BankSerial)
        self.Address=tou(Address)
        self.SessionID=SessionID
        self.MoneyAccountStatus=tou(MoneyAccountStatus)
        self.EMail=tou(EMail)
        self.Fax=tou(Fax)
        self.BankPwdFlag=tou(BankPwdFlag)
        self.CurrencyID=tou(CurrencyID)
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.CountryCode=tou(CountryCode)
        self.Digest=tou(Digest)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.Gender=tou(Gender)
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.BankAccType=tou(BankAccType)
        self.PlateSerial=PlateSerial
        self.AccountID=tou(AccountID)
        self.CustomerName=tou(CustomerName)
        self.InstallID=InstallID
        self.TID=TID
        self.MobilePhone=tou(MobilePhone)
        self.NewBankAccount=tou(NewBankAccount)
        self.CustType=tou(CustType)
        self.NewBankPassWord=tou(NewBankPassWord)
        self.TradeTime=tou(TradeTime)
        self.LastFragment=tou(LastFragment)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.BankAccount=tou(BankAccount)
        self.vcmap={'MoneyAccountStatus': {"'1'": '销户', "'0'": '正常'}, 'Gender': {"'1'": '男', "'2'": '女', "'0'": '未知状态'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'ZipCode', 'TradeDate', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'Telephone', 'BankSerial', 'Address', 'SessionID', 'MoneyAccountStatus', 'EMail', 'Fax', 'BankPwdFlag', 'CurrencyID', 'BankBranchID', 'TradeCode', 'Password', 'CountryCode', 'Digest', 'BrokerBranchID', 'Gender', 'BrokerID', 'BankID', 'BankAccType', 'PlateSerial', 'AccountID', 'CustomerName', 'InstallID', 'TID', 'MobilePhone', 'NewBankAccount', 'CustType', 'NewBankPassWord', 'TradeTime', 'LastFragment', 'SecuPwdFlag', 'VerifyCertNoFlag', 'BrokerIDByBank', 'BankAccount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('ZipCode', u'邮编'),('TradeDate', u'交易日期'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('Telephone', u'电话号码'),('BankSerial', u'银行流水号'),('Address', u'地址'),('SessionID', u'会话号'),('MoneyAccountStatus', u'资金账户状态'),('EMail', u'电子邮件'),('Fax', u'传真'),('BankPwdFlag', u'银行密码标志'),('CurrencyID', u'币种代码'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('CountryCode', u'国家代码'),('Digest', u'摘要'),('BrokerBranchID', u'期商分支机构代码'),('Gender', u'性别'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('BankAccType', u'银行帐号类型'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号'),('CustomerName', u'客户姓名'),('InstallID', u'安装编号'),('TID', u'交易ID'),('MobilePhone', u'手机'),('NewBankAccount', u'新银行帐号'),('CustType', u'客户类型'),('NewBankPassWord', u'新银行密码'),('TradeTime', u'交易时间'),('LastFragment', u'最后分片标志'),('SecuPwdFlag', u'期货资金密码核对标志'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('BrokerIDByBank', u'期货公司银行编码'),('BankAccount', u'银行帐号')]])
    def getval(self, n):
        if n in ['IdCardType', 'MoneyAccountStatus', 'BankPwdFlag', 'Gender', 'BankAccType', 'CustType', 'LastFragment', 'SecuPwdFlag', 'VerifyCertNoFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryExchangeRateField:
    def __init__(self, ToCurrencyID="", BrokerID="", FromCurrencyID=""):
        self.ToCurrencyID=tou(ToCurrencyID)
        self.BrokerID=tou(BrokerID)
        self.FromCurrencyID=tou(FromCurrencyID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ToCurrencyID', 'BrokerID', 'FromCurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ToCurrencyID', u'目标币种'),('BrokerID', u'经纪公司代码'),('FromCurrencyID', u'源币种')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataBid45Field:
    def __init__(self, BidPrice4=0, BidPrice5=0, BidVolume4=0, BidVolume5=0):
        self.BidPrice4=BidPrice4
        self.BidPrice5=BidPrice5
        self.BidVolume4=BidVolume4
        self.BidVolume5=BidVolume5
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidPrice4', 'BidPrice5', 'BidVolume4', 'BidVolume5']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidPrice4', u'申买价四'),('BidPrice5', u'申买价五'),('BidVolume4', u'申买量四'),('BidVolume5', u'申买量五')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInvestorGroupField:
    def __init__(self, InvestorGroupID="", BrokerID="", InvestorGroupName=""):
        self.InvestorGroupID=tou(InvestorGroupID)
        self.BrokerID=tou(BrokerID)
        self.InvestorGroupName=tou(InvestorGroupName)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorGroupID', 'BrokerID', 'InvestorGroupName']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorGroupID', u'投资者分组代码'),('BrokerID', u'经纪公司代码'),('InvestorGroupName', u'投资者分组名称')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryExchangeOrderField:
    def __init__(self, ExchangeID="", ClientID="", ParticipantID="", TraderID="", ExchangeInstID=""):
        self.ExchangeID=tou(ExchangeID)
        self.ClientID=tou(ClientID)
        self.ParticipantID=tou(ParticipantID)
        self.TraderID=tou(TraderID)
        self.ExchangeInstID=tou(ExchangeInstID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'ClientID', 'ParticipantID', 'TraderID', 'ExchangeInstID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('ClientID', u'客户代码'),('ParticipantID', u'会员代码'),('TraderID', u'交易所交易员代码'),('ExchangeInstID', u'合约在交易所的代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTradingAccountReserveField:
    def __init__(self, BrokerID="", Reserve=0, AccountID="", CurrencyID=""):
        self.BrokerID=tou(BrokerID)
        self.Reserve=Reserve
        self.AccountID=tou(AccountID)
        self.CurrencyID=tou(CurrencyID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'Reserve', 'AccountID', 'CurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('Reserve', u'基本准备金'),('AccountID', u'投资者帐号'),('CurrencyID', u'币种代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryExchangeMarginRateField:
    def __init__(self, BrokerID="", HedgeFlag='1', InstrumentID=""):
        self.BrokerID=tou(BrokerID)
        self.HedgeFlag=tou(HedgeFlag)
        self.InstrumentID=tou(InstrumentID)
        self.vcmap={'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'HedgeFlag', 'InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('HedgeFlag', u'投机套保标志'),('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in ['HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqFutureSignOutField:
    def __init__(self, TradingDay="", BrokerID="", BankID="", DeviceID="", PlateSerial=0, UserID="", InstallID=0, RequestID=0, CurrencyID="", TradeDate="", Digest="", BankSerial="", TID=0, TradeTime="", TradeCode="", BankBranchID="", LastFragment='0', SessionID=0, BrokerIDByBank="", OperNo="", BrokerBranchID=""):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.DeviceID=tou(DeviceID)
        self.PlateSerial=PlateSerial
        self.UserID=tou(UserID)
        self.InstallID=InstallID
        self.RequestID=RequestID
        self.CurrencyID=tou(CurrencyID)
        self.TradeDate=tou(TradeDate)
        self.Digest=tou(Digest)
        self.BankSerial=tou(BankSerial)
        self.TID=TID
        self.TradeTime=tou(TradeTime)
        self.TradeCode=tou(TradeCode)
        self.BankBranchID=tou(BankBranchID)
        self.LastFragment=tou(LastFragment)
        self.SessionID=SessionID
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.OperNo=tou(OperNo)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'BankID', 'DeviceID', 'PlateSerial', 'UserID', 'InstallID', 'RequestID', 'CurrencyID', 'TradeDate', 'Digest', 'BankSerial', 'TID', 'TradeTime', 'TradeCode', 'BankBranchID', 'LastFragment', 'SessionID', 'BrokerIDByBank', 'OperNo', 'BrokerBranchID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('DeviceID', u'渠道标志'),('PlateSerial', u'银期平台消息流水号'),('UserID', u'用户标识'),('InstallID', u'安装编号'),('RequestID', u'请求编号'),('CurrencyID', u'币种代码'),('TradeDate', u'交易日期'),('Digest', u'摘要'),('BankSerial', u'银行流水号'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('LastFragment', u'最后分片标志'),('SessionID', u'会话号'),('BrokerIDByBank', u'期货公司银行编码'),('OperNo', u'交易柜员'),('BrokerBranchID', u'期商分支机构代码')]])
    def getval(self, n):
        if n in ['LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcUserRightField:
    def __init__(self, BrokerID="", IsForbidden=0, UserRightType='1', UserID=""):
        self.BrokerID=tou(BrokerID)
        self.IsForbidden=IsForbidden
        self.UserRightType=tou(UserRightType)
        self.UserID=tou(UserID)
        self.vcmap={'UserRightType': {"'1'": '登录', "'4'": '传真结算单', "'2'": '银期转帐', "'5'": '条件单', "'3'": '邮寄结算单'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'IsForbidden', 'UserRightType', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('IsForbidden', u'是否禁止'),('UserRightType', u'客户权限类型'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in ['UserRightType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcForceUserLogoutField:
    def __init__(self, BrokerID="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcDisseminationField:
    def __init__(self, SequenceNo=0, SequenceSeries=0):
        self.SequenceNo=SequenceNo
        self.SequenceSeries=SequenceSeries
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['SequenceNo', 'SequenceSeries']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('SequenceNo', u'序列号'),('SequenceSeries', u'序列系列号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryTraderOfferField:
    def __init__(self, ParticipantID="", TraderID="", ExchangeID=""):
        self.ParticipantID=tou(ParticipantID)
        self.TraderID=tou(TraderID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ParticipantID', 'TraderID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ParticipantID', u'会员代码'),('TraderID', u'交易所交易员代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryUserSessionField:
    def __init__(self, FrontID=0, BrokerID="", UserID="", SessionID=0):
        self.FrontID=FrontID
        self.BrokerID=tou(BrokerID)
        self.UserID=tou(UserID)
        self.SessionID=SessionID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'BrokerID', 'UserID', 'SessionID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('BrokerID', u'经纪公司代码'),('UserID', u'用户代码'),('SessionID', u'会话编号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQrySyncFundMortgageField:
    def __init__(self, BrokerID="", MortgageSeqNo=""):
        self.BrokerID=tou(BrokerID)
        self.MortgageSeqNo=tou(MortgageSeqNo)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'MortgageSeqNo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('MortgageSeqNo', u'货币质押流水号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTransferQryBankRspField:
    def __init__(self, TradeAmt=0, CurrencyCode="", RetInfo="", FetchAmt=0, RetCode="", FutureAccount="", UseAmt=0):
        self.TradeAmt=TradeAmt
        self.CurrencyCode=tou(CurrencyCode)
        self.RetInfo=tou(RetInfo)
        self.FetchAmt=FetchAmt
        self.RetCode=tou(RetCode)
        self.FutureAccount=tou(FutureAccount)
        self.UseAmt=UseAmt
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradeAmt', 'CurrencyCode', 'RetInfo', 'FetchAmt', 'RetCode', 'FutureAccount', 'UseAmt']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradeAmt', u'银行余额'),('CurrencyCode', u'币种'),('RetInfo', u'响应信息'),('FetchAmt', u'银行可取余额'),('RetCode', u'响应代码'),('FutureAccount', u'资金账户'),('UseAmt', u'银行可用余额')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryMDTraderOfferField:
    def __init__(self, ParticipantID="", TraderID="", ExchangeID=""):
        self.ParticipantID=tou(ParticipantID)
        self.TraderID=tou(TraderID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ParticipantID', 'TraderID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ParticipantID', u'会员代码'),('TraderID', u'交易所交易员代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQrySecAgentACIDMapField:
    def __init__(self, BrokerID="", CurrencyID="", AccountID="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.CurrencyID=tou(CurrencyID)
        self.AccountID=tou(AccountID)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'CurrencyID', 'AccountID', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('CurrencyID', u'币种'),('AccountID', u'资金账户'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataAveragePriceField:
    def __init__(self, AveragePrice=0):
        self.AveragePrice=AveragePrice
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['AveragePrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('AveragePrice', u'当日均价')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryInstrumentField:
    def __init__(self, InstrumentID="", ProductID="", ExchangeInstID="", ExchangeID=""):
        self.InstrumentID=tou(InstrumentID)
        self.ProductID=tou(ProductID)
        self.ExchangeInstID=tou(ExchangeInstID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID', 'ProductID', 'ExchangeInstID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码'),('ProductID', u'产品代码'),('ExchangeInstID', u'合约在交易所的代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTransferFutureToBankRspField:
    def __init__(self, TradeAmt=0, CurrencyCode="", RetInfo="", CustFee=0, RetCode="", FutureAccount=""):
        self.TradeAmt=TradeAmt
        self.CurrencyCode=tou(CurrencyCode)
        self.RetInfo=tou(RetInfo)
        self.CustFee=CustFee
        self.RetCode=tou(RetCode)
        self.FutureAccount=tou(FutureAccount)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradeAmt', 'CurrencyCode', 'RetInfo', 'CustFee', 'RetCode', 'FutureAccount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradeAmt', u'转帐金额'),('CurrencyCode', u'币种'),('RetInfo', u'响应信息'),('CustFee', u'应收客户手续费'),('RetCode', u'响应代码'),('FutureAccount', u'资金账户')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryExchangeOrderActionField:
    def __init__(self, ClientID="", ParticipantID="", TraderID="", ExchangeID=""):
        self.ClientID=tou(ClientID)
        self.ParticipantID=tou(ParticipantID)
        self.TraderID=tou(TraderID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ClientID', 'ParticipantID', 'TraderID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ClientID', u'客户代码'),('ParticipantID', u'会员代码'),('TraderID', u'交易所交易员代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcLoadSettlementInfoField:
    def __init__(self, BrokerID=""):
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSyncingInvestorField:
    def __init__(self, InvestorName="", BrokerID="", IdentifiedCardNo="", IdentifiedCardType='0', Telephone="", Address="", MarginModelID="", CommModelID="", Mobile="", IsActive=0, InvestorID="", InvestorGroupID="", OpenDate=""):
        self.InvestorName=tou(InvestorName)
        self.BrokerID=tou(BrokerID)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdentifiedCardType=tou(IdentifiedCardType)
        self.Telephone=tou(Telephone)
        self.Address=tou(Address)
        self.MarginModelID=tou(MarginModelID)
        self.CommModelID=tou(CommModelID)
        self.Mobile=tou(Mobile)
        self.IsActive=IsActive
        self.InvestorID=tou(InvestorID)
        self.InvestorGroupID=tou(InvestorGroupID)
        self.OpenDate=tou(OpenDate)
        self.vcmap={'IdentifiedCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorName', 'BrokerID', 'IdentifiedCardNo', 'IdentifiedCardType', 'Telephone', 'Address', 'MarginModelID', 'CommModelID', 'Mobile', 'IsActive', 'InvestorID', 'InvestorGroupID', 'OpenDate']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorName', u'投资者名称'),('BrokerID', u'经纪公司代码'),('IdentifiedCardNo', u'证件号码'),('IdentifiedCardType', u'证件类型'),('Telephone', u'联系电话'),('Address', u'通讯地址'),('MarginModelID', u'保证金率模板代码'),('CommModelID', u'手续费率模板代码'),('Mobile', u'手机'),('IsActive', u'是否活跃'),('InvestorID', u'投资者代码'),('InvestorGroupID', u'投资者分组代码'),('OpenDate', u'开户日期')]])
    def getval(self, n):
        if n in ['IdentifiedCardType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcOpenAccountField:
    def __init__(self, ZipCode="", TradeDate="", Address="", Telephone="", MoneyAccountStatus='0', ErrorMsg="", ErrorID=0, BankBranchID="", SecuPwdFlag='0', BrokerID="", BankAccType='1', PlateSerial=0, AccountID="", DeviceID="", InstallID=0, BankSecuAccType='1', CurrencyID="", Digest="", BankAccount="", TradingDay="", BrokerBranchID="", BankPassWord="", IdentifiedCardNo="", IdCardType='0', UserID="", BankSerial="", SessionID=0, Fax="", TradeCode="", Password="", CountryCode="", OperNo="", BankPwdFlag='0', Gender='0', BankID="", BankSecuAcc="", EMail="", CustType='0', BrokerIDByBank="", TID=0, MobilePhone="", CashExchangeCode='1', CustomerName="", TradeTime="", LastFragment='0', VerifyCertNoFlag='0'):
        self.ZipCode=tou(ZipCode)
        self.TradeDate=tou(TradeDate)
        self.Address=tou(Address)
        self.Telephone=tou(Telephone)
        self.MoneyAccountStatus=tou(MoneyAccountStatus)
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.BankBranchID=tou(BankBranchID)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.BrokerID=tou(BrokerID)
        self.BankAccType=tou(BankAccType)
        self.PlateSerial=PlateSerial
        self.AccountID=tou(AccountID)
        self.DeviceID=tou(DeviceID)
        self.InstallID=InstallID
        self.BankSecuAccType=tou(BankSecuAccType)
        self.CurrencyID=tou(CurrencyID)
        self.Digest=tou(Digest)
        self.BankAccount=tou(BankAccount)
        self.TradingDay=tou(TradingDay)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.Fax=tou(Fax)
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.CountryCode=tou(CountryCode)
        self.OperNo=tou(OperNo)
        self.BankPwdFlag=tou(BankPwdFlag)
        self.Gender=tou(Gender)
        self.BankID=tou(BankID)
        self.BankSecuAcc=tou(BankSecuAcc)
        self.EMail=tou(EMail)
        self.CustType=tou(CustType)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.TID=TID
        self.MobilePhone=tou(MobilePhone)
        self.CashExchangeCode=tou(CashExchangeCode)
        self.CustomerName=tou(CustomerName)
        self.TradeTime=tou(TradeTime)
        self.LastFragment=tou(LastFragment)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.vcmap={'MoneyAccountStatus': {"'1'": '销户', "'0'": '正常'}, 'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'CashExchangeCode': {"'1'": '汇', "'2'": '钞'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'Gender': {"'1'": '男', "'2'": '女', "'0'": '未知状态'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}, 'BankSecuAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ZipCode', 'TradeDate', 'Address', 'Telephone', 'MoneyAccountStatus', 'ErrorMsg', 'ErrorID', 'BankBranchID', 'SecuPwdFlag', 'BrokerID', 'BankAccType', 'PlateSerial', 'AccountID', 'DeviceID', 'InstallID', 'BankSecuAccType', 'CurrencyID', 'Digest', 'BankAccount', 'TradingDay', 'BrokerBranchID', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'UserID', 'BankSerial', 'SessionID', 'Fax', 'TradeCode', 'Password', 'CountryCode', 'OperNo', 'BankPwdFlag', 'Gender', 'BankID', 'BankSecuAcc', 'EMail', 'CustType', 'BrokerIDByBank', 'TID', 'MobilePhone', 'CashExchangeCode', 'CustomerName', 'TradeTime', 'LastFragment', 'VerifyCertNoFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ZipCode', u'邮编'),('TradeDate', u'交易日期'),('Address', u'地址'),('Telephone', u'电话号码'),('MoneyAccountStatus', u'资金账户状态'),('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码'),('BankBranchID', u'银行分支机构代码'),('SecuPwdFlag', u'期货资金密码核对标志'),('BrokerID', u'期商代码'),('BankAccType', u'银行帐号类型'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号'),('DeviceID', u'渠道标志'),('InstallID', u'安装编号'),('BankSecuAccType', u'期货单位帐号类型'),('CurrencyID', u'币种代码'),('Digest', u'摘要'),('BankAccount', u'银行帐号'),('TradingDay', u'交易系统日期'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('Fax', u'传真'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('CountryCode', u'国家代码'),('OperNo', u'交易柜员'),('BankPwdFlag', u'银行密码标志'),('Gender', u'性别'),('BankID', u'银行代码'),('BankSecuAcc', u'期货单位帐号'),('EMail', u'电子邮件'),('CustType', u'客户类型'),('BrokerIDByBank', u'期货公司银行编码'),('TID', u'交易ID'),('MobilePhone', u'手机'),('CashExchangeCode', u'汇钞标志'),('CustomerName', u'客户姓名'),('TradeTime', u'交易时间'),('LastFragment', u'最后分片标志'),('VerifyCertNoFlag', u'验证客户证件号码标志')]])
    def getval(self, n):
        if n in ['MoneyAccountStatus', 'SecuPwdFlag', 'BankAccType', 'BankSecuAccType', 'IdCardType', 'BankPwdFlag', 'Gender', 'CustType', 'CashExchangeCode', 'LastFragment', 'VerifyCertNoFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInstrumentField:
    def __init__(self, PriceTick=0, CreateDate="", PositionType='1', MaxLimitOrderVolume=0, DeliveryYear=0, ExchangeID="", MaxMarketOrderVolume=0, MaxMarginSideAlgorithm='0', InstrumentName="", ExchangeInstID="", InstrumentID="", ProductID="", StartDelivDate="", OpenDate="", VolumeMultiple=0, LongMarginRatio=0, MinMarketOrderVolume=0, ExpireDate="", DeliveryMonth=0, InstLifePhase='0', ShortMarginRatio=0, EndDelivDate="", IsTrading=0, MinLimitOrderVolume=0, ProductClass='1', PositionDateType='1'):
        self.PriceTick=PriceTick
        self.CreateDate=tou(CreateDate)
        self.PositionType=tou(PositionType)
        self.MaxLimitOrderVolume=MaxLimitOrderVolume
        self.DeliveryYear=DeliveryYear
        self.ExchangeID=tou(ExchangeID)
        self.MaxMarketOrderVolume=MaxMarketOrderVolume
        self.MaxMarginSideAlgorithm=tou(MaxMarginSideAlgorithm)
        self.InstrumentName=tou(InstrumentName)
        self.ExchangeInstID=tou(ExchangeInstID)
        self.InstrumentID=tou(InstrumentID)
        self.ProductID=tou(ProductID)
        self.StartDelivDate=tou(StartDelivDate)
        self.OpenDate=tou(OpenDate)
        self.VolumeMultiple=VolumeMultiple
        self.LongMarginRatio=LongMarginRatio
        self.MinMarketOrderVolume=MinMarketOrderVolume
        self.ExpireDate=tou(ExpireDate)
        self.DeliveryMonth=DeliveryMonth
        self.InstLifePhase=tou(InstLifePhase)
        self.ShortMarginRatio=ShortMarginRatio
        self.EndDelivDate=tou(EndDelivDate)
        self.IsTrading=IsTrading
        self.MinLimitOrderVolume=MinLimitOrderVolume
        self.ProductClass=tou(ProductClass)
        self.PositionDateType=tou(PositionDateType)
        self.vcmap={'PositionDateType': {"'1'": '使用历史持仓', "'2'": '不使用历史持仓'}, 'ProductClass': {"'1'": '期货', "'4'": '即期', "'2'": '期权', "'5'": '期转现', "'3'": '组合'}, 'MaxMarginSideAlgorithm': {"'1'": '使用大额单边保证金算法', "'0'": '不使用大额单边保证金算法'}, 'PositionType': {"'1'": '净持仓', "'2'": '综合持仓'}, 'InstLifePhase': {"'1'": '上市', "'2'": '停牌', "'0'": '未上市', "'3'": '到期'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['PriceTick', 'CreateDate', 'PositionType', 'MaxLimitOrderVolume', 'DeliveryYear', 'ExchangeID', 'MaxMarketOrderVolume', 'MaxMarginSideAlgorithm', 'InstrumentName', 'ExchangeInstID', 'InstrumentID', 'ProductID', 'StartDelivDate', 'OpenDate', 'VolumeMultiple', 'LongMarginRatio', 'MinMarketOrderVolume', 'ExpireDate', 'DeliveryMonth', 'InstLifePhase', 'ShortMarginRatio', 'EndDelivDate', 'IsTrading', 'MinLimitOrderVolume', 'ProductClass', 'PositionDateType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('PriceTick', u'最小变动价位'),('CreateDate', u'创建日'),('PositionType', u'持仓类型'),('MaxLimitOrderVolume', u'限价单最大下单量'),('DeliveryYear', u'交割年份'),('ExchangeID', u'交易所代码'),('MaxMarketOrderVolume', u'市价单最大下单量'),('MaxMarginSideAlgorithm', u'是否使用大额单边保证金算法'),('InstrumentName', u'合约名称'),('ExchangeInstID', u'合约在交易所的代码'),('InstrumentID', u'合约代码'),('ProductID', u'产品代码'),('StartDelivDate', u'开始交割日'),('OpenDate', u'上市日'),('VolumeMultiple', u'合约数量乘数'),('LongMarginRatio', u'多头保证金率'),('MinMarketOrderVolume', u'市价单最小下单量'),('ExpireDate', u'到期日'),('DeliveryMonth', u'交割月'),('InstLifePhase', u'合约生命周期状态'),('ShortMarginRatio', u'空头保证金率'),('EndDelivDate', u'结束交割日'),('IsTrading', u'当前是否交易'),('MinLimitOrderVolume', u'限价单最小下单量'),('ProductClass', u'产品类型'),('PositionDateType', u'持仓日期类型')]])
    def getval(self, n):
        if n in ['PositionType', 'MaxMarginSideAlgorithm', 'InstLifePhase', 'ProductClass', 'PositionDateType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcVerifyFuturePasswordField:
    def __init__(self, TradingDay="", BrokerID="", BankID="", BankPassWord="", AccountID="", PlateSerial=0, CurrencyID="", InstallID=0, TradeDate="", BankSerial="", TID=0, BankAccount="", TradeTime="", TradeCode="", BankBranchID="", LastFragment='0', Password="", SessionID=0, BrokerBranchID=""):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.BankPassWord=tou(BankPassWord)
        self.AccountID=tou(AccountID)
        self.PlateSerial=PlateSerial
        self.CurrencyID=tou(CurrencyID)
        self.InstallID=InstallID
        self.TradeDate=tou(TradeDate)
        self.BankSerial=tou(BankSerial)
        self.TID=TID
        self.BankAccount=tou(BankAccount)
        self.TradeTime=tou(TradeTime)
        self.TradeCode=tou(TradeCode)
        self.BankBranchID=tou(BankBranchID)
        self.LastFragment=tou(LastFragment)
        self.Password=tou(Password)
        self.SessionID=SessionID
        self.BrokerBranchID=tou(BrokerBranchID)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'BankID', 'BankPassWord', 'AccountID', 'PlateSerial', 'CurrencyID', 'InstallID', 'TradeDate', 'BankSerial', 'TID', 'BankAccount', 'TradeTime', 'TradeCode', 'BankBranchID', 'LastFragment', 'Password', 'SessionID', 'BrokerBranchID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('BankPassWord', u'银行密码'),('AccountID', u'投资者帐号'),('PlateSerial', u'银期平台消息流水号'),('CurrencyID', u'币种代码'),('InstallID', u'安装编号'),('TradeDate', u'交易日期'),('BankSerial', u'银行流水号'),('TID', u'交易ID'),('BankAccount', u'银行帐号'),('TradeTime', u'交易时间'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('LastFragment', u'最后分片标志'),('Password', u'期货密码'),('SessionID', u'会话号'),('BrokerBranchID', u'期商分支机构代码')]])
    def getval(self, n):
        if n in ['LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTransferQryDetailReqField:
    def __init__(self, FutureAccount=""):
        self.FutureAccount=tou(FutureAccount)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FutureAccount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FutureAccount', u'期货资金账户')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSyncingInvestorPositionField:
    def __init__(self, TradingDay="", CloseProfitByDate=0, OpenVolume=0, CloseProfit=0, YdPosition=0, HedgeFlag='1', OpenCost=0, CombLongFrozen=0, Commission=0, MarginRateByVolume=0, UseMargin=0, PositionDate='1', InstrumentID="", CloseProfitByTrade=0, SettlementID=0, PositionProfit=0, PreMargin=0, ShortFrozen=0, OpenAmount=0, BrokerID="", CashIn=0, FrozenCash=0, MarginRateByMoney=0, FrozenCommission=0, Position=0, LongFrozenAmount=0, CloseAmount=0, PositionCost=0, CloseVolume=0, ExchangeMargin=0, ShortFrozenAmount=0, CombPosition=0, SettlementPrice=0, CombShortFrozen=0, InvestorID="", FrozenMargin=0, TodayPosition=0, LongFrozen=0, PreSettlementPrice=0, PosiDirection='1'):
        self.TradingDay=tou(TradingDay)
        self.CloseProfitByDate=CloseProfitByDate
        self.OpenVolume=OpenVolume
        self.CloseProfit=CloseProfit
        self.YdPosition=YdPosition
        self.HedgeFlag=tou(HedgeFlag)
        self.OpenCost=OpenCost
        self.CombLongFrozen=CombLongFrozen
        self.Commission=Commission
        self.MarginRateByVolume=MarginRateByVolume
        self.UseMargin=UseMargin
        self.PositionDate=tou(PositionDate)
        self.InstrumentID=tou(InstrumentID)
        self.CloseProfitByTrade=CloseProfitByTrade
        self.SettlementID=SettlementID
        self.PositionProfit=PositionProfit
        self.PreMargin=PreMargin
        self.ShortFrozen=ShortFrozen
        self.OpenAmount=OpenAmount
        self.BrokerID=tou(BrokerID)
        self.CashIn=CashIn
        self.FrozenCash=FrozenCash
        self.MarginRateByMoney=MarginRateByMoney
        self.FrozenCommission=FrozenCommission
        self.Position=Position
        self.LongFrozenAmount=LongFrozenAmount
        self.CloseAmount=CloseAmount
        self.PositionCost=PositionCost
        self.CloseVolume=CloseVolume
        self.ExchangeMargin=ExchangeMargin
        self.ShortFrozenAmount=ShortFrozenAmount
        self.CombPosition=CombPosition
        self.SettlementPrice=SettlementPrice
        self.CombShortFrozen=CombShortFrozen
        self.InvestorID=tou(InvestorID)
        self.FrozenMargin=FrozenMargin
        self.TodayPosition=TodayPosition
        self.LongFrozen=LongFrozen
        self.PreSettlementPrice=PreSettlementPrice
        self.PosiDirection=tou(PosiDirection)
        self.vcmap={'PositionDate': {"'1'": '今日持仓', "'2'": '历史持仓'}, 'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}, 'PosiDirection': {"'1'": '净', "'2'": '多头', "'3'": '空头'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'CloseProfitByDate', 'OpenVolume', 'CloseProfit', 'YdPosition', 'HedgeFlag', 'OpenCost', 'CombLongFrozen', 'Commission', 'MarginRateByVolume', 'UseMargin', 'PositionDate', 'InstrumentID', 'CloseProfitByTrade', 'SettlementID', 'PositionProfit', 'PreMargin', 'ShortFrozen', 'OpenAmount', 'BrokerID', 'CashIn', 'FrozenCash', 'MarginRateByMoney', 'FrozenCommission', 'Position', 'LongFrozenAmount', 'CloseAmount', 'PositionCost', 'CloseVolume', 'ExchangeMargin', 'ShortFrozenAmount', 'CombPosition', 'SettlementPrice', 'CombShortFrozen', 'InvestorID', 'FrozenMargin', 'TodayPosition', 'LongFrozen', 'PreSettlementPrice', 'PosiDirection']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('CloseProfitByDate', u'逐日盯市平仓盈亏'),('OpenVolume', u'开仓量'),('CloseProfit', u'平仓盈亏'),('YdPosition', u'上日持仓'),('HedgeFlag', u'投机套保标志'),('OpenCost', u'开仓成本'),('CombLongFrozen', u'组合多头冻结'),('Commission', u'手续费'),('MarginRateByVolume', u'保证金率(按手数)'),('UseMargin', u'占用的保证金'),('PositionDate', u'持仓日期'),('InstrumentID', u'合约代码'),('CloseProfitByTrade', u'逐笔对冲平仓盈亏'),('SettlementID', u'结算编号'),('PositionProfit', u'持仓盈亏'),('PreMargin', u'上次占用的保证金'),('ShortFrozen', u'空头冻结'),('OpenAmount', u'开仓金额'),('BrokerID', u'经纪公司代码'),('CashIn', u'资金差额'),('FrozenCash', u'冻结的资金'),('MarginRateByMoney', u'保证金率'),('FrozenCommission', u'冻结的手续费'),('Position', u'今日持仓'),('LongFrozenAmount', u'开仓冻结金额'),('CloseAmount', u'平仓金额'),('PositionCost', u'持仓成本'),('CloseVolume', u'平仓量'),('ExchangeMargin', u'交易所保证金'),('ShortFrozenAmount', u'开仓冻结金额'),('CombPosition', u'组合成交形成的持仓'),('SettlementPrice', u'本次结算价'),('CombShortFrozen', u'组合空头冻结'),('InvestorID', u'投资者代码'),('FrozenMargin', u'冻结的保证金'),('TodayPosition', u'今日持仓'),('LongFrozen', u'多头冻结'),('PreSettlementPrice', u'上次结算价'),('PosiDirection', u'持仓多空方向')]])
    def getval(self, n):
        if n in ['HedgeFlag', 'PositionDate', 'PosiDirection']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcManualSyncBrokerUserOTPField:
    def __init__(self, BrokerID="", OTPType='0', SecondOTP="", FirstOTP="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.OTPType=tou(OTPType)
        self.SecondOTP=tou(SecondOTP)
        self.FirstOTP=tou(FirstOTP)
        self.UserID=tou(UserID)
        self.vcmap={'OTPType': {"'1'": '时间令牌', "'0'": '无动态令牌'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'OTPType', 'SecondOTP', 'FirstOTP', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('OTPType', u'动态令牌类型'),('SecondOTP', u'第二个动态密码'),('FirstOTP', u'第一个动态密码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in ['OTPType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInvestorPositionCombineDetailField:
    def __init__(self, TradingDay="", BrokerID="", ExchangeID="", ExchMargin=0, Margin=0, OpenDate="", LegID=0, MarginRateByMoney=0, Direction='0', HedgeFlag='1', MarginRateByVolume=0, TradeID="", CombInstrumentID="", ComTradeID="", TotalAmt=0, TradeGroupID=0, InvestorID="", InstrumentID="", LegMultiple=0, SettlementID=0):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.ExchangeID=tou(ExchangeID)
        self.ExchMargin=ExchMargin
        self.Margin=Margin
        self.OpenDate=tou(OpenDate)
        self.LegID=LegID
        self.MarginRateByMoney=MarginRateByMoney
        self.Direction=tou(Direction)
        self.HedgeFlag=tou(HedgeFlag)
        self.MarginRateByVolume=MarginRateByVolume
        self.TradeID=tou(TradeID)
        self.CombInstrumentID=tou(CombInstrumentID)
        self.ComTradeID=tou(ComTradeID)
        self.TotalAmt=TotalAmt
        self.TradeGroupID=TradeGroupID
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.LegMultiple=LegMultiple
        self.SettlementID=SettlementID
        self.vcmap={'Direction': {"'1'": '卖', "'0'": '买'}, 'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'ExchangeID', 'ExchMargin', 'Margin', 'OpenDate', 'LegID', 'MarginRateByMoney', 'Direction', 'HedgeFlag', 'MarginRateByVolume', 'TradeID', 'CombInstrumentID', 'ComTradeID', 'TotalAmt', 'TradeGroupID', 'InvestorID', 'InstrumentID', 'LegMultiple', 'SettlementID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码'),('ExchangeID', u'交易所代码'),('ExchMargin', u'交易所保证金'),('Margin', u'投资者保证金'),('OpenDate', u'开仓日期'),('LegID', u'单腿编号'),('MarginRateByMoney', u'保证金率'),('Direction', u'买卖'),('HedgeFlag', u'投机套保标志'),('MarginRateByVolume', u'保证金率(按手数)'),('TradeID', u'撮合编号'),('CombInstrumentID', u'组合持仓合约编码'),('ComTradeID', u'组合编号'),('TotalAmt', u'持仓量'),('TradeGroupID', u'成交组号'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('LegMultiple', u'单腿乘数'),('SettlementID', u'结算编号')]])
    def getval(self, n):
        if n in ['Direction', 'HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSettlementRefField:
    def __init__(self, TradingDay="", SettlementID=0):
        self.TradingDay=tou(TradingDay)
        self.SettlementID=SettlementID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'SettlementID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('SettlementID', u'结算编号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerWithdrawAlgorithmField:
    def __init__(self, WithdrawAlgorithm='1', IncludeCloseProfit='0', FundMortgageRatio=0, IsBrokerUserEvent=0, BrokerID="", AllWithoutTrade='0', UsingRatio=0, CurrencyID="", AvailIncludeCloseProfit='0'):
        self.WithdrawAlgorithm=tou(WithdrawAlgorithm)
        self.IncludeCloseProfit=tou(IncludeCloseProfit)
        self.FundMortgageRatio=FundMortgageRatio
        self.IsBrokerUserEvent=IsBrokerUserEvent
        self.BrokerID=tou(BrokerID)
        self.AllWithoutTrade=tou(AllWithoutTrade)
        self.UsingRatio=UsingRatio
        self.CurrencyID=tou(CurrencyID)
        self.AvailIncludeCloseProfit=tou(AvailIncludeCloseProfit)
        self.vcmap={'WithdrawAlgorithm': {"'1'": '浮盈浮亏都计算', "'4'": '浮盈浮亏都不计算', "'2'": '浮盈不计，浮亏计', "'3'": '浮盈计，浮亏不计'}, 'AllWithoutTrade': {"'2'": '受可提比例限制', "'0'": '无仓无成交不受可提比例限制', "'3'": '无仓不受可提比例限制'}, 'AvailIncludeCloseProfit': {"'2'": '不包含平仓盈利', "'0'": '包含平仓盈利'}, 'IncludeCloseProfit': {"'2'": '不包含平仓盈利', "'0'": '包含平仓盈利'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['WithdrawAlgorithm', 'IncludeCloseProfit', 'FundMortgageRatio', 'IsBrokerUserEvent', 'BrokerID', 'AllWithoutTrade', 'UsingRatio', 'CurrencyID', 'AvailIncludeCloseProfit']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('WithdrawAlgorithm', u'可提资金算法'),('IncludeCloseProfit', u'可提是否包含平仓盈利'),('FundMortgageRatio', u'货币质押比率'),('IsBrokerUserEvent', u'是否启用用户事件'),('BrokerID', u'经纪公司代码'),('AllWithoutTrade', u'本日无仓且无成交客户是否受可提比例限制'),('UsingRatio', u'资金使用率'),('CurrencyID', u'币种代码'),('AvailIncludeCloseProfit', u'可用是否包含平仓盈利')]])
    def getval(self, n):
        if n in ['WithdrawAlgorithm', 'IncludeCloseProfit', 'AllWithoutTrade', 'AvailIncludeCloseProfit']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryErrOrderActionField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcUserPasswordUpdateField:
    def __init__(self, BrokerID="", NewPassword="", OldPassword="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.NewPassword=tou(NewPassword)
        self.OldPassword=tou(OldPassword)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'NewPassword', 'OldPassword', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('NewPassword', u'新的口令'),('OldPassword', u'原来的口令'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqTransferField:
    def __init__(self, TradingDay="", FeePayFlag='0', TradeDate="", BankPassWord="", IdentifiedCardNo="", IdCardType='0', BrokerFee=0, TransferStatus='0', UserID="", OperNo="", BankSerial="", Digest="", SessionID=0, CustFee=0, BankSecuAcc="", BankPwdFlag='0', CurrencyID="", BankBranchID="", TradeCode="", Password="", BankAccType='1', SecuPwdFlag='0', BrokerBranchID="", RequestID=0, BrokerID="", BankID="", Message="", PlateSerial=0, AccountID="", CustomerName="", InstallID=0, TID=0, FutureSerial=0, FutureFetchAmount=0, BankSecuAccType='1', CustType='0', BankAccount="", TradeAmount=0, LastFragment='0', DeviceID="", VerifyCertNoFlag='0', BrokerIDByBank="", TradeTime=""):
        self.TradingDay=tou(TradingDay)
        self.FeePayFlag=tou(FeePayFlag)
        self.TradeDate=tou(TradeDate)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.BrokerFee=BrokerFee
        self.TransferStatus=tou(TransferStatus)
        self.UserID=tou(UserID)
        self.OperNo=tou(OperNo)
        self.BankSerial=tou(BankSerial)
        self.Digest=tou(Digest)
        self.SessionID=SessionID
        self.CustFee=CustFee
        self.BankSecuAcc=tou(BankSecuAcc)
        self.BankPwdFlag=tou(BankPwdFlag)
        self.CurrencyID=tou(CurrencyID)
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.BankAccType=tou(BankAccType)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.Message=tou(Message)
        self.PlateSerial=PlateSerial
        self.AccountID=tou(AccountID)
        self.CustomerName=tou(CustomerName)
        self.InstallID=InstallID
        self.TID=TID
        self.FutureSerial=FutureSerial
        self.FutureFetchAmount=FutureFetchAmount
        self.BankSecuAccType=tou(BankSecuAccType)
        self.CustType=tou(CustType)
        self.BankAccount=tou(BankAccount)
        self.TradeAmount=TradeAmount
        self.LastFragment=tou(LastFragment)
        self.DeviceID=tou(DeviceID)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.TradeTime=tou(TradeTime)
        self.vcmap={'FeePayFlag': {"'1'": '由发送方支付费用', "'2'": '由发送方支付发起的费用，受益方支付接受的费用', "'0'": '由受益方支付费用'}, 'BankSecuAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'TransferStatus': {"'1'": '被冲正', "'0'": '正常'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}, 'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'FeePayFlag', 'TradeDate', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'BrokerFee', 'TransferStatus', 'UserID', 'OperNo', 'BankSerial', 'Digest', 'SessionID', 'CustFee', 'BankSecuAcc', 'BankPwdFlag', 'CurrencyID', 'BankBranchID', 'TradeCode', 'Password', 'BankAccType', 'SecuPwdFlag', 'BrokerBranchID', 'RequestID', 'BrokerID', 'BankID', 'Message', 'PlateSerial', 'AccountID', 'CustomerName', 'InstallID', 'TID', 'FutureSerial', 'FutureFetchAmount', 'BankSecuAccType', 'CustType', 'BankAccount', 'TradeAmount', 'LastFragment', 'DeviceID', 'VerifyCertNoFlag', 'BrokerIDByBank', 'TradeTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('FeePayFlag', u'费用支付标志'),('TradeDate', u'交易日期'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('BrokerFee', u'应收期货公司费用'),('TransferStatus', u'转账交易状态'),('UserID', u'用户标识'),('OperNo', u'交易柜员'),('BankSerial', u'银行流水号'),('Digest', u'摘要'),('SessionID', u'会话号'),('CustFee', u'应收客户费用'),('BankSecuAcc', u'期货单位帐号'),('BankPwdFlag', u'银行密码标志'),('CurrencyID', u'币种代码'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('BankAccType', u'银行帐号类型'),('SecuPwdFlag', u'期货资金密码核对标志'),('BrokerBranchID', u'期商分支机构代码'),('RequestID', u'请求编号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('Message', u'发送方给接收方的消息'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号'),('CustomerName', u'客户姓名'),('InstallID', u'安装编号'),('TID', u'交易ID'),('FutureSerial', u'期货公司流水号'),('FutureFetchAmount', u'期货可取金额'),('BankSecuAccType', u'期货单位帐号类型'),('CustType', u'客户类型'),('BankAccount', u'银行帐号'),('TradeAmount', u'转帐金额'),('LastFragment', u'最后分片标志'),('DeviceID', u'渠道标志'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('BrokerIDByBank', u'期货公司银行编码'),('TradeTime', u'交易时间')]])
    def getval(self, n):
        if n in ['FeePayFlag', 'IdCardType', 'TransferStatus', 'BankPwdFlag', 'BankAccType', 'SecuPwdFlag', 'BankSecuAccType', 'CustType', 'LastFragment', 'VerifyCertNoFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryParkedOrderField:
    def __init__(self, InvestorID="", BrokerID="", ExchangeID="", InstrumentID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.ExchangeID=tou(ExchangeID)
        self.InstrumentID=tou(InstrumentID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ExchangeID', 'InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ExchangeID', u'交易所代码'),('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTransferBankField:
    def __init__(self, BankID="", IsActive=0, BankName="", BankBrchID=""):
        self.BankID=tou(BankID)
        self.IsActive=IsActive
        self.BankName=tou(BankName)
        self.BankBrchID=tou(BankBrchID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankID', 'IsActive', 'BankName', 'BankBrchID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankID', u'银行代码'),('IsActive', u'是否活跃'),('BankName', u'银行名称'),('BankBrchID', u'银行分中心代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRspTransferField:
    def __init__(self, BrokerFee=0, TradeDate="", PlateSerial=0, ErrorMsg="", ErrorID=0, BankBranchID="", SecuPwdFlag='0', BrokerID="", AccountID="", DeviceID="", InstallID=0, BankSecuAccType='1', TradeAmount=0, CurrencyID="", BankPwdFlag='0', FeePayFlag='0', TradingDay="", BrokerBranchID="", BankPassWord="", IdentifiedCardNo="", IdCardType='0', TransferStatus='0', UserID="", BankSerial="", SessionID=0, CustFee=0, TradeTime="", TradeCode="", Password="", BankAccType='1', OperNo="", Digest="", RequestID=0, BankID="", BankSecuAcc="", VerifyCertNoFlag='0', CustomerName="", CustType='0', BrokerIDByBank="", FutureSerial=0, TID=0, BankAccount="", LastFragment='0', Message="", FutureFetchAmount=0):
        self.BrokerFee=BrokerFee
        self.TradeDate=tou(TradeDate)
        self.PlateSerial=PlateSerial
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.BankBranchID=tou(BankBranchID)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.BrokerID=tou(BrokerID)
        self.AccountID=tou(AccountID)
        self.DeviceID=tou(DeviceID)
        self.InstallID=InstallID
        self.BankSecuAccType=tou(BankSecuAccType)
        self.TradeAmount=TradeAmount
        self.CurrencyID=tou(CurrencyID)
        self.BankPwdFlag=tou(BankPwdFlag)
        self.FeePayFlag=tou(FeePayFlag)
        self.TradingDay=tou(TradingDay)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.TransferStatus=tou(TransferStatus)
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.CustFee=CustFee
        self.TradeTime=tou(TradeTime)
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.BankAccType=tou(BankAccType)
        self.OperNo=tou(OperNo)
        self.Digest=tou(Digest)
        self.RequestID=RequestID
        self.BankID=tou(BankID)
        self.BankSecuAcc=tou(BankSecuAcc)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.CustomerName=tou(CustomerName)
        self.CustType=tou(CustType)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.FutureSerial=FutureSerial
        self.TID=TID
        self.BankAccount=tou(BankAccount)
        self.LastFragment=tou(LastFragment)
        self.Message=tou(Message)
        self.FutureFetchAmount=FutureFetchAmount
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'BankSecuAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}, 'TransferStatus': {"'1'": '被冲正', "'0'": '正常'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'FeePayFlag': {"'1'": '由发送方支付费用', "'2'": '由发送方支付发起的费用，受益方支付接受的费用', "'0'": '由受益方支付费用'}, 'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerFee', 'TradeDate', 'PlateSerial', 'ErrorMsg', 'ErrorID', 'BankBranchID', 'SecuPwdFlag', 'BrokerID', 'AccountID', 'DeviceID', 'InstallID', 'BankSecuAccType', 'TradeAmount', 'CurrencyID', 'BankPwdFlag', 'FeePayFlag', 'TradingDay', 'BrokerBranchID', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'TransferStatus', 'UserID', 'BankSerial', 'SessionID', 'CustFee', 'TradeTime', 'TradeCode', 'Password', 'BankAccType', 'OperNo', 'Digest', 'RequestID', 'BankID', 'BankSecuAcc', 'VerifyCertNoFlag', 'CustomerName', 'CustType', 'BrokerIDByBank', 'FutureSerial', 'TID', 'BankAccount', 'LastFragment', 'Message', 'FutureFetchAmount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerFee', u'应收期货公司费用'),('TradeDate', u'交易日期'),('PlateSerial', u'银期平台消息流水号'),('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码'),('BankBranchID', u'银行分支机构代码'),('SecuPwdFlag', u'期货资金密码核对标志'),('BrokerID', u'期商代码'),('AccountID', u'投资者帐号'),('DeviceID', u'渠道标志'),('InstallID', u'安装编号'),('BankSecuAccType', u'期货单位帐号类型'),('TradeAmount', u'转帐金额'),('CurrencyID', u'币种代码'),('BankPwdFlag', u'银行密码标志'),('FeePayFlag', u'费用支付标志'),('TradingDay', u'交易系统日期'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('TransferStatus', u'转账交易状态'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('CustFee', u'应收客户费用'),('TradeTime', u'交易时间'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('BankAccType', u'银行帐号类型'),('OperNo', u'交易柜员'),('Digest', u'摘要'),('RequestID', u'请求编号'),('BankID', u'银行代码'),('BankSecuAcc', u'期货单位帐号'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('CustomerName', u'客户姓名'),('CustType', u'客户类型'),('BrokerIDByBank', u'期货公司银行编码'),('FutureSerial', u'期货公司流水号'),('TID', u'交易ID'),('BankAccount', u'银行帐号'),('LastFragment', u'最后分片标志'),('Message', u'发送方给接收方的消息'),('FutureFetchAmount', u'期货可取金额')]])
    def getval(self, n):
        if n in ['SecuPwdFlag', 'BankSecuAccType', 'BankPwdFlag', 'FeePayFlag', 'IdCardType', 'TransferStatus', 'BankAccType', 'VerifyCertNoFlag', 'CustType', 'LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryCFMMCBrokerKeyField:
    def __init__(self, BrokerID=""):
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryExchangeMarginRateAdjustField:
    def __init__(self, BrokerID="", HedgeFlag='1', InstrumentID=""):
        self.BrokerID=tou(BrokerID)
        self.HedgeFlag=tou(HedgeFlag)
        self.InstrumentID=tou(InstrumentID)
        self.vcmap={'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'HedgeFlag', 'InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('HedgeFlag', u'投机套保标志'),('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in ['HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcNotifyFutureSignInField:
    def __init__(self, TradingDay="", TradeDate="", DeviceID="", PlateSerial=0, UserID="", BankSerial="", SessionID=0, ErrorMsg="", ErrorID=0, LastFragment='0', BankBranchID="", TradeCode="", OperNo="", Digest="", RequestID=0, BrokerID="", BankID="", PinKey="", InstallID=0, MacKey="", TID=0, TradeTime="", CurrencyID="", BrokerBranchID="", BrokerIDByBank=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.DeviceID=tou(DeviceID)
        self.PlateSerial=PlateSerial
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.LastFragment=tou(LastFragment)
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.OperNo=tou(OperNo)
        self.Digest=tou(Digest)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.PinKey=tou(PinKey)
        self.InstallID=InstallID
        self.MacKey=tou(MacKey)
        self.TID=TID
        self.TradeTime=tou(TradeTime)
        self.CurrencyID=tou(CurrencyID)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'DeviceID', 'PlateSerial', 'UserID', 'BankSerial', 'SessionID', 'ErrorMsg', 'ErrorID', 'LastFragment', 'BankBranchID', 'TradeCode', 'OperNo', 'Digest', 'RequestID', 'BrokerID', 'BankID', 'PinKey', 'InstallID', 'MacKey', 'TID', 'TradeTime', 'CurrencyID', 'BrokerBranchID', 'BrokerIDByBank']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('TradeDate', u'交易日期'),('DeviceID', u'渠道标志'),('PlateSerial', u'银期平台消息流水号'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码'),('LastFragment', u'最后分片标志'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('OperNo', u'交易柜员'),('Digest', u'摘要'),('RequestID', u'请求编号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('PinKey', u'PIN密钥'),('InstallID', u'安装编号'),('MacKey', u'MAC密钥'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('CurrencyID', u'币种代码'),('BrokerBranchID', u'期商分支机构代码'),('BrokerIDByBank', u'期货公司银行编码')]])
    def getval(self, n):
        if n in ['LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRspFutureSignInField:
    def __init__(self, TradingDay="", TradeDate="", DeviceID="", PlateSerial=0, UserID="", BankSerial="", SessionID=0, ErrorMsg="", ErrorID=0, LastFragment='0', BankBranchID="", TradeCode="", OperNo="", Digest="", RequestID=0, BrokerID="", BankID="", PinKey="", InstallID=0, MacKey="", TID=0, TradeTime="", CurrencyID="", BrokerBranchID="", BrokerIDByBank=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.DeviceID=tou(DeviceID)
        self.PlateSerial=PlateSerial
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.LastFragment=tou(LastFragment)
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.OperNo=tou(OperNo)
        self.Digest=tou(Digest)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.PinKey=tou(PinKey)
        self.InstallID=InstallID
        self.MacKey=tou(MacKey)
        self.TID=TID
        self.TradeTime=tou(TradeTime)
        self.CurrencyID=tou(CurrencyID)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'DeviceID', 'PlateSerial', 'UserID', 'BankSerial', 'SessionID', 'ErrorMsg', 'ErrorID', 'LastFragment', 'BankBranchID', 'TradeCode', 'OperNo', 'Digest', 'RequestID', 'BrokerID', 'BankID', 'PinKey', 'InstallID', 'MacKey', 'TID', 'TradeTime', 'CurrencyID', 'BrokerBranchID', 'BrokerIDByBank']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('TradeDate', u'交易日期'),('DeviceID', u'渠道标志'),('PlateSerial', u'银期平台消息流水号'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码'),('LastFragment', u'最后分片标志'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('OperNo', u'交易柜员'),('Digest', u'摘要'),('RequestID', u'请求编号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('PinKey', u'PIN密钥'),('InstallID', u'安装编号'),('MacKey', u'MAC密钥'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('CurrencyID', u'币种代码'),('BrokerBranchID', u'期商分支机构代码'),('BrokerIDByBank', u'期货公司银行编码')]])
    def getval(self, n):
        if n in ['LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqUserLoginField:
    def __init__(self, TradingDay="", BrokerID="", ClientIPAddress="", InterfaceProductInfo="", UserProductInfo="", UserID="", Password="", MacAddress="", ProtocolInfo="", OneTimePassword=""):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.ClientIPAddress=tou(ClientIPAddress)
        self.InterfaceProductInfo=tou(InterfaceProductInfo)
        self.UserProductInfo=tou(UserProductInfo)
        self.UserID=tou(UserID)
        self.Password=tou(Password)
        self.MacAddress=tou(MacAddress)
        self.ProtocolInfo=tou(ProtocolInfo)
        self.OneTimePassword=tou(OneTimePassword)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'ClientIPAddress', 'InterfaceProductInfo', 'UserProductInfo', 'UserID', 'Password', 'MacAddress', 'ProtocolInfo', 'OneTimePassword']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码'),('ClientIPAddress', u'终端IP地址'),('InterfaceProductInfo', u'接口端产品信息'),('UserProductInfo', u'用户端产品信息'),('UserID', u'用户代码'),('Password', u'密码'),('MacAddress', u'Mac地址'),('ProtocolInfo', u'协议信息'),('OneTimePassword', u'动态密码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcLinkManField:
    def __init__(self, ZipCode="", BrokerID="", IdentifiedCardNo="", IdentifiedCardType='0', Telephone="", Address="", PersonType='1', PersonName="", PersonFullName="", InvestorID="", UOAZipCode="", Priority=0):
        self.ZipCode=tou(ZipCode)
        self.BrokerID=tou(BrokerID)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdentifiedCardType=tou(IdentifiedCardType)
        self.Telephone=tou(Telephone)
        self.Address=tou(Address)
        self.PersonType=tou(PersonType)
        self.PersonName=tou(PersonName)
        self.PersonFullName=tou(PersonFullName)
        self.InvestorID=tou(InvestorID)
        self.UOAZipCode=tou(UOAZipCode)
        self.Priority=Priority
        self.vcmap={'PersonType': {"'9'": '托（保）管人', "'A'": '托（保）管机构法人代表', "'4'": '结算单确认人', "'B'": '托（保）管机构开户授权人', "'5'": '法人', "'C'": '托（保）管机构联系人', "'6'": '法人代表', "'7'": '投资者联系人', "'1'": '指定下单人', "'D'": '境外自然人参考证件', "'2'": '开户授权人', "'E'": '法人代表参考证件', "'8'": '分户管理资产负责人', "'3'": '资金调拨人'}, 'IdentifiedCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ZipCode', 'BrokerID', 'IdentifiedCardNo', 'IdentifiedCardType', 'Telephone', 'Address', 'PersonType', 'PersonName', 'PersonFullName', 'InvestorID', 'UOAZipCode', 'Priority']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ZipCode', u'邮政编码'),('BrokerID', u'经纪公司代码'),('IdentifiedCardNo', u'证件号码'),('IdentifiedCardType', u'证件类型'),('Telephone', u'联系电话'),('Address', u'通讯地址'),('PersonType', u'联系人类型'),('PersonName', u'名称'),('PersonFullName', u'全称'),('InvestorID', u'投资者代码'),('UOAZipCode', u'开户邮政编码'),('Priority', u'优先级')]])
    def getval(self, n):
        if n in ['IdentifiedCardType', 'PersonType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryErrOrderField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryInstrumentMarginRateField:
    def __init__(self, InvestorID="", BrokerID="", HedgeFlag='1', InstrumentID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.HedgeFlag=tou(HedgeFlag)
        self.InstrumentID=tou(InstrumentID)
        self.vcmap={'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'HedgeFlag', 'InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('HedgeFlag', u'投机套保标志'),('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in ['HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryNoticeField:
    def __init__(self, BrokerID=""):
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRemoveParkedOrderActionField:
    def __init__(self, InvestorID="", BrokerID="", ParkedOrderActionID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.ParkedOrderActionID=tou(ParkedOrderActionID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ParkedOrderActionID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ParkedOrderActionID', u'预埋撤单编号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryPartBrokerField:
    def __init__(self, BrokerID="", ParticipantID="", ExchangeID=""):
        self.BrokerID=tou(BrokerID)
        self.ParticipantID=tou(ParticipantID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'ParticipantID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('ParticipantID', u'会员代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryExchangeSequenceField:
    def __init__(self, ExchangeID=""):
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSuperUserField:
    def __init__(self, UserID="", Password="", UserName="", IsActive=0):
        self.UserID=tou(UserID)
        self.Password=tou(Password)
        self.UserName=tou(UserName)
        self.IsActive=IsActive
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'Password', 'UserName', 'IsActive']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('Password', u'密码'),('UserName', u'用户名称'),('IsActive', u'是否活跃')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryInvestorPositionField:
    def __init__(self, InvestorID="", BrokerID="", InstrumentID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.InstrumentID=tou(InstrumentID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSyncingInstrumentCommissionRateField:
    def __init__(self, OpenRatioByVolume=0, BrokerID="", OpenRatioByMoney=0, CloseRatioByMoney=0, InvestorRange='1', InvestorID="", InstrumentID="", CloseTodayRatioByMoney=0, CloseTodayRatioByVolume=0, CloseRatioByVolume=0):
        self.OpenRatioByVolume=OpenRatioByVolume
        self.BrokerID=tou(BrokerID)
        self.OpenRatioByMoney=OpenRatioByMoney
        self.CloseRatioByMoney=CloseRatioByMoney
        self.InvestorRange=tou(InvestorRange)
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.CloseTodayRatioByMoney=CloseTodayRatioByMoney
        self.CloseTodayRatioByVolume=CloseTodayRatioByVolume
        self.CloseRatioByVolume=CloseRatioByVolume
        self.vcmap={'InvestorRange': {"'1'": '所有', "'2'": '投资者组', "'3'": '单一投资者'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OpenRatioByVolume', 'BrokerID', 'OpenRatioByMoney', 'CloseRatioByMoney', 'InvestorRange', 'InvestorID', 'InstrumentID', 'CloseTodayRatioByMoney', 'CloseTodayRatioByVolume', 'CloseRatioByVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OpenRatioByVolume', u'开仓手续费'),('BrokerID', u'经纪公司代码'),('OpenRatioByMoney', u'开仓手续费率'),('CloseRatioByMoney', u'平仓手续费率'),('InvestorRange', u'投资者范围'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('CloseTodayRatioByMoney', u'平今手续费率'),('CloseTodayRatioByVolume', u'平今手续费'),('CloseRatioByVolume', u'平仓手续费')]])
    def getval(self, n):
        if n in ['InvestorRange']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcAccountregisterField:
    def __init__(self, BrokerID="", BankID="", BankAccType='1', AccountID="", IdCardType='0', CustomerName="", CustType='0', OpenOrDestroy='1', RegDate="", TID=0, BankAccount="", TradeDay="", BankBranchID="", CurrencyID="", BrokerBranchID="", OutDate="", IdentifiedCardNo=""):
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.BankAccType=tou(BankAccType)
        self.AccountID=tou(AccountID)
        self.IdCardType=tou(IdCardType)
        self.CustomerName=tou(CustomerName)
        self.CustType=tou(CustType)
        self.OpenOrDestroy=tou(OpenOrDestroy)
        self.RegDate=tou(RegDate)
        self.TID=TID
        self.BankAccount=tou(BankAccount)
        self.TradeDay=tou(TradeDay)
        self.BankBranchID=tou(BankBranchID)
        self.CurrencyID=tou(CurrencyID)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.OutDate=tou(OutDate)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.vcmap={'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'OpenOrDestroy': {"'1'": '开户', "'0'": '销户'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'BankID', 'BankAccType', 'AccountID', 'IdCardType', 'CustomerName', 'CustType', 'OpenOrDestroy', 'RegDate', 'TID', 'BankAccount', 'TradeDay', 'BankBranchID', 'CurrencyID', 'BrokerBranchID', 'OutDate', 'IdentifiedCardNo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'期货公司编码'),('BankID', u'银行编码'),('BankAccType', u'银行帐号类型'),('AccountID', u'投资者帐号'),('IdCardType', u'证件类型'),('CustomerName', u'客户姓名'),('CustType', u'客户类型'),('OpenOrDestroy', u'开销户类别'),('RegDate', u'签约日期'),('TID', u'交易ID'),('BankAccount', u'银行帐号'),('TradeDay', u'交易日期'),('BankBranchID', u'银行分支机构编码'),('CurrencyID', u'币种代码'),('BrokerBranchID', u'期货公司分支机构编码'),('OutDate', u'解约日期'),('IdentifiedCardNo', u'证件号码')]])
    def getval(self, n):
        if n in ['BankAccType', 'IdCardType', 'CustType', 'OpenOrDestroy']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInstrumentStatusField:
    def __init__(self, InstrumentStatus='0', EnterTime="", EnterReason='1', TradingSegmentSN=0, ExchangeInstID="", InstrumentID="", SettlementGroupID="", ExchangeID=""):
        self.InstrumentStatus=tou(InstrumentStatus)
        self.EnterTime=tou(EnterTime)
        self.EnterReason=tou(EnterReason)
        self.TradingSegmentSN=TradingSegmentSN
        self.ExchangeInstID=tou(ExchangeInstID)
        self.InstrumentID=tou(InstrumentID)
        self.SettlementGroupID=tou(SettlementGroupID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={'InstrumentStatus': {"'6'": '收盘', "'0'": '开盘前', "'1'": '非交易', "'4'": '集合竞价价格平衡', "'2'": '连续交易', "'5'": '集合竞价撮合', "'3'": '集合竞价报单'}, 'EnterReason': {"'1'": '自动切换', "'2'": '手动切换', "'3'": '熔断'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentStatus', 'EnterTime', 'EnterReason', 'TradingSegmentSN', 'ExchangeInstID', 'InstrumentID', 'SettlementGroupID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentStatus', u'合约交易状态'),('EnterTime', u'进入本状态时间'),('EnterReason', u'进入本状态原因'),('TradingSegmentSN', u'交易阶段编号'),('ExchangeInstID', u'合约在交易所的代码'),('InstrumentID', u'合约代码'),('SettlementGroupID', u'结算组代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in ['InstrumentStatus', 'EnterReason']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSyncingTradingCodeField:
    def __init__(self, BrokerID="", ClientID="", IsActive=0, InvestorID="", ClientIDType='1', ExchangeID=""):
        self.BrokerID=tou(BrokerID)
        self.ClientID=tou(ClientID)
        self.IsActive=IsActive
        self.InvestorID=tou(InvestorID)
        self.ClientIDType=tou(ClientIDType)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={'ClientIDType': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'ClientID', 'IsActive', 'InvestorID', 'ClientIDType', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('ClientID', u'客户代码'),('IsActive', u'是否活跃'),('InvestorID', u'投资者代码'),('ClientIDType', u'交易编码类型'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in ['ClientIDType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerUserRightAssignField:
    def __init__(self, BrokerID="", Tradeable=0, DRIdentityID=0):
        self.BrokerID=tou(BrokerID)
        self.Tradeable=Tradeable
        self.DRIdentityID=DRIdentityID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'Tradeable', 'DRIdentityID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'应用单元代码'),('Tradeable', u'能否交易'),('DRIdentityID', u'交易中心代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTransferQryDetailRspField:
    def __init__(self, TxAmount=0, TradeDate="", Flag='0', FutureID="", FutureSerial=0, BankID="", BankSerial=0, CurrencyCode="", CertCode="", TradeTime="", BankBrchID="", TradeCode="", FutureAccount="", BankAccount=""):
        self.TxAmount=TxAmount
        self.TradeDate=tou(TradeDate)
        self.Flag=tou(Flag)
        self.FutureID=tou(FutureID)
        self.FutureSerial=FutureSerial
        self.BankID=tou(BankID)
        self.BankSerial=BankSerial
        self.CurrencyCode=tou(CurrencyCode)
        self.CertCode=tou(CertCode)
        self.TradeTime=tou(TradeTime)
        self.BankBrchID=tou(BankBrchID)
        self.TradeCode=tou(TradeCode)
        self.FutureAccount=tou(FutureAccount)
        self.BankAccount=tou(BankAccount)
        self.vcmap={'Flag': {"'1'": '有效', "'2'": '冲正', "'0'": '无效或失败'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TxAmount', 'TradeDate', 'Flag', 'FutureID', 'FutureSerial', 'BankID', 'BankSerial', 'CurrencyCode', 'CertCode', 'TradeTime', 'BankBrchID', 'TradeCode', 'FutureAccount', 'BankAccount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TxAmount', u'发生金额'),('TradeDate', u'交易日期'),('Flag', u'有效标志'),('FutureID', u'期货公司代码'),('FutureSerial', u'期货流水号'),('BankID', u'银行代码'),('BankSerial', u'银行流水号'),('CurrencyCode', u'货币代码'),('CertCode', u'证件号码'),('TradeTime', u'交易时间'),('BankBrchID', u'银行分中心代码'),('TradeCode', u'交易代码'),('FutureAccount', u'资金帐号'),('BankAccount', u'银行账号')]])
    def getval(self, n):
        if n in ['Flag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInstrumentMarginRateAdjustField:
    def __init__(self, BrokerID="", ShortMarginRatioByVolume=0, InvestorRange='1', InvestorID="", InstrumentID="", IsRelative=0, ShortMarginRatioByMoney=0, HedgeFlag='1', LongMarginRatioByVolume=0, LongMarginRatioByMoney=0):
        self.BrokerID=tou(BrokerID)
        self.ShortMarginRatioByVolume=ShortMarginRatioByVolume
        self.InvestorRange=tou(InvestorRange)
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.IsRelative=IsRelative
        self.ShortMarginRatioByMoney=ShortMarginRatioByMoney
        self.HedgeFlag=tou(HedgeFlag)
        self.LongMarginRatioByVolume=LongMarginRatioByVolume
        self.LongMarginRatioByMoney=LongMarginRatioByMoney
        self.vcmap={'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}, 'InvestorRange': {"'1'": '所有', "'2'": '投资者组', "'3'": '单一投资者'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'ShortMarginRatioByVolume', 'InvestorRange', 'InvestorID', 'InstrumentID', 'IsRelative', 'ShortMarginRatioByMoney', 'HedgeFlag', 'LongMarginRatioByVolume', 'LongMarginRatioByMoney']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('ShortMarginRatioByVolume', u'空头保证金费'),('InvestorRange', u'投资者范围'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('IsRelative', u'是否相对交易所收取'),('ShortMarginRatioByMoney', u'空头保证金率'),('HedgeFlag', u'投机套保标志'),('LongMarginRatioByVolume', u'多头保证金费'),('LongMarginRatioByMoney', u'多头保证金率')]])
    def getval(self, n):
        if n in ['InvestorRange', 'HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryBrokerField:
    def __init__(self, BrokerID=""):
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqDayEndFileReadyField:
    def __init__(self, TradingDay="", BrokerID="", BankID="", PlateSerial=0, TradeDate="", Digest="", BankSerial="", TradeTime="", FileBusinessCode='0', TradeCode="", BankBranchID="", LastFragment='0', SessionID=0, BrokerBranchID=""):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.PlateSerial=PlateSerial
        self.TradeDate=tou(TradeDate)
        self.Digest=tou(Digest)
        self.BankSerial=tou(BankSerial)
        self.TradeTime=tou(TradeTime)
        self.FileBusinessCode=tou(FileBusinessCode)
        self.TradeCode=tou(TradeCode)
        self.BankBranchID=tou(BankBranchID)
        self.LastFragment=tou(LastFragment)
        self.SessionID=SessionID
        self.BrokerBranchID=tou(BrokerBranchID)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'FileBusinessCode': {"'f'": '协办存管银行资金监管数据', "'9'": '客户结息净额明细', "'a'": '客户资金交收明细', "'4'": '期货账户信息变更明细对账', "'b'": '法人存管银行资金交收汇总', "'5'": '客户资金台账余额明细对账', "'c'": '主体间资金交收汇总', "'6'": '客户销户结息明细对账', "'7'": '客户资金余额对账结果', "'0'": '其他', "'1'": '转账交易明细对账', "'d'": '总分平衡监管数据', "'2'": '客户账户状态对账', "'e'": '存管银行备付金余额', "'8'": '其它对账异常结果文件', "'3'": '账户类交易明细对账'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'BankID', 'PlateSerial', 'TradeDate', 'Digest', 'BankSerial', 'TradeTime', 'FileBusinessCode', 'TradeCode', 'BankBranchID', 'LastFragment', 'SessionID', 'BrokerBranchID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('PlateSerial', u'银期平台消息流水号'),('TradeDate', u'交易日期'),('Digest', u'摘要'),('BankSerial', u'银行流水号'),('TradeTime', u'交易时间'),('FileBusinessCode', u'文件业务功能'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('LastFragment', u'最后分片标志'),('SessionID', u'会话号'),('BrokerBranchID', u'期商分支机构代码')]])
    def getval(self, n):
        if n in ['FileBusinessCode', 'LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTradingAccountPasswordField:
    def __init__(self, BrokerID="", Password="", AccountID="", CurrencyID=""):
        self.BrokerID=tou(BrokerID)
        self.Password=tou(Password)
        self.AccountID=tou(AccountID)
        self.CurrencyID=tou(CurrencyID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'Password', 'AccountID', 'CurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('Password', u'密码'),('AccountID', u'投资者帐号'),('CurrencyID', u'币种代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTransferFutureToBankReqField:
    def __init__(self, FutureAccPwd="", TradeAmt=0, CurrencyCode="", FuturePwdFlag='0', CustFee=0, FutureAccount=""):
        self.FutureAccPwd=tou(FutureAccPwd)
        self.TradeAmt=TradeAmt
        self.CurrencyCode=tou(CurrencyCode)
        self.FuturePwdFlag=tou(FuturePwdFlag)
        self.CustFee=CustFee
        self.FutureAccount=tou(FutureAccount)
        self.vcmap={'FuturePwdFlag': {"'1'": '核对', "'0'": '不核对'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FutureAccPwd', 'TradeAmt', 'CurrencyCode', 'FuturePwdFlag', 'CustFee', 'FutureAccount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FutureAccPwd', u'密码'),('TradeAmt', u'转账金额'),('CurrencyCode', u'币种：RMB-人民币 USD-美圆 HKD-港元'),('FuturePwdFlag', u'密码标志'),('CustFee', u'客户手续费'),('FutureAccount', u'期货资金账户')]])
    def getval(self, n):
        if n in ['FuturePwdFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataBid23Field:
    def __init__(self, BidVolume2=0, BidVolume3=0, BidPrice2=0, BidPrice3=0):
        self.BidVolume2=BidVolume2
        self.BidVolume3=BidVolume3
        self.BidPrice2=BidPrice2
        self.BidPrice3=BidPrice3
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidVolume2', 'BidVolume3', 'BidPrice2', 'BidPrice3']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidVolume2', u'申买量二'),('BidVolume3', u'申买量三'),('BidPrice2', u'申买价二'),('BidPrice3', u'申买价三')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInputOrderActionField:
    def __init__(self, RequestID=0, BrokerID="", SessionID=0, OrderSysID="", OrderRef="", UserID="", FrontID=0, LimitPrice=0, ActionFlag='0', OrderActionRef=0, VolumeChange=0, InvestorID="", InstrumentID="", ExchangeID=""):
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.SessionID=SessionID
        self.OrderSysID=tou(OrderSysID)
        self.OrderRef=tou(OrderRef)
        self.UserID=tou(UserID)
        self.FrontID=FrontID
        self.LimitPrice=LimitPrice
        self.ActionFlag=tou(ActionFlag)
        self.OrderActionRef=OrderActionRef
        self.VolumeChange=VolumeChange
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={'ActionFlag': {"'0'": '删除', "'3'": '修改'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['RequestID', 'BrokerID', 'SessionID', 'OrderSysID', 'OrderRef', 'UserID', 'FrontID', 'LimitPrice', 'ActionFlag', 'OrderActionRef', 'VolumeChange', 'InvestorID', 'InstrumentID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('RequestID', u'请求编号'),('BrokerID', u'经纪公司代码'),('SessionID', u'会话编号'),('OrderSysID', u'报单编号'),('OrderRef', u'报单引用'),('UserID', u'用户代码'),('FrontID', u'前置编号'),('LimitPrice', u'价格'),('ActionFlag', u'操作标志'),('OrderActionRef', u'报单操作引用'),('VolumeChange', u'数量变化'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in ['ActionFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcCombinationLegField:
    def __init__(self, LegID=0, LegInstrumentID="", LegMultiple=0, Direction='0', ImplyLevel=0, CombInstrumentID=""):
        self.LegID=LegID
        self.LegInstrumentID=tou(LegInstrumentID)
        self.LegMultiple=LegMultiple
        self.Direction=tou(Direction)
        self.ImplyLevel=ImplyLevel
        self.CombInstrumentID=tou(CombInstrumentID)
        self.vcmap={'Direction': {"'1'": '卖', "'0'": '买'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['LegID', 'LegInstrumentID', 'LegMultiple', 'Direction', 'ImplyLevel', 'CombInstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('LegID', u'单腿编号'),('LegInstrumentID', u'单腿合约代码'),('LegMultiple', u'单腿乘数'),('Direction', u'买卖方向'),('ImplyLevel', u'派生层数'),('CombInstrumentID', u'组合合约代码')]])
    def getval(self, n):
        if n in ['Direction']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcContractBankField:
    def __init__(self, BrokerID="", BankID="", BankName="", BankBrchID=""):
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.BankName=tou(BankName)
        self.BankBrchID=tou(BankBrchID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'BankID', 'BankName', 'BankBrchID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('BankID', u'银行代码'),('BankName', u'银行名称'),('BankBrchID', u'银行分中心代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcExchangeField:
    def __init__(self, ExchangeProperty='0', ExchangeName="", ExchangeID=""):
        self.ExchangeProperty=tou(ExchangeProperty)
        self.ExchangeName=tou(ExchangeName)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={'ExchangeProperty': {"'1'": '根据成交生成报单', "'0'": '正常'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeProperty', 'ExchangeName', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeProperty', u'交易所属性'),('ExchangeName', u'交易所名称'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in ['ExchangeProperty']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcDRTransferField:
    def __init__(self, OrigDRIdentityID=0, DestDRIdentityID=0, DestBrokerID="", OrigBrokerID=""):
        self.OrigDRIdentityID=OrigDRIdentityID
        self.DestDRIdentityID=DestDRIdentityID
        self.DestBrokerID=tou(DestBrokerID)
        self.OrigBrokerID=tou(OrigBrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OrigDRIdentityID', 'DestDRIdentityID', 'DestBrokerID', 'OrigBrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OrigDRIdentityID', u'原交易中心代码'),('DestDRIdentityID', u'目标交易中心代码'),('DestBrokerID', u'目标易用单元代码'),('OrigBrokerID', u'原应用单元代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInstrumentMarginRateField:
    def __init__(self, BrokerID="", ShortMarginRatioByVolume=0, InvestorRange='1', InvestorID="", InstrumentID="", IsRelative=0, ShortMarginRatioByMoney=0, HedgeFlag='1', LongMarginRatioByVolume=0, LongMarginRatioByMoney=0):
        self.BrokerID=tou(BrokerID)
        self.ShortMarginRatioByVolume=ShortMarginRatioByVolume
        self.InvestorRange=tou(InvestorRange)
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.IsRelative=IsRelative
        self.ShortMarginRatioByMoney=ShortMarginRatioByMoney
        self.HedgeFlag=tou(HedgeFlag)
        self.LongMarginRatioByVolume=LongMarginRatioByVolume
        self.LongMarginRatioByMoney=LongMarginRatioByMoney
        self.vcmap={'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}, 'InvestorRange': {"'1'": '所有', "'2'": '投资者组', "'3'": '单一投资者'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'ShortMarginRatioByVolume', 'InvestorRange', 'InvestorID', 'InstrumentID', 'IsRelative', 'ShortMarginRatioByMoney', 'HedgeFlag', 'LongMarginRatioByVolume', 'LongMarginRatioByMoney']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('ShortMarginRatioByVolume', u'空头保证金费'),('InvestorRange', u'投资者范围'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('IsRelative', u'是否相对交易所收取'),('ShortMarginRatioByMoney', u'空头保证金率'),('HedgeFlag', u'投机套保标志'),('LongMarginRatioByVolume', u'多头保证金费'),('LongMarginRatioByMoney', u'多头保证金率')]])
    def getval(self, n):
        if n in ['InvestorRange', 'HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSecAgentACIDMapField:
    def __init__(self, BrokerID="", BrokerSecAgentID="", CurrencyID="", AccountID="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.BrokerSecAgentID=tou(BrokerSecAgentID)
        self.CurrencyID=tou(CurrencyID)
        self.AccountID=tou(AccountID)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'BrokerSecAgentID', 'CurrencyID', 'AccountID', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('BrokerSecAgentID', u'境外中介机构资金帐号'),('CurrencyID', u'币种'),('AccountID', u'资金账户'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSyncStatusField:
    def __init__(self, TradingDay="", DataSyncStatus='1'):
        self.TradingDay=tou(TradingDay)
        self.DataSyncStatus=tou(DataSyncStatus)
        self.vcmap={'DataSyncStatus': {"'1'": '未同步', "'2'": '同步中', "'3'": '已同步'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'DataSyncStatus']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('DataSyncStatus', u'数据同步状态')]])
    def getval(self, n):
        if n in ['DataSyncStatus']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTradeField:
    def __init__(self, TradingDay="", TradeDate="", ClientID="", PriceSource='0', TradeType='#', UserID="", Direction='0', HedgeFlag='1', TradeID="", ClearingPartID="", ParticipantID="", BrokerOrderSeq=0, ExchangeInstID="", InstrumentID="", ExchangeID="", BrokerID="", OrderSysID="", SequenceNo=0, TraderID="", OrderLocalID="", OffsetFlag='0', TradeSource='0', SettlementID=0, TradingRole='1', Price=0, Volume=0, OrderRef="", BusinessUnit="", InvestorID="", TradeTime=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.ClientID=tou(ClientID)
        self.PriceSource=tou(PriceSource)
        self.TradeType=tou(TradeType)
        self.UserID=tou(UserID)
        self.Direction=tou(Direction)
        self.HedgeFlag=tou(HedgeFlag)
        self.TradeID=tou(TradeID)
        self.ClearingPartID=tou(ClearingPartID)
        self.ParticipantID=tou(ParticipantID)
        self.BrokerOrderSeq=BrokerOrderSeq
        self.ExchangeInstID=tou(ExchangeInstID)
        self.InstrumentID=tou(InstrumentID)
        self.ExchangeID=tou(ExchangeID)
        self.BrokerID=tou(BrokerID)
        self.OrderSysID=tou(OrderSysID)
        self.SequenceNo=SequenceNo
        self.TraderID=tou(TraderID)
        self.OrderLocalID=tou(OrderLocalID)
        self.OffsetFlag=tou(OffsetFlag)
        self.TradeSource=tou(TradeSource)
        self.SettlementID=SettlementID
        self.TradingRole=tou(TradingRole)
        self.Price=Price
        self.Volume=Volume
        self.OrderRef=tou(OrderRef)
        self.BusinessUnit=tou(BusinessUnit)
        self.InvestorID=tou(InvestorID)
        self.TradeTime=tou(TradeTime)
        self.vcmap={'TradingRole': {"'1'": '代理', "'2'": '自营', "'3'": '做市商'}, 'TradeSource': {"'1'": '来自查询', "'0'": '来自交易所普通回报'}, 'PriceSource': {"'1'": '买委托价', "'2'": '卖委托价', "'0'": '前成交价'}, 'TradeType': {"'0'": '普通成交', "'1'": '期权执行', "'4'": '组合衍生成交', "'3'": '期转现衍生成交', "'2'": 'OTC成交', "'#'": '组合持仓拆分为单一持仓,初始化不应包含该类型的持仓'}, 'OffsetFlag': {"'6'": '本地强平', "'0'": '开仓', "'1'": '平仓', "'4'": '平昨', "'2'": '强平', "'5'": '强减', "'3'": '平今'}, 'Direction': {"'1'": '卖', "'0'": '买'}, 'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'ClientID', 'PriceSource', 'TradeType', 'UserID', 'Direction', 'HedgeFlag', 'TradeID', 'ClearingPartID', 'ParticipantID', 'BrokerOrderSeq', 'ExchangeInstID', 'InstrumentID', 'ExchangeID', 'BrokerID', 'OrderSysID', 'SequenceNo', 'TraderID', 'OrderLocalID', 'OffsetFlag', 'TradeSource', 'SettlementID', 'TradingRole', 'Price', 'Volume', 'OrderRef', 'BusinessUnit', 'InvestorID', 'TradeTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('TradeDate', u'成交时期'),('ClientID', u'客户代码'),('PriceSource', u'成交价来源'),('TradeType', u'成交类型'),('UserID', u'用户代码'),('Direction', u'买卖方向'),('HedgeFlag', u'投机套保标志'),('TradeID', u'成交编号'),('ClearingPartID', u'结算会员编号'),('ParticipantID', u'会员代码'),('BrokerOrderSeq', u'经纪公司报单编号'),('ExchangeInstID', u'合约在交易所的代码'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码'),('BrokerID', u'经纪公司代码'),('OrderSysID', u'报单编号'),('SequenceNo', u'序号'),('TraderID', u'交易所交易员代码'),('OrderLocalID', u'本地报单编号'),('OffsetFlag', u'开平标志'),('TradeSource', u'成交来源'),('SettlementID', u'结算编号'),('TradingRole', u'交易角色'),('Price', u'价格'),('Volume', u'数量'),('OrderRef', u'报单引用'),('BusinessUnit', u'业务单元'),('InvestorID', u'投资者代码'),('TradeTime', u'成交时间')]])
    def getval(self, n):
        if n in ['PriceSource', 'TradeType', 'Direction', 'HedgeFlag', 'OffsetFlag', 'TradeSource', 'TradingRole']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcVerifyFuturePasswordAndCustInfoField:
    def __init__(self, CustType='0', IdentifiedCardNo="", IdCardType='0', AccountID="", CustomerName="", CurrencyID="", Password=""):
        self.CustType=tou(CustType)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.AccountID=tou(AccountID)
        self.CustomerName=tou(CustomerName)
        self.CurrencyID=tou(CurrencyID)
        self.Password=tou(Password)
        self.vcmap={'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CustType', 'IdentifiedCardNo', 'IdCardType', 'AccountID', 'CustomerName', 'CurrencyID', 'Password']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CustType', u'客户类型'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('AccountID', u'投资者帐号'),('CustomerName', u'客户姓名'),('CurrencyID', u'币种代码'),('Password', u'期货密码')]])
    def getval(self, n):
        if n in ['CustType', 'IdCardType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTransferSerialField:
    def __init__(self, TradingDay="", FutureAccType='1', TradeDate="", IdentifiedCardNo="", IdCardType='0', BrokerFee=0, ErrorMsg="", BankSerial="", SessionID=0, TradeAmount=0, ErrorID=0, BankBranchID="", TradeCode="", BankAccType='1', BrokerBranchID="", BrokerID="", BankID="", AccountID="", PlateSerial=0, CustFee=0, BankNewAccount="", FutureSerial=0, BankAccount="", InvestorID="", CurrencyID="", AvailabilityFlag='0', OperatorCode="", TradeTime=""):
        self.TradingDay=tou(TradingDay)
        self.FutureAccType=tou(FutureAccType)
        self.TradeDate=tou(TradeDate)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.BrokerFee=BrokerFee
        self.ErrorMsg=tou(ErrorMsg)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.TradeAmount=TradeAmount
        self.ErrorID=ErrorID
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.BankAccType=tou(BankAccType)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.AccountID=tou(AccountID)
        self.PlateSerial=PlateSerial
        self.CustFee=CustFee
        self.BankNewAccount=tou(BankNewAccount)
        self.FutureSerial=FutureSerial
        self.BankAccount=tou(BankAccount)
        self.InvestorID=tou(InvestorID)
        self.CurrencyID=tou(CurrencyID)
        self.AvailabilityFlag=tou(AvailabilityFlag)
        self.OperatorCode=tou(OperatorCode)
        self.TradeTime=tou(TradeTime)
        self.vcmap={'FutureAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'AvailabilityFlag': {"'1'": '有效', "'2'": '冲正', "'0'": '未确认'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'FutureAccType', 'TradeDate', 'IdentifiedCardNo', 'IdCardType', 'BrokerFee', 'ErrorMsg', 'BankSerial', 'SessionID', 'TradeAmount', 'ErrorID', 'BankBranchID', 'TradeCode', 'BankAccType', 'BrokerBranchID', 'BrokerID', 'BankID', 'AccountID', 'PlateSerial', 'CustFee', 'BankNewAccount', 'FutureSerial', 'BankAccount', 'InvestorID', 'CurrencyID', 'AvailabilityFlag', 'OperatorCode', 'TradeTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日期'),('FutureAccType', u'期货公司帐号类型'),('TradeDate', u'交易发起方日期'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('BrokerFee', u'应收期货公司费用'),('ErrorMsg', u'错误信息'),('BankSerial', u'银行流水号'),('SessionID', u'会话编号'),('TradeAmount', u'交易金额'),('ErrorID', u'错误代码'),('BankBranchID', u'银行分支机构编码'),('TradeCode', u'交易代码'),('BankAccType', u'银行帐号类型'),('BrokerBranchID', u'期商分支机构代码'),('BrokerID', u'期货公司编码'),('BankID', u'银行编码'),('AccountID', u'投资者帐号'),('PlateSerial', u'平台流水号'),('CustFee', u'应收客户费用'),('BankNewAccount', u'新银行帐号'),('FutureSerial', u'期货公司流水号'),('BankAccount', u'银行帐号'),('InvestorID', u'投资者代码'),('CurrencyID', u'币种代码'),('AvailabilityFlag', u'有效标志'),('OperatorCode', u'操作员'),('TradeTime', u'交易时间')]])
    def getval(self, n):
        if n in ['FutureAccType', 'IdCardType', 'BankAccType', 'AvailabilityFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcCommRateModelField:
    def __init__(self, BrokerID="", CommModelID="", CommModelName=""):
        self.BrokerID=tou(BrokerID)
        self.CommModelID=tou(CommModelID)
        self.CommModelName=tou(CommModelName)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'CommModelID', 'CommModelName']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('CommModelID', u'手续费率模板代码'),('CommModelName', u'模板名称')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarginModelField:
    def __init__(self, BrokerID="", MarginModelName="", MarginModelID=""):
        self.BrokerID=tou(BrokerID)
        self.MarginModelName=tou(MarginModelName)
        self.MarginModelID=tou(MarginModelID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'MarginModelName', 'MarginModelID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('MarginModelName', u'模板名称'),('MarginModelID', u'保证金率模板代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQueryMaxOrderVolumeWithPriceField:
    def __init__(self, BrokerID="", Price=0, InvestorID="", InstrumentID="", Direction='0', MaxVolume=0, HedgeFlag='1', OffsetFlag='0'):
        self.BrokerID=tou(BrokerID)
        self.Price=Price
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.Direction=tou(Direction)
        self.MaxVolume=MaxVolume
        self.HedgeFlag=tou(HedgeFlag)
        self.OffsetFlag=tou(OffsetFlag)
        self.vcmap={'OffsetFlag': {"'6'": '本地强平', "'0'": '开仓', "'1'": '平仓', "'4'": '平昨', "'2'": '强平', "'5'": '强减', "'3'": '平今'}, 'Direction': {"'1'": '卖', "'0'": '买'}, 'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'Price', 'InvestorID', 'InstrumentID', 'Direction', 'MaxVolume', 'HedgeFlag', 'OffsetFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('Price', u'报单价格'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('Direction', u'买卖方向'),('MaxVolume', u'最大允许报单数量'),('HedgeFlag', u'投机套保标志'),('OffsetFlag', u'开平标志')]])
    def getval(self, n):
        if n in ['Direction', 'HedgeFlag', 'OffsetFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataAsk23Field:
    def __init__(self, AskPrice2=0, AskPrice3=0, AskVolume2=0, AskVolume3=0):
        self.AskPrice2=AskPrice2
        self.AskPrice3=AskPrice3
        self.AskVolume2=AskVolume2
        self.AskVolume3=AskVolume3
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['AskPrice2', 'AskPrice3', 'AskVolume2', 'AskVolume3']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('AskPrice2', u'申卖价二'),('AskPrice3', u'申卖价三'),('AskVolume2', u'申卖量二'),('AskVolume3', u'申卖量三')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcLogoutAllField:
    def __init__(self, FrontID=0, SystemName="", SessionID=0):
        self.FrontID=FrontID
        self.SystemName=tou(SystemName)
        self.SessionID=SessionID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'SystemName', 'SessionID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('SystemName', u'系统名称'),('SessionID', u'会话编号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcCommPhaseField:
    def __init__(self, TradingDay="", SystemID="", CommPhaseNo=0):
        self.TradingDay=tou(TradingDay)
        self.SystemID=tou(SystemID)
        self.CommPhaseNo=CommPhaseNo
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'SystemID', 'CommPhaseNo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('SystemID', u'系统编号'),('CommPhaseNo', u'通讯时段编号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcErrOrderActionField:
    def __init__(self, FrontID=0, ClientID="", OrderActionRef=0, StatusMsg="", ActionLocalID="", BusinessUnit="", SessionID=0, ActionFlag='0', ParticipantID="", InstrumentID="", ErrorMsg="", ActionDate="", ExchangeID="", RequestID=0, BrokerID="", OrderSysID="", TraderID="", OrderLocalID="", InstallID=0, ActionTime="", LimitPrice=0, OrderActionStatus='a', UserID="", ErrorID=0, OrderRef="", VolumeChange=0, InvestorID=""):
        self.FrontID=FrontID
        self.ClientID=tou(ClientID)
        self.OrderActionRef=OrderActionRef
        self.StatusMsg=tou(StatusMsg)
        self.ActionLocalID=tou(ActionLocalID)
        self.BusinessUnit=tou(BusinessUnit)
        self.SessionID=SessionID
        self.ActionFlag=tou(ActionFlag)
        self.ParticipantID=tou(ParticipantID)
        self.InstrumentID=tou(InstrumentID)
        self.ErrorMsg=tou(ErrorMsg)
        self.ActionDate=tou(ActionDate)
        self.ExchangeID=tou(ExchangeID)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.OrderSysID=tou(OrderSysID)
        self.TraderID=tou(TraderID)
        self.OrderLocalID=tou(OrderLocalID)
        self.InstallID=InstallID
        self.ActionTime=tou(ActionTime)
        self.LimitPrice=LimitPrice
        self.OrderActionStatus=tou(OrderActionStatus)
        self.UserID=tou(UserID)
        self.ErrorID=ErrorID
        self.OrderRef=tou(OrderRef)
        self.VolumeChange=VolumeChange
        self.InvestorID=tou(InvestorID)
        self.vcmap={'OrderActionStatus': {"'a'": '已经提交', "'b'": '已经接受', "'c'": '已经被拒绝'}, 'ActionFlag': {"'0'": '删除', "'3'": '修改'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'ClientID', 'OrderActionRef', 'StatusMsg', 'ActionLocalID', 'BusinessUnit', 'SessionID', 'ActionFlag', 'ParticipantID', 'InstrumentID', 'ErrorMsg', 'ActionDate', 'ExchangeID', 'RequestID', 'BrokerID', 'OrderSysID', 'TraderID', 'OrderLocalID', 'InstallID', 'ActionTime', 'LimitPrice', 'OrderActionStatus', 'UserID', 'ErrorID', 'OrderRef', 'VolumeChange', 'InvestorID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('ClientID', u'客户代码'),('OrderActionRef', u'报单操作引用'),('StatusMsg', u'状态信息'),('ActionLocalID', u'操作本地编号'),('BusinessUnit', u'业务单元'),('SessionID', u'会话编号'),('ActionFlag', u'操作标志'),('ParticipantID', u'会员代码'),('InstrumentID', u'合约代码'),('ErrorMsg', u'错误信息'),('ActionDate', u'操作日期'),('ExchangeID', u'交易所代码'),('RequestID', u'请求编号'),('BrokerID', u'经纪公司代码'),('OrderSysID', u'报单编号'),('TraderID', u'交易所交易员代码'),('OrderLocalID', u'本地报单编号'),('InstallID', u'安装编号'),('ActionTime', u'操作时间'),('LimitPrice', u'价格'),('OrderActionStatus', u'报单操作状态'),('UserID', u'用户代码'),('ErrorID', u'错误代码'),('OrderRef', u'报单引用'),('VolumeChange', u'数量变化'),('InvestorID', u'投资者代码')]])
    def getval(self, n):
        if n in ['ActionFlag', 'OrderActionStatus']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcVerifyInvestorPasswordField:
    def __init__(self, InvestorID="", BrokerID="", Password=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.Password=tou(Password)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'Password']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('Password', u'密码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcVerifyCustInfoField:
    def __init__(self, CustomerName="", CustType='0', IdentifiedCardNo="", IdCardType='0'):
        self.CustomerName=tou(CustomerName)
        self.CustType=tou(CustType)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.vcmap={'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['CustomerName', 'CustType', 'IdentifiedCardNo', 'IdCardType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('CustomerName', u'客户姓名'),('CustType', u'客户类型'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型')]])
    def getval(self, n):
        if n in ['CustType', 'IdCardType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTradingAccountPasswordUpdateV1Field:
    def __init__(self, InvestorID="", BrokerID="", NewPassword="", OldPassword=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.NewPassword=tou(NewPassword)
        self.OldPassword=tou(OldPassword)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'NewPassword', 'OldPassword']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('NewPassword', u'新的口令'),('OldPassword', u'原来的口令')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataAsk45Field:
    def __init__(self, AskVolume4=0, AskVolume5=0, AskPrice4=0, AskPrice5=0):
        self.AskVolume4=AskVolume4
        self.AskVolume5=AskVolume5
        self.AskPrice4=AskPrice4
        self.AskPrice5=AskPrice5
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['AskVolume4', 'AskVolume5', 'AskPrice4', 'AskPrice5']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('AskVolume4', u'申卖量四'),('AskVolume5', u'申卖量五'),('AskPrice4', u'申卖价四'),('AskPrice5', u'申卖价五')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcUserSessionField:
    def __init__(self, FrontID=0, BrokerID="", IPAddress="", MacAddress="", InterfaceProductInfo="", UserProductInfo="", UserID="", SessionID=0, LoginTime="", ProtocolInfo="", LoginDate=""):
        self.FrontID=FrontID
        self.BrokerID=tou(BrokerID)
        self.IPAddress=tou(IPAddress)
        self.MacAddress=tou(MacAddress)
        self.InterfaceProductInfo=tou(InterfaceProductInfo)
        self.UserProductInfo=tou(UserProductInfo)
        self.UserID=tou(UserID)
        self.SessionID=SessionID
        self.LoginTime=tou(LoginTime)
        self.ProtocolInfo=tou(ProtocolInfo)
        self.LoginDate=tou(LoginDate)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'BrokerID', 'IPAddress', 'MacAddress', 'InterfaceProductInfo', 'UserProductInfo', 'UserID', 'SessionID', 'LoginTime', 'ProtocolInfo', 'LoginDate']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('BrokerID', u'经纪公司代码'),('IPAddress', u'IP地址'),('MacAddress', u'Mac地址'),('InterfaceProductInfo', u'接口端产品信息'),('UserProductInfo', u'用户端产品信息'),('UserID', u'用户代码'),('SessionID', u'会话编号'),('LoginTime', u'登录时间'),('ProtocolInfo', u'协议信息'),('LoginDate', u'登录日期')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSuperUserFunctionField:
    def __init__(self, UserID="", FunctionCode='1'):
        self.UserID=tou(UserID)
        self.FunctionCode=tou(FunctionCode)
        self.vcmap={'FunctionCode': {"'F'": '删除未知单', "'9'": '同步经纪公司数据', "'A'": '批量同步经纪公司数据', "'4'": '变更经纪公司口令', "'B'": '超级查询', "'5'": '变更投资者口令', "'C'": '预埋报单插入', "'6'": '报单插入', "'7'": '报单操作', "'1'": '数据异步化', "'D'": '预埋报单操作', "'2'": '强制用户登出', "'E'": '同步动态令牌', "'8'": '同步系统数据', "'3'": '变更管理用户口令'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'FunctionCode']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('FunctionCode', u'功能代码')]])
    def getval(self, n):
        if n in ['FunctionCode']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInvestorProductGroupMarginField:
    def __init__(self, TradingDay="", LongUseMargin=0, ShortUseMargin=0, ExchMargin=0, CloseProfit=0, ShortOffsetAmount=0, HedgeFlag='1', ExchOffsetAmount=0, LongExchOffsetAmount=0, LongOffsetAmount=0, UseMargin=0, OffsetAmount=0, FrozenCash=0, SettlementID=0, PositionProfit=0, LongExchMargin=0, BrokerID="", CashIn=0, FrozenCommission=0, ShortExchMargin=0, ShortExchOffsetAmount=0, Commission=0, ShortFrozenMargin=0, LongFrozenMargin=0, ProductGroupID="", InvestorID="", FrozenMargin=0):
        self.TradingDay=tou(TradingDay)
        self.LongUseMargin=LongUseMargin
        self.ShortUseMargin=ShortUseMargin
        self.ExchMargin=ExchMargin
        self.CloseProfit=CloseProfit
        self.ShortOffsetAmount=ShortOffsetAmount
        self.HedgeFlag=tou(HedgeFlag)
        self.ExchOffsetAmount=ExchOffsetAmount
        self.LongExchOffsetAmount=LongExchOffsetAmount
        self.LongOffsetAmount=LongOffsetAmount
        self.UseMargin=UseMargin
        self.OffsetAmount=OffsetAmount
        self.FrozenCash=FrozenCash
        self.SettlementID=SettlementID
        self.PositionProfit=PositionProfit
        self.LongExchMargin=LongExchMargin
        self.BrokerID=tou(BrokerID)
        self.CashIn=CashIn
        self.FrozenCommission=FrozenCommission
        self.ShortExchMargin=ShortExchMargin
        self.ShortExchOffsetAmount=ShortExchOffsetAmount
        self.Commission=Commission
        self.ShortFrozenMargin=ShortFrozenMargin
        self.LongFrozenMargin=LongFrozenMargin
        self.ProductGroupID=tou(ProductGroupID)
        self.InvestorID=tou(InvestorID)
        self.FrozenMargin=FrozenMargin
        self.vcmap={'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'LongUseMargin', 'ShortUseMargin', 'ExchMargin', 'CloseProfit', 'ShortOffsetAmount', 'HedgeFlag', 'ExchOffsetAmount', 'LongExchOffsetAmount', 'LongOffsetAmount', 'UseMargin', 'OffsetAmount', 'FrozenCash', 'SettlementID', 'PositionProfit', 'LongExchMargin', 'BrokerID', 'CashIn', 'FrozenCommission', 'ShortExchMargin', 'ShortExchOffsetAmount', 'Commission', 'ShortFrozenMargin', 'LongFrozenMargin', 'ProductGroupID', 'InvestorID', 'FrozenMargin']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('LongUseMargin', u'多头保证金'),('ShortUseMargin', u'空头保证金'),('ExchMargin', u'交易所保证金'),('CloseProfit', u'平仓盈亏'),('ShortOffsetAmount', u'空头折抵总金额'),('HedgeFlag', u'投机套保标志'),('ExchOffsetAmount', u'交易所折抵总金额'),('LongExchOffsetAmount', u'交易所多头折抵总金额'),('LongOffsetAmount', u'多头折抵总金额'),('UseMargin', u'占用的保证金'),('OffsetAmount', u'折抵总金额'),('FrozenCash', u'冻结的资金'),('SettlementID', u'结算编号'),('PositionProfit', u'持仓盈亏'),('LongExchMargin', u'交易所多头保证金'),('BrokerID', u'经纪公司代码'),('CashIn', u'资金差额'),('FrozenCommission', u'冻结的手续费'),('ShortExchMargin', u'交易所空头保证金'),('ShortExchOffsetAmount', u'交易所空头折抵总金额'),('Commission', u'手续费'),('ShortFrozenMargin', u'空头冻结的保证金'),('LongFrozenMargin', u'多头冻结的保证金'),('ProductGroupID', u'品种/跨品种标示'),('InvestorID', u'投资者代码'),('FrozenMargin', u'冻结的保证金')]])
    def getval(self, n):
        if n in ['HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerTradingAlgosField:
    def __init__(self, BrokerID="", HandleTradingAccountAlgoID='1', HandlePositionAlgoID='1', InstrumentID="", FindMarginRateAlgoID='1', ExchangeID=""):
        self.BrokerID=tou(BrokerID)
        self.HandleTradingAccountAlgoID=tou(HandleTradingAccountAlgoID)
        self.HandlePositionAlgoID=tou(HandlePositionAlgoID)
        self.InstrumentID=tou(InstrumentID)
        self.FindMarginRateAlgoID=tou(FindMarginRateAlgoID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={'HandleTradingAccountAlgoID': {"'1'": '基本', "'2'": '大连商品交易所', "'3'": '郑州商品交易所'}, 'HandlePositionAlgoID': {"'1'": '基本', "'2'": '大连商品交易所', "'3'": '郑州商品交易所'}, 'FindMarginRateAlgoID': {"'1'": '基本', "'2'": '大连商品交易所', "'3'": '郑州商品交易所'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'HandleTradingAccountAlgoID', 'HandlePositionAlgoID', 'InstrumentID', 'FindMarginRateAlgoID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('HandleTradingAccountAlgoID', u'资金处理算法编号'),('HandlePositionAlgoID', u'持仓处理算法编号'),('InstrumentID', u'合约代码'),('FindMarginRateAlgoID', u'寻找保证金率算法编号'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in ['HandleTradingAccountAlgoID', 'HandlePositionAlgoID', 'FindMarginRateAlgoID']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInvestorPositionDetailField:
    def __init__(self, TradingDay="", ExchMargin=0, TradeType='#', Direction='0', Margin=0, HedgeFlag='1', ExchangeID="", LastSettlementPrice=0, CombInstrumentID="", InstrumentID="", PositionProfitByDate=0, CloseProfitByTrade=0, TradeID="", BrokerID="", SettlementID=0, OpenDate="", CloseProfitByDate=0, CloseAmount=0, CloseVolume=0, MarginRateByVolume=0, PositionProfitByTrade=0, Volume=0, SettlementPrice=0, MarginRateByMoney=0, InvestorID="", OpenPrice=0):
        self.TradingDay=tou(TradingDay)
        self.ExchMargin=ExchMargin
        self.TradeType=tou(TradeType)
        self.Direction=tou(Direction)
        self.Margin=Margin
        self.HedgeFlag=tou(HedgeFlag)
        self.ExchangeID=tou(ExchangeID)
        self.LastSettlementPrice=LastSettlementPrice
        self.CombInstrumentID=tou(CombInstrumentID)
        self.InstrumentID=tou(InstrumentID)
        self.PositionProfitByDate=PositionProfitByDate
        self.CloseProfitByTrade=CloseProfitByTrade
        self.TradeID=tou(TradeID)
        self.BrokerID=tou(BrokerID)
        self.SettlementID=SettlementID
        self.OpenDate=tou(OpenDate)
        self.CloseProfitByDate=CloseProfitByDate
        self.CloseAmount=CloseAmount
        self.CloseVolume=CloseVolume
        self.MarginRateByVolume=MarginRateByVolume
        self.PositionProfitByTrade=PositionProfitByTrade
        self.Volume=Volume
        self.SettlementPrice=SettlementPrice
        self.MarginRateByMoney=MarginRateByMoney
        self.InvestorID=tou(InvestorID)
        self.OpenPrice=OpenPrice
        self.vcmap={'Direction': {"'1'": '卖', "'0'": '买'}, 'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}, 'TradeType': {"'0'": '普通成交', "'1'": '期权执行', "'4'": '组合衍生成交', "'3'": '期转现衍生成交', "'2'": 'OTC成交', "'#'": '组合持仓拆分为单一持仓,初始化不应包含该类型的持仓'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'ExchMargin', 'TradeType', 'Direction', 'Margin', 'HedgeFlag', 'ExchangeID', 'LastSettlementPrice', 'CombInstrumentID', 'InstrumentID', 'PositionProfitByDate', 'CloseProfitByTrade', 'TradeID', 'BrokerID', 'SettlementID', 'OpenDate', 'CloseProfitByDate', 'CloseAmount', 'CloseVolume', 'MarginRateByVolume', 'PositionProfitByTrade', 'Volume', 'SettlementPrice', 'MarginRateByMoney', 'InvestorID', 'OpenPrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('ExchMargin', u'交易所保证金'),('TradeType', u'成交类型'),('Direction', u'买卖'),('Margin', u'投资者保证金'),('HedgeFlag', u'投机套保标志'),('ExchangeID', u'交易所代码'),('LastSettlementPrice', u'昨结算价'),('CombInstrumentID', u'组合合约代码'),('InstrumentID', u'合约代码'),('PositionProfitByDate', u'逐日盯市持仓盈亏'),('CloseProfitByTrade', u'逐笔对冲平仓盈亏'),('TradeID', u'成交编号'),('BrokerID', u'经纪公司代码'),('SettlementID', u'结算编号'),('OpenDate', u'开仓日期'),('CloseProfitByDate', u'逐日盯市平仓盈亏'),('CloseAmount', u'平仓金额'),('CloseVolume', u'平仓量'),('MarginRateByVolume', u'保证金率(按手数)'),('PositionProfitByTrade', u'逐笔对冲持仓盈亏'),('Volume', u'数量'),('SettlementPrice', u'结算价'),('MarginRateByMoney', u'保证金率'),('InvestorID', u'投资者代码'),('OpenPrice', u'开仓价')]])
    def getval(self, n):
        if n in ['TradeType', 'Direction', 'HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQueryMaxOrderVolumeField:
    def __init__(self, BrokerID="", InvestorID="", InstrumentID="", Direction='0', MaxVolume=0, HedgeFlag='1', OffsetFlag='0'):
        self.BrokerID=tou(BrokerID)
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.Direction=tou(Direction)
        self.MaxVolume=MaxVolume
        self.HedgeFlag=tou(HedgeFlag)
        self.OffsetFlag=tou(OffsetFlag)
        self.vcmap={'OffsetFlag': {"'6'": '本地强平', "'0'": '开仓', "'1'": '平仓', "'4'": '平昨', "'2'": '强平', "'5'": '强减', "'3'": '平今'}, 'Direction': {"'1'": '卖', "'0'": '买'}, 'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'InvestorID', 'InstrumentID', 'Direction', 'MaxVolume', 'HedgeFlag', 'OffsetFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('Direction', u'买卖方向'),('MaxVolume', u'最大允许报单数量'),('HedgeFlag', u'投机套保标志'),('OffsetFlag', u'开平标志')]])
    def getval(self, n):
        if n in ['Direction', 'HedgeFlag', 'OffsetFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInputOrderField:
    def __init__(self, UserForceClose=0, UserID="", Direction='0', GTDDate="", CombHedgeFlag="", StopPrice=0, BusinessUnit="", InstrumentID="", VolumeCondition='1', MinVolume=0, RequestID=0, BrokerID="", IsSwapOrder=0, OrderPriceType='1', LimitPrice=0, ContingentCondition='1', TimeCondition='1', OrderRef="", IsAutoSuspend=0, InvestorID="", VolumeTotalOriginal=0, ForceCloseReason='0', CombOffsetFlag=""):
        self.UserForceClose=UserForceClose
        self.UserID=tou(UserID)
        self.Direction=tou(Direction)
        self.GTDDate=tou(GTDDate)
        self.CombHedgeFlag=tou(CombHedgeFlag)
        self.StopPrice=StopPrice
        self.BusinessUnit=tou(BusinessUnit)
        self.InstrumentID=tou(InstrumentID)
        self.VolumeCondition=tou(VolumeCondition)
        self.MinVolume=MinVolume
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.IsSwapOrder=IsSwapOrder
        self.OrderPriceType=tou(OrderPriceType)
        self.LimitPrice=LimitPrice
        self.ContingentCondition=tou(ContingentCondition)
        self.TimeCondition=tou(TimeCondition)
        self.OrderRef=tou(OrderRef)
        self.IsAutoSuspend=IsAutoSuspend
        self.InvestorID=tou(InvestorID)
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ForceCloseReason=tou(ForceCloseReason)
        self.CombOffsetFlag=tou(CombOffsetFlag)
        self.vcmap={'VolumeCondition': {"'1'": '任何数量', "'2'": '最小数量', "'3'": '全部数量'}, 'ContingentCondition': {"'F'": '买一价小于条件价', "'9'": '卖一价大于条件价', "'A'": '卖一价大于等于条件价', "'4'": '预埋单', "'B'": '卖一价小于条件价', "'5'": '最新价大于条件价', "'H'": '买一价小于等于条件价', "'C'": '卖一价小于等于条件价', "'6'": '最新价大于等于条件价', "'7'": '最新价小于条件价', "'1'": '立即', "'D'": '买一价大于条件价', "'2'": '止损', "'E'": '买一价大于等于条件价', "'8'": '最新价小于等于条件价', "'3'": '止赢'}, 'ForceCloseReason': {"'6'": '其它', "'7'": '自然人临近交割', "'0'": '非强平', "'1'": '资金不足', "'4'": '持仓非整数倍', "'2'": '客户超仓', "'5'": '违规', "'3'": '会员超仓'}, 'OrderPriceType': {"'F'": '买一价浮动上浮3个ticks', "'9'": '卖一价浮动上浮1个ticks', "'A'": '卖一价浮动上浮2个ticks', "'4'": '最新价', "'B'": '卖一价浮动上浮3个ticks', "'5'": '最新价浮动上浮1个ticks', "'C'": '买一价', "'6'": '最新价浮动上浮2个ticks', "'7'": '最新价浮动上浮3个ticks', "'1'": '任意价', "'D'": '买一价浮动上浮1个ticks', "'2'": '限价', "'E'": '买一价浮动上浮2个ticks', "'8'": '卖一价', "'3'": '最优价'}, 'Direction': {"'1'": '卖', "'0'": '买'}, 'TimeCondition': {"'6'": '集合竞价有效', "'1'": '立即完成，否则撤销', "'4'": '指定日期前有效', "'2'": '本节有效', "'5'": '撤销前有效', "'3'": '当日有效'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserForceClose', 'UserID', 'Direction', 'GTDDate', 'CombHedgeFlag', 'StopPrice', 'BusinessUnit', 'InstrumentID', 'VolumeCondition', 'MinVolume', 'RequestID', 'BrokerID', 'IsSwapOrder', 'OrderPriceType', 'LimitPrice', 'ContingentCondition', 'TimeCondition', 'OrderRef', 'IsAutoSuspend', 'InvestorID', 'VolumeTotalOriginal', 'ForceCloseReason', 'CombOffsetFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserForceClose', u'用户强评标志'),('UserID', u'用户代码'),('Direction', u'买卖方向'),('GTDDate', u'GTD日期'),('CombHedgeFlag', u'组合投机套保标志'),('StopPrice', u'止损价'),('BusinessUnit', u'业务单元'),('InstrumentID', u'合约代码'),('VolumeCondition', u'成交量类型'),('MinVolume', u'最小成交量'),('RequestID', u'请求编号'),('BrokerID', u'经纪公司代码'),('IsSwapOrder', u'互换单标志'),('OrderPriceType', u'报单价格条件'),('LimitPrice', u'价格'),('ContingentCondition', u'触发条件'),('TimeCondition', u'有效期类型'),('OrderRef', u'报单引用'),('IsAutoSuspend', u'自动挂起标志'),('InvestorID', u'投资者代码'),('VolumeTotalOriginal', u'数量'),('ForceCloseReason', u'强平原因'),('CombOffsetFlag', u'组合开平标志')]])
    def getval(self, n):
        if n in ['Direction', 'VolumeCondition', 'OrderPriceType', 'ContingentCondition', 'TimeCondition', 'ForceCloseReason']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRspFutureSignOutField:
    def __init__(self, TradingDay="", TradeDate="", DeviceID="", PlateSerial=0, UserID="", BankSerial="", SessionID=0, ErrorMsg="", ErrorID=0, LastFragment='0', BankBranchID="", TradeCode="", OperNo="", Digest="", RequestID=0, BrokerID="", BankID="", InstallID=0, TID=0, TradeTime="", CurrencyID="", BrokerBranchID="", BrokerIDByBank=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.DeviceID=tou(DeviceID)
        self.PlateSerial=PlateSerial
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.LastFragment=tou(LastFragment)
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.OperNo=tou(OperNo)
        self.Digest=tou(Digest)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.InstallID=InstallID
        self.TID=TID
        self.TradeTime=tou(TradeTime)
        self.CurrencyID=tou(CurrencyID)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'DeviceID', 'PlateSerial', 'UserID', 'BankSerial', 'SessionID', 'ErrorMsg', 'ErrorID', 'LastFragment', 'BankBranchID', 'TradeCode', 'OperNo', 'Digest', 'RequestID', 'BrokerID', 'BankID', 'InstallID', 'TID', 'TradeTime', 'CurrencyID', 'BrokerBranchID', 'BrokerIDByBank']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('TradeDate', u'交易日期'),('DeviceID', u'渠道标志'),('PlateSerial', u'银期平台消息流水号'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码'),('LastFragment', u'最后分片标志'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('OperNo', u'交易柜员'),('Digest', u'摘要'),('RequestID', u'请求编号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('InstallID', u'安装编号'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('CurrencyID', u'币种代码'),('BrokerBranchID', u'期商分支机构代码'),('BrokerIDByBank', u'期货公司银行编码')]])
    def getval(self, n):
        if n in ['LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSyncingInvestorGroupField:
    def __init__(self, InvestorGroupID="", BrokerID="", InvestorGroupName=""):
        self.InvestorGroupID=tou(InvestorGroupID)
        self.BrokerID=tou(BrokerID)
        self.InvestorGroupName=tou(InvestorGroupName)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorGroupID', 'BrokerID', 'InvestorGroupName']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorGroupID', u'投资者分组代码'),('BrokerID', u'经纪公司代码'),('InvestorGroupName', u'投资者分组名称')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryCommRateModelField:
    def __init__(self, BrokerID="", CommModelID=""):
        self.BrokerID=tou(BrokerID)
        self.CommModelID=tou(CommModelID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'CommModelID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('CommModelID', u'手续费率模板代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcUserIPField:
    def __init__(self, BrokerID="", IPMask="", IPAddress="", MacAddress="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.IPMask=tou(IPMask)
        self.IPAddress=tou(IPAddress)
        self.MacAddress=tou(MacAddress)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'IPMask', 'IPAddress', 'MacAddress', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('IPMask', u'IP地址掩码'),('IPAddress', u'IP地址'),('MacAddress', u'Mac地址'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcExchangeSequenceField:
    def __init__(self, MarketStatus='0', SequenceNo=0, ExchangeID=""):
        self.MarketStatus=tou(MarketStatus)
        self.SequenceNo=SequenceNo
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={'MarketStatus': {"'6'": '收盘', "'0'": '开盘前', "'1'": '非交易', "'4'": '集合竞价价格平衡', "'2'": '连续交易', "'5'": '集合竞价撮合', "'3'": '集合竞价报单'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MarketStatus', 'SequenceNo', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MarketStatus', u'合约交易状态'),('SequenceNo', u'序号'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in ['MarketStatus']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryTransferBankField:
    def __init__(self, BankID="", BankBrchID=""):
        self.BankID=tou(BankID)
        self.BankBrchID=tou(BankBrchID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankID', 'BankBrchID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankID', u'银行代码'),('BankBrchID', u'银行分中心代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTradingNoticeInfoField:
    def __init__(self, BrokerID="", SequenceNo=0, InvestorID="", SendTime="", FieldContent="", SequenceSeries=0):
        self.BrokerID=tou(BrokerID)
        self.SequenceNo=SequenceNo
        self.InvestorID=tou(InvestorID)
        self.SendTime=tou(SendTime)
        self.FieldContent=tou(FieldContent)
        self.SequenceSeries=SequenceSeries
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'SequenceNo', 'InvestorID', 'SendTime', 'FieldContent', 'SequenceSeries']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('SequenceNo', u'序列号'),('InvestorID', u'投资者代码'),('SendTime', u'发送时间'),('FieldContent', u'消息正文'),('SequenceSeries', u'序列系列号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInstrumentCommissionRateField:
    def __init__(self, OpenRatioByVolume=0, BrokerID="", OpenRatioByMoney=0, CloseRatioByMoney=0, InvestorRange='1', InvestorID="", InstrumentID="", CloseTodayRatioByMoney=0, CloseTodayRatioByVolume=0, CloseRatioByVolume=0):
        self.OpenRatioByVolume=OpenRatioByVolume
        self.BrokerID=tou(BrokerID)
        self.OpenRatioByMoney=OpenRatioByMoney
        self.CloseRatioByMoney=CloseRatioByMoney
        self.InvestorRange=tou(InvestorRange)
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.CloseTodayRatioByMoney=CloseTodayRatioByMoney
        self.CloseTodayRatioByVolume=CloseTodayRatioByVolume
        self.CloseRatioByVolume=CloseRatioByVolume
        self.vcmap={'InvestorRange': {"'1'": '所有', "'2'": '投资者组', "'3'": '单一投资者'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OpenRatioByVolume', 'BrokerID', 'OpenRatioByMoney', 'CloseRatioByMoney', 'InvestorRange', 'InvestorID', 'InstrumentID', 'CloseTodayRatioByMoney', 'CloseTodayRatioByVolume', 'CloseRatioByVolume']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OpenRatioByVolume', u'开仓手续费'),('BrokerID', u'经纪公司代码'),('OpenRatioByMoney', u'开仓手续费率'),('CloseRatioByMoney', u'平仓手续费率'),('InvestorRange', u'投资者范围'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('CloseTodayRatioByMoney', u'平今手续费率'),('CloseTodayRatioByVolume', u'平今手续费'),('CloseRatioByVolume', u'平仓手续费')]])
    def getval(self, n):
        if n in ['InvestorRange']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMulticastGroupInfoField:
    def __init__(self, GroupPort=0, GroupIP="", SourceIP=""):
        self.GroupPort=GroupPort
        self.GroupIP=tou(GroupIP)
        self.SourceIP=tou(SourceIP)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['GroupPort', 'GroupIP', 'SourceIP']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('GroupPort', u'组播组IP端口'),('GroupIP', u'组播组IP地址'),('SourceIP', u'源地址')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInvestorWithdrawAlgorithmField:
    def __init__(self, BrokerID="", FundMortgageRatio=0, InvestorRange='1', InvestorID="", CurrencyID="", UsingRatio=0):
        self.BrokerID=tou(BrokerID)
        self.FundMortgageRatio=FundMortgageRatio
        self.InvestorRange=tou(InvestorRange)
        self.InvestorID=tou(InvestorID)
        self.CurrencyID=tou(CurrencyID)
        self.UsingRatio=UsingRatio
        self.vcmap={'InvestorRange': {"'1'": '所有', "'2'": '投资者组', "'3'": '单一投资者'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'FundMortgageRatio', 'InvestorRange', 'InvestorID', 'CurrencyID', 'UsingRatio']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('FundMortgageRatio', u'货币质押比率'),('InvestorRange', u'投资者范围'),('InvestorID', u'投资者代码'),('CurrencyID', u'币种代码'),('UsingRatio', u'可提资金比例')]])
    def getval(self, n):
        if n in ['InvestorRange']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcChangeAccountField:
    def __init__(self, TradingDay="", ZipCode="", TradeDate="", BankPassWord="", IdentifiedCardNo="", IdCardType='0', Telephone="", ErrorMsg="", BankSerial="", Address="", SessionID=0, MoneyAccountStatus='0', EMail="", Fax="", BankPwdFlag='0', CurrencyID="", BankBranchID="", TradeCode="", Password="", CountryCode="", Digest="", BrokerBranchID="", Gender='0', BrokerID="", BankID="", BankAccType='1', PlateSerial=0, AccountID="", CustomerName="", InstallID=0, TID=0, MobilePhone="", NewBankAccount="", CustType='0', NewBankPassWord="", ErrorID=0, TradeTime="", LastFragment='0', SecuPwdFlag='0', VerifyCertNoFlag='0', BrokerIDByBank="", BankAccount=""):
        self.TradingDay=tou(TradingDay)
        self.ZipCode=tou(ZipCode)
        self.TradeDate=tou(TradeDate)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.Telephone=tou(Telephone)
        self.ErrorMsg=tou(ErrorMsg)
        self.BankSerial=tou(BankSerial)
        self.Address=tou(Address)
        self.SessionID=SessionID
        self.MoneyAccountStatus=tou(MoneyAccountStatus)
        self.EMail=tou(EMail)
        self.Fax=tou(Fax)
        self.BankPwdFlag=tou(BankPwdFlag)
        self.CurrencyID=tou(CurrencyID)
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.CountryCode=tou(CountryCode)
        self.Digest=tou(Digest)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.Gender=tou(Gender)
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.BankAccType=tou(BankAccType)
        self.PlateSerial=PlateSerial
        self.AccountID=tou(AccountID)
        self.CustomerName=tou(CustomerName)
        self.InstallID=InstallID
        self.TID=TID
        self.MobilePhone=tou(MobilePhone)
        self.NewBankAccount=tou(NewBankAccount)
        self.CustType=tou(CustType)
        self.NewBankPassWord=tou(NewBankPassWord)
        self.ErrorID=ErrorID
        self.TradeTime=tou(TradeTime)
        self.LastFragment=tou(LastFragment)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.BankAccount=tou(BankAccount)
        self.vcmap={'MoneyAccountStatus': {"'1'": '销户', "'0'": '正常'}, 'Gender': {"'1'": '男', "'2'": '女', "'0'": '未知状态'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'ZipCode', 'TradeDate', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'Telephone', 'ErrorMsg', 'BankSerial', 'Address', 'SessionID', 'MoneyAccountStatus', 'EMail', 'Fax', 'BankPwdFlag', 'CurrencyID', 'BankBranchID', 'TradeCode', 'Password', 'CountryCode', 'Digest', 'BrokerBranchID', 'Gender', 'BrokerID', 'BankID', 'BankAccType', 'PlateSerial', 'AccountID', 'CustomerName', 'InstallID', 'TID', 'MobilePhone', 'NewBankAccount', 'CustType', 'NewBankPassWord', 'ErrorID', 'TradeTime', 'LastFragment', 'SecuPwdFlag', 'VerifyCertNoFlag', 'BrokerIDByBank', 'BankAccount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('ZipCode', u'邮编'),('TradeDate', u'交易日期'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('Telephone', u'电话号码'),('ErrorMsg', u'错误信息'),('BankSerial', u'银行流水号'),('Address', u'地址'),('SessionID', u'会话号'),('MoneyAccountStatus', u'资金账户状态'),('EMail', u'电子邮件'),('Fax', u'传真'),('BankPwdFlag', u'银行密码标志'),('CurrencyID', u'币种代码'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('CountryCode', u'国家代码'),('Digest', u'摘要'),('BrokerBranchID', u'期商分支机构代码'),('Gender', u'性别'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('BankAccType', u'银行帐号类型'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号'),('CustomerName', u'客户姓名'),('InstallID', u'安装编号'),('TID', u'交易ID'),('MobilePhone', u'手机'),('NewBankAccount', u'新银行帐号'),('CustType', u'客户类型'),('NewBankPassWord', u'新银行密码'),('ErrorID', u'错误代码'),('TradeTime', u'交易时间'),('LastFragment', u'最后分片标志'),('SecuPwdFlag', u'期货资金密码核对标志'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('BrokerIDByBank', u'期货公司银行编码'),('BankAccount', u'银行帐号')]])
    def getval(self, n):
        if n in ['IdCardType', 'MoneyAccountStatus', 'BankPwdFlag', 'Gender', 'BankAccType', 'CustType', 'LastFragment', 'SecuPwdFlag', 'VerifyCertNoFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcCFMMCTradingAccountKeyField:
    def __init__(self, BrokerID="", CurrentKey="", ParticipantID="", KeyID=0, AccountID=""):
        self.BrokerID=tou(BrokerID)
        self.CurrentKey=tou(CurrentKey)
        self.ParticipantID=tou(ParticipantID)
        self.KeyID=KeyID
        self.AccountID=tou(AccountID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'CurrentKey', 'ParticipantID', 'KeyID', 'AccountID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('CurrentKey', u'动态密钥'),('ParticipantID', u'经纪公司统一编码'),('KeyID', u'密钥编号'),('AccountID', u'投资者帐号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSyncDepositField:
    def __init__(self, BrokerID="", DepositSeqNo="", Deposit=0, IsForce=0, InvestorID="", CurrencyID=""):
        self.BrokerID=tou(BrokerID)
        self.DepositSeqNo=tou(DepositSeqNo)
        self.Deposit=Deposit
        self.IsForce=IsForce
        self.InvestorID=tou(InvestorID)
        self.CurrencyID=tou(CurrencyID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'DepositSeqNo', 'Deposit', 'IsForce', 'InvestorID', 'CurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('DepositSeqNo', u'出入金流水号'),('Deposit', u'入金金额'),('IsForce', u'是否强制进行'),('InvestorID', u'投资者代码'),('CurrencyID', u'币种代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTransferBankToFutureRspField:
    def __init__(self, TradeAmt=0, CurrencyCode="", RetInfo="", CustFee=0, RetCode="", FutureAccount=""):
        self.TradeAmt=TradeAmt
        self.CurrencyCode=tou(CurrencyCode)
        self.RetInfo=tou(RetInfo)
        self.CustFee=CustFee
        self.RetCode=tou(RetCode)
        self.FutureAccount=tou(FutureAccount)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradeAmt', 'CurrencyCode', 'RetInfo', 'CustFee', 'RetCode', 'FutureAccount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradeAmt', u'转帐金额'),('CurrencyCode', u'币种'),('RetInfo', u'响应信息'),('CustFee', u'应收客户手续费'),('RetCode', u'响应代码'),('FutureAccount', u'资金账户')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcAuthenticationInfoField:
    def __init__(self, UserProductInfo="", BrokerID="", IsResult=0, AuthInfo="", UserID=""):
        self.UserProductInfo=tou(UserProductInfo)
        self.BrokerID=tou(BrokerID)
        self.IsResult=IsResult
        self.AuthInfo=tou(AuthInfo)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserProductInfo', 'BrokerID', 'IsResult', 'AuthInfo', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserProductInfo', u'用户端产品信息'),('BrokerID', u'经纪公司代码'),('IsResult', u'是否为认证结果'),('AuthInfo', u'认证信息'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryInvestorField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqSyncKeyField:
    def __init__(self, TradingDay="", BrokerID="", BankID="", Message="", DeviceID="", PlateSerial=0, UserID="", InstallID=0, RequestID=0, TradeDate="", BankSerial="", TID=0, TradeTime="", TradeCode="", BankBranchID="", LastFragment='0', SessionID=0, BrokerIDByBank="", OperNo="", BrokerBranchID=""):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.Message=tou(Message)
        self.DeviceID=tou(DeviceID)
        self.PlateSerial=PlateSerial
        self.UserID=tou(UserID)
        self.InstallID=InstallID
        self.RequestID=RequestID
        self.TradeDate=tou(TradeDate)
        self.BankSerial=tou(BankSerial)
        self.TID=TID
        self.TradeTime=tou(TradeTime)
        self.TradeCode=tou(TradeCode)
        self.BankBranchID=tou(BankBranchID)
        self.LastFragment=tou(LastFragment)
        self.SessionID=SessionID
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.OperNo=tou(OperNo)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'BankID', 'Message', 'DeviceID', 'PlateSerial', 'UserID', 'InstallID', 'RequestID', 'TradeDate', 'BankSerial', 'TID', 'TradeTime', 'TradeCode', 'BankBranchID', 'LastFragment', 'SessionID', 'BrokerIDByBank', 'OperNo', 'BrokerBranchID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('Message', u'交易核心给银期报盘的消息'),('DeviceID', u'渠道标志'),('PlateSerial', u'银期平台消息流水号'),('UserID', u'用户标识'),('InstallID', u'安装编号'),('RequestID', u'请求编号'),('TradeDate', u'交易日期'),('BankSerial', u'银行流水号'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('TradeCode', u'业务功能码'),('BankBranchID', u'银行分支机构代码'),('LastFragment', u'最后分片标志'),('SessionID', u'会话号'),('BrokerIDByBank', u'期货公司银行编码'),('OperNo', u'交易柜员'),('BrokerBranchID', u'期商分支机构代码')]])
    def getval(self, n):
        if n in ['LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqOpenAccountField:
    def __init__(self, ZipCode="", TradeDate="", Address="", Telephone="", MoneyAccountStatus='0', BankBranchID="", SecuPwdFlag='0', BrokerID="", BankAccType='1', PlateSerial=0, AccountID="", DeviceID="", InstallID=0, BankSecuAccType='1', CurrencyID="", Digest="", BankAccount="", TradingDay="", BrokerBranchID="", BankPassWord="", IdentifiedCardNo="", IdCardType='0', UserID="", BankSerial="", SessionID=0, Fax="", TradeCode="", Password="", CountryCode="", OperNo="", BankPwdFlag='0', Gender='0', BankID="", BankSecuAcc="", EMail="", CustType='0', BrokerIDByBank="", TID=0, MobilePhone="", CashExchangeCode='1', CustomerName="", TradeTime="", LastFragment='0', VerifyCertNoFlag='0'):
        self.ZipCode=tou(ZipCode)
        self.TradeDate=tou(TradeDate)
        self.Address=tou(Address)
        self.Telephone=tou(Telephone)
        self.MoneyAccountStatus=tou(MoneyAccountStatus)
        self.BankBranchID=tou(BankBranchID)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.BrokerID=tou(BrokerID)
        self.BankAccType=tou(BankAccType)
        self.PlateSerial=PlateSerial
        self.AccountID=tou(AccountID)
        self.DeviceID=tou(DeviceID)
        self.InstallID=InstallID
        self.BankSecuAccType=tou(BankSecuAccType)
        self.CurrencyID=tou(CurrencyID)
        self.Digest=tou(Digest)
        self.BankAccount=tou(BankAccount)
        self.TradingDay=tou(TradingDay)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.Fax=tou(Fax)
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.CountryCode=tou(CountryCode)
        self.OperNo=tou(OperNo)
        self.BankPwdFlag=tou(BankPwdFlag)
        self.Gender=tou(Gender)
        self.BankID=tou(BankID)
        self.BankSecuAcc=tou(BankSecuAcc)
        self.EMail=tou(EMail)
        self.CustType=tou(CustType)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.TID=TID
        self.MobilePhone=tou(MobilePhone)
        self.CashExchangeCode=tou(CashExchangeCode)
        self.CustomerName=tou(CustomerName)
        self.TradeTime=tou(TradeTime)
        self.LastFragment=tou(LastFragment)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.vcmap={'MoneyAccountStatus': {"'1'": '销户', "'0'": '正常'}, 'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'CashExchangeCode': {"'1'": '汇', "'2'": '钞'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'Gender': {"'1'": '男', "'2'": '女', "'0'": '未知状态'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}, 'BankSecuAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ZipCode', 'TradeDate', 'Address', 'Telephone', 'MoneyAccountStatus', 'BankBranchID', 'SecuPwdFlag', 'BrokerID', 'BankAccType', 'PlateSerial', 'AccountID', 'DeviceID', 'InstallID', 'BankSecuAccType', 'CurrencyID', 'Digest', 'BankAccount', 'TradingDay', 'BrokerBranchID', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'UserID', 'BankSerial', 'SessionID', 'Fax', 'TradeCode', 'Password', 'CountryCode', 'OperNo', 'BankPwdFlag', 'Gender', 'BankID', 'BankSecuAcc', 'EMail', 'CustType', 'BrokerIDByBank', 'TID', 'MobilePhone', 'CashExchangeCode', 'CustomerName', 'TradeTime', 'LastFragment', 'VerifyCertNoFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ZipCode', u'邮编'),('TradeDate', u'交易日期'),('Address', u'地址'),('Telephone', u'电话号码'),('MoneyAccountStatus', u'资金账户状态'),('BankBranchID', u'银行分支机构代码'),('SecuPwdFlag', u'期货资金密码核对标志'),('BrokerID', u'期商代码'),('BankAccType', u'银行帐号类型'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号'),('DeviceID', u'渠道标志'),('InstallID', u'安装编号'),('BankSecuAccType', u'期货单位帐号类型'),('CurrencyID', u'币种代码'),('Digest', u'摘要'),('BankAccount', u'银行帐号'),('TradingDay', u'交易系统日期'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('Fax', u'传真'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('CountryCode', u'国家代码'),('OperNo', u'交易柜员'),('BankPwdFlag', u'银行密码标志'),('Gender', u'性别'),('BankID', u'银行代码'),('BankSecuAcc', u'期货单位帐号'),('EMail', u'电子邮件'),('CustType', u'客户类型'),('BrokerIDByBank', u'期货公司银行编码'),('TID', u'交易ID'),('MobilePhone', u'手机'),('CashExchangeCode', u'汇钞标志'),('CustomerName', u'客户姓名'),('TradeTime', u'交易时间'),('LastFragment', u'最后分片标志'),('VerifyCertNoFlag', u'验证客户证件号码标志')]])
    def getval(self, n):
        if n in ['MoneyAccountStatus', 'SecuPwdFlag', 'BankAccType', 'BankSecuAccType', 'IdCardType', 'BankPwdFlag', 'Gender', 'CustType', 'CashExchangeCode', 'LastFragment', 'VerifyCertNoFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqAuthenticateField:
    def __init__(self, UserProductInfo="", BrokerID="", AuthCode="", UserID=""):
        self.UserProductInfo=tou(UserProductInfo)
        self.BrokerID=tou(BrokerID)
        self.AuthCode=tou(AuthCode)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserProductInfo', 'BrokerID', 'AuthCode', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserProductInfo', u'用户端产品信息'),('BrokerID', u'经纪公司代码'),('AuthCode', u'认证码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTradingAccountPasswordUpdateField:
    def __init__(self, BrokerID="", NewPassword="", OldPassword="", AccountID="", CurrencyID=""):
        self.BrokerID=tou(BrokerID)
        self.NewPassword=tou(NewPassword)
        self.OldPassword=tou(OldPassword)
        self.AccountID=tou(AccountID)
        self.CurrencyID=tou(CurrencyID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'NewPassword', 'OldPassword', 'AccountID', 'CurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('NewPassword', u'新的口令'),('OldPassword', u'原来的口令'),('AccountID', u'投资者帐号'),('CurrencyID', u'币种代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcDiscountField:
    def __init__(self, InvestorID="", BrokerID="", Discount=0, InvestorRange='1'):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.Discount=Discount
        self.InvestorRange=tou(InvestorRange)
        self.vcmap={'InvestorRange': {"'1'": '所有', "'2'": '投资者组', "'3'": '单一投资者'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'Discount', 'InvestorRange']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('Discount', u'资金折扣比例'),('InvestorRange', u'投资者范围')]])
    def getval(self, n):
        if n in ['InvestorRange']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcDepthMarketDataField:
    def __init__(self, BidPrice4=0, BidPrice5=0, BidPrice1=0, BidPrice2=0, BidPrice3=0, BidVolume2=0, BidVolume3=0, LastPrice=0, BidVolume4=0, BidVolume5=0, AskVolume4=0, AveragePrice=0, HighestPrice=0, AskVolume1=0, AskVolume2=0, AskVolume3=0, InstrumentID="", UpperLimitPrice=0, PreSettlementPrice=0, OpenInterest=0, UpdateMillisec=0, ActionDay="", PreClosePrice=0, LowerLimitPrice=0, CurrDelta=0, OpenPrice=0, TradingDay="", BidVolume1=0, PreOpenInterest=0, ExchangeID="", ClosePrice=0, AskPrice4=0, AskPrice5=0, AskPrice2=0, PreDelta=0, ExchangeInstID="", AskPrice1=0, AskVolume5=0, UpdateTime="", Volume=0, SettlementPrice=0, LowestPrice=0, Turnover=0, AskPrice3=0):
        self.BidPrice4=BidPrice4
        self.BidPrice5=BidPrice5
        self.BidPrice1=BidPrice1
        self.BidPrice2=BidPrice2
        self.BidPrice3=BidPrice3
        self.BidVolume2=BidVolume2
        self.BidVolume3=BidVolume3
        self.LastPrice=LastPrice
        self.BidVolume4=BidVolume4
        self.BidVolume5=BidVolume5
        self.AskVolume4=AskVolume4
        self.AveragePrice=AveragePrice
        self.HighestPrice=HighestPrice
        self.AskVolume1=AskVolume1
        self.AskVolume2=AskVolume2
        self.AskVolume3=AskVolume3
        self.InstrumentID=tou(InstrumentID)
        self.UpperLimitPrice=UpperLimitPrice
        self.PreSettlementPrice=PreSettlementPrice
        self.OpenInterest=OpenInterest
        self.UpdateMillisec=UpdateMillisec
        self.ActionDay=tou(ActionDay)
        self.PreClosePrice=PreClosePrice
        self.LowerLimitPrice=LowerLimitPrice
        self.CurrDelta=CurrDelta
        self.OpenPrice=OpenPrice
        self.TradingDay=tou(TradingDay)
        self.BidVolume1=BidVolume1
        self.PreOpenInterest=PreOpenInterest
        self.ExchangeID=tou(ExchangeID)
        self.ClosePrice=ClosePrice
        self.AskPrice4=AskPrice4
        self.AskPrice5=AskPrice5
        self.AskPrice2=AskPrice2
        self.PreDelta=PreDelta
        self.ExchangeInstID=tou(ExchangeInstID)
        self.AskPrice1=AskPrice1
        self.AskVolume5=AskVolume5
        self.UpdateTime=tou(UpdateTime)
        self.Volume=Volume
        self.SettlementPrice=SettlementPrice
        self.LowestPrice=LowestPrice
        self.Turnover=Turnover
        self.AskPrice3=AskPrice3
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidPrice4', 'BidPrice5', 'BidPrice1', 'BidPrice2', 'BidPrice3', 'BidVolume2', 'BidVolume3', 'LastPrice', 'BidVolume4', 'BidVolume5', 'AskVolume4', 'AveragePrice', 'HighestPrice', 'AskVolume1', 'AskVolume2', 'AskVolume3', 'InstrumentID', 'UpperLimitPrice', 'PreSettlementPrice', 'OpenInterest', 'UpdateMillisec', 'ActionDay', 'PreClosePrice', 'LowerLimitPrice', 'CurrDelta', 'OpenPrice', 'TradingDay', 'BidVolume1', 'PreOpenInterest', 'ExchangeID', 'ClosePrice', 'AskPrice4', 'AskPrice5', 'AskPrice2', 'PreDelta', 'ExchangeInstID', 'AskPrice1', 'AskVolume5', 'UpdateTime', 'Volume', 'SettlementPrice', 'LowestPrice', 'Turnover', 'AskPrice3']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidPrice4', u'申买价四'),('BidPrice5', u'申买价五'),('BidPrice1', u'申买价一'),('BidPrice2', u'申买价二'),('BidPrice3', u'申买价三'),('BidVolume2', u'申买量二'),('BidVolume3', u'申买量三'),('LastPrice', u'最新价'),('BidVolume4', u'申买量四'),('BidVolume5', u'申买量五'),('AskVolume4', u'申卖量四'),('AveragePrice', u'当日均价'),('HighestPrice', u'最高价'),('AskVolume1', u'申卖量一'),('AskVolume2', u'申卖量二'),('AskVolume3', u'申卖量三'),('InstrumentID', u'合约代码'),('UpperLimitPrice', u'涨停板价'),('PreSettlementPrice', u'上次结算价'),('OpenInterest', u'持仓量'),('UpdateMillisec', u'最后修改毫秒'),('ActionDay', u'业务日期'),('PreClosePrice', u'昨收盘'),('LowerLimitPrice', u'跌停板价'),('CurrDelta', u'今虚实度'),('OpenPrice', u'今开盘'),('TradingDay', u'交易日'),('BidVolume1', u'申买量一'),('PreOpenInterest', u'昨持仓量'),('ExchangeID', u'交易所代码'),('ClosePrice', u'今收盘'),('AskPrice4', u'申卖价四'),('AskPrice5', u'申卖价五'),('AskPrice2', u'申卖价二'),('PreDelta', u'昨虚实度'),('ExchangeInstID', u'合约在交易所的代码'),('AskPrice1', u'申卖价一'),('AskVolume5', u'申卖量五'),('UpdateTime', u'最后修改时间'),('Volume', u'数量'),('SettlementPrice', u'本次结算价'),('LowestPrice', u'最低价'),('Turnover', u'成交金额'),('AskPrice3', u'申卖价三')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQrySuperUserFunctionField:
    def __init__(self, UserID=""):
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInvestorAccountField:
    def __init__(self, InvestorID="", BrokerID="", AccountID="", CurrencyID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.AccountID=tou(AccountID)
        self.CurrencyID=tou(CurrencyID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'AccountID', 'CurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('AccountID', u'投资者帐号'),('CurrencyID', u'币种代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTraderOfferField:
    def __init__(self, TradingDay="", BrokerID="", StartDate="", TraderID="", OrderLocalID="", InstallID=0, ConnectTime="", ExchangeID="", ConnectDate="", ConnectRequestDate="", ParticipantID="", LastReportTime="", StartTime="", MaxTradeID="", LastReportDate="", Password="", MaxOrderMessageReference="", ConnectRequestTime="", TraderConnectStatus='1'):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.StartDate=tou(StartDate)
        self.TraderID=tou(TraderID)
        self.OrderLocalID=tou(OrderLocalID)
        self.InstallID=InstallID
        self.ConnectTime=tou(ConnectTime)
        self.ExchangeID=tou(ExchangeID)
        self.ConnectDate=tou(ConnectDate)
        self.ConnectRequestDate=tou(ConnectRequestDate)
        self.ParticipantID=tou(ParticipantID)
        self.LastReportTime=tou(LastReportTime)
        self.StartTime=tou(StartTime)
        self.MaxTradeID=tou(MaxTradeID)
        self.LastReportDate=tou(LastReportDate)
        self.Password=tou(Password)
        self.MaxOrderMessageReference=tou(MaxOrderMessageReference)
        self.ConnectRequestTime=tou(ConnectRequestTime)
        self.TraderConnectStatus=tou(TraderConnectStatus)
        self.vcmap={'TraderConnectStatus': {"'1'": '没有任何连接', "'4'": '订阅私有流', "'2'": '已经连接', "'3'": '已经发出合约查询请求'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'StartDate', 'TraderID', 'OrderLocalID', 'InstallID', 'ConnectTime', 'ExchangeID', 'ConnectDate', 'ConnectRequestDate', 'ParticipantID', 'LastReportTime', 'StartTime', 'MaxTradeID', 'LastReportDate', 'Password', 'MaxOrderMessageReference', 'ConnectRequestTime', 'TraderConnectStatus']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码'),('StartDate', u'启动日期'),('TraderID', u'交易所交易员代码'),('OrderLocalID', u'本地报单编号'),('InstallID', u'安装编号'),('ConnectTime', u'完成连接时间'),('ExchangeID', u'交易所代码'),('ConnectDate', u'完成连接日期'),('ConnectRequestDate', u'发出连接请求的日期'),('ParticipantID', u'会员代码'),('LastReportTime', u'上次报告时间'),('StartTime', u'启动时间'),('MaxTradeID', u'本席位最大成交编号'),('LastReportDate', u'上次报告日期'),('Password', u'密码'),('MaxOrderMessageReference', u'本席位最大报单备拷'),('ConnectRequestTime', u'发出连接请求的时间'),('TraderConnectStatus', u'交易所交易员连接状态')]])
    def getval(self, n):
        if n in ['TraderConnectStatus']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcExchangeOrderActionField:
    def __init__(self, OrderSysID="", TraderID="", OrderLocalID="", ActionLocalID="", BusinessUnit="", InstallID=0, ActionTime="", ExchangeID="", OrderActionStatus='a', UserID="", ActionFlag='0', ParticipantID="", VolumeChange=0, ActionDate="", ClientID="", LimitPrice=0):
        self.OrderSysID=tou(OrderSysID)
        self.TraderID=tou(TraderID)
        self.OrderLocalID=tou(OrderLocalID)
        self.ActionLocalID=tou(ActionLocalID)
        self.BusinessUnit=tou(BusinessUnit)
        self.InstallID=InstallID
        self.ActionTime=tou(ActionTime)
        self.ExchangeID=tou(ExchangeID)
        self.OrderActionStatus=tou(OrderActionStatus)
        self.UserID=tou(UserID)
        self.ActionFlag=tou(ActionFlag)
        self.ParticipantID=tou(ParticipantID)
        self.VolumeChange=VolumeChange
        self.ActionDate=tou(ActionDate)
        self.ClientID=tou(ClientID)
        self.LimitPrice=LimitPrice
        self.vcmap={'OrderActionStatus': {"'a'": '已经提交', "'b'": '已经接受', "'c'": '已经被拒绝'}, 'ActionFlag': {"'0'": '删除', "'3'": '修改'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OrderSysID', 'TraderID', 'OrderLocalID', 'ActionLocalID', 'BusinessUnit', 'InstallID', 'ActionTime', 'ExchangeID', 'OrderActionStatus', 'UserID', 'ActionFlag', 'ParticipantID', 'VolumeChange', 'ActionDate', 'ClientID', 'LimitPrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OrderSysID', u'报单编号'),('TraderID', u'交易所交易员代码'),('OrderLocalID', u'本地报单编号'),('ActionLocalID', u'操作本地编号'),('BusinessUnit', u'业务单元'),('InstallID', u'安装编号'),('ActionTime', u'操作时间'),('ExchangeID', u'交易所代码'),('OrderActionStatus', u'报单操作状态'),('UserID', u'用户代码'),('ActionFlag', u'操作标志'),('ParticipantID', u'会员代码'),('VolumeChange', u'数量变化'),('ActionDate', u'操作日期'),('ClientID', u'客户代码'),('LimitPrice', u'价格')]])
    def getval(self, n):
        if n in ['OrderActionStatus', 'ActionFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSyncingInstrumentTradingRightField:
    def __init__(self, InvestorID="", InstrumentID="", BrokerID="", TradingRight='0', InvestorRange='1'):
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.BrokerID=tou(BrokerID)
        self.TradingRight=tou(TradingRight)
        self.InvestorRange=tou(InvestorRange)
        self.vcmap={'TradingRight': {"'1'": '只能平仓', "'2'": '不能交易', "'0'": '可以交易'}, 'InvestorRange': {"'1'": '所有', "'2'": '投资者组', "'3'": '单一投资者'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'InstrumentID', 'BrokerID', 'TradingRight', 'InvestorRange']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('BrokerID', u'经纪公司代码'),('TradingRight', u'交易权限'),('InvestorRange', u'投资者范围')]])
    def getval(self, n):
        if n in ['TradingRight', 'InvestorRange']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerUserEventField:
    def __init__(self, EventDate="", BrokerID="", EventTime="", EventSequenceNo=0, InstrumentID="", InvestorID="", UserID="", UserEventInfo="", UserEventType='1'):
        self.EventDate=tou(EventDate)
        self.BrokerID=tou(BrokerID)
        self.EventTime=tou(EventTime)
        self.EventSequenceNo=EventSequenceNo
        self.InstrumentID=tou(InstrumentID)
        self.InvestorID=tou(InvestorID)
        self.UserID=tou(UserID)
        self.UserEventInfo=tou(UserEventInfo)
        self.UserEventType=tou(UserEventType)
        self.vcmap={'UserEventType': {"'6'": '客户端认证', "'9'": '其他', "'1'": '登录', "'4'": '交易失败', "'2'": '登出', "'5'": '修改密码', "'3'": '交易成功'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['EventDate', 'BrokerID', 'EventTime', 'EventSequenceNo', 'InstrumentID', 'InvestorID', 'UserID', 'UserEventInfo', 'UserEventType']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('EventDate', u'事件发生日期'),('BrokerID', u'经纪公司代码'),('EventTime', u'事件发生时间'),('EventSequenceNo', u'用户事件序号'),('InstrumentID', u'合约代码'),('InvestorID', u'投资者代码'),('UserID', u'用户代码'),('UserEventInfo', u'用户事件信息'),('UserEventType', u'用户事件类型')]])
    def getval(self, n):
        if n in ['UserEventType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRspRepealField:
    def __init__(self, BrokerRepealFlag='0', TradeDate="", PlateRepealSerial=0, PlateSerial=0, BrokerFee=0, ErrorMsg="", ErrorID=0, BankPwdFlag='0', SecuPwdFlag='0', BankBranchID="", DeviceID="", BrokerID="", BankRepealSerial="", FutureRepealSerial=0, IdCardType='0', AccountID="", InstallID=0, BankSecuAccType='1', RepealedTimes=0, TradeAmount=0, CurrencyID="", BrokerBranchID="", FeePayFlag='0', TradingDay="", BankPassWord="", IdentifiedCardNo="", BankRepealFlag='0', TransferStatus='0', UserID="", BankSerial="", SessionID=0, CustFee=0, RepealTimeInterval=0, TradeCode="", Password="", BankAccType='1', OperNo="", Digest="", RequestID=0, BankID="", BankSecuAcc="", VerifyCertNoFlag='0', CustomerName="", BrokerIDByBank="", TID=0, FutureSerial=0, CustType='0', BankAccount="", TradeTime="", LastFragment='0', Message="", FutureFetchAmount=0):
        self.BrokerRepealFlag=tou(BrokerRepealFlag)
        self.TradeDate=tou(TradeDate)
        self.PlateRepealSerial=PlateRepealSerial
        self.PlateSerial=PlateSerial
        self.BrokerFee=BrokerFee
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.BankPwdFlag=tou(BankPwdFlag)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.BankBranchID=tou(BankBranchID)
        self.DeviceID=tou(DeviceID)
        self.BrokerID=tou(BrokerID)
        self.BankRepealSerial=tou(BankRepealSerial)
        self.FutureRepealSerial=FutureRepealSerial
        self.IdCardType=tou(IdCardType)
        self.AccountID=tou(AccountID)
        self.InstallID=InstallID
        self.BankSecuAccType=tou(BankSecuAccType)
        self.RepealedTimes=RepealedTimes
        self.TradeAmount=TradeAmount
        self.CurrencyID=tou(CurrencyID)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.FeePayFlag=tou(FeePayFlag)
        self.TradingDay=tou(TradingDay)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.BankRepealFlag=tou(BankRepealFlag)
        self.TransferStatus=tou(TransferStatus)
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.CustFee=CustFee
        self.RepealTimeInterval=RepealTimeInterval
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.BankAccType=tou(BankAccType)
        self.OperNo=tou(OperNo)
        self.Digest=tou(Digest)
        self.RequestID=RequestID
        self.BankID=tou(BankID)
        self.BankSecuAcc=tou(BankSecuAcc)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.CustomerName=tou(CustomerName)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.TID=TID
        self.FutureSerial=FutureSerial
        self.CustType=tou(CustType)
        self.BankAccount=tou(BankAccount)
        self.TradeTime=tou(TradeTime)
        self.LastFragment=tou(LastFragment)
        self.Message=tou(Message)
        self.FutureFetchAmount=FutureFetchAmount
        self.vcmap={'BrokerRepealFlag': {"'1'": '期商待自动冲正', "'2'": '期商已自动冲正', "'0'": '期商无需自动冲正'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'BankRepealFlag': {"'1'": '银行待自动冲正', "'2'": '银行已自动冲正', "'0'": '银行无需自动冲正'}, 'TransferStatus': {"'1'": '被冲正', "'0'": '正常'}, 'BankSecuAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'FeePayFlag': {"'1'": '由发送方支付费用', "'2'": '由发送方支付发起的费用，受益方支付接受的费用', "'0'": '由受益方支付费用'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerRepealFlag', 'TradeDate', 'PlateRepealSerial', 'PlateSerial', 'BrokerFee', 'ErrorMsg', 'ErrorID', 'BankPwdFlag', 'SecuPwdFlag', 'BankBranchID', 'DeviceID', 'BrokerID', 'BankRepealSerial', 'FutureRepealSerial', 'IdCardType', 'AccountID', 'InstallID', 'BankSecuAccType', 'RepealedTimes', 'TradeAmount', 'CurrencyID', 'BrokerBranchID', 'FeePayFlag', 'TradingDay', 'BankPassWord', 'IdentifiedCardNo', 'BankRepealFlag', 'TransferStatus', 'UserID', 'BankSerial', 'SessionID', 'CustFee', 'RepealTimeInterval', 'TradeCode', 'Password', 'BankAccType', 'OperNo', 'Digest', 'RequestID', 'BankID', 'BankSecuAcc', 'VerifyCertNoFlag', 'CustomerName', 'BrokerIDByBank', 'TID', 'FutureSerial', 'CustType', 'BankAccount', 'TradeTime', 'LastFragment', 'Message', 'FutureFetchAmount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerRepealFlag', u'期商冲正标志'),('TradeDate', u'交易日期'),('PlateRepealSerial', u'被冲正平台流水号'),('PlateSerial', u'银期平台消息流水号'),('BrokerFee', u'应收期货公司费用'),('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码'),('BankPwdFlag', u'银行密码标志'),('SecuPwdFlag', u'期货资金密码核对标志'),('BankBranchID', u'银行分支机构代码'),('DeviceID', u'渠道标志'),('BrokerID', u'期商代码'),('BankRepealSerial', u'被冲正银行流水号'),('FutureRepealSerial', u'被冲正期货流水号'),('IdCardType', u'证件类型'),('AccountID', u'投资者帐号'),('InstallID', u'安装编号'),('BankSecuAccType', u'期货单位帐号类型'),('RepealedTimes', u'已经冲正次数'),('TradeAmount', u'转帐金额'),('CurrencyID', u'币种代码'),('BrokerBranchID', u'期商分支机构代码'),('FeePayFlag', u'费用支付标志'),('TradingDay', u'交易系统日期'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('BankRepealFlag', u'银行冲正标志'),('TransferStatus', u'转账交易状态'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('CustFee', u'应收客户费用'),('RepealTimeInterval', u'冲正时间间隔'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('BankAccType', u'银行帐号类型'),('OperNo', u'交易柜员'),('Digest', u'摘要'),('RequestID', u'请求编号'),('BankID', u'银行代码'),('BankSecuAcc', u'期货单位帐号'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('CustomerName', u'客户姓名'),('BrokerIDByBank', u'期货公司银行编码'),('TID', u'交易ID'),('FutureSerial', u'期货公司流水号'),('CustType', u'客户类型'),('BankAccount', u'银行帐号'),('TradeTime', u'交易时间'),('LastFragment', u'最后分片标志'),('Message', u'发送方给接收方的消息'),('FutureFetchAmount', u'期货可取金额')]])
    def getval(self, n):
        if n in ['BrokerRepealFlag', 'BankPwdFlag', 'SecuPwdFlag', 'IdCardType', 'BankSecuAccType', 'FeePayFlag', 'BankRepealFlag', 'TransferStatus', 'BankAccType', 'VerifyCertNoFlag', 'CustType', 'LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryInvestorProductGroupMarginField:
    def __init__(self, InvestorID="", BrokerID="", HedgeFlag='1', ProductGroupID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.HedgeFlag=tou(HedgeFlag)
        self.ProductGroupID=tou(ProductGroupID)
        self.vcmap={'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'HedgeFlag', 'ProductGroupID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('HedgeFlag', u'投机套保标志'),('ProductGroupID', u'品种/跨品种标示')]])
    def getval(self, n):
        if n in ['HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRspQueryTradeResultBySerialField:
    def __init__(self, TradingDay="", TradeDate="", Reference=0, BankPassWord="", PlateSerial=0, BankSerial="", SessionID=0, BankBranchID="", ErrorID=0, CurrencyID="", ErrorMsg="", TradeCode="", RefrenceIssureType='0', OriginDescrInfoForReturnCode="", BrokerBranchID="", BrokerID="", BankID="", AccountID="", RefrenceIssure="", OriginReturnCode="", TradeAmount=0, TradeTime="", Password="", LastFragment='0', Digest="", BankAccount=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.Reference=Reference
        self.BankPassWord=tou(BankPassWord)
        self.PlateSerial=PlateSerial
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.BankBranchID=tou(BankBranchID)
        self.ErrorID=ErrorID
        self.CurrencyID=tou(CurrencyID)
        self.ErrorMsg=tou(ErrorMsg)
        self.TradeCode=tou(TradeCode)
        self.RefrenceIssureType=tou(RefrenceIssureType)
        self.OriginDescrInfoForReturnCode=tou(OriginDescrInfoForReturnCode)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.AccountID=tou(AccountID)
        self.RefrenceIssure=tou(RefrenceIssure)
        self.OriginReturnCode=tou(OriginReturnCode)
        self.TradeAmount=TradeAmount
        self.TradeTime=tou(TradeTime)
        self.Password=tou(Password)
        self.LastFragment=tou(LastFragment)
        self.Digest=tou(Digest)
        self.BankAccount=tou(BankAccount)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'RefrenceIssureType': {"'1'": '期商', "'2'": '券商', "'0'": '银行'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'Reference', 'BankPassWord', 'PlateSerial', 'BankSerial', 'SessionID', 'BankBranchID', 'ErrorID', 'CurrencyID', 'ErrorMsg', 'TradeCode', 'RefrenceIssureType', 'OriginDescrInfoForReturnCode', 'BrokerBranchID', 'BrokerID', 'BankID', 'AccountID', 'RefrenceIssure', 'OriginReturnCode', 'TradeAmount', 'TradeTime', 'Password', 'LastFragment', 'Digest', 'BankAccount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('TradeDate', u'交易日期'),('Reference', u'流水号'),('BankPassWord', u'银行密码'),('PlateSerial', u'银期平台消息流水号'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('BankBranchID', u'银行分支机构代码'),('ErrorID', u'错误代码'),('CurrencyID', u'币种代码'),('ErrorMsg', u'错误信息'),('TradeCode', u'业务功能码'),('RefrenceIssureType', u'本流水号发布者的机构类型'),('OriginDescrInfoForReturnCode', u'原始返回码描述'),('BrokerBranchID', u'期商分支机构代码'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('AccountID', u'投资者帐号'),('RefrenceIssure', u'本流水号发布者机构编码'),('OriginReturnCode', u'原始返回代码'),('TradeAmount', u'转帐金额'),('TradeTime', u'交易时间'),('Password', u'期货密码'),('LastFragment', u'最后分片标志'),('Digest', u'摘要'),('BankAccount', u'银行帐号')]])
    def getval(self, n):
        if n in ['RefrenceIssureType', 'LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRspSyncKeyField:
    def __init__(self, TradingDay="", TradeDate="", DeviceID="", PlateSerial=0, UserID="", BankSerial="", SessionID=0, ErrorMsg="", ErrorID=0, BankBranchID="", TradeCode="", OperNo="", BrokerBranchID="", RequestID=0, BrokerID="", BankID="", InstallID=0, TID=0, TradeTime="", LastFragment='0', Message="", BrokerIDByBank=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.DeviceID=tou(DeviceID)
        self.PlateSerial=PlateSerial
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.OperNo=tou(OperNo)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.InstallID=InstallID
        self.TID=TID
        self.TradeTime=tou(TradeTime)
        self.LastFragment=tou(LastFragment)
        self.Message=tou(Message)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'DeviceID', 'PlateSerial', 'UserID', 'BankSerial', 'SessionID', 'ErrorMsg', 'ErrorID', 'BankBranchID', 'TradeCode', 'OperNo', 'BrokerBranchID', 'RequestID', 'BrokerID', 'BankID', 'InstallID', 'TID', 'TradeTime', 'LastFragment', 'Message', 'BrokerIDByBank']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('TradeDate', u'交易日期'),('DeviceID', u'渠道标志'),('PlateSerial', u'银期平台消息流水号'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('OperNo', u'交易柜员'),('BrokerBranchID', u'期商分支机构代码'),('RequestID', u'请求编号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('InstallID', u'安装编号'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('LastFragment', u'最后分片标志'),('Message', u'交易核心给银期报盘的消息'),('BrokerIDByBank', u'期货公司银行编码')]])
    def getval(self, n):
        if n in ['LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerUserFunctionField:
    def __init__(self, BrokerID="", BrokerFunctionCode='1', UserID=""):
        self.BrokerID=tou(BrokerID)
        self.BrokerFunctionCode=tou(BrokerFunctionCode)
        self.UserID=tou(UserID)
        self.vcmap={'BrokerFunctionCode': {"'G'": '风险级别标准设置', "'m'": '成交查询', "'A'": '风控指标设置', "'o'": '行情查询', "'C'": '业务通知查询', "'6'": '报单操作', "'w'": '权益反算', "'K'": '预埋报单插入', "'q'": '风险通知查询', "'2'": '变更用户口令', "'E'": '同步动态令牌', "'s'": '投资者信息查询', "'f'": '风险监控', "'y'": '风险预算', "'4'": '批量同步经纪公司数据', "'b'": '基本查询：查询基础数据，如合约，交易所等常量', "'u'": '强平', "'j'": '察看经纪公司资金权限', "'d'": '交易功能：报单，撤单', "'F'": '发送业务通知', "'l'": '报单查询', "'n'": '持仓查询', "'B'": '行情预警', "'h'": '风控通知控制', "'v'": '压力测试', "'7'": '全部查询', "'J'": '删除未知单', "'p'": '用户事件查询', "'1'": '强制用户登出', "'D'": '业务通知模板设置', "'r'": '出入金查询', "'3'": '同步经纪公司数据', "'L'": '预埋报单操作', "'g'": '查询/管理：查询会话，踢人等', "'z'": '数据导出', "'a'": '系统功能：登入/登出/修改密码等', "'t'": '交易编码查询', "'5'": '报单插入', "'H'": '交易终端应急功能', "'c'": '交易查询：如查成交，委托', "'i'": '风控通知发送', "'k'": '资金查询', "'e'": '银期转账', "'x'": '净持仓保证金指标'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'BrokerFunctionCode', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('BrokerFunctionCode', u'经纪公司功能代码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in ['BrokerFunctionCode']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSyncingInstrumentMarginRateField:
    def __init__(self, BrokerID="", ShortMarginRatioByVolume=0, InvestorRange='1', InvestorID="", InstrumentID="", IsRelative=0, ShortMarginRatioByMoney=0, HedgeFlag='1', LongMarginRatioByVolume=0, LongMarginRatioByMoney=0):
        self.BrokerID=tou(BrokerID)
        self.ShortMarginRatioByVolume=ShortMarginRatioByVolume
        self.InvestorRange=tou(InvestorRange)
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.IsRelative=IsRelative
        self.ShortMarginRatioByMoney=ShortMarginRatioByMoney
        self.HedgeFlag=tou(HedgeFlag)
        self.LongMarginRatioByVolume=LongMarginRatioByVolume
        self.LongMarginRatioByMoney=LongMarginRatioByMoney
        self.vcmap={'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}, 'InvestorRange': {"'1'": '所有', "'2'": '投资者组', "'3'": '单一投资者'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'ShortMarginRatioByVolume', 'InvestorRange', 'InvestorID', 'InstrumentID', 'IsRelative', 'ShortMarginRatioByMoney', 'HedgeFlag', 'LongMarginRatioByVolume', 'LongMarginRatioByMoney']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('ShortMarginRatioByVolume', u'空头保证金费'),('InvestorRange', u'投资者范围'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('IsRelative', u'是否相对交易所收取'),('ShortMarginRatioByMoney', u'空头保证金率'),('HedgeFlag', u'投机套保标志'),('LongMarginRatioByVolume', u'多头保证金费'),('LongMarginRatioByMoney', u'多头保证金率')]])
    def getval(self, n):
        if n in ['InvestorRange', 'HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryTradeField:
    def __init__(self, TradeTimeStart="", BrokerID="", TradeTimeEnd="", InvestorID="", InstrumentID="", TradeID="", ExchangeID=""):
        self.TradeTimeStart=tou(TradeTimeStart)
        self.BrokerID=tou(BrokerID)
        self.TradeTimeEnd=tou(TradeTimeEnd)
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.TradeID=tou(TradeID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradeTimeStart', 'BrokerID', 'TradeTimeEnd', 'InvestorID', 'InstrumentID', 'TradeID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradeTimeStart', u'开始时间'),('BrokerID', u'经纪公司代码'),('TradeTimeEnd', u'结束时间'),('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('TradeID', u'成交编号'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataField:
    def __init__(self, TradingDay="", PreOpenInterest=0, LastPrice=0, PreDelta=0, ExchangeID="", ClosePrice=0, Turnover=0, HighestPrice=0, ExchangeInstID="", InstrumentID="", UpperLimitPrice=0, PreSettlementPrice=0, OpenInterest=0, UpdateMillisec=0, ActionDay="", UpdateTime="", Volume=0, SettlementPrice=0, PreClosePrice=0, LowestPrice=0, LowerLimitPrice=0, CurrDelta=0, OpenPrice=0):
        self.TradingDay=tou(TradingDay)
        self.PreOpenInterest=PreOpenInterest
        self.LastPrice=LastPrice
        self.PreDelta=PreDelta
        self.ExchangeID=tou(ExchangeID)
        self.ClosePrice=ClosePrice
        self.Turnover=Turnover
        self.HighestPrice=HighestPrice
        self.ExchangeInstID=tou(ExchangeInstID)
        self.InstrumentID=tou(InstrumentID)
        self.UpperLimitPrice=UpperLimitPrice
        self.PreSettlementPrice=PreSettlementPrice
        self.OpenInterest=OpenInterest
        self.UpdateMillisec=UpdateMillisec
        self.ActionDay=tou(ActionDay)
        self.UpdateTime=tou(UpdateTime)
        self.Volume=Volume
        self.SettlementPrice=SettlementPrice
        self.PreClosePrice=PreClosePrice
        self.LowestPrice=LowestPrice
        self.LowerLimitPrice=LowerLimitPrice
        self.CurrDelta=CurrDelta
        self.OpenPrice=OpenPrice
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'PreOpenInterest', 'LastPrice', 'PreDelta', 'ExchangeID', 'ClosePrice', 'Turnover', 'HighestPrice', 'ExchangeInstID', 'InstrumentID', 'UpperLimitPrice', 'PreSettlementPrice', 'OpenInterest', 'UpdateMillisec', 'ActionDay', 'UpdateTime', 'Volume', 'SettlementPrice', 'PreClosePrice', 'LowestPrice', 'LowerLimitPrice', 'CurrDelta', 'OpenPrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('PreOpenInterest', u'昨持仓量'),('LastPrice', u'最新价'),('PreDelta', u'昨虚实度'),('ExchangeID', u'交易所代码'),('ClosePrice', u'今收盘'),('Turnover', u'成交金额'),('HighestPrice', u'最高价'),('ExchangeInstID', u'合约在交易所的代码'),('InstrumentID', u'合约代码'),('UpperLimitPrice', u'涨停板价'),('PreSettlementPrice', u'上次结算价'),('OpenInterest', u'持仓量'),('UpdateMillisec', u'最后修改毫秒'),('ActionDay', u'业务日期'),('UpdateTime', u'最后修改时间'),('Volume', u'数量'),('SettlementPrice', u'本次结算价'),('PreClosePrice', u'昨收盘'),('LowestPrice', u'最低价'),('LowerLimitPrice', u'跌停板价'),('CurrDelta', u'今虚实度'),('OpenPrice', u'今开盘')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcLoginForbiddenUserField:
    def __init__(self, BrokerID="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTransferBankToFutureReqField:
    def __init__(self, FutureAccPwd="", TradeAmt=0, CurrencyCode="", FuturePwdFlag='0', CustFee=0, FutureAccount=""):
        self.FutureAccPwd=tou(FutureAccPwd)
        self.TradeAmt=TradeAmt
        self.CurrencyCode=tou(CurrencyCode)
        self.FuturePwdFlag=tou(FuturePwdFlag)
        self.CustFee=CustFee
        self.FutureAccount=tou(FutureAccount)
        self.vcmap={'FuturePwdFlag': {"'1'": '核对', "'0'": '不核对'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FutureAccPwd', 'TradeAmt', 'CurrencyCode', 'FuturePwdFlag', 'CustFee', 'FutureAccount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FutureAccPwd', u'密码'),('TradeAmt', u'转账金额'),('CurrencyCode', u'币种：RMB-人民币 USD-美圆 HKD-港元'),('FuturePwdFlag', u'密码标志'),('CustFee', u'客户手续费'),('FutureAccount', u'期货资金账户')]])
    def getval(self, n):
        if n in ['FuturePwdFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcExchangeOrderField:
    def __init__(self, TradingDay="", OrderSource='0', ClientID="", CancelTime="", VolumeTotal=0, BusinessUnit="", OrderSubmitStatus='0', Direction='0', OrderType='0', ExchangeID="", GTDDate="", InsertTime="", StopPrice=0, ParticipantID="", VolumeTraded=0, ExchangeInstID="", OrderStatus='0', ActiveTime="", VolumeCondition='1', ClearingPartID="", TimeCondition='1', SequenceNo=0, RequestID=0, SettlementID=0, OrderSysID="", TraderID="", OrderLocalID="", OrderPriceType='1', InstallID=0, UpdateTime="", InsertDate="", ActiveTraderID="", LimitPrice=0, SuspendTime="", NotifySequence=0, ContingentCondition='1', MinVolume=0, IsAutoSuspend=0, CombHedgeFlag="", VolumeTotalOriginal=0, ForceCloseReason='0', CombOffsetFlag=""):
        self.TradingDay=tou(TradingDay)
        self.OrderSource=tou(OrderSource)
        self.ClientID=tou(ClientID)
        self.CancelTime=tou(CancelTime)
        self.VolumeTotal=VolumeTotal
        self.BusinessUnit=tou(BusinessUnit)
        self.OrderSubmitStatus=tou(OrderSubmitStatus)
        self.Direction=tou(Direction)
        self.OrderType=tou(OrderType)
        self.ExchangeID=tou(ExchangeID)
        self.GTDDate=tou(GTDDate)
        self.InsertTime=tou(InsertTime)
        self.StopPrice=StopPrice
        self.ParticipantID=tou(ParticipantID)
        self.VolumeTraded=VolumeTraded
        self.ExchangeInstID=tou(ExchangeInstID)
        self.OrderStatus=tou(OrderStatus)
        self.ActiveTime=tou(ActiveTime)
        self.VolumeCondition=tou(VolumeCondition)
        self.ClearingPartID=tou(ClearingPartID)
        self.TimeCondition=tou(TimeCondition)
        self.SequenceNo=SequenceNo
        self.RequestID=RequestID
        self.SettlementID=SettlementID
        self.OrderSysID=tou(OrderSysID)
        self.TraderID=tou(TraderID)
        self.OrderLocalID=tou(OrderLocalID)
        self.OrderPriceType=tou(OrderPriceType)
        self.InstallID=InstallID
        self.UpdateTime=tou(UpdateTime)
        self.InsertDate=tou(InsertDate)
        self.ActiveTraderID=tou(ActiveTraderID)
        self.LimitPrice=LimitPrice
        self.SuspendTime=tou(SuspendTime)
        self.NotifySequence=NotifySequence
        self.ContingentCondition=tou(ContingentCondition)
        self.MinVolume=MinVolume
        self.IsAutoSuspend=IsAutoSuspend
        self.CombHedgeFlag=tou(CombHedgeFlag)
        self.VolumeTotalOriginal=VolumeTotalOriginal
        self.ForceCloseReason=tou(ForceCloseReason)
        self.CombOffsetFlag=tou(CombOffsetFlag)
        self.vcmap={'OrderStatus': {"'c'": '已触发', "'0'": '全部成交', "'1'": '部分成交还在队列中', "'a'": '未知', "'4'": '未成交不在队列中', "'3'": '未成交还在队列中', "'2'": '部分成交不在队列中', "'5'": '撤单', "'b'": '尚未触发'}, 'OrderSource': {"'1'": '来自管理员', "'0'": '来自参与者'}, 'VolumeCondition': {"'1'": '任何数量', "'2'": '最小数量', "'3'": '全部数量'}, 'ContingentCondition': {"'F'": '买一价小于条件价', "'9'": '卖一价大于条件价', "'A'": '卖一价大于等于条件价', "'4'": '预埋单', "'B'": '卖一价小于条件价', "'5'": '最新价大于条件价', "'H'": '买一价小于等于条件价', "'C'": '卖一价小于等于条件价', "'6'": '最新价大于等于条件价', "'7'": '最新价小于条件价', "'1'": '立即', "'D'": '买一价大于条件价', "'2'": '止损', "'E'": '买一价大于等于条件价', "'8'": '最新价小于等于条件价', "'3'": '止赢'}, 'ForceCloseReason': {"'6'": '其它', "'7'": '自然人临近交割', "'0'": '非强平', "'1'": '资金不足', "'4'": '持仓非整数倍', "'2'": '客户超仓', "'5'": '违规', "'3'": '会员超仓'}, 'OrderType': {"'0'": '正常', "'1'": '报价衍生', "'4'": '条件单', "'2'": '组合衍生', "'5'": '互换单', "'3'": '组合报单'}, 'OrderPriceType': {"'F'": '买一价浮动上浮3个ticks', "'9'": '卖一价浮动上浮1个ticks', "'A'": '卖一价浮动上浮2个ticks', "'4'": '最新价', "'B'": '卖一价浮动上浮3个ticks', "'5'": '最新价浮动上浮1个ticks', "'C'": '买一价', "'6'": '最新价浮动上浮2个ticks', "'7'": '最新价浮动上浮3个ticks', "'1'": '任意价', "'D'": '买一价浮动上浮1个ticks', "'2'": '限价', "'E'": '买一价浮动上浮2个ticks', "'8'": '卖一价', "'3'": '最优价'}, 'OrderSubmitStatus': {"'6'": '改单已经被拒绝', "'0'": '已经提交', "'1'": '撤单已经提交', "'4'": '报单已经被拒绝', "'2'": '修改已经提交', "'5'": '撤单已经被拒绝', "'3'": '已经接受'}, 'Direction': {"'1'": '卖', "'0'": '买'}, 'TimeCondition': {"'6'": '集合竞价有效', "'1'": '立即完成，否则撤销', "'4'": '指定日期前有效', "'2'": '本节有效', "'5'": '撤销前有效', "'3'": '当日有效'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'OrderSource', 'ClientID', 'CancelTime', 'VolumeTotal', 'BusinessUnit', 'OrderSubmitStatus', 'Direction', 'OrderType', 'ExchangeID', 'GTDDate', 'InsertTime', 'StopPrice', 'ParticipantID', 'VolumeTraded', 'ExchangeInstID', 'OrderStatus', 'ActiveTime', 'VolumeCondition', 'ClearingPartID', 'TimeCondition', 'SequenceNo', 'RequestID', 'SettlementID', 'OrderSysID', 'TraderID', 'OrderLocalID', 'OrderPriceType', 'InstallID', 'UpdateTime', 'InsertDate', 'ActiveTraderID', 'LimitPrice', 'SuspendTime', 'NotifySequence', 'ContingentCondition', 'MinVolume', 'IsAutoSuspend', 'CombHedgeFlag', 'VolumeTotalOriginal', 'ForceCloseReason', 'CombOffsetFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('OrderSource', u'报单来源'),('ClientID', u'客户代码'),('CancelTime', u'撤销时间'),('VolumeTotal', u'剩余数量'),('BusinessUnit', u'业务单元'),('OrderSubmitStatus', u'报单提交状态'),('Direction', u'买卖方向'),('OrderType', u'报单类型'),('ExchangeID', u'交易所代码'),('GTDDate', u'GTD日期'),('InsertTime', u'委托时间'),('StopPrice', u'止损价'),('ParticipantID', u'会员代码'),('VolumeTraded', u'今成交数量'),('ExchangeInstID', u'合约在交易所的代码'),('OrderStatus', u'报单状态'),('ActiveTime', u'激活时间'),('VolumeCondition', u'成交量类型'),('ClearingPartID', u'结算会员编号'),('TimeCondition', u'有效期类型'),('SequenceNo', u'序号'),('RequestID', u'请求编号'),('SettlementID', u'结算编号'),('OrderSysID', u'报单编号'),('TraderID', u'交易所交易员代码'),('OrderLocalID', u'本地报单编号'),('OrderPriceType', u'报单价格条件'),('InstallID', u'安装编号'),('UpdateTime', u'最后修改时间'),('InsertDate', u'报单日期'),('ActiveTraderID', u'最后修改交易所交易员代码'),('LimitPrice', u'价格'),('SuspendTime', u'挂起时间'),('NotifySequence', u'报单提示序号'),('ContingentCondition', u'触发条件'),('MinVolume', u'最小成交量'),('IsAutoSuspend', u'自动挂起标志'),('CombHedgeFlag', u'组合投机套保标志'),('VolumeTotalOriginal', u'数量'),('ForceCloseReason', u'强平原因'),('CombOffsetFlag', u'组合开平标志')]])
    def getval(self, n):
        if n in ['OrderSource', 'OrderSubmitStatus', 'Direction', 'OrderType', 'OrderStatus', 'VolumeCondition', 'TimeCondition', 'OrderPriceType', 'ContingentCondition', 'ForceCloseReason']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataBestPriceField:
    def __init__(self, BidVolume1=0, AskVolume1=0, BidPrice1=0, AskPrice1=0):
        self.BidVolume1=BidVolume1
        self.AskVolume1=AskVolume1
        self.BidPrice1=BidPrice1
        self.AskPrice1=AskPrice1
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidVolume1', 'AskVolume1', 'BidPrice1', 'AskPrice1']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidVolume1', u'申买量一'),('AskVolume1', u'申卖量一'),('BidPrice1', u'申买价一'),('AskPrice1', u'申卖价一')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRspQueryAccountField:
    def __init__(self, TradingDay="", TradeDate="", BankPassWord="", IdentifiedCardNo="", IdCardType='0', BankFetchAmount=0, UserID="", OperNo="", BankSerial="", Digest="", SessionID=0, BankPwdFlag='0', CurrencyID="", BankBranchID="", TradeCode="", Password="", BankAccType='1', SecuPwdFlag='0', BrokerBranchID="", RequestID=0, BrokerID="", BankID="", BankSecuAcc="", PlateSerial=0, AccountID="", CustomerName="", InstallID=0, TID=0, FutureSerial=0, BankUseAmount=0, BankSecuAccType='1', CustType='0', BankAccount="", LastFragment='0', DeviceID="", VerifyCertNoFlag='0', BrokerIDByBank="", TradeTime=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.BankFetchAmount=BankFetchAmount
        self.UserID=tou(UserID)
        self.OperNo=tou(OperNo)
        self.BankSerial=tou(BankSerial)
        self.Digest=tou(Digest)
        self.SessionID=SessionID
        self.BankPwdFlag=tou(BankPwdFlag)
        self.CurrencyID=tou(CurrencyID)
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.BankAccType=tou(BankAccType)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.BankSecuAcc=tou(BankSecuAcc)
        self.PlateSerial=PlateSerial
        self.AccountID=tou(AccountID)
        self.CustomerName=tou(CustomerName)
        self.InstallID=InstallID
        self.TID=TID
        self.FutureSerial=FutureSerial
        self.BankUseAmount=BankUseAmount
        self.BankSecuAccType=tou(BankSecuAccType)
        self.CustType=tou(CustType)
        self.BankAccount=tou(BankAccount)
        self.LastFragment=tou(LastFragment)
        self.DeviceID=tou(DeviceID)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.TradeTime=tou(TradeTime)
        self.vcmap={'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'BankSecuAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'BankFetchAmount', 'UserID', 'OperNo', 'BankSerial', 'Digest', 'SessionID', 'BankPwdFlag', 'CurrencyID', 'BankBranchID', 'TradeCode', 'Password', 'BankAccType', 'SecuPwdFlag', 'BrokerBranchID', 'RequestID', 'BrokerID', 'BankID', 'BankSecuAcc', 'PlateSerial', 'AccountID', 'CustomerName', 'InstallID', 'TID', 'FutureSerial', 'BankUseAmount', 'BankSecuAccType', 'CustType', 'BankAccount', 'LastFragment', 'DeviceID', 'VerifyCertNoFlag', 'BrokerIDByBank', 'TradeTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('TradeDate', u'交易日期'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('BankFetchAmount', u'银行可取金额'),('UserID', u'用户标识'),('OperNo', u'交易柜员'),('BankSerial', u'银行流水号'),('Digest', u'摘要'),('SessionID', u'会话号'),('BankPwdFlag', u'银行密码标志'),('CurrencyID', u'币种代码'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('BankAccType', u'银行帐号类型'),('SecuPwdFlag', u'期货资金密码核对标志'),('BrokerBranchID', u'期商分支机构代码'),('RequestID', u'请求编号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('BankSecuAcc', u'期货单位帐号'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号'),('CustomerName', u'客户姓名'),('InstallID', u'安装编号'),('TID', u'交易ID'),('FutureSerial', u'期货公司流水号'),('BankUseAmount', u'银行可用金额'),('BankSecuAccType', u'期货单位帐号类型'),('CustType', u'客户类型'),('BankAccount', u'银行帐号'),('LastFragment', u'最后分片标志'),('DeviceID', u'渠道标志'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('BrokerIDByBank', u'期货公司银行编码'),('TradeTime', u'交易时间')]])
    def getval(self, n):
        if n in ['IdCardType', 'BankPwdFlag', 'BankAccType', 'SecuPwdFlag', 'BankSecuAccType', 'CustType', 'LastFragment', 'VerifyCertNoFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryInstrumentTradingRightField:
    def __init__(self, InvestorID="", BrokerID="", InstrumentID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.InstrumentID=tou(InstrumentID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcCFMMCTradingAccountTokenField:
    def __init__(self, BrokerID="", ParticipantID="", KeyID=0, AccountID="", Token=""):
        self.BrokerID=tou(BrokerID)
        self.ParticipantID=tou(ParticipantID)
        self.KeyID=KeyID
        self.AccountID=tou(AccountID)
        self.Token=tou(Token)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'ParticipantID', 'KeyID', 'AccountID', 'Token']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('ParticipantID', u'经纪公司统一编码'),('KeyID', u'密钥编号'),('AccountID', u'投资者帐号'),('Token', u'动态令牌')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInvestorPositionField:
    def __init__(self, TradingDay="", CloseProfitByDate=0, OpenVolume=0, CloseProfit=0, YdPosition=0, HedgeFlag='1', OpenCost=0, CombLongFrozen=0, Commission=0, MarginRateByVolume=0, UseMargin=0, PositionDate='1', InstrumentID="", CloseProfitByTrade=0, SettlementID=0, PositionProfit=0, PreMargin=0, ShortFrozen=0, OpenAmount=0, BrokerID="", CashIn=0, FrozenCash=0, MarginRateByMoney=0, FrozenCommission=0, Position=0, LongFrozenAmount=0, CloseAmount=0, PositionCost=0, CloseVolume=0, ExchangeMargin=0, ShortFrozenAmount=0, CombPosition=0, SettlementPrice=0, CombShortFrozen=0, InvestorID="", FrozenMargin=0, TodayPosition=0, LongFrozen=0, PreSettlementPrice=0, PosiDirection='1'):
        self.TradingDay=tou(TradingDay)
        self.CloseProfitByDate=CloseProfitByDate
        self.OpenVolume=OpenVolume
        self.CloseProfit=CloseProfit
        self.YdPosition=YdPosition
        self.HedgeFlag=tou(HedgeFlag)
        self.OpenCost=OpenCost
        self.CombLongFrozen=CombLongFrozen
        self.Commission=Commission
        self.MarginRateByVolume=MarginRateByVolume
        self.UseMargin=UseMargin
        self.PositionDate=tou(PositionDate)
        self.InstrumentID=tou(InstrumentID)
        self.CloseProfitByTrade=CloseProfitByTrade
        self.SettlementID=SettlementID
        self.PositionProfit=PositionProfit
        self.PreMargin=PreMargin
        self.ShortFrozen=ShortFrozen
        self.OpenAmount=OpenAmount
        self.BrokerID=tou(BrokerID)
        self.CashIn=CashIn
        self.FrozenCash=FrozenCash
        self.MarginRateByMoney=MarginRateByMoney
        self.FrozenCommission=FrozenCommission
        self.Position=Position
        self.LongFrozenAmount=LongFrozenAmount
        self.CloseAmount=CloseAmount
        self.PositionCost=PositionCost
        self.CloseVolume=CloseVolume
        self.ExchangeMargin=ExchangeMargin
        self.ShortFrozenAmount=ShortFrozenAmount
        self.CombPosition=CombPosition
        self.SettlementPrice=SettlementPrice
        self.CombShortFrozen=CombShortFrozen
        self.InvestorID=tou(InvestorID)
        self.FrozenMargin=FrozenMargin
        self.TodayPosition=TodayPosition
        self.LongFrozen=LongFrozen
        self.PreSettlementPrice=PreSettlementPrice
        self.PosiDirection=tou(PosiDirection)
        self.vcmap={'PositionDate': {"'1'": '今日持仓', "'2'": '历史持仓'}, 'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}, 'PosiDirection': {"'1'": '净', "'2'": '多头', "'3'": '空头'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'CloseProfitByDate', 'OpenVolume', 'CloseProfit', 'YdPosition', 'HedgeFlag', 'OpenCost', 'CombLongFrozen', 'Commission', 'MarginRateByVolume', 'UseMargin', 'PositionDate', 'InstrumentID', 'CloseProfitByTrade', 'SettlementID', 'PositionProfit', 'PreMargin', 'ShortFrozen', 'OpenAmount', 'BrokerID', 'CashIn', 'FrozenCash', 'MarginRateByMoney', 'FrozenCommission', 'Position', 'LongFrozenAmount', 'CloseAmount', 'PositionCost', 'CloseVolume', 'ExchangeMargin', 'ShortFrozenAmount', 'CombPosition', 'SettlementPrice', 'CombShortFrozen', 'InvestorID', 'FrozenMargin', 'TodayPosition', 'LongFrozen', 'PreSettlementPrice', 'PosiDirection']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('CloseProfitByDate', u'逐日盯市平仓盈亏'),('OpenVolume', u'开仓量'),('CloseProfit', u'平仓盈亏'),('YdPosition', u'上日持仓'),('HedgeFlag', u'投机套保标志'),('OpenCost', u'开仓成本'),('CombLongFrozen', u'组合多头冻结'),('Commission', u'手续费'),('MarginRateByVolume', u'保证金率(按手数)'),('UseMargin', u'占用的保证金'),('PositionDate', u'持仓日期'),('InstrumentID', u'合约代码'),('CloseProfitByTrade', u'逐笔对冲平仓盈亏'),('SettlementID', u'结算编号'),('PositionProfit', u'持仓盈亏'),('PreMargin', u'上次占用的保证金'),('ShortFrozen', u'空头冻结'),('OpenAmount', u'开仓金额'),('BrokerID', u'经纪公司代码'),('CashIn', u'资金差额'),('FrozenCash', u'冻结的资金'),('MarginRateByMoney', u'保证金率'),('FrozenCommission', u'冻结的手续费'),('Position', u'今日持仓'),('LongFrozenAmount', u'开仓冻结金额'),('CloseAmount', u'平仓金额'),('PositionCost', u'持仓成本'),('CloseVolume', u'平仓量'),('ExchangeMargin', u'交易所保证金'),('ShortFrozenAmount', u'开仓冻结金额'),('CombPosition', u'组合成交形成的持仓'),('SettlementPrice', u'本次结算价'),('CombShortFrozen', u'组合空头冻结'),('InvestorID', u'投资者代码'),('FrozenMargin', u'冻结的保证金'),('TodayPosition', u'今日持仓'),('LongFrozen', u'多头冻结'),('PreSettlementPrice', u'上次结算价'),('PosiDirection', u'持仓多空方向')]])
    def getval(self, n):
        if n in ['HedgeFlag', 'PositionDate', 'PosiDirection']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqRepealField:
    def __init__(self, BrokerRepealFlag='0', TradeDate="", PlateRepealSerial=0, PlateSerial=0, BrokerFee=0, BankPwdFlag='0', SecuPwdFlag='0', BankBranchID="", DeviceID="", BrokerID="", BankRepealSerial="", FutureRepealSerial=0, IdCardType='0', AccountID="", InstallID=0, BankSecuAccType='1', RepealedTimes=0, TradeAmount=0, CurrencyID="", BrokerBranchID="", FeePayFlag='0', TradingDay="", BankPassWord="", IdentifiedCardNo="", BankRepealFlag='0', TransferStatus='0', UserID="", BankSerial="", SessionID=0, CustFee=0, RepealTimeInterval=0, TradeCode="", Password="", BankAccType='1', OperNo="", Digest="", RequestID=0, BankID="", BankSecuAcc="", VerifyCertNoFlag='0', CustomerName="", BrokerIDByBank="", TID=0, FutureSerial=0, CustType='0', BankAccount="", TradeTime="", LastFragment='0', Message="", FutureFetchAmount=0):
        self.BrokerRepealFlag=tou(BrokerRepealFlag)
        self.TradeDate=tou(TradeDate)
        self.PlateRepealSerial=PlateRepealSerial
        self.PlateSerial=PlateSerial
        self.BrokerFee=BrokerFee
        self.BankPwdFlag=tou(BankPwdFlag)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.BankBranchID=tou(BankBranchID)
        self.DeviceID=tou(DeviceID)
        self.BrokerID=tou(BrokerID)
        self.BankRepealSerial=tou(BankRepealSerial)
        self.FutureRepealSerial=FutureRepealSerial
        self.IdCardType=tou(IdCardType)
        self.AccountID=tou(AccountID)
        self.InstallID=InstallID
        self.BankSecuAccType=tou(BankSecuAccType)
        self.RepealedTimes=RepealedTimes
        self.TradeAmount=TradeAmount
        self.CurrencyID=tou(CurrencyID)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.FeePayFlag=tou(FeePayFlag)
        self.TradingDay=tou(TradingDay)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.BankRepealFlag=tou(BankRepealFlag)
        self.TransferStatus=tou(TransferStatus)
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.CustFee=CustFee
        self.RepealTimeInterval=RepealTimeInterval
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.BankAccType=tou(BankAccType)
        self.OperNo=tou(OperNo)
        self.Digest=tou(Digest)
        self.RequestID=RequestID
        self.BankID=tou(BankID)
        self.BankSecuAcc=tou(BankSecuAcc)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.CustomerName=tou(CustomerName)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.TID=TID
        self.FutureSerial=FutureSerial
        self.CustType=tou(CustType)
        self.BankAccount=tou(BankAccount)
        self.TradeTime=tou(TradeTime)
        self.LastFragment=tou(LastFragment)
        self.Message=tou(Message)
        self.FutureFetchAmount=FutureFetchAmount
        self.vcmap={'BrokerRepealFlag': {"'1'": '期商待自动冲正', "'2'": '期商已自动冲正', "'0'": '期商无需自动冲正'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'BankRepealFlag': {"'1'": '银行待自动冲正', "'2'": '银行已自动冲正', "'0'": '银行无需自动冲正'}, 'TransferStatus': {"'1'": '被冲正', "'0'": '正常'}, 'BankSecuAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'FeePayFlag': {"'1'": '由发送方支付费用', "'2'": '由发送方支付发起的费用，受益方支付接受的费用', "'0'": '由受益方支付费用'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerRepealFlag', 'TradeDate', 'PlateRepealSerial', 'PlateSerial', 'BrokerFee', 'BankPwdFlag', 'SecuPwdFlag', 'BankBranchID', 'DeviceID', 'BrokerID', 'BankRepealSerial', 'FutureRepealSerial', 'IdCardType', 'AccountID', 'InstallID', 'BankSecuAccType', 'RepealedTimes', 'TradeAmount', 'CurrencyID', 'BrokerBranchID', 'FeePayFlag', 'TradingDay', 'BankPassWord', 'IdentifiedCardNo', 'BankRepealFlag', 'TransferStatus', 'UserID', 'BankSerial', 'SessionID', 'CustFee', 'RepealTimeInterval', 'TradeCode', 'Password', 'BankAccType', 'OperNo', 'Digest', 'RequestID', 'BankID', 'BankSecuAcc', 'VerifyCertNoFlag', 'CustomerName', 'BrokerIDByBank', 'TID', 'FutureSerial', 'CustType', 'BankAccount', 'TradeTime', 'LastFragment', 'Message', 'FutureFetchAmount']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerRepealFlag', u'期商冲正标志'),('TradeDate', u'交易日期'),('PlateRepealSerial', u'被冲正平台流水号'),('PlateSerial', u'银期平台消息流水号'),('BrokerFee', u'应收期货公司费用'),('BankPwdFlag', u'银行密码标志'),('SecuPwdFlag', u'期货资金密码核对标志'),('BankBranchID', u'银行分支机构代码'),('DeviceID', u'渠道标志'),('BrokerID', u'期商代码'),('BankRepealSerial', u'被冲正银行流水号'),('FutureRepealSerial', u'被冲正期货流水号'),('IdCardType', u'证件类型'),('AccountID', u'投资者帐号'),('InstallID', u'安装编号'),('BankSecuAccType', u'期货单位帐号类型'),('RepealedTimes', u'已经冲正次数'),('TradeAmount', u'转帐金额'),('CurrencyID', u'币种代码'),('BrokerBranchID', u'期商分支机构代码'),('FeePayFlag', u'费用支付标志'),('TradingDay', u'交易系统日期'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('BankRepealFlag', u'银行冲正标志'),('TransferStatus', u'转账交易状态'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('CustFee', u'应收客户费用'),('RepealTimeInterval', u'冲正时间间隔'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('BankAccType', u'银行帐号类型'),('OperNo', u'交易柜员'),('Digest', u'摘要'),('RequestID', u'请求编号'),('BankID', u'银行代码'),('BankSecuAcc', u'期货单位帐号'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('CustomerName', u'客户姓名'),('BrokerIDByBank', u'期货公司银行编码'),('TID', u'交易ID'),('FutureSerial', u'期货公司流水号'),('CustType', u'客户类型'),('BankAccount', u'银行帐号'),('TradeTime', u'交易时间'),('LastFragment', u'最后分片标志'),('Message', u'发送方给接收方的消息'),('FutureFetchAmount', u'期货可取金额')]])
    def getval(self, n):
        if n in ['BrokerRepealFlag', 'BankPwdFlag', 'SecuPwdFlag', 'IdCardType', 'BankSecuAccType', 'FeePayFlag', 'BankRepealFlag', 'TransferStatus', 'BankAccType', 'VerifyCertNoFlag', 'CustType', 'LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataBaseField:
    def __init__(self, TradingDay="", PreClosePrice=0, PreSettlementPrice=0, PreOpenInterest=0, PreDelta=0):
        self.TradingDay=tou(TradingDay)
        self.PreClosePrice=PreClosePrice
        self.PreSettlementPrice=PreSettlementPrice
        self.PreOpenInterest=PreOpenInterest
        self.PreDelta=PreDelta
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'PreClosePrice', 'PreSettlementPrice', 'PreOpenInterest', 'PreDelta']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('PreClosePrice', u'昨收盘'),('PreSettlementPrice', u'上次结算价'),('PreOpenInterest', u'昨持仓量'),('PreDelta', u'昨虚实度')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerSyncField:
    def __init__(self, BrokerID=""):
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataUpdateTimeField:
    def __init__(self, ActionDay="", InstrumentID="", UpdateTime="", UpdateMillisec=0):
        self.ActionDay=tou(ActionDay)
        self.InstrumentID=tou(InstrumentID)
        self.UpdateTime=tou(UpdateTime)
        self.UpdateMillisec=UpdateMillisec
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ActionDay', 'InstrumentID', 'UpdateTime', 'UpdateMillisec']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ActionDay', u'业务日期'),('InstrumentID', u'合约代码'),('UpdateTime', u'最后修改时间'),('UpdateMillisec', u'最后修改毫秒')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSettlementInfoConfirmField:
    def __init__(self, InvestorID="", BrokerID="", ConfirmTime="", ConfirmDate=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.ConfirmTime=tou(ConfirmTime)
        self.ConfirmDate=tou(ConfirmDate)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ConfirmTime', 'ConfirmDate']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ConfirmTime', u'确认时间'),('ConfirmDate', u'确认日期')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryTradingNoticeField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcNotifyFutureSignOutField:
    def __init__(self, TradingDay="", TradeDate="", DeviceID="", PlateSerial=0, UserID="", BankSerial="", SessionID=0, ErrorMsg="", ErrorID=0, LastFragment='0', BankBranchID="", TradeCode="", OperNo="", Digest="", RequestID=0, BrokerID="", BankID="", InstallID=0, TID=0, TradeTime="", CurrencyID="", BrokerBranchID="", BrokerIDByBank=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.DeviceID=tou(DeviceID)
        self.PlateSerial=PlateSerial
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.LastFragment=tou(LastFragment)
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.OperNo=tou(OperNo)
        self.Digest=tou(Digest)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.InstallID=InstallID
        self.TID=TID
        self.TradeTime=tou(TradeTime)
        self.CurrencyID=tou(CurrencyID)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'DeviceID', 'PlateSerial', 'UserID', 'BankSerial', 'SessionID', 'ErrorMsg', 'ErrorID', 'LastFragment', 'BankBranchID', 'TradeCode', 'OperNo', 'Digest', 'RequestID', 'BrokerID', 'BankID', 'InstallID', 'TID', 'TradeTime', 'CurrencyID', 'BrokerBranchID', 'BrokerIDByBank']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('TradeDate', u'交易日期'),('DeviceID', u'渠道标志'),('PlateSerial', u'银期平台消息流水号'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码'),('LastFragment', u'最后分片标志'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('OperNo', u'交易柜员'),('Digest', u'摘要'),('RequestID', u'请求编号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('InstallID', u'安装编号'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('CurrencyID', u'币种代码'),('BrokerBranchID', u'期商分支机构代码'),('BrokerIDByBank', u'期货公司银行编码')]])
    def getval(self, n):
        if n in ['LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcNotifySyncKeyField:
    def __init__(self, TradingDay="", TradeDate="", DeviceID="", PlateSerial=0, UserID="", BankSerial="", SessionID=0, ErrorMsg="", ErrorID=0, BankBranchID="", TradeCode="", OperNo="", BrokerBranchID="", RequestID=0, BrokerID="", BankID="", InstallID=0, TID=0, TradeTime="", LastFragment='0', Message="", BrokerIDByBank=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.DeviceID=tou(DeviceID)
        self.PlateSerial=PlateSerial
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.OperNo=tou(OperNo)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.InstallID=InstallID
        self.TID=TID
        self.TradeTime=tou(TradeTime)
        self.LastFragment=tou(LastFragment)
        self.Message=tou(Message)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.vcmap={'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'DeviceID', 'PlateSerial', 'UserID', 'BankSerial', 'SessionID', 'ErrorMsg', 'ErrorID', 'BankBranchID', 'TradeCode', 'OperNo', 'BrokerBranchID', 'RequestID', 'BrokerID', 'BankID', 'InstallID', 'TID', 'TradeTime', 'LastFragment', 'Message', 'BrokerIDByBank']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('TradeDate', u'交易日期'),('DeviceID', u'渠道标志'),('PlateSerial', u'银期平台消息流水号'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('OperNo', u'交易柜员'),('BrokerBranchID', u'期商分支机构代码'),('RequestID', u'请求编号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('InstallID', u'安装编号'),('TID', u'交易ID'),('TradeTime', u'交易时间'),('LastFragment', u'最后分片标志'),('Message', u'交易核心给银期报盘的消息'),('BrokerIDByBank', u'期货公司银行编码')]])
    def getval(self, n):
        if n in ['LastFragment']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcNotifyQueryAccountField:
    def __init__(self, TradingDay="", TradeDate="", BankPassWord="", IdentifiedCardNo="", IdCardType='0', BankFetchAmount=0, UserID="", OperNo="", BankSerial="", Digest="", SessionID=0, ErrorMsg="", ErrorID=0, BankPwdFlag='0', CurrencyID="", BankBranchID="", TradeCode="", Password="", BankAccType='1', SecuPwdFlag='0', BrokerBranchID="", RequestID=0, BrokerID="", BankID="", BankSecuAcc="", PlateSerial=0, AccountID="", CustomerName="", InstallID=0, TID=0, FutureSerial=0, BankUseAmount=0, BankSecuAccType='1', CustType='0', BankAccount="", LastFragment='0', DeviceID="", VerifyCertNoFlag='0', BrokerIDByBank="", TradeTime=""):
        self.TradingDay=tou(TradingDay)
        self.TradeDate=tou(TradeDate)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.BankFetchAmount=BankFetchAmount
        self.UserID=tou(UserID)
        self.OperNo=tou(OperNo)
        self.BankSerial=tou(BankSerial)
        self.Digest=tou(Digest)
        self.SessionID=SessionID
        self.ErrorMsg=tou(ErrorMsg)
        self.ErrorID=ErrorID
        self.BankPwdFlag=tou(BankPwdFlag)
        self.CurrencyID=tou(CurrencyID)
        self.BankBranchID=tou(BankBranchID)
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.BankAccType=tou(BankAccType)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.BankSecuAcc=tou(BankSecuAcc)
        self.PlateSerial=PlateSerial
        self.AccountID=tou(AccountID)
        self.CustomerName=tou(CustomerName)
        self.InstallID=InstallID
        self.TID=TID
        self.FutureSerial=FutureSerial
        self.BankUseAmount=BankUseAmount
        self.BankSecuAccType=tou(BankSecuAccType)
        self.CustType=tou(CustType)
        self.BankAccount=tou(BankAccount)
        self.LastFragment=tou(LastFragment)
        self.DeviceID=tou(DeviceID)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.TradeTime=tou(TradeTime)
        self.vcmap={'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'BankSecuAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'TradeDate', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'BankFetchAmount', 'UserID', 'OperNo', 'BankSerial', 'Digest', 'SessionID', 'ErrorMsg', 'ErrorID', 'BankPwdFlag', 'CurrencyID', 'BankBranchID', 'TradeCode', 'Password', 'BankAccType', 'SecuPwdFlag', 'BrokerBranchID', 'RequestID', 'BrokerID', 'BankID', 'BankSecuAcc', 'PlateSerial', 'AccountID', 'CustomerName', 'InstallID', 'TID', 'FutureSerial', 'BankUseAmount', 'BankSecuAccType', 'CustType', 'BankAccount', 'LastFragment', 'DeviceID', 'VerifyCertNoFlag', 'BrokerIDByBank', 'TradeTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易系统日期'),('TradeDate', u'交易日期'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('BankFetchAmount', u'银行可取金额'),('UserID', u'用户标识'),('OperNo', u'交易柜员'),('BankSerial', u'银行流水号'),('Digest', u'摘要'),('SessionID', u'会话号'),('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码'),('BankPwdFlag', u'银行密码标志'),('CurrencyID', u'币种代码'),('BankBranchID', u'银行分支机构代码'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('BankAccType', u'银行帐号类型'),('SecuPwdFlag', u'期货资金密码核对标志'),('BrokerBranchID', u'期商分支机构代码'),('RequestID', u'请求编号'),('BrokerID', u'期商代码'),('BankID', u'银行代码'),('BankSecuAcc', u'期货单位帐号'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号'),('CustomerName', u'客户姓名'),('InstallID', u'安装编号'),('TID', u'交易ID'),('FutureSerial', u'期货公司流水号'),('BankUseAmount', u'银行可用金额'),('BankSecuAccType', u'期货单位帐号类型'),('CustType', u'客户类型'),('BankAccount', u'银行帐号'),('LastFragment', u'最后分片标志'),('DeviceID', u'渠道标志'),('VerifyCertNoFlag', u'验证客户证件号码标志'),('BrokerIDByBank', u'期货公司银行编码'),('TradeTime', u'交易时间')]])
    def getval(self, n):
        if n in ['IdCardType', 'BankPwdFlag', 'BankAccType', 'SecuPwdFlag', 'BankSecuAccType', 'CustType', 'LastFragment', 'VerifyCertNoFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTraderField:
    def __init__(self, BrokerID="", InstallCount=0, ParticipantID="", TraderID="", Password="", ExchangeID=""):
        self.BrokerID=tou(BrokerID)
        self.InstallCount=InstallCount
        self.ParticipantID=tou(ParticipantID)
        self.TraderID=tou(TraderID)
        self.Password=tou(Password)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'InstallCount', 'ParticipantID', 'TraderID', 'Password', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('InstallCount', u'安装数量'),('ParticipantID', u'会员代码'),('TraderID', u'交易所交易员代码'),('Password', u'密码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcExchangeMarginRateField:
    def __init__(self, BrokerID="", ShortMarginRatioByVolume=0, InstrumentID="", ShortMarginRatioByMoney=0, LongMarginRatioByMoney=0, LongMarginRatioByVolume=0, HedgeFlag='1'):
        self.BrokerID=tou(BrokerID)
        self.ShortMarginRatioByVolume=ShortMarginRatioByVolume
        self.InstrumentID=tou(InstrumentID)
        self.ShortMarginRatioByMoney=ShortMarginRatioByMoney
        self.LongMarginRatioByMoney=LongMarginRatioByMoney
        self.LongMarginRatioByVolume=LongMarginRatioByVolume
        self.HedgeFlag=tou(HedgeFlag)
        self.vcmap={'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'ShortMarginRatioByVolume', 'InstrumentID', 'ShortMarginRatioByMoney', 'LongMarginRatioByMoney', 'LongMarginRatioByVolume', 'HedgeFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('ShortMarginRatioByVolume', u'空头保证金费'),('InstrumentID', u'合约代码'),('ShortMarginRatioByMoney', u'空头保证金率'),('LongMarginRatioByMoney', u'多头保证金率'),('LongMarginRatioByVolume', u'多头保证金费'),('HedgeFlag', u'投机套保标志')]])
    def getval(self, n):
        if n in ['HedgeFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInvestorField:
    def __init__(self, InvestorName="", BrokerID="", IdentifiedCardNo="", IdentifiedCardType='0', Telephone="", Address="", MarginModelID="", CommModelID="", Mobile="", IsActive=0, InvestorID="", InvestorGroupID="", OpenDate=""):
        self.InvestorName=tou(InvestorName)
        self.BrokerID=tou(BrokerID)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdentifiedCardType=tou(IdentifiedCardType)
        self.Telephone=tou(Telephone)
        self.Address=tou(Address)
        self.MarginModelID=tou(MarginModelID)
        self.CommModelID=tou(CommModelID)
        self.Mobile=tou(Mobile)
        self.IsActive=IsActive
        self.InvestorID=tou(InvestorID)
        self.InvestorGroupID=tou(InvestorGroupID)
        self.OpenDate=tou(OpenDate)
        self.vcmap={'IdentifiedCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorName', 'BrokerID', 'IdentifiedCardNo', 'IdentifiedCardType', 'Telephone', 'Address', 'MarginModelID', 'CommModelID', 'Mobile', 'IsActive', 'InvestorID', 'InvestorGroupID', 'OpenDate']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorName', u'投资者名称'),('BrokerID', u'经纪公司代码'),('IdentifiedCardNo', u'证件号码'),('IdentifiedCardType', u'证件类型'),('Telephone', u'联系电话'),('Address', u'通讯地址'),('MarginModelID', u'保证金率模板代码'),('CommModelID', u'手续费率模板代码'),('Mobile', u'手机'),('IsActive', u'是否活跃'),('InvestorID', u'投资者代码'),('InvestorGroupID', u'投资者分组代码'),('OpenDate', u'开户日期')]])
    def getval(self, n):
        if n in ['IdentifiedCardType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcExchangeTradeField:
    def __init__(self, TradeDate="", ClientID="", TradeType='#', BusinessUnit="", Direction='0', HedgeFlag='1', ExchangeID="", ClearingPartID="", ParticipantID="", ExchangeInstID="", TradeID="", OrderSysID="", SequenceNo=0, TraderID="", OrderLocalID="", OffsetFlag='0', TradingRole='1', Price=0, Volume=0, PriceSource='0', TradeSource='0', TradeTime=""):
        self.TradeDate=tou(TradeDate)
        self.ClientID=tou(ClientID)
        self.TradeType=tou(TradeType)
        self.BusinessUnit=tou(BusinessUnit)
        self.Direction=tou(Direction)
        self.HedgeFlag=tou(HedgeFlag)
        self.ExchangeID=tou(ExchangeID)
        self.ClearingPartID=tou(ClearingPartID)
        self.ParticipantID=tou(ParticipantID)
        self.ExchangeInstID=tou(ExchangeInstID)
        self.TradeID=tou(TradeID)
        self.OrderSysID=tou(OrderSysID)
        self.SequenceNo=SequenceNo
        self.TraderID=tou(TraderID)
        self.OrderLocalID=tou(OrderLocalID)
        self.OffsetFlag=tou(OffsetFlag)
        self.TradingRole=tou(TradingRole)
        self.Price=Price
        self.Volume=Volume
        self.PriceSource=tou(PriceSource)
        self.TradeSource=tou(TradeSource)
        self.TradeTime=tou(TradeTime)
        self.vcmap={'TradingRole': {"'1'": '代理', "'2'": '自营', "'3'": '做市商'}, 'TradeSource': {"'1'": '来自查询', "'0'": '来自交易所普通回报'}, 'PriceSource': {"'1'": '买委托价', "'2'": '卖委托价', "'0'": '前成交价'}, 'TradeType': {"'0'": '普通成交', "'1'": '期权执行', "'4'": '组合衍生成交', "'3'": '期转现衍生成交', "'2'": 'OTC成交', "'#'": '组合持仓拆分为单一持仓,初始化不应包含该类型的持仓'}, 'OffsetFlag': {"'6'": '本地强平', "'0'": '开仓', "'1'": '平仓', "'4'": '平昨', "'2'": '强平', "'5'": '强减', "'3'": '平今'}, 'Direction': {"'1'": '卖', "'0'": '买'}, 'HedgeFlag': {"'1'": '投机', "'2'": '套利', "'3'": '套保'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradeDate', 'ClientID', 'TradeType', 'BusinessUnit', 'Direction', 'HedgeFlag', 'ExchangeID', 'ClearingPartID', 'ParticipantID', 'ExchangeInstID', 'TradeID', 'OrderSysID', 'SequenceNo', 'TraderID', 'OrderLocalID', 'OffsetFlag', 'TradingRole', 'Price', 'Volume', 'PriceSource', 'TradeSource', 'TradeTime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradeDate', u'成交时期'),('ClientID', u'客户代码'),('TradeType', u'成交类型'),('BusinessUnit', u'业务单元'),('Direction', u'买卖方向'),('HedgeFlag', u'投机套保标志'),('ExchangeID', u'交易所代码'),('ClearingPartID', u'结算会员编号'),('ParticipantID', u'会员代码'),('ExchangeInstID', u'合约在交易所的代码'),('TradeID', u'成交编号'),('OrderSysID', u'报单编号'),('SequenceNo', u'序号'),('TraderID', u'交易所交易员代码'),('OrderLocalID', u'本地报单编号'),('OffsetFlag', u'开平标志'),('TradingRole', u'交易角色'),('Price', u'价格'),('Volume', u'数量'),('PriceSource', u'成交价来源'),('TradeSource', u'成交来源'),('TradeTime', u'成交时间')]])
    def getval(self, n):
        if n in ['TradeType', 'Direction', 'HedgeFlag', 'OffsetFlag', 'TradingRole', 'PriceSource', 'TradeSource']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryInvestorPositionCombineDetailField:
    def __init__(self, InvestorID="", BrokerID="", CombInstrumentID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.CombInstrumentID=tou(CombInstrumentID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'CombInstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('CombInstrumentID', u'组合持仓合约编码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryTradingAccountField:
    def __init__(self, InvestorID="", BrokerID="", CurrencyID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.CurrencyID=tou(CurrencyID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'CurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('CurrencyID', u'币种代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryAccountregisterField:
    def __init__(self, BankBranchID="", BrokerID="", BankID="", AccountID="", CurrencyID=""):
        self.BankBranchID=tou(BankBranchID)
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.AccountID=tou(AccountID)
        self.CurrencyID=tou(CurrencyID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BankBranchID', 'BrokerID', 'BankID', 'AccountID', 'CurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BankBranchID', u'银行分支机构编码'),('BrokerID', u'经纪公司代码'),('BankID', u'银行编码'),('AccountID', u'投资者帐号'),('CurrencyID', u'币种代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcExchangeRateField:
    def __init__(self, ToCurrencyID="", BrokerID="", FromCurrencyUnit=0, ExchangeRate=0, FromCurrencyID=""):
        self.ToCurrencyID=tou(ToCurrencyID)
        self.BrokerID=tou(BrokerID)
        self.FromCurrencyUnit=FromCurrencyUnit
        self.ExchangeRate=ExchangeRate
        self.FromCurrencyID=tou(FromCurrencyID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ToCurrencyID', 'BrokerID', 'FromCurrencyUnit', 'ExchangeRate', 'FromCurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ToCurrencyID', u'目标币种'),('BrokerID', u'经纪公司代码'),('FromCurrencyUnit', u'源币种单位数量'),('ExchangeRate', u'汇率'),('FromCurrencyID', u'源币种')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcRemoveParkedOrderField:
    def __init__(self, InvestorID="", BrokerID="", ParkedOrderID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.ParkedOrderID=tou(ParkedOrderID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ParkedOrderID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ParkedOrderID', u'预埋报单编号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryDepthMarketDataField:
    def __init__(self, InstrumentID=""):
        self.InstrumentID=tou(InstrumentID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryCFMMCTradingAccountKeyField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryInstrumentStatusField:
    def __init__(self, ExchangeInstID="", ExchangeID=""):
        self.ExchangeInstID=tou(ExchangeInstID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeInstID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeInstID', u'合约在交易所的代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryExchangeField:
    def __init__(self, ExchangeID=""):
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryBrokerUserField:
    def __init__(self, BrokerID="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerDepositField:
    def __init__(self, TradingDay="", BrokerID="", Deposit=0, Withdraw=0, CloseProfit=0, Available=0, PreBalance=0, CurrMargin=0, Balance=0, ParticipantID="", FrozenMargin=0, ExchangeID="", Reserve=0):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.Deposit=Deposit
        self.Withdraw=Withdraw
        self.CloseProfit=CloseProfit
        self.Available=Available
        self.PreBalance=PreBalance
        self.CurrMargin=CurrMargin
        self.Balance=Balance
        self.ParticipantID=tou(ParticipantID)
        self.FrozenMargin=FrozenMargin
        self.ExchangeID=tou(ExchangeID)
        self.Reserve=Reserve
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'Deposit', 'Withdraw', 'CloseProfit', 'Available', 'PreBalance', 'CurrMargin', 'Balance', 'ParticipantID', 'FrozenMargin', 'ExchangeID', 'Reserve']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日期'),('BrokerID', u'经纪公司代码'),('Deposit', u'入金金额'),('Withdraw', u'出金金额'),('CloseProfit', u'平仓盈亏'),('Available', u'可提资金'),('PreBalance', u'上次结算准备金'),('CurrMargin', u'当前保证金总额'),('Balance', u'期货结算准备金'),('ParticipantID', u'会员代码'),('FrozenMargin', u'冻结的保证金'),('ExchangeID', u'交易所代码'),('Reserve', u'基本准备金')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerField:
    def __init__(self, BrokerID="", BrokerName="", IsActive=0, BrokerAbbr=""):
        self.BrokerID=tou(BrokerID)
        self.BrokerName=tou(BrokerName)
        self.IsActive=IsActive
        self.BrokerAbbr=tou(BrokerAbbr)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'BrokerName', 'IsActive', 'BrokerAbbr']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('BrokerName', u'经纪公司名称'),('IsActive', u'是否活跃'),('BrokerAbbr', u'经纪公司简称')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryBrokerTradingParamsField:
    def __init__(self, InvestorID="", BrokerID="", CurrencyID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.CurrencyID=tou(CurrencyID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'CurrencyID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('CurrencyID', u'币种代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryTraderField:
    def __init__(self, ParticipantID="", TraderID="", ExchangeID=""):
        self.ParticipantID=tou(ParticipantID)
        self.TraderID=tou(TraderID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ParticipantID', 'TraderID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ParticipantID', u'会员代码'),('TraderID', u'交易所交易员代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSettlementInfoField:
    def __init__(self, TradingDay="", BrokerID="", SequenceNo=0, Content="", InvestorID="", SettlementID=0):
        self.TradingDay=tou(TradingDay)
        self.BrokerID=tou(BrokerID)
        self.SequenceNo=SequenceNo
        self.Content=tou(Content)
        self.InvestorID=tou(InvestorID)
        self.SettlementID=SettlementID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'BrokerID', 'SequenceNo', 'Content', 'InvestorID', 'SettlementID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('BrokerID', u'经纪公司代码'),('SequenceNo', u'序号'),('Content', u'消息正文'),('InvestorID', u'投资者代码'),('SettlementID', u'结算编号')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryContractBankField:
    def __init__(self, BrokerID="", BankID="", BankBrchID=""):
        self.BrokerID=tou(BrokerID)
        self.BankID=tou(BankID)
        self.BankBrchID=tou(BankBrchID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'BankID', 'BankBrchID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('BankID', u'银行代码'),('BankBrchID', u'银行分中心代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSpecificInstrumentField:
    def __init__(self, InstrumentID=""):
        self.InstrumentID=tou(InstrumentID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcSyncingTradingAccountField:
    def __init__(self, SpecProductPositionProfit=0, AccountID="", Credit=0, SpecProductPositionProfitByAlg=0, InterestBase=0, PreMargin=0, BrokerID="", FrozenCommission=0, DeliveryMargin=0, ExchangeDeliveryMargin=0, Mortgage=0, Commission=0, CurrMargin=0, ExchangeMargin=0, Interest=0, PreDeposit=0, Balance=0, SpecProductExchangeMargin=0, FundMortgageAvailable=0, CurrencyID="", FundMortgageOut=0, TradingDay="", Withdraw=0, CloseProfit=0, PreFundMortgageOut=0, Available=0, PreBalance=0, SpecProductMargin=0, MortgageableFund=0, FrozenMargin=0, Deposit=0, SettlementID=0, PositionProfit=0, PreFundMortgageIn=0, SpecProductFrozenCommission=0, CashIn=0, FrozenCash=0, SpecProductFrozenMargin=0, FundMortgageIn=0, WithdrawQuota=0, ReserveBalance=0, PreCredit=0, Reserve=0, SpecProductCommission=0, PreMortgage=0, SpecProductCloseProfit=0):
        self.SpecProductPositionProfit=SpecProductPositionProfit
        self.AccountID=tou(AccountID)
        self.Credit=Credit
        self.SpecProductPositionProfitByAlg=SpecProductPositionProfitByAlg
        self.InterestBase=InterestBase
        self.PreMargin=PreMargin
        self.BrokerID=tou(BrokerID)
        self.FrozenCommission=FrozenCommission
        self.DeliveryMargin=DeliveryMargin
        self.ExchangeDeliveryMargin=ExchangeDeliveryMargin
        self.Mortgage=Mortgage
        self.Commission=Commission
        self.CurrMargin=CurrMargin
        self.ExchangeMargin=ExchangeMargin
        self.Interest=Interest
        self.PreDeposit=PreDeposit
        self.Balance=Balance
        self.SpecProductExchangeMargin=SpecProductExchangeMargin
        self.FundMortgageAvailable=FundMortgageAvailable
        self.CurrencyID=tou(CurrencyID)
        self.FundMortgageOut=FundMortgageOut
        self.TradingDay=tou(TradingDay)
        self.Withdraw=Withdraw
        self.CloseProfit=CloseProfit
        self.PreFundMortgageOut=PreFundMortgageOut
        self.Available=Available
        self.PreBalance=PreBalance
        self.SpecProductMargin=SpecProductMargin
        self.MortgageableFund=MortgageableFund
        self.FrozenMargin=FrozenMargin
        self.Deposit=Deposit
        self.SettlementID=SettlementID
        self.PositionProfit=PositionProfit
        self.PreFundMortgageIn=PreFundMortgageIn
        self.SpecProductFrozenCommission=SpecProductFrozenCommission
        self.CashIn=CashIn
        self.FrozenCash=FrozenCash
        self.SpecProductFrozenMargin=SpecProductFrozenMargin
        self.FundMortgageIn=FundMortgageIn
        self.WithdrawQuota=WithdrawQuota
        self.ReserveBalance=ReserveBalance
        self.PreCredit=PreCredit
        self.Reserve=Reserve
        self.SpecProductCommission=SpecProductCommission
        self.PreMortgage=PreMortgage
        self.SpecProductCloseProfit=SpecProductCloseProfit
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['SpecProductPositionProfit', 'AccountID', 'Credit', 'SpecProductPositionProfitByAlg', 'InterestBase', 'PreMargin', 'BrokerID', 'FrozenCommission', 'DeliveryMargin', 'ExchangeDeliveryMargin', 'Mortgage', 'Commission', 'CurrMargin', 'ExchangeMargin', 'Interest', 'PreDeposit', 'Balance', 'SpecProductExchangeMargin', 'FundMortgageAvailable', 'CurrencyID', 'FundMortgageOut', 'TradingDay', 'Withdraw', 'CloseProfit', 'PreFundMortgageOut', 'Available', 'PreBalance', 'SpecProductMargin', 'MortgageableFund', 'FrozenMargin', 'Deposit', 'SettlementID', 'PositionProfit', 'PreFundMortgageIn', 'SpecProductFrozenCommission', 'CashIn', 'FrozenCash', 'SpecProductFrozenMargin', 'FundMortgageIn', 'WithdrawQuota', 'ReserveBalance', 'PreCredit', 'Reserve', 'SpecProductCommission', 'PreMortgage', 'SpecProductCloseProfit']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('SpecProductPositionProfit', u'特殊产品持仓盈亏'),('AccountID', u'投资者帐号'),('Credit', u'信用额度'),('SpecProductPositionProfitByAlg', u'根据持仓盈亏算法计算的特殊产品持仓盈亏'),('InterestBase', u'利息基数'),('PreMargin', u'上次占用的保证金'),('BrokerID', u'经纪公司代码'),('FrozenCommission', u'冻结的手续费'),('DeliveryMargin', u'投资者交割保证金'),('ExchangeDeliveryMargin', u'交易所交割保证金'),('Mortgage', u'质押金额'),('Commission', u'手续费'),('CurrMargin', u'当前保证金总额'),('ExchangeMargin', u'交易所保证金'),('Interest', u'利息收入'),('PreDeposit', u'上次存款额'),('Balance', u'期货结算准备金'),('SpecProductExchangeMargin', u'特殊产品交易所保证金'),('FundMortgageAvailable', u'货币质押余额'),('CurrencyID', u'币种代码'),('FundMortgageOut', u'货币质出金额'),('TradingDay', u'交易日'),('Withdraw', u'出金金额'),('CloseProfit', u'平仓盈亏'),('PreFundMortgageOut', u'上次货币质出金额'),('Available', u'可用资金'),('PreBalance', u'上次结算准备金'),('SpecProductMargin', u'特殊产品占用保证金'),('MortgageableFund', u'可质押货币金额'),('FrozenMargin', u'冻结的保证金'),('Deposit', u'入金金额'),('SettlementID', u'结算编号'),('PositionProfit', u'持仓盈亏'),('PreFundMortgageIn', u'上次货币质入金额'),('SpecProductFrozenCommission', u'特殊产品冻结手续费'),('CashIn', u'资金差额'),('FrozenCash', u'冻结的资金'),('SpecProductFrozenMargin', u'特殊产品冻结保证金'),('FundMortgageIn', u'货币质入金额'),('WithdrawQuota', u'可取资金'),('ReserveBalance', u'保底期货结算准备金'),('PreCredit', u'上次信用额度'),('Reserve', u'基本准备金'),('SpecProductCommission', u'特殊产品手续费'),('PreMortgage', u'上次质押金额'),('SpecProductCloseProfit', u'特殊产品平仓盈亏')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerTradingParamsField:
    def __init__(self, BrokerID="", MarginPriceType='1', AvailIncludeCloseProfit='0', InvestorID="", CurrencyID="", Algorithm='1'):
        self.BrokerID=tou(BrokerID)
        self.MarginPriceType=tou(MarginPriceType)
        self.AvailIncludeCloseProfit=tou(AvailIncludeCloseProfit)
        self.InvestorID=tou(InvestorID)
        self.CurrencyID=tou(CurrencyID)
        self.Algorithm=tou(Algorithm)
        self.vcmap={'AvailIncludeCloseProfit': {"'2'": '不包含平仓盈利', "'0'": '包含平仓盈利'}, 'MarginPriceType': {"'1'": '昨结算价', "'4'": '开仓价', "'2'": '最新价', "'3'": '成交均价'}, 'Algorithm': {"'1'": '浮盈浮亏都计算', "'4'": '浮盈浮亏都不计算', "'2'": '浮盈不计，浮亏计', "'3'": '浮盈计，浮亏不计'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'MarginPriceType', 'AvailIncludeCloseProfit', 'InvestorID', 'CurrencyID', 'Algorithm']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('MarginPriceType', u'保证金价格类型'),('AvailIncludeCloseProfit', u'可用是否包含平仓盈利'),('InvestorID', u'投资者代码'),('CurrencyID', u'币种代码'),('Algorithm', u'盈亏算法')]])
    def getval(self, n):
        if n in ['MarginPriceType', 'AvailIncludeCloseProfit', 'Algorithm']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcReqCancelAccountField:
    def __init__(self, ZipCode="", TradeDate="", Address="", Telephone="", MoneyAccountStatus='0', BankBranchID="", SecuPwdFlag='0', BrokerID="", BankAccType='1', PlateSerial=0, AccountID="", DeviceID="", InstallID=0, BankSecuAccType='1', CurrencyID="", Digest="", BankAccount="", TradingDay="", BrokerBranchID="", BankPassWord="", IdentifiedCardNo="", IdCardType='0', UserID="", BankSerial="", SessionID=0, Fax="", TradeCode="", Password="", CountryCode="", OperNo="", BankPwdFlag='0', Gender='0', BankID="", BankSecuAcc="", EMail="", CustType='0', BrokerIDByBank="", TID=0, MobilePhone="", CashExchangeCode='1', CustomerName="", TradeTime="", LastFragment='0', VerifyCertNoFlag='0'):
        self.ZipCode=tou(ZipCode)
        self.TradeDate=tou(TradeDate)
        self.Address=tou(Address)
        self.Telephone=tou(Telephone)
        self.MoneyAccountStatus=tou(MoneyAccountStatus)
        self.BankBranchID=tou(BankBranchID)
        self.SecuPwdFlag=tou(SecuPwdFlag)
        self.BrokerID=tou(BrokerID)
        self.BankAccType=tou(BankAccType)
        self.PlateSerial=PlateSerial
        self.AccountID=tou(AccountID)
        self.DeviceID=tou(DeviceID)
        self.InstallID=InstallID
        self.BankSecuAccType=tou(BankSecuAccType)
        self.CurrencyID=tou(CurrencyID)
        self.Digest=tou(Digest)
        self.BankAccount=tou(BankAccount)
        self.TradingDay=tou(TradingDay)
        self.BrokerBranchID=tou(BrokerBranchID)
        self.BankPassWord=tou(BankPassWord)
        self.IdentifiedCardNo=tou(IdentifiedCardNo)
        self.IdCardType=tou(IdCardType)
        self.UserID=tou(UserID)
        self.BankSerial=tou(BankSerial)
        self.SessionID=SessionID
        self.Fax=tou(Fax)
        self.TradeCode=tou(TradeCode)
        self.Password=tou(Password)
        self.CountryCode=tou(CountryCode)
        self.OperNo=tou(OperNo)
        self.BankPwdFlag=tou(BankPwdFlag)
        self.Gender=tou(Gender)
        self.BankID=tou(BankID)
        self.BankSecuAcc=tou(BankSecuAcc)
        self.EMail=tou(EMail)
        self.CustType=tou(CustType)
        self.BrokerIDByBank=tou(BrokerIDByBank)
        self.TID=TID
        self.MobilePhone=tou(MobilePhone)
        self.CashExchangeCode=tou(CashExchangeCode)
        self.CustomerName=tou(CustomerName)
        self.TradeTime=tou(TradeTime)
        self.LastFragment=tou(LastFragment)
        self.VerifyCertNoFlag=tou(VerifyCertNoFlag)
        self.vcmap={'MoneyAccountStatus': {"'1'": '销户', "'0'": '正常'}, 'BankPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'CashExchangeCode': {"'1'": '汇', "'2'": '钞'}, 'IdCardType': {"'F'": '当地社保ID', "'9'": '营业执照号', "'G'": '当地身份证', "'A'": '税务登记号/当地纳税ID', "'4'": '士兵证', "'B'": '港澳居民来往内地通行证', "'5'": '户口簿', "'H'": '商业登记证', "'C'": '台湾居民来往大陆通行证', "'6'": '护照', "'I'": '港澳永久性居民身份证', "'7'": '台胞证', "'x'": '其他证件', "'0'": '组织机构代码', "'1'": '中国公民身份证', "'D'": '驾照', "'2'": '军官证', "'8'": '回乡证', "'3'": '警官证'}, 'LastFragment': {"'1'": '不是最后分片', "'0'": '是最后分片'}, 'Gender': {"'1'": '男', "'2'": '女', "'0'": '未知状态'}, 'SecuPwdFlag': {"'1'": '明文核对', "'2'": '密文核对', "'0'": '不核对'}, 'BankAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}, 'CustType': {"'1'": '机构户', "'0'": '自然人'}, 'VerifyCertNoFlag': {"'1'": '否', "'0'": '是'}, 'BankSecuAccType': {"'1'": '银行存折', "'2'": '储蓄卡', "'3'": '信用卡'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ZipCode', 'TradeDate', 'Address', 'Telephone', 'MoneyAccountStatus', 'BankBranchID', 'SecuPwdFlag', 'BrokerID', 'BankAccType', 'PlateSerial', 'AccountID', 'DeviceID', 'InstallID', 'BankSecuAccType', 'CurrencyID', 'Digest', 'BankAccount', 'TradingDay', 'BrokerBranchID', 'BankPassWord', 'IdentifiedCardNo', 'IdCardType', 'UserID', 'BankSerial', 'SessionID', 'Fax', 'TradeCode', 'Password', 'CountryCode', 'OperNo', 'BankPwdFlag', 'Gender', 'BankID', 'BankSecuAcc', 'EMail', 'CustType', 'BrokerIDByBank', 'TID', 'MobilePhone', 'CashExchangeCode', 'CustomerName', 'TradeTime', 'LastFragment', 'VerifyCertNoFlag']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ZipCode', u'邮编'),('TradeDate', u'交易日期'),('Address', u'地址'),('Telephone', u'电话号码'),('MoneyAccountStatus', u'资金账户状态'),('BankBranchID', u'银行分支机构代码'),('SecuPwdFlag', u'期货资金密码核对标志'),('BrokerID', u'期商代码'),('BankAccType', u'银行帐号类型'),('PlateSerial', u'银期平台消息流水号'),('AccountID', u'投资者帐号'),('DeviceID', u'渠道标志'),('InstallID', u'安装编号'),('BankSecuAccType', u'期货单位帐号类型'),('CurrencyID', u'币种代码'),('Digest', u'摘要'),('BankAccount', u'银行帐号'),('TradingDay', u'交易系统日期'),('BrokerBranchID', u'期商分支机构代码'),('BankPassWord', u'银行密码'),('IdentifiedCardNo', u'证件号码'),('IdCardType', u'证件类型'),('UserID', u'用户标识'),('BankSerial', u'银行流水号'),('SessionID', u'会话号'),('Fax', u'传真'),('TradeCode', u'业务功能码'),('Password', u'期货密码'),('CountryCode', u'国家代码'),('OperNo', u'交易柜员'),('BankPwdFlag', u'银行密码标志'),('Gender', u'性别'),('BankID', u'银行代码'),('BankSecuAcc', u'期货单位帐号'),('EMail', u'电子邮件'),('CustType', u'客户类型'),('BrokerIDByBank', u'期货公司银行编码'),('TID', u'交易ID'),('MobilePhone', u'手机'),('CashExchangeCode', u'汇钞标志'),('CustomerName', u'客户姓名'),('TradeTime', u'交易时间'),('LastFragment', u'最后分片标志'),('VerifyCertNoFlag', u'验证客户证件号码标志')]])
    def getval(self, n):
        if n in ['MoneyAccountStatus', 'SecuPwdFlag', 'BankAccType', 'BankSecuAccType', 'IdCardType', 'BankPwdFlag', 'Gender', 'CustType', 'CashExchangeCode', 'LastFragment', 'VerifyCertNoFlag']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcExchangeOrderActionErrorField:
    def __init__(self, ErrorID=0, ErrorMsg="", OrderSysID="", TraderID="", OrderLocalID="", ActionLocalID="", InstallID=0, ExchangeID=""):
        self.ErrorID=ErrorID
        self.ErrorMsg=tou(ErrorMsg)
        self.OrderSysID=tou(OrderSysID)
        self.TraderID=tou(TraderID)
        self.OrderLocalID=tou(OrderLocalID)
        self.ActionLocalID=tou(ActionLocalID)
        self.InstallID=InstallID
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ErrorID', 'ErrorMsg', 'OrderSysID', 'TraderID', 'OrderLocalID', 'ActionLocalID', 'InstallID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ErrorID', u'错误代码'),('ErrorMsg', u'错误信息'),('OrderSysID', u'报单编号'),('TraderID', u'交易所交易员代码'),('OrderLocalID', u'本地报单编号'),('ActionLocalID', u'操作本地编号'),('InstallID', u'安装编号'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryParkedOrderActionField:
    def __init__(self, InvestorID="", BrokerID="", ExchangeID="", InstrumentID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.ExchangeID=tou(ExchangeID)
        self.InstrumentID=tou(InstrumentID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID', 'ExchangeID', 'InstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码'),('ExchangeID', u'交易所代码'),('InstrumentID', u'合约代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQueryBrokerDepositField:
    def __init__(self, BrokerID="", ExchangeID=""):
        self.BrokerID=tou(BrokerID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcTradingNoticeField:
    def __init__(self, BrokerID="", SequenceNo=0, InvestorRange='1', InvestorID="", UserID="", SendTime="", FieldContent="", SequenceSeries=0):
        self.BrokerID=tou(BrokerID)
        self.SequenceNo=SequenceNo
        self.InvestorRange=tou(InvestorRange)
        self.InvestorID=tou(InvestorID)
        self.UserID=tou(UserID)
        self.SendTime=tou(SendTime)
        self.FieldContent=tou(FieldContent)
        self.SequenceSeries=SequenceSeries
        self.vcmap={'InvestorRange': {"'1'": '所有', "'2'": '投资者组', "'3'": '单一投资者'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'SequenceNo', 'InvestorRange', 'InvestorID', 'UserID', 'SendTime', 'FieldContent', 'SequenceSeries']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('SequenceNo', u'序列号'),('InvestorRange', u'投资者范围'),('InvestorID', u'投资者代码'),('UserID', u'用户代码'),('SendTime', u'发送时间'),('FieldContent', u'消息正文'),('SequenceSeries', u'序列系列号')]])
    def getval(self, n):
        if n in ['InvestorRange']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcOrderActionField:
    def __init__(self, FrontID=0, ClientID="", OrderActionRef=0, StatusMsg="", ActionLocalID="", BusinessUnit="", SessionID=0, ActionFlag='0', ParticipantID="", InstrumentID="", ActionDate="", ExchangeID="", RequestID=0, BrokerID="", OrderSysID="", TraderID="", OrderLocalID="", InstallID=0, ActionTime="", LimitPrice=0, OrderActionStatus='a', UserID="", OrderRef="", VolumeChange=0, InvestorID=""):
        self.FrontID=FrontID
        self.ClientID=tou(ClientID)
        self.OrderActionRef=OrderActionRef
        self.StatusMsg=tou(StatusMsg)
        self.ActionLocalID=tou(ActionLocalID)
        self.BusinessUnit=tou(BusinessUnit)
        self.SessionID=SessionID
        self.ActionFlag=tou(ActionFlag)
        self.ParticipantID=tou(ParticipantID)
        self.InstrumentID=tou(InstrumentID)
        self.ActionDate=tou(ActionDate)
        self.ExchangeID=tou(ExchangeID)
        self.RequestID=RequestID
        self.BrokerID=tou(BrokerID)
        self.OrderSysID=tou(OrderSysID)
        self.TraderID=tou(TraderID)
        self.OrderLocalID=tou(OrderLocalID)
        self.InstallID=InstallID
        self.ActionTime=tou(ActionTime)
        self.LimitPrice=LimitPrice
        self.OrderActionStatus=tou(OrderActionStatus)
        self.UserID=tou(UserID)
        self.OrderRef=tou(OrderRef)
        self.VolumeChange=VolumeChange
        self.InvestorID=tou(InvestorID)
        self.vcmap={'OrderActionStatus': {"'a'": '已经提交', "'b'": '已经接受', "'c'": '已经被拒绝'}, 'ActionFlag': {"'0'": '删除', "'3'": '修改'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'ClientID', 'OrderActionRef', 'StatusMsg', 'ActionLocalID', 'BusinessUnit', 'SessionID', 'ActionFlag', 'ParticipantID', 'InstrumentID', 'ActionDate', 'ExchangeID', 'RequestID', 'BrokerID', 'OrderSysID', 'TraderID', 'OrderLocalID', 'InstallID', 'ActionTime', 'LimitPrice', 'OrderActionStatus', 'UserID', 'OrderRef', 'VolumeChange', 'InvestorID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('ClientID', u'客户代码'),('OrderActionRef', u'报单操作引用'),('StatusMsg', u'状态信息'),('ActionLocalID', u'操作本地编号'),('BusinessUnit', u'业务单元'),('SessionID', u'会话编号'),('ActionFlag', u'操作标志'),('ParticipantID', u'会员代码'),('InstrumentID', u'合约代码'),('ActionDate', u'操作日期'),('ExchangeID', u'交易所代码'),('RequestID', u'请求编号'),('BrokerID', u'经纪公司代码'),('OrderSysID', u'报单编号'),('TraderID', u'交易所交易员代码'),('OrderLocalID', u'本地报单编号'),('InstallID', u'安装编号'),('ActionTime', u'操作时间'),('LimitPrice', u'价格'),('OrderActionStatus', u'报单操作状态'),('UserID', u'用户代码'),('OrderRef', u'报单引用'),('VolumeChange', u'数量变化'),('InvestorID', u'投资者代码')]])
    def getval(self, n):
        if n in ['ActionFlag', 'OrderActionStatus']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerUserPasswordField:
    def __init__(self, BrokerID="", Password="", UserID=""):
        self.BrokerID=tou(BrokerID)
        self.Password=tou(Password)
        self.UserID=tou(UserID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'Password', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('Password', u'密码'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQrySettlementInfoConfirmField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcNoticeField:
    def __init__(self, BrokerID="", SequenceLabel="", Content=""):
        self.BrokerID=tou(BrokerID)
        self.SequenceLabel=tou(SequenceLabel)
        self.Content=tou(Content)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'SequenceLabel', 'Content']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('SequenceLabel', u'经纪公司通知内容序列号'),('Content', u'消息正文')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcMarketDataStaticField:
    def __init__(self, ClosePrice=0, HighestPrice=0, CurrDelta=0, SettlementPrice=0, LowerLimitPrice=0, LowestPrice=0, UpperLimitPrice=0, OpenPrice=0):
        self.ClosePrice=ClosePrice
        self.HighestPrice=HighestPrice
        self.CurrDelta=CurrDelta
        self.SettlementPrice=SettlementPrice
        self.LowerLimitPrice=LowerLimitPrice
        self.LowestPrice=LowestPrice
        self.UpperLimitPrice=UpperLimitPrice
        self.OpenPrice=OpenPrice
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ClosePrice', 'HighestPrice', 'CurrDelta', 'SettlementPrice', 'LowerLimitPrice', 'LowestPrice', 'UpperLimitPrice', 'OpenPrice']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ClosePrice', u'今收盘'),('HighestPrice', u'最高价'),('CurrDelta', u'今虚实度'),('SettlementPrice', u'本次结算价'),('LowerLimitPrice', u'跌停板价'),('LowestPrice', u'最低价'),('UpperLimitPrice', u'涨停板价'),('OpenPrice', u'今开盘')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQrySyncStatusField:
    def __init__(self, TradingDay=""):
        self.TradingDay=tou(TradingDay)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryCombinationLegField:
    def __init__(self, LegID=0, LegInstrumentID="", CombInstrumentID=""):
        self.LegID=LegID
        self.LegInstrumentID=tou(LegInstrumentID)
        self.CombInstrumentID=tou(CombInstrumentID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['LegID', 'LegInstrumentID', 'CombInstrumentID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('LegID', u'单腿编号'),('LegInstrumentID', u'单腿合约代码'),('CombInstrumentID', u'组合合约代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcInstrumentTradingRightField:
    def __init__(self, InvestorID="", InstrumentID="", BrokerID="", TradingRight='0', InvestorRange='1'):
        self.InvestorID=tou(InvestorID)
        self.InstrumentID=tou(InstrumentID)
        self.BrokerID=tou(BrokerID)
        self.TradingRight=tou(TradingRight)
        self.InvestorRange=tou(InvestorRange)
        self.vcmap={'TradingRight': {"'1'": '只能平仓', "'2'": '不能交易', "'0'": '可以交易'}, 'InvestorRange': {"'1'": '所有', "'2'": '投资者组', "'3'": '单一投资者'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'InstrumentID', 'BrokerID', 'TradingRight', 'InvestorRange']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('InstrumentID', u'合约代码'),('BrokerID', u'经纪公司代码'),('TradingRight', u'交易权限'),('InvestorRange', u'投资者范围')]])
    def getval(self, n):
        if n in ['TradingRight', 'InvestorRange']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcFensUserInfoField:
    def __init__(self, BrokerID="", LoginMode='0', UserID=""):
        self.BrokerID=tou(BrokerID)
        self.LoginMode=tou(LoginMode)
        self.UserID=tou(UserID)
        self.vcmap={'LoginMode': {"'1'": '转账', "'0'": '交易'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'LoginMode', 'UserID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('LoginMode', u'登录模式'),('UserID', u'用户代码')]])
    def getval(self, n):
        if n in ['LoginMode']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryLinkManField:
    def __init__(self, InvestorID="", BrokerID=""):
        self.InvestorID=tou(InvestorID)
        self.BrokerID=tou(BrokerID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['InvestorID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('InvestorID', u'投资者代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcExchangeOrderInsertErrorField:
    def __init__(self, ErrorID=0, ParticipantID="", TraderID="", OrderLocalID="", ErrorMsg="", InstallID=0, ExchangeID=""):
        self.ErrorID=ErrorID
        self.ParticipantID=tou(ParticipantID)
        self.TraderID=tou(TraderID)
        self.OrderLocalID=tou(OrderLocalID)
        self.ErrorMsg=tou(ErrorMsg)
        self.InstallID=InstallID
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ErrorID', 'ParticipantID', 'TraderID', 'OrderLocalID', 'ErrorMsg', 'InstallID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ErrorID', u'错误代码'),('ParticipantID', u'会员代码'),('TraderID', u'交易所交易员代码'),('OrderLocalID', u'本地报单编号'),('ErrorMsg', u'错误信息'),('InstallID', u'安装编号'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcBrokerUserOTPParamField:
    def __init__(self, BrokerID="", OTPType='0', AuthKey="", LastDrift=0, UserID="", OTPVendorsID="", SerialNumber="", LastSuccess=0):
        self.BrokerID=tou(BrokerID)
        self.OTPType=tou(OTPType)
        self.AuthKey=tou(AuthKey)
        self.LastDrift=LastDrift
        self.UserID=tou(UserID)
        self.OTPVendorsID=tou(OTPVendorsID)
        self.SerialNumber=tou(SerialNumber)
        self.LastSuccess=LastSuccess
        self.vcmap={'OTPType': {"'1'": '时间令牌', "'0'": '无动态令牌'}}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'OTPType', 'AuthKey', 'LastDrift', 'UserID', 'OTPVendorsID', 'SerialNumber', 'LastSuccess']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('OTPType', u'动态令牌类型'),('AuthKey', u'令牌密钥'),('LastDrift', u'漂移值'),('UserID', u'用户代码'),('OTPVendorsID', u'动态令牌提供商'),('SerialNumber', u'动态令牌序列号'),('LastSuccess', u'成功值')]])
    def getval(self, n):
        if n in ['OTPType']:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)


class CThostFtdcQryBrokerTradingAlgosField:
    def __init__(self, BrokerID="", InstrumentID="", ExchangeID=""):
        self.BrokerID=tou(BrokerID)
        self.InstrumentID=tou(InstrumentID)
        self.ExchangeID=tou(ExchangeID)
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BrokerID', 'InstrumentID', 'ExchangeID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BrokerID', u'经纪公司代码'),('InstrumentID', u'合约代码'),('ExchangeID', u'交易所代码')]])
    def getval(self, n):
        if n in []:
            nkey = "'%s'" % getattr(self, n)
            if nkey in self.vcmap[n]:
                return self.vcmap[n][nkey]
            else:
                return getattr(self, n)
        else:
            return getattr(self, n)
# Set short name alias for the stupid Hungarian Notation
QryOrder=CThostFtdcQryOrderField
QryInstrumentCommissionRate=CThostFtdcQryInstrumentCommissionRateField
QryOrderAction=CThostFtdcQryOrderActionField
QryProduct=CThostFtdcQryProductField
RspAuthenticate=CThostFtdcRspAuthenticateField
CFMMCBrokerKey=CThostFtdcCFMMCBrokerKeyField
Order=CThostFtdcOrderField
ErrOrder=CThostFtdcErrOrderField
QryInvestorPositionDetail=CThostFtdcQryInvestorPositionDetailField
QrySuperUser=CThostFtdcQrySuperUserField
ErrorConditionalOrder=CThostFtdcErrorConditionalOrderField
FrontStatus=CThostFtdcFrontStatusField
SyncFundMortgage=CThostFtdcSyncFundMortgageField
EWarrantOffset=CThostFtdcEWarrantOffsetField
QryFrontStatus=CThostFtdcQryFrontStatusField
FutureSignIO=CThostFtdcFutureSignIOField
ReqQueryAccount=CThostFtdcReqQueryAccountField
QrySettlementInfo=CThostFtdcQrySettlementInfoField
ReturnResult=CThostFtdcReturnResultField
PartBroker=CThostFtdcPartBrokerField
RspInfo=CThostFtdcRspInfoField
QryBrokerUserEvent=CThostFtdcQryBrokerUserEventField
QryMarginModel=CThostFtdcQryMarginModelField
QryInvestorGroup=CThostFtdcQryInvestorGroupField
Product=CThostFtdcProductField
QryHisOrder=CThostFtdcQryHisOrderField
UserRightsAssign=CThostFtdcUserRightsAssignField
QueryCFMMCTradingAccountToken=CThostFtdcQueryCFMMCTradingAccountTokenField
RspUserLogin=CThostFtdcRspUserLoginField
BrokerUser=CThostFtdcBrokerUserField
UserLogout=CThostFtdcUserLogoutField
MarketDataLastMatch=CThostFtdcMarketDataLastMatchField
QryEWarrantOffset=CThostFtdcQryEWarrantOffsetField
ParkedOrderAction=CThostFtdcParkedOrderActionField
QryBrokerUserFunction=CThostFtdcQryBrokerUserFunctionField
CancelAccount=CThostFtdcCancelAccountField
LoginInfo=CThostFtdcLoginInfoField
QryTradingCode=CThostFtdcQryTradingCodeField
CurrTransferIdentity=CThostFtdcCurrTransferIdentityField
ExchangeMarginRateAdjust=CThostFtdcExchangeMarginRateAdjustField
MDTraderOffer=CThostFtdcMDTraderOfferField
ParkedOrder=CThostFtdcParkedOrderField
CurrentTime=CThostFtdcCurrentTimeField
TransferQryBankReq=CThostFtdcTransferQryBankReqField
QryTransferSerial=CThostFtdcQryTransferSerialField
DepositResultInform=CThostFtdcDepositResultInformField
TradingCode=CThostFtdcTradingCodeField
MarketDataExchange=CThostFtdcMarketDataExchangeField
QryLoginForbiddenUser=CThostFtdcQryLoginForbiddenUserField
PositionProfitAlgorithm=CThostFtdcPositionProfitAlgorithmField
ReqQueryTradeResultBySerial=CThostFtdcReqQueryTradeResultBySerialField
TradingAccount=CThostFtdcTradingAccountField
QrySyncDeposit=CThostFtdcQrySyncDepositField
TransferHeader=CThostFtdcTransferHeaderField
ReqChangeAccount=CThostFtdcReqChangeAccountField
QryExchangeRate=CThostFtdcQryExchangeRateField
MarketDataBid45=CThostFtdcMarketDataBid45Field
InvestorGroup=CThostFtdcInvestorGroupField
QryExchangeOrder=CThostFtdcQryExchangeOrderField
TradingAccountReserve=CThostFtdcTradingAccountReserveField
QryExchangeMarginRate=CThostFtdcQryExchangeMarginRateField
ReqFutureSignOut=CThostFtdcReqFutureSignOutField
UserRight=CThostFtdcUserRightField
ForceUserLogout=CThostFtdcForceUserLogoutField
Dissemination=CThostFtdcDisseminationField
QryTraderOffer=CThostFtdcQryTraderOfferField
QryUserSession=CThostFtdcQryUserSessionField
QrySyncFundMortgage=CThostFtdcQrySyncFundMortgageField
TransferQryBankRsp=CThostFtdcTransferQryBankRspField
QryMDTraderOffer=CThostFtdcQryMDTraderOfferField
QrySecAgentACIDMap=CThostFtdcQrySecAgentACIDMapField
MarketDataAveragePrice=CThostFtdcMarketDataAveragePriceField
QryInstrument=CThostFtdcQryInstrumentField
TransferFutureToBankRsp=CThostFtdcTransferFutureToBankRspField
QryExchangeOrderAction=CThostFtdcQryExchangeOrderActionField
LoadSettlementInfo=CThostFtdcLoadSettlementInfoField
SyncingInvestor=CThostFtdcSyncingInvestorField
OpenAccount=CThostFtdcOpenAccountField
Instrument=CThostFtdcInstrumentField
VerifyFuturePassword=CThostFtdcVerifyFuturePasswordField
TransferQryDetailReq=CThostFtdcTransferQryDetailReqField
SyncingInvestorPosition=CThostFtdcSyncingInvestorPositionField
ManualSyncBrokerUserOTP=CThostFtdcManualSyncBrokerUserOTPField
InvestorPositionCombineDetail=CThostFtdcInvestorPositionCombineDetailField
SettlementRef=CThostFtdcSettlementRefField
BrokerWithdrawAlgorithm=CThostFtdcBrokerWithdrawAlgorithmField
QryErrOrderAction=CThostFtdcQryErrOrderActionField
UserPasswordUpdate=CThostFtdcUserPasswordUpdateField
ReqTransfer=CThostFtdcReqTransferField
QryParkedOrder=CThostFtdcQryParkedOrderField
TransferBank=CThostFtdcTransferBankField
RspTransfer=CThostFtdcRspTransferField
QryCFMMCBrokerKey=CThostFtdcQryCFMMCBrokerKeyField
QryExchangeMarginRateAdjust=CThostFtdcQryExchangeMarginRateAdjustField
NotifyFutureSignIn=CThostFtdcNotifyFutureSignInField
RspFutureSignIn=CThostFtdcRspFutureSignInField
ReqUserLogin=CThostFtdcReqUserLoginField
LinkMan=CThostFtdcLinkManField
QryErrOrder=CThostFtdcQryErrOrderField
QryInstrumentMarginRate=CThostFtdcQryInstrumentMarginRateField
QryNotice=CThostFtdcQryNoticeField
RemoveParkedOrderAction=CThostFtdcRemoveParkedOrderActionField
QryPartBroker=CThostFtdcQryPartBrokerField
QryExchangeSequence=CThostFtdcQryExchangeSequenceField
SuperUser=CThostFtdcSuperUserField
QryInvestorPosition=CThostFtdcQryInvestorPositionField
SyncingInstrumentCommissionRate=CThostFtdcSyncingInstrumentCommissionRateField
Accountregister=CThostFtdcAccountregisterField
InstrumentStatus=CThostFtdcInstrumentStatusField
SyncingTradingCode=CThostFtdcSyncingTradingCodeField
BrokerUserRightAssign=CThostFtdcBrokerUserRightAssignField
TransferQryDetailRsp=CThostFtdcTransferQryDetailRspField
InstrumentMarginRateAdjust=CThostFtdcInstrumentMarginRateAdjustField
QryBroker=CThostFtdcQryBrokerField
ReqDayEndFileReady=CThostFtdcReqDayEndFileReadyField
TradingAccountPassword=CThostFtdcTradingAccountPasswordField
TransferFutureToBankReq=CThostFtdcTransferFutureToBankReqField
MarketDataBid23=CThostFtdcMarketDataBid23Field
InputOrderAction=CThostFtdcInputOrderActionField
CombinationLeg=CThostFtdcCombinationLegField
ContractBank=CThostFtdcContractBankField
Exchange=CThostFtdcExchangeField
DRTransfer=CThostFtdcDRTransferField
InstrumentMarginRate=CThostFtdcInstrumentMarginRateField
SecAgentACIDMap=CThostFtdcSecAgentACIDMapField
SyncStatus=CThostFtdcSyncStatusField
Trade=CThostFtdcTradeField
VerifyFuturePasswordAndCustInfo=CThostFtdcVerifyFuturePasswordAndCustInfoField
TransferSerial=CThostFtdcTransferSerialField
CommRateModel=CThostFtdcCommRateModelField
MarginModel=CThostFtdcMarginModelField
QueryMaxOrderVolumeWithPrice=CThostFtdcQueryMaxOrderVolumeWithPriceField
MarketDataAsk23=CThostFtdcMarketDataAsk23Field
LogoutAll=CThostFtdcLogoutAllField
CommPhase=CThostFtdcCommPhaseField
ErrOrderAction=CThostFtdcErrOrderActionField
VerifyInvestorPassword=CThostFtdcVerifyInvestorPasswordField
VerifyCustInfo=CThostFtdcVerifyCustInfoField
TradingAccountPasswordUpdateV1=CThostFtdcTradingAccountPasswordUpdateV1Field
MarketDataAsk45=CThostFtdcMarketDataAsk45Field
UserSession=CThostFtdcUserSessionField
SuperUserFunction=CThostFtdcSuperUserFunctionField
InvestorProductGroupMargin=CThostFtdcInvestorProductGroupMarginField
BrokerTradingAlgos=CThostFtdcBrokerTradingAlgosField
InvestorPositionDetail=CThostFtdcInvestorPositionDetailField
QueryMaxOrderVolume=CThostFtdcQueryMaxOrderVolumeField
InputOrder=CThostFtdcInputOrderField
RspFutureSignOut=CThostFtdcRspFutureSignOutField
SyncingInvestorGroup=CThostFtdcSyncingInvestorGroupField
QryCommRateModel=CThostFtdcQryCommRateModelField
UserIP=CThostFtdcUserIPField
ExchangeSequence=CThostFtdcExchangeSequenceField
QryTransferBank=CThostFtdcQryTransferBankField
TradingNoticeInfo=CThostFtdcTradingNoticeInfoField
InstrumentCommissionRate=CThostFtdcInstrumentCommissionRateField
MulticastGroupInfo=CThostFtdcMulticastGroupInfoField
InvestorWithdrawAlgorithm=CThostFtdcInvestorWithdrawAlgorithmField
ChangeAccount=CThostFtdcChangeAccountField
CFMMCTradingAccountKey=CThostFtdcCFMMCTradingAccountKeyField
SyncDeposit=CThostFtdcSyncDepositField
TransferBankToFutureRsp=CThostFtdcTransferBankToFutureRspField
AuthenticationInfo=CThostFtdcAuthenticationInfoField
QryInvestor=CThostFtdcQryInvestorField
ReqSyncKey=CThostFtdcReqSyncKeyField
ReqOpenAccount=CThostFtdcReqOpenAccountField
ReqAuthenticate=CThostFtdcReqAuthenticateField
TradingAccountPasswordUpdate=CThostFtdcTradingAccountPasswordUpdateField
Discount=CThostFtdcDiscountField
DepthMarketData=CThostFtdcDepthMarketDataField
QrySuperUserFunction=CThostFtdcQrySuperUserFunctionField
InvestorAccount=CThostFtdcInvestorAccountField
TraderOffer=CThostFtdcTraderOfferField
ExchangeOrderAction=CThostFtdcExchangeOrderActionField
SyncingInstrumentTradingRight=CThostFtdcSyncingInstrumentTradingRightField
BrokerUserEvent=CThostFtdcBrokerUserEventField
RspRepeal=CThostFtdcRspRepealField
QryInvestorProductGroupMargin=CThostFtdcQryInvestorProductGroupMarginField
RspQueryTradeResultBySerial=CThostFtdcRspQueryTradeResultBySerialField
RspSyncKey=CThostFtdcRspSyncKeyField
BrokerUserFunction=CThostFtdcBrokerUserFunctionField
SyncingInstrumentMarginRate=CThostFtdcSyncingInstrumentMarginRateField
QryTrade=CThostFtdcQryTradeField
MarketData=CThostFtdcMarketDataField
LoginForbiddenUser=CThostFtdcLoginForbiddenUserField
TransferBankToFutureReq=CThostFtdcTransferBankToFutureReqField
ExchangeOrder=CThostFtdcExchangeOrderField
MarketDataBestPrice=CThostFtdcMarketDataBestPriceField
RspQueryAccount=CThostFtdcRspQueryAccountField
QryInstrumentTradingRight=CThostFtdcQryInstrumentTradingRightField
CFMMCTradingAccountToken=CThostFtdcCFMMCTradingAccountTokenField
InvestorPosition=CThostFtdcInvestorPositionField
ReqRepeal=CThostFtdcReqRepealField
MarketDataBase=CThostFtdcMarketDataBaseField
BrokerSync=CThostFtdcBrokerSyncField
MarketDataUpdateTime=CThostFtdcMarketDataUpdateTimeField
SettlementInfoConfirm=CThostFtdcSettlementInfoConfirmField
QryTradingNotice=CThostFtdcQryTradingNoticeField
NotifyFutureSignOut=CThostFtdcNotifyFutureSignOutField
NotifySyncKey=CThostFtdcNotifySyncKeyField
NotifyQueryAccount=CThostFtdcNotifyQueryAccountField
Trader=CThostFtdcTraderField
ExchangeMarginRate=CThostFtdcExchangeMarginRateField
Investor=CThostFtdcInvestorField
ExchangeTrade=CThostFtdcExchangeTradeField
QryInvestorPositionCombineDetail=CThostFtdcQryInvestorPositionCombineDetailField
QryTradingAccount=CThostFtdcQryTradingAccountField
QryAccountregister=CThostFtdcQryAccountregisterField
ExchangeRate=CThostFtdcExchangeRateField
RemoveParkedOrder=CThostFtdcRemoveParkedOrderField
QryDepthMarketData=CThostFtdcQryDepthMarketDataField
QryCFMMCTradingAccountKey=CThostFtdcQryCFMMCTradingAccountKeyField
QryInstrumentStatus=CThostFtdcQryInstrumentStatusField
QryExchange=CThostFtdcQryExchangeField
QryBrokerUser=CThostFtdcQryBrokerUserField
BrokerDeposit=CThostFtdcBrokerDepositField
Broker=CThostFtdcBrokerField
QryBrokerTradingParams=CThostFtdcQryBrokerTradingParamsField
QryTrader=CThostFtdcQryTraderField
SettlementInfo=CThostFtdcSettlementInfoField
QryContractBank=CThostFtdcQryContractBankField
SpecificInstrument=CThostFtdcSpecificInstrumentField
SyncingTradingAccount=CThostFtdcSyncingTradingAccountField
BrokerTradingParams=CThostFtdcBrokerTradingParamsField
ReqCancelAccount=CThostFtdcReqCancelAccountField
ExchangeOrderActionError=CThostFtdcExchangeOrderActionErrorField
QryParkedOrderAction=CThostFtdcQryParkedOrderActionField
QueryBrokerDeposit=CThostFtdcQueryBrokerDepositField
TradingNotice=CThostFtdcTradingNoticeField
OrderAction=CThostFtdcOrderActionField
BrokerUserPassword=CThostFtdcBrokerUserPasswordField
QrySettlementInfoConfirm=CThostFtdcQrySettlementInfoConfirmField
Notice=CThostFtdcNoticeField
MarketDataStatic=CThostFtdcMarketDataStaticField
QrySyncStatus=CThostFtdcQrySyncStatusField
QryCombinationLeg=CThostFtdcQryCombinationLegField
InstrumentTradingRight=CThostFtdcInstrumentTradingRightField
FensUserInfo=CThostFtdcFensUserInfoField
QryLinkMan=CThostFtdcQryLinkManField
ExchangeOrderInsertError=CThostFtdcExchangeOrderInsertErrorField
BrokerUserOTPParam=CThostFtdcBrokerUserOTPParamField
QryBrokerTradingAlgos=CThostFtdcQryBrokerTradingAlgosField
