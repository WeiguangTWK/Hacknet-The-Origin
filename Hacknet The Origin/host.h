#pragma once
#include<string>
class host  //���������Ϸ��������״̬
{
public:
	host(std::string p, std::string m, bool w);
	std::string hostname;  //������
	std::string ip = "0.0.0.0";  //IP
	std::string mac = "00:00:00:00:00:00";  //MAC
	std::string usr;   //�û���
	std::string pwd;   //����
	bool ishacked = false;   //�Ƿ����˹���ԱȨ��
	bool status[8] = { false }; //0 ssh 1 FTP 2 WEB 3 HTTPS 4 SSL(Vulnable) 5 Bittorrent 6 SMTP (vulnable) 7 SMB   //�˿ڿ������
	bool vulnstatus[8] = { false };  //0 ssh 1 FTP 2 WEB 3 HTTPS 4 SSL 5 Bittorrent 6 SMTP 7 SMB    //�˿ں������
	bool icmpable=true;   //�Ƿ��ܱ�ping
	void(*connectedfunc)() = NULL;    //������ʱ�ᴥ�����¼�������ͬ��
	void(*hackedfunc)() = NULL;
	void(*attackedfunc)() = NULL;
	void(*disconnectfunc)() = NULL;
};



