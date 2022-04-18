#include"Animation.h"
#include"cmds.h"
#include"host.h"
#include"存档全局变量区.h"
#include<Windows.h>
#include<mmsystem.h>
#include<iostream>
constexpr auto FRIEND = "Vapor";

using namespace std;
void mainconsole(bool jumprequired, string jumpcmd = "none");
void level2()
{
	
	//system("pause");
	if (!ifinited)
	{
		system("cls");
		PlaySound(TEXT("Revolve.wav"), NULL, SND_ASYNC | SND_LOOP);
		initplayercmdlv1();
		//sysinit();
		ifinited = true;
	}
	getchar();
	//mainconsole(false);
	ptr("\n\n正在启动教程......\n\n", 10);
	Sleep(1500);
	ptr("在本教程将进行本系统基础操作的教学\n\n", 10);
	Sleep(1000);
	ptr("现在键入命令\"ls\"并执行，该命令意为输出当前目录的内容\n\n", 10);
	mainconsole(true,"ls");
	ptr("\n\n现在你所处的目录为该计算机的根目录\n\n", 10);
	ptr("该目录下的内容分别为：\n\n", 10);
	ptr("\tbin程序/二进制文件文件夹\n\n\thome用户目录——下载的文件以及程序运行产生的文件将默认放置在该目录下\n\n\tlogs日志文件夹——该目录放置计算机运行状况记录文件\n\n\tsystem系统文件夹\n", 10);
	cout << endl<<endl;
	ptr("现在尝试进入用户文件夹，需要使用\"cd\"命令，该命令的格式为：\n", 10);
	cout << endl<<"\tcd <path>"<<endl;
	ptr("比如 cd bin\n",10);
	mainconsole(true,"cd home");
	ptr("\n看看这个目录里有什么\n", 10);
	mainconsole(true, "ls");
	ptr("\n然而这里卵都没有！\n\n\t没有就没有吧，退出这个文件夹\n\n打开上一级文件夹命令：\n\tcd ..", 10);
	mainconsole(true, "cd ..");
	ptr("\n就像使用\"cd\"命令一样，部分命令需要配合\"参数\"一起使用，当你忘记某些命令如何使用时就键入\"help\"命令查查吧\n\n", 10);
	coutwithsleep("************教程完成************", 2000);
	ptr("\n正在退出....\n\n\n", 10);

	coutwithsleep("——————注意——————\n", 2500);
	coutwithsleep("有来自IRC服务器的连接，允许接入", 2000);
	ircmassage(FRIEND, "干得漂亮！你很快的完成了这个系统基本操作的学习。", 1888);
	ircmassage(FRIEND, "怎么样？我写的教程是不是很人性化？ XD", 4000);
	ircmassage(FRIEND, "虽然这个系统比较简陋，但至少是由我亲手编译的，比市面上那些花花绿绿的\"后门系统\"好多了你说对吧", 2000);
	ircmassage(FRIEND, "我刚刚找到一个有趣的东西", 1800);
	ircmassage(FRIEND, "它是某个系统的源码",2800);
	ircmassage(FRIEND, "但奇怪的是我在网上的其它地方找不到关于它的任何信息",2000);
	sav->level = 3;
	save();
}