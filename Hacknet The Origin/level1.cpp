#include"Animation.h"
#include"savedata.h"
#include"存档全局变量区.h"
#include<thread>
#include<iostream>
#include<Windows.h>
using namespace std;

void initplayercmdlv1();
void mainconsole(bool jumprequired, string jumpcmd = "none");
void firstsetup();
void level1()
{
	//system("cls");
	PlaySound(TEXT("Revolve.wav"), NULL, SND_ASYNC | SND_LOOP);
	firstsetup();
 	initplayercmdlv1();
	ifinited = true;
	sav->level = 2;
	save();
	//initplayercmdlv1(); //DEBUG
}




void firstsetup()
{
	thread i(dhcp);
	i.detach();
	Sleep(500);
	ptr("检测到配置缺失，正在执行配置......", 5);
	ptr("设置网络\n", 5);
	ptr("IPv4自动设置（DHCP）", 5);
	ptr("......\n", 250);
	ptr("IPv4：", 5);
	printf("%d.%d.%d.%d\n", sav->ip[0], sav->ip[1], sav->ip[2], sav->ip[3]);
	//sysinit();
}