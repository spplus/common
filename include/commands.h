
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
#define				R_CHECK_4					4
#define				R_CHECK_5					5
#define				R_CHECK_12					12
#define				R_CHECK_16					16
#define				R_CHECK_18					18
#define				R_CHECK_20					20
#define				R_CHECK_21					21
#define				R_CHECK_22					22
#define				R_CHECK_25					25
#define				R_CHECK_26					26
#define				R_CHECK_27					27
#define				R_CHECK_28					28
#define				R_CHECK_29					29
#define				R_CHECK_32					32
#define				R_CHECK_33					33
#define				R_CHECK_34					34
#define				R_CHECK_35					35
#define				R_CHECK_38					38
#define				R_CHECK_39					39
#define				R_CHECK_43					43
#define				R_CHECK_44					44
#define				R_CHECK_45					45
#define				R_CHECK_46					46
#define				R_CHECK_47					47
#define				R_CHECK_48					48

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

// 用户列表
#define				CMD_USER_LIST				1008

// 密码修改操作
#define				CMD_PWD_MODIFY				1009

//厂站类型添加操作
#define				CMD_STATION_TYPE_ADD		1100

//厂站类型添加操作
#define				CMD_STATION_TYPE_DEL		1101

//厂站类型修改操作
#define				CMD_STATION_TYPE_MODIFY		1102

//厂站类型添加操作
#define				CMD_STATION_TYPE_LIST		1103

//规则编辑管理
#define				CMD_COM_RULE_LIST			1200

//规则编辑管理
#define				CMD_RULE_LIST				1201

// 规则添加操作
#define				CMD_RULE_ADD				1202

// 规则删除操作
#define				CMD_RULE_DEL				1203

// 规则修改操作
#define				CMD_RULE_MODIFY				1204

//厂站规则关联关系
#define				CMD_STATION_RULE_LIST		1300

//厂站规则关联关系管理
#define				CMD_STATION_RULE_MANAGER	1301

//规则编辑时厂站规则关联关系管理
#define				CMD_STATION_RULE_MGR		1302

//环路查询列表CircleQuery
#define				CMD_QUERY_CIRCLE_LIST		1320

//挂牌查询列表
#define				CMD_QUERY_SIGN_LIST			1321

//接地查询列表
#define				CMD_QUERY_GSWITCH_LIST		1322

//人工设置查询列表
#define				CMD_QUERY_MSET_LIST			1323

//事件查询列表
#define				CMD_QUERY_EVENT_LIST		1324


//操作票任务编辑管理
#define				CMD_TICKETMS_MANAGER		1400

//操作票任务列表
#define				CMD_TICKETMS_LIST			1401

// 操作票任务添加操作
#define				CMD_TICKETMS_ADD			1402

// 操作票任务删除操作
#define				CMD_TICKETMS_DEL			1403

// 操作票任务修改操作
#define				CMD_TICKETMS_MODIFY			1404

// 具体角色用户列表
#define				CMD_ROLE_USER_LIST			1405


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

