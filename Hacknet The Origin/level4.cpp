#include"Animation.h"
#include"cmds.h"
#include"host.h"
#include"存档全局变量区.h"
#include<Windows.h>
#include<thread>
#include<mmsystem.h>
#include<iostream>

using namespace std;

void freqalert();
void level4()
{
	if (!ifinited)
	{
		system("cls");
		//PlaySound(TEXT("Revolve.wav"), NULL, SND_ASYNC | SND_LOOP);
		initplayercmdlv1();
		sysinit();
		ifinited = true;
		std::cin.ignore(1, '\n');
	}
	else
	{
		free((*(pcs.begin())).ptr);
		pcs.pop_back();
	}
	ircmassage(FRIEND, "等等，我这的网络似乎不太安定,我去看看怎么回事", 2200);
	coutwithsleep("——————注意——————\n", 800);
	coutwithsleep("失去与IRC服务器的连接\n", 800);
	string path;
	string workp;
	path = currpath.generic_string();
	workp = workpath.generic_string();
	path.erase(0, sizeof(workp) + sizeof("Origin/Hacknet The Origin/computermap"));
	//cout << currpath.generic_string() << endl << workpath.generic_string() << endl;
	//begin = path.find(workpath.generic_string());
	cout << sav->name << sav->terminaltype << " " << path << ">";
	Sleep(1500);
	PlaySound(TEXT("invate.wav"), NULL, SND_ASYNC);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	coutwithsleep("\n◤◢◤◢警告：有未知连接传入◤◢◤◢\n", 0);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << sav->name << sav->terminaltype << " " << path << ">";
	Sleep(3500);
	for (int i = 0; i < 4; i++)
	{
		PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
		Sleep(1200);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	coutwithsleep("\n◤◢◤◢警告：本地管理员账号被登出◤◢◤◢\n", 0);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << ">";
	for (int i = 0; i < 10; i++)
	{
		PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
		Sleep(500);
	}
	PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
	system("cls");
	PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
	coutwithsleep("What ", 250);
	PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
	coutwithsleep("do ", 250);
	PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
	coutwithsleep("you ", 250);
	PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
	coutwithsleep("think ", 250);
	PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
	coutwithsleep("who ", 250);
	PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
	coutwithsleep("you ", 250);
	PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
	coutwithsleep("are\n", 250);
	cout << endl << endl;

	thread i(freqalert);
	i.detach();
	cout << "rm \\system\\*" << endl;
	cout << "rm \\home\\*" << endl;
	cout << "删除hacknet_VER0.8_BUILD_2011.cpp";
	ptr("......\n", 500);
	system("cls");
	system("COLOR 17");
	cout << "Process s swapper (pid: 1, threadinfo=8381c000, task=8381a9b8, t1s=00000000) \nStack :804300c0 00000000 00000000 803d0000 8037f880 80454a38 8381ff20 80010450\n       8381ff50 7c7e00af 83819e00 00000000 8381ff40 80417a04 8381ff40 800b9544\n       0081ff48 80211120 83881680 00000000 80454cfc 8045496c 31323700 00000000\n       0000ff60 80440fd8 00000080 80410000 00000000 00000000 8381ff80 8381ff80\n       00000000 00000000 80454a48 80454cfc 00000000 00000000 00000000 00000000 \n\nCall Trace:(--Raw—\n[<80010450>]_stext+0x50/0x20c\n[<800b9544>] register_irq_proct9xes/Oxe4\n[<80211120>] sysdev_class_remove_file+0x24/0x38 \n[<80440fd8>] cpu_dev_init+0x58/0x8c\n[<804323d8>]kernel_init+0xa4/0x118 [<80016b60>] kernel_thread_helper+0x24/0x2c\n\nCall Trace:\n[<804386f8>] sysdev_class_remove_file+0x14/0x70\n[<80010450>]_stext+0x50/0x20c\n";
	cout << endl << endl;
	coutwithsleep("System will now shutdown......\n\n", 4000);
	system("cls");
	system("COLOR 07");
	ptr("注意：虚拟机意外关闭，请重启V-Mach\n\n", 5);
	sav->level = 5;
	save();

	system("pause");
	exit(1);
}

void freqalert()
{
	for (int i = 0; i < 7; i++)
	{
		PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
		Sleep(400);
	}
}