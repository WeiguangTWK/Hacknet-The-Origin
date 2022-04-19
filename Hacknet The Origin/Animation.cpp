#pragma once
#include"存档全局变量区.h"
#include<iostream>
#include<string>
#include<Windows.h>
//#include<time.h>
using namespace std;

void sysinit();
void mainmenu()
{
    cout << "ooooo   ooooo                     oooo                                  .   \n"
        << "`888'   `888'                     `888                                .o8   \n"
        << "`888'   `888'                     `888                                .o8   \n"
        << " 888     888   .oooo.    .ooooo.   888  oooo  ooo. .oo.    .ooooo.  .o888oo\n"
        << " 888ooooo888  `P  )88b  d88' `\"Y8  888 .8P'   `888P\"Y88b  d88' `88b   888   \n"
        << " 888     888   .oP\"888  888        888888.     888   888  888ooo888   888   \n"
        << " 888     888  d8(  888  888   .o8  888 `88b.   888   888  888    .o   888 . \n"
        << "o888o   o888o `Y888\"\"8o `Y8bod8P' o888o o888o o888o o888o `Y8bod8P'   \"888\" \n" << endl;;
    cout << "______________             _______         _____          _____         \n"
        << "___  __/___  /_ _____      __  __ \\___________(_)_______ ____(_)_______ \n"
        << "__  /   __  __ \\_  _ \\     _  / / /__  ___/__  / __  __ `/__  / __  __ \\ \n"
        << "_  /    _  / / //  __/     / /_/ / _  /    _  /  _  /_/ / _  /  _  / / / \n"
        << "/_/     /_/ /_/ \\___/      \\____/  /_/     /_/   _\\__, /  /_/   /_/ /_/ \n"
        << "                                                 /____/";
    cout << endl << endl << "黑客网络：起源  By WeiguangTWK\n";
    cout << endl << "V-Mach虚拟机控制台程序 ver 1.0 \n\n" << "help:\n" << "键入“new”开始新游戏\n" << "键入“recover”以继续游戏\n\n";
    if (sav->name.length() != 0) cout << "已有用户：" << sav->name << "  " << "章节：" << sav->chapter << endl;
    printf("IP: %d.%d.%d.%d\n", sav->ip[0], sav->ip[1], sav->ip[2], sav->ip[3]);
}


void ptr(string str,int delay)
{
	for (auto it : str)
	{
		Sleep(delay);
		cout << it;
	}
}

void counter(int start,long long end, int delay)
{
    for (size_t i = start; i <= end; i++)
    {
        cout << i;
        Sleep(delay);
        if (i == 0)
        {
            cout << '\b';
            continue;
        }
        if (i < end&&i>0)
        {
            for (long long j = i; j != 0; j /= 10)
                cout << '\b';
        }
    }
}

void coutwithsleep(std::string str, int delay)
{
    cout << str;
    Sleep(delay);
};

void bootseq()
{
    system("cls");
    PlaySound(TEXT("motherboard.wav"), NULL, SND_ASYNC);
    coutwithsleep("V-Mach BIOS V4.3.2 Wed Oct 07:42:11 PDT 2011\n", 2000);
    cout << endl << endl;
    coutwithsleep("vm_page_bootstrap: 987323 free pages and 53061 wired pages\n", 500);
    coutwithsleep("standard timeslicing quantum is 10000 us\n", 500);
    coutwithsleep("CPU Dection:\n", 1000);
    coutwithsleep("ACPICPU: ProcessorId=1 LocalApicId=0 Enabled\n", 100);
    coutwithsleep("ACPICPU: ProcessorId=2 LocalApicId=1 Enabled\n", 100);
    coutwithsleep("ACPICPU: ProcessorId=3 LocalApicId=2 Enabled\n", 100);
    coutwithsleep("ACPICPU: ProcessorId=4 LocalApicId=3 Enabled\n\n", 1000);
    coutwithsleep("calling mpo_policy_init for TMSafetyNet\n", 200);
    coutwithsleep("Security policy loaded: Safety net for Time Machine (TMSafetyNet)\n", 10);
    coutwithsleep("calling mpo_policy_init for Sandbox\n", 100);
    coutwithsleep("Security policy loaded: Seatbelt sandbox policy (Sandbox)\n", 10);
    coutwithsleep("calling mpo_policy_init for Quarantine\n", 100);
    coutwithsleep("Security policy loaded: Quarantine policy (Quarantine)\n", 10);
    coutwithsleep("Copyright (c) 1982, 1986, 1989, 1991, 1993\n The Regents of the University of California.All rights reserved.\n", 500);
    cout << endl << endl;

    cout << "Initializing Network";
    ptr(".............", 250);
    cout << "RTL8188 Wired Network\n";
    cout << "MAC Address:8C-8C-AA-F7-EF-5B\n";
    cout << "Initializing Sound";
    ptr("...", 250);
    cout << "VBox Default High Definiton Sound Device\n";
    cout << "Initializing Grapic";
    ptr("......", 250);
    cout << "VBox Standard Graphic Card\n";
    //system("pause");
    ptr("\n\n\n\n\n", 250);
    cout << "Boot Complete";
    Sleep(1000);
    ptr("\n\n\n\n\n", 300);
    system("cls");
    sysinit();
}

void sysinit()
{
    ptr("初始化系统", 5);
    ptr("...", 500);
    ptr("完成！\n", 5);
    ptr("初始化模块", 5);
    ptr("....", 500);
    ptr("完成！\n\n", 5);
    ptr("连接预置IRC服务器", 5);
    ptr("....", 500);
    ptr("完成！\n\n", 5);
    ptr("查看程序帮助，键入\"help\"\n",5);
};

void ircmassage(string sender,string message,int delay) 
{
    time_t now;
    time(&now);

    struct tm tmTmp;
    char stTmp[32];

    localtime_s(&tmTmp, &now);
    asctime_s(stTmp, &tmTmp);
    cout << "[" << tmTmp.tm_mon<<" " << tmTmp.tm_wday<<" "<<tmTmp.tm_hour<<":"<<tmTmp.tm_min<<":"<< tmTmp.tm_sec<< "]  " << sender << " : " << message << endl;
    Sleep(delay);
};
