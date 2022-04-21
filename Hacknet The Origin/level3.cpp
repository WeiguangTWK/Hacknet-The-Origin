#include"Animation.h"
#include"cmds.h"
#include"host.h"
#include"存档全局变量区.h"
#include<Windows.h>
#include<mmsystem.h>
#include<iostream>
constexpr auto FRIEND = "Vapor";
using namespace std;

void initcomplv3();
void mainconsole(bool jumprequired, string jumpcmd = "none");
void level3()
{
	if (!ifinited)
	{
		system("cls");
		PlaySound(TEXT("Revolve.wav"), NULL, SND_ASYNC | SND_LOOP);
		initplayercmdlv1();
		sysinit();
		ifinited = true;
		std::cin.ignore(1, '\n');
	}
	initcomplv3();
	mainconsole(false);
	ircmassage(FRIEND, "接下来的操作涉及到我在教程里面没有提到的东西", 2000);
	ircmassage(FRIEND, "按我说的做就好", 3000);
	ircmassage(FRIEND, "现在需要连接到IP地址为\"31.121.158.159\"的主机", 3300);
	ircmassage(FRIEND, "由于你没有那个主机的管理员权限，连上去几乎什么都做不了", 2900);
	ircmassage(FRIEND, "这时你需要使用login命令，然后提供用户名和密码", 2200);
	ircmassage(FRIEND, "别担心，我已经把这个主机拿下了", 2450);
	ircmassage(FRIEND, "用户名:naix，密码：3gy2ufdd3q9u", 3100);
	ircmassage(FRIEND, "从这个主机的home文件夹下载一个名字带hacknet的文件", 2800);
	ircmassage(FRIEND, "当你忘记一个命令怎么用时就输入help看看吧", 3000);
	ircmassage(FRIEND, "加油，这是你在网安实践迈出第一步",800);
	mainconsole(true,"scp hacknet_VER0.8_BUILD_2011.cpp");
	ircmassage(FRIEND, "看来你已经把文件搞到手了，很好!", 2500);

}