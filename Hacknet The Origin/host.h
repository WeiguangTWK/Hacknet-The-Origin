#pragma once
#include<string>
class host
{
public:
	host(std::string p, std::string m, bool w);
	std::string hostname;
	std::string ip = "0.0.0.0";
	std::string mac = "00:00:00:00:00:00";
	std::string usr;
	std::string pwd;
	bool ishacked = false;
	bool status[8] = { false }; //0 ssh 1 FTP 2 WEB 3 HTTPS 4 SSL(Vulnable) 5 Bittorrent 6 SMTP (vulnable) 7 SMB
	bool vulnstatus[8] = { false };  //0 ssh 1 FTP 2 WEB 3 HTTPS 4 SSL 5 Bittorrent 6 SMTP 7 SMB
	bool icmpable=true;
	void(*connectedfunc)();
	void(*hackedfunc)();
	void(*attackedfunc)();
	void(*disconnectfunc)();
};



