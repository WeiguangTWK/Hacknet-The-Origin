#include"Animation.h"
#include"cmds.h"
#include"host.h"
#include"存档全局变量区.h"
#include<Windows.h>
#include<mmsystem.h>
#include<iostream>
using namespace std;

void level6()
{
	if (!ifinited)cin.ignore(1, '\n');
	ifinited = true;
	cmd1s.clear();
	cmd2s.clear();
	pcs.clear();
	initplayercmdlv1();
	initplayercmdlv6();
	ptr("initializing Hacknet integration Module", 5);
	ptr("...", 500);
	coutwithsleep("Done!\n", 800);
	ptr("setting locale", 5);
	ptr("....", 500);
	ptr("中国", 5);
	cout << endl << endl;
	ptr("语言与区域设置完成！\n", 5);
	//sysinit();
	string path;
	string workp;
	path = currpath.generic_string();
	workp = workpath.generic_string();
	path.erase(0, sizeof(workp) + sizeof("Origin/Hacknet The Origin/computermap"));
	cout << sav->name << sav->terminaltype << " " << path << ">";
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	coutwithsleep("\n\n◤◢◤◢警告：检测到异常流量◤◢◤◢\n\n", 0);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	for (int i = 20; i > 0; i--)
	{
		PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
		cout << "根据流量进行匿名状态评估......捕获数据包(第" << (20 - i) << "个）" << endl << endl;;
		Sleep(i*20);
	}
	inittraced();
	sav->level = 7;
	save();
}