
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

// �û��б�
#define				CMD_USER_LIST				1008

// �����޸Ĳ���
#define				CMD_PWD_MODIFY				1009

//��վ������Ӳ���
#define				CMD_STATION_TYPE_ADD		1100

//��վ������Ӳ���
#define				CMD_STATION_TYPE_DEL		1101

//��վ�����޸Ĳ���
#define				CMD_STATION_TYPE_MODIFY		1102

//��վ������Ӳ���
#define				CMD_STATION_TYPE_LIST		1103

//����༭����
#define				CMD_COM_RULE_LIST			1200

//����༭����
#define				CMD_RULE_LIST				1201

// ������Ӳ���
#define				CMD_RULE_ADD				1202

// ����ɾ������
#define				CMD_RULE_DEL				1203

// �����޸Ĳ���
#define				CMD_RULE_MODIFY				1204

//��վ���������ϵ
#define				CMD_STATION_RULE_LIST		1300

//��վ���������ϵ����
#define				CMD_STATION_RULE_MANAGER	1301

//����༭ʱ��վ���������ϵ����
#define				CMD_STATION_RULE_MGR		1302

//��·��ѯ�б�CircleQuery
#define				CMD_QUERY_CIRCLE_LIST		1320

//���Ʋ�ѯ�б�
#define				CMD_QUERY_SIGN_LIST			1321

//�ӵز�ѯ�б�
#define				CMD_QUERY_GSWITCH_LIST		1322

//�˹����ò�ѯ�б�
#define				CMD_QUERY_MSET_LIST			1323

//�¼���ѯ�б�
#define				CMD_QUERY_EVENT_LIST		1324


//����Ʊ����༭����
#define				CMD_TICKETMS_MANAGER		1400

//����Ʊ�����б�
#define				CMD_TICKETMS_LIST			1401

// ����Ʊ������Ӳ���
#define				CMD_TICKETMS_ADD			1402

// ����Ʊ����ɾ������
#define				CMD_TICKETMS_DEL			1403

// ����Ʊ�����޸Ĳ���
#define				CMD_TICKETMS_MODIFY			1404

// �����ɫ�û��б�
#define				CMD_ROLE_USER_LIST			1405


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

