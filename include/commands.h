
/************************************************************************/
/* 
	DESC:	命令定义.
	DATE:	2016-04-20
	AUTHOR:	YUANLS
*/
/************************************************************************/

#ifndef __COMMANDS_H__
#define __COMMANDS_H__

// 设备类型定义
// 0开关，1刀闸，2母线，3电容，4负载，5发电机，6电压互感器(PT)，7电抗器，8变压器，9进出线
enum eDeviceType
{
	eBREAKER = 0,		// 开关
	eSWITCH,				// 刀闸，接地刀闸
	eBUS,				// 母线
	eCAPACITOR,			// 电容器
	eLOAD,				// 负载
	eGENERATOR,			// 发电机
	ePT,					// PT
	eREACTOR,			// 电抗器
	eTRANSFORMER,		// 变压器
	eLINE,				// 进出线
	eGROUNDSWITCH,		// 接地刀闸
	eWINDING,			// 变压器绕组
	eLINK,				// 连接线
	eACLINE,				// 交流线路
	eARRESTER,			// 避雷针
	eTEXT,				// 文字
	eDEFAULT				// 缺省类型
};

// 规则定义
#define				R_CHECK_1					1
#define				R_CHECK_2					2
#define				R_CHECK_3					3
#define				R_CHECK_4					4
#define				R_CHECK_5					5

// 连接建立
#define				CMD_CONNECTED				1000

// 连接断开
#define				CMD_DISCONNECTED			1001

// 用户登录
#define				CMD_USER_LONGIN				1002

// 用户登录管理
#define				CMD_USER_MANAGER			1003

// 用户角色
#define				CMD_USER_ROLE				1004

// 用户添加操作
#define				CMD_USER_ADD				1005

// 用户删除操作
#define				CMD_USER_DEL				1006

// 用户修改操作
#define				CMD_USER_MODIFY				1007

// 密码修改操作
#define				CMD_PWD_MODIFY				1008

//厂站类型添加操作
#define				CMD_STATION_TYPE_ADD		1100

//厂站类型添加操作
#define				CMD_STATION_TYPE_DEL		1101

//厂站类型修改操作
#define				CMD_STATION_TYPE_MODIFY		1102

//厂站类型添加操作
#define				CMD_STATION_TYPE_LIST		1103

//厂站配置管理
#define				CMD_STATION_MANAGER			2000


// 获取设备状态
#define				CMD_DEV_STATE					2001

// 加载站点类别
#define				CMD_STATION_TYPE				2002

// 加载站点列表
#define				CMD_STATION_LIST				2003

// 整站拓扑
#define				CMD_TOPO_ENTIRE				2004

// 开关变位
#define				CMD_TOPO_BREAKER_CHANGE		2005

// 设置电源点
#define				CMD_POWER_SET					2006

// 设置进出线		
#define				CMD_LINE_SET						2007

// 挂牌，摘牌
#define				CMD_TAG_OP						2008

// 保存存档
#define				CMD_WRITE_SAVING					2009

// 打开存档
#define				CMD_READ_SAVING					2010

// 规则校验通过
#define				CMD_CHECK_PASS					2011

// 触发规则
#define				CMD_TRIGGER_RULES				2012

#endif

