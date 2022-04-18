#pragma once
class host
{
public:
	host(unsigned char* p, unsigned char* m, bool w, bool stat[], bool vulnstat[]);
	unsigned char ip[4]={"0"};
	unsigned char mac[6]={"0"};
	bool status[8] = { false }; //0 ssh 1 FTP 2 WEB 3 HTTPS 4 SSL(Vulnable) 5 Bittorrent 6 SMTP (vulnable) 7 SMB
	bool vulnstatus[8] = { false };  //0 ssh 1 FTP 2 WEB 3 HTTPS 4 SSL 5 Bittorrent 6 SMTP 7 SMB
	bool icmpable=true;
	void(*hackedfunc)();
	void(*attackedfunc)();
};



