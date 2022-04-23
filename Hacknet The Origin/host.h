#pragma once
#include<string>
class host  //用来存放游戏中主机的状态
{
public:
	host(std::string p, std::string m, bool w);
	std::string hostname;  //主机名
	std::string ip = "0.0.0.0";  //IP
	std::string mac = "00:00:00:00:00:00";  //MAC
	std::string usr;   //用户名
	std::string pwd;   //密码
	int hackport = 0;  //运行PortHack所需要的端口数
	bool ishacked = false;   //是否获得了管理员权限
	bool status[8] = { false }; //0 ssh 1 FTP 2 WEB 3 HTTPS 4 SSL(Vulnable) 5 Bittorrent 6 SMTP (vulnable) 7 SMB   //端口开放情况
	bool vulnstatus[7] = { false };  //0 ssh 1 FTP 2 WEB 3 HTTPS 4 SSL 5 Bittorrent 6 SMTP    //端口骇入情况
	bool icmpable=true;   //是否能被ping
	void(*hostutility)() = NULL;   //有的主机会有特定的功能，比如某些管理系统，它会有专门的管理界面，这个函数就是用于连接到主机时自动跳转到指定界面
	void(*connectedfunc)() = NULL;    //被连接时会触发的事件，以下同理
	void(*hackedfunc)() = NULL;
	void(*attackedfunc)() = NULL;
	void(*disconnectfunc)() = NULL;
};



