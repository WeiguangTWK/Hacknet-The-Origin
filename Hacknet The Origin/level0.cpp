#include"存档全局变量区.h"
#include"Animation.h"
#include "levels.h"
#include<Windows.h>
#include<iostream>
#include<mmsystem.h>
//#include<stdlib.h>

void mainstopmusic();
void selfcheck();
void level0_1();

void level0()    //说明一下：在游戏设定中这个系统是运行在虚拟机上的
{
	system("cls");
	ptr("作者附语：当你不知道下一步该如何做时探索精神非常重要，有时多运行一个\"help\"命令都会非常有用，记住——探索精神\n", 5);
	system("pause");
	system("cls");
	ptr("创建一个新虚拟机前，某些设置需要您自行设定，别担心，我们会把别的事项处理妥当", 5);
	Sleep(500);
	while (true)
	{
		char inp;
		std::cin.ignore(1, '\n');
		ptr("\n键入新用户的用户名：", 5);
		std::getline(std::cin, sav->name);
		ptr("新用户名为：", 5);
		std::cout << sav->name<<std::endl;
		ptr("您确认吗？(Y/N)", 5);
		std::cin >> inp;
		if (inp == 'Y' || inp == 'y') break;
	}
	save();
	system("cls");
	selfcheck();
	//PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC);
	level0_1();
	sav->level = 1;
	save();
}

void selfcheck()
{
	system("cls");
	ptr("正在为新建虚拟机进行准备", 5);
	ptr("...", 300);
	std::cout << "完成！" << std::endl;
	ptr("正在使用默认配置创建虚拟机...\n", 5);
	ptr("硬盘......IDE 0: ", 5);
	counter(0, 30, 50);
	ptr("GBytes 完成！\n", 5);
	ptr("内存......DDR3 ch1: ", 5);
	counter(0, 2, 1000);
	ptr("GBytes 完成！\n", 5);
	ptr("CPU......\n", 5);
	coutwithsleep("CPU1\n", 200);
	coutwithsleep("CPU2\n", 200);
	coutwithsleep("CPU3\n", 200);
	coutwithsleep("CPU4\n", 200);
	coutwithsleep("虚拟机准备就绪!\n\n", 5);
	system("pause");
};

void level0_1()
{
	bootseq();
}