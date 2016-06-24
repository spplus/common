
/************************************************************************/
/* 
	DESC:	�����.
	DATE:	2016-04-20
	AUTHOR:	YUANLS
*/
/************************************************************************/

#ifndef __COMMANDS_H__
#define __COMMANDS_H__

// �豸���Ͷ���
// 0���أ�1��բ��2ĸ�ߣ�3���ݣ�4���أ�5�������6��ѹ������(PT)��7�翹����8��ѹ����9������
enum eDeviceType
{
	eBREAKER = 0,		// ����
	eSWITCH,				// ��բ���ӵص�բ
	eBUS,				// ĸ��
	eCAPACITOR,			// ������
	eLOAD,				// ����
	eGENERATOR,			// �����
	ePT,					// PT
	eREACTOR,			// �翹��
	eTRANSFORMER,		// ��ѹ��
	eLINE,				// ������
	eGROUNDSWITCH,		// �ӵص�բ
	eWINDING,			// ��ѹ������
	eLINK,				// ������
	eACLINE,				// ������·
	eARRESTER,			// ������
	eTEXT,				// ����
	eDEFAULT				// ȱʡ����
};

// ������
#define				R_CHECK_1					1
#define				R_CHECK_2					2
#define				R_CHECK_3					3
#define				R_CHECK_4					4
#define				R_CHECK_5					5

// ���ӽ���
#define				CMD_CONNECTED				1000

// ���ӶϿ�
#define				CMD_DISCONNECTED			1001

// �û���¼
#define				CMD_USER_LONGIN				1002

// �û���¼����
#define				CMD_USER_MANAGER			1003

// �û���ɫ
#define				CMD_USER_ROLE				1004

// �û���Ӳ���
#define				CMD_USER_ADD				1005

// �û�ɾ������
#define				CMD_USER_DEL				1006

// �û��޸Ĳ���
#define				CMD_USER_MODIFY				1007

// �����޸Ĳ���
#define				CMD_PWD_MODIFY				1008

//��վ������Ӳ���
#define				CMD_STATION_TYPE_ADD		1100

//��վ������Ӳ���
#define				CMD_STATION_TYPE_DEL		1101

//��վ�����޸Ĳ���
#define				CMD_STATION_TYPE_MODIFY		1102

//��վ������Ӳ���
#define				CMD_STATION_TYPE_LIST		1103

//��վ���ù���
#define				CMD_STATION_MANAGER			2000


// ��ȡ�豸״̬
#define				CMD_DEV_STATE					2001

// ����վ�����
#define				CMD_STATION_TYPE				2002

// ����վ���б�
#define				CMD_STATION_LIST				2003

// ��վ����
#define				CMD_TOPO_ENTIRE				2004

// ���ر�λ
#define				CMD_TOPO_BREAKER_CHANGE		2005

// ���õ�Դ��
#define				CMD_POWER_SET					2006

// ���ý�����		
#define				CMD_LINE_SET						2007

// ���ƣ�ժ��
#define				CMD_TAG_OP						2008

// ����浵
#define				CMD_WRITE_SAVING					2009

// �򿪴浵
#define				CMD_READ_SAVING					2010

// ����У��ͨ��
#define				CMD_CHECK_PASS					2011

// ��������
#define				CMD_TRIGGER_RULES				2012

#endif

