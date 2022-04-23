//这里放的是游戏开闭相关的

#include"Animation.h"
#include"savedata.h"
#include<iostream>
#include"存档全局变量区.h"
using namespace std;


void save();
void load();
void shutdown()
{
	char inp;
	cout << "结束此次会话并关闭系统？(Y/N)";
	cin >> inp;
	if (inp == 'Y' || inp == 'y')
	{
		save();
		exit(1);
	}
}

void reboot()
{
	system("cls");
	if (sav->terminaltype == "@failsafe")
	{
		bootseqerr();
		return;
	}
	bootseq();
}