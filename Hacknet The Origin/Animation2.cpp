#pragma once
//���������ҷ�����ر��Ķ����ĵط�

#include"�浵ȫ�ֱ�����.h"
#include"Animation.h"
#include<iostream>
#include<string>
#include<Windows.h>
#include<thread>
using namespace std;


void mainmenu()  //���˵�
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
    cout << endl << endl << "�ڿ����磺��Դ  By WeiguangTWK\n";
    cout << endl << "V-Mach���������̨���� ver 1.0 \n\n" << "help:\n" << "���롰new����ʼ����Ϸ\n" << "���롰recover���Լ�����Ϸ\n\n";
    if (sav->name.length() != 0)
    {
        cout << "�����û���" << sav->name << "  " << "�½ڣ�" << sav->chapter << endl;
        printf("IP: %d.%d.%d.%d\n", sav->ip[0], sav->ip[1], sav->ip[2], sav->ip[3]);
    }
    return;
}

void bootseq()   //��������
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
    ptr("\n\n\n\n\n", 250);
    cout << "Boot Complete";
    Sleep(1000);
    ptr("\n\n\n\n\n", 300);
    system("cls");
    sysinit();
}


void play()
{
    PlaySound(TEXT("CrashTrack.wav"), NULL, SND_ASYNC);
}

void bootseqerr()  //�ļ�ȱʧ�ˣ������ض�����
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
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
    coutwithsleep("fatal error: core file missing\n", 1000);
    thread i(play);
    i.detach();
    for (int i = 0; i < 4; i++)
    {
        cout << "error" << endl;
        Sleep(1000);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    Sleep(500);
    system("cls");
    Sleep(3000);
    ptr("initializating failsafe......", 5);
    Sleep(350);
    coutwithsleep("Done!\n", 800);
    ptr("Scanning system components....", 5);
    Sleep(350);
    coutwithsleep("Done!\n\n", 1000);
    ptr("7 command(s) availble", 5);
    cout << endl << endl;
    coutwithsleep("   ______            __   ______           _     \n", 100);
    coutwithsleep("  / ____/___  ____  / /  /_  __/________ _(_)___ \n", 100);
    coutwithsleep(" / /   / __ \\/ __ \\/ /    / / / ___/ __ `/ / __ \\\n", 100);
    coutwithsleep("/ /___/ /_/ / /_/ / /    / / / /  / /_/ / / / / /\n", 100);
    coutwithsleep("\\____/\\____/\\____/_/    /_/ /_/   \\__,_/_/_/ /_/ \n", 0);
    ptr("-----------------system recovery-----------------\n\n\n", 5);

    ptr("˵������ϵͳ���ڱ������е���ϵͳ�޷�����ʱ�������ά������\n\n", 5);
    Sleep(2000);

    ptr("initialization completed", 5);
    Sleep(1000);
    ptr(", type \"help\" for command help\n\n", 5);
    Sleep(2000);
    sav->terminaltype = "@failsafe";
}

void sysinit()  //��������ϵͳ��ʼ��
{
    ptr("��ʼ��ϵͳ", 5);
    ptr("...", 500);
    ptr("��ɣ�\n", 5);
    ptr("��ʼ��ģ��", 5);
    ptr("....", 500);
    ptr("��ɣ�\n\n", 5);
    ptr("����Ԥ��IRC������", 5);
    ptr("....", 500);
    ptr("��ɣ�\n\n", 5);
    ptr("�鿴�������������\"help\"\n", 5);
    if (sav->terminaltype == "@HACKNET") ptr("����\"hacknethelp\"�鿴hacknet��͸�׼�����\n", 5);
};


void compileanim()
{
    ptr("Unzipping file", 5);
    ptr(".....\n", 500);
    coutwithsleep("Something went wrong ! ....but still completed\n", 1000);
    coutwithsleep("Makefile found!\n\n", 2500);
    coutwithsleep("$make install\n\n", 3000);
    ptr("[INFO] Project Hacknet Core components",5);
    ptr("...", 500);
    cout << "Done!" << endl;
    ptr("[INFO] Project Hacknet exploit toolkit\n", 5);
    ptr("nmap", 5);
    ptr(".....", 500);
    cout << "Done!" << endl;
    ptr("metasploit", 5);
    ptr(".......", 500);
    cout << "Done!" << endl;
    ptr("wpscan", 5);
    ptr("..", 500);
    cout << "Done!" << endl;
    ptr("hashcat",5);
    ptr("...", 500);
    cout << "Done!" << endl;
    ptr("pth-net", 5);
    ptr(".....", 500);
    cout << "Done!" << endl;
    ptr("[INFO] Project Hacknet Device drivers", 5);
    ptr("....", 500);
    cout << "Done!" << endl;
    ptr("[INFO] Project Hacknet User Graphic Interface", 5);
    ptr("....", 500);
    ptr("ERROR  SKIPPING....\n\n", 5);
    coutwithsleep("---------------------------------------------------\n", 800);
    coutwithsleep("                  BUILD COMPLETE                   \n", 800);
    coutwithsleep("---------------------------------------------------\n\n", 800);
    ptr("To complete installation, please restart your computer\n",5);
}
