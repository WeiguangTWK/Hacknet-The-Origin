#include"Animation.h"
//#include"cmds.h"
#include"host.h"
#include"存档全局变量区.h"
#include<Windows.h>
#include<mmsystem.h>
#include<iostream>
using namespace std;


void openinganim();
void level7()
{
	if (!ifinited)
	{
		system("cls");
		
		initplayercmdlv1();
		initplayercmdlv6();
		sysinit();
		ifinited = true;
		std::cin.ignore(1, '\n');
	}
	PlaySound(TEXT("RemiDrone.wav"), NULL, SND_ASYNC | SND_LOOP);
	coutwithsleep("——————注意——————\n", 2500);
	coutwithsleep("有来自IRC服务器的连接，允许接入\n", 2000);
	ircmassage(FRIEND, "欢迎回来！", 2500);
	ircmassage(FRIEND, "刚才是被发现了吗？我这边也被攻击了", 2200);
	ircmassage(FRIEND, "你的系统标志怎么不一样了？你这是换系统了吗", 2000);
	ircmassage(FRIEND, "看来你这边遭到的破坏真不小", 3200);
	ircmassage(FRIEND, "有个人想要进聊天室，放心他是我朋友，稍等一下", 3100);
	ircmassage("Bit", "聊天室里另一个人你好！我叫Bit", 2100);
	ircmassage(FRIEND, "老朋友你怎么找到这里来了", 2500);
	ircmassage("Bit", "你们当中是不是有人用着一个叫HACKNET的系统", 2600);
	ircmassage("Bit", "我在自己监控的服务器上发现了一个陌生的IP，然后找来了这里", 2200);
	ircmassage(FRIEND, "我刚刚搞到一份关于它的源码，但没有编译", 2500);
	ircmassage(FRIEND, "而且我和他刚刚才从网络攻击中缓过来", 1800);
	ircmassage(FRIEND, "貌似和这份源码有关", 2500);
	ircmassage("Bit", "看来传闻不假，这个源码你们是在哪里找到的", 2000);
	ircmassage(FRIEND, "31.121.158.159，但现在这个主机下线了", 2400);
	ircmassage("Bit", "好吧，其实这个系统是我和一个叫EnSEC的企业的合作项目",1800);
	ircmassage("Bit", "近期我被逐出了团队", 2200);
	ircmassage(FRIEND, "怎么回事？", 2300);
	ircmassage("Bit", "这个企业正打算做一些触及我红线的事情", 1900);
	ircmassage("Bit", "这些事情后面我会和你们说清楚", 2300);
	ircmassage("Bit", "我现在的处境不允许我浪费时间，你们能帮我一把吗？", 2100);

	Sleep(3500);
	PlaySound(NULL, NULL, SND_ASYNC | SND_LOOP);
	sav->chapter = 1;

	openinganim();
	//sav->level = 8;
}