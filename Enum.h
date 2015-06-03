/*
*********************************************************************************
*
*版权：黄凯
*
*********************************************************************************
*
*创建人：黄凯
*创建时间：2015.05.06
*
*********************************************************************************
*
*功能描述：用于存储所有枚举类型
*
*********************************************************************************
*
*
*
*********************************************************************************
*/

#ifndef _ENUM_H
#define _ENUM_H

namespace Omron
{

//以太网协议帧
//enum FinsFormat
//{
//	EINHB = 0,	//交换识别号高字节，通常为0
//	EINLB,		//交换识别号低字节，通常为0 
//	PINHB,		//协议识别号高字节，为 0
//	PINLB,		//协议识别号低字节, 为 0
//	HBBL,		//字节长度高字节
//	LBBL,		//字节长度低字节
//	UIN,		//单元识别号,确省为 255 
//	WALCC,		//写一个线圈命令代码
//	SAHBWC,		//写线圈的起始地址高字节
//	SALBWC,		//写线圈的起始地址低字节
//	HBDL,		//数据长度高字节
//	LBDL,		//数据长度低字节
//};

//以太网协议帧
enum FinsFormat
{
	ICF = 0,	//信息控制域
	RSV,		//系统保存
	GCT,		//网关允许数目
	DNA,		//目的网络号
	DA1,		//目的节点号
	DA2,		//目的单元号
	SNA,		//源网络号
	SA1,		//源节点号
	SA2,		//源单元号
	SID,		//服务和响应的标示号
	MRC,		//主指令
	SRC,		//从指令
	MRZS,		//主响应码
	SRES,		//从响应码
};

}
#endif //_ENUM_H