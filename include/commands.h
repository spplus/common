
/************************************************************************/
/* 
	DESC:	命令定义.
	DATE:	2016-04-20
	AUTHOR:	YUANLS
*/
/************************************************************************/

#ifndef __COMMANDS_H__
#define __COMMANDS_H__

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
	

#endif

