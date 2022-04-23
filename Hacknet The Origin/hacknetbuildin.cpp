#include"Animation.h"
#include"存档全局变量区.h"
#include<Windows.h>
#include<iostream>
#include<string>

using namespace std;

void eternalblueexploit();

void porthack()
{
	if (currcomptr == NULL) return;
	if (currcomptr->status[7])
	{
		eternalblueexploit();
		cout << "您已是该主机的管理员";
		currcomptr->ishacked = true;
		if (currcomptr->hackedfunc != NULL) (*currcomptr->hackedfunc)();
	}
	int hackedport = 0;
	for (int i = 0; i < 7; i++) if (currcomptr->vulnstatus[i]) hackedport++;
	if (hackedport > currcomptr->hackport)
	{

		cout << "您已是该主机的管理员";
		currcomptr->ishacked = true;
		if (currcomptr->hackedfunc != NULL) (*currcomptr->hackedfunc)();
	}
	else cout << "被破解的端口数量不足以运行porthack" << endl;
}

void nmap()
{
	if (currcomptr == NULL) return;
	coutwithsleep("Starting nmap......", 300);
	cout << "Nmap scan report for " << currcomp << endl;
	Sleep(200);
	cout << "Host is up" << endl;
	cout << endl << "PORT     STATE  SERVICE" << endl;
	if (currcomptr->status[1]) coutwithsleep("21/tcp   open  ftp\n", 800);
	if (currcomptr->status[0]) coutwithsleep("22/tcp   open  ssh\n", 800);
	if (currcomptr->status[6]) coutwithsleep("25/tcp   open  smtp\n", 800);
	if (currcomptr->status[2]) coutwithsleep("80/tcp   open  http\n", 800);
	if (currcomptr->status[3]) coutwithsleep("443/tcp  open  https\n", 800);
	if (currcomptr->status[4]) coutwithsleep("443/tcp  open  https\n", 800);
	if (currcomptr->status[7]) coutwithsleep("445/tcp  open  SMB Protcol\n", 800);
	if (currcomptr->status[5]) coutwithsleep("6887/tcp open  Bittorrent\n\n", 800);
	
	if (currcomptr->status[6]) coutwithsleep("OpenSMTPd remote command execute vulnerability found!\n ", 800);
	if (currcomptr->status[4]) coutwithsleep("Heartbleed Bug(CVE-2014-0160) found！\n", 800);
	if (currcomptr->status[7]) coutwithsleep("SMB remote command execute vulnerability found!\n", 800);
	cout << "运行porthack所需端口：" << currcomptr->hackport << endl << endl;
}

void eternalblueexploit()
{
	cout << endl << endl;
	cout << "[*]" << currcomp << ":445 - Connecting to target for exploitation." << endl;
	Sleep(3000);
	cout << "[+]" << currcomp << ":445 - Connection established for exploitation." << endl;
	Sleep(300);
	cout << "[+]" << currcomp << ":445 - Target OS selected valid for OS indicated by SMB reply" << endl;
	Sleep(150);
	cout << "[*]" << currcomp << ":445 - CORE raw buffer dump (38 bytes)" << endl;
	Sleep(500);
	cout << "[*]" << currcomp << ":445 - 0x00000000  57 69 6e 64 6f 77 73 20 37 20 55 6c 74 69 6d 61  Windows Server 2008" << endl;
	Sleep(100);
	cout << "[*]" << currcomp << ":445 - 0x00000010  74 65 20 37 36 30 31 20 53 65 72 76 69 63 65 20  R2 Datacenter Server" << endl;
	Sleep(100);
	cout << "[*]" << currcomp << ":445 - 0x00000020  50 61 63 6b 20 31                                Service Pack 0" << endl;
	Sleep(1150);
	cout << "[+]" << currcomp << ":445 - Target arch selected valid for arch indicated by DCE/RPC reply" << endl;
	Sleep(800);
	cout << "[*]" << currcomp << ":445 - Trying exploit with 12 Groom Allocations." << endl;
	Sleep(150);
	cout << "[*]" << currcomp << ":445 - Sending all but last fragment of exploit packet" << endl;
	Sleep(750);
	cout << "[*]" << currcomp << ":445 - Starting non-paged pool grooming" << endl;
	Sleep(2500);
	cout << "[+]" << currcomp << ":445 - Sending SMBv2 buffers" << endl;
	Sleep(500);
	cout << "[+]" << currcomp << ":445 - Closing SMBv1 connection creating free hole adjacent to SMBv2 buffer." << endl;
	Sleep(400);
	cout << "[*]" << currcomp << ":445 - Sending final SMBv2 buffers." << endl;
	Sleep(600);
	cout << "[*]" << currcomp << ":445 - Sending last fragment of exploit packet!" << endl;
	Sleep(550);
	cout << "[*]" << currcomp << ":445 - Receiving response from exploit packet" << endl;
	Sleep(750);
	cout << "[*]" << currcomp << ":445 - Receiving response from exploit packet" << endl;
	Sleep(1500);
	cout << "[+]" << currcomp << ":445 - ETERNALBLUE overwrite completed successfully (0xC000000D)!" << endl;
	Sleep(200);
	cout << "[*]" << currcomp << ":445 - Sending egg to corrupted connection." << endl;
	Sleep(250);
	cout << "[*]" << currcomp << ":445 - Triggering free of corrupted buffer." << endl;
	Sleep(600);
	cout << "[*] Sending stage (200262 bytes) to " << currcomp << endl;
	Sleep(50);
	cout << "[+]" << currcomp << ":445 - =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	cout << "[+]" << currcomp << ":445 - =-=-=-=-=-=-=-=-=-=-=-=-=-HACKED-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	cout << "[+]" << currcomp << ":445 - =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	cout << endl << endl;
}
