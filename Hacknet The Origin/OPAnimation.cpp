#pragma once

//��û���������Ϸ�����п���������������ô�����cout���������ûʲô������������������ļ��ɣ��˷�ʱ��

#include"Animation.h"
#include<Windows.h>
#include<iostream>
using namespace std;


void trailerframe01();
void trailerframe02();
void trailerframe03();
void trailerframe04();
void trailerframe05();
void trailerframe06();
void trailerframe07();
void trailerframe08();
void trailerframe09();
void openinganim()
{
    trailerframe01();
    Sleep(1200);
    trailerframe02();
    Sleep(1200);
    trailerframe03();
    Sleep(3200);
    PlaySound(TEXT("WelcomeToMars_Clipped.wav"), NULL, SND_ASYNC | SND_LOOP);
    trailerframe04();
    Sleep(900);
    trailerframe05();
    Sleep(900);
    trailerframe06();
    Sleep(900);
    trailerframe07();
    Sleep(900);
    trailerframe08();
    Sleep(800);
    trailerframe09();
    system("pause");
    exit(1);
}

void trailerframe01()
{
    system("cls");
    cout << "************�̳����************" << endl;
    cout << "�����˳�...." << endl << endl;;
    cout << "������������ע�⡪����������" << endl;
    cout << "������IRC�����������ӣ��������\n" << endl;
    cout << "[3 1 21:20:51]  Vapor : �ɵ�Ư������ܿ����������ϵͳ����������ѧϰ��\n" << endl;
    cout << "[3 1 21:20:53]  Vapor : ��ô������д�Ľ̳��ǲ��Ǻ����Ի��� XD\n" << endl;
    Sleep(2500);
    cout << "[3 1 21:20:59]  Vapor : �Ҹո��ҵ�һ����Ȥ�Ķ���" << endl;
    Sleep(1000);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n";
    cout << "                  ";
    ptr("�߻���@�⾵Master&@΢��TWK", 5);
}


void trailerframe02()
{
    system("cls");
    cout << "������Ŀ�������Ĺ���Ա" << endl;
    cout << "SWH@UNIX 31.121.158.159/>cd home" << endl;
    cout << "SWH@UNIX 31.121.158.159/home/>ls" << endl << endl;
    cout << "hacknet_VER0.8_BUILD_2011.zip" << endl << endl;
    cout << "SWH@UNIX 31.121.158.159/home/>";
    Sleep(2000);
    PlaySound(TEXT("keybutton.wav"), NULL, SND_ASYNC);
    coutwithsleep("s", 400);
    PlaySound(TEXT("keybutton.wav"), NULL, SND_ASYNC);
    coutwithsleep("c", 400);
    PlaySound(TEXT("keybutton.wav"), NULL, SND_ASYNC);
    coutwithsleep("p", 1000);
    cout << " hacknet_VER0.8_BUILD_2011.zip";
    Sleep(1500);
    PlaySound(TEXT("keyenter.wav"), NULL, SND_ASYNC);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n";
    cout << "                  ";
    ptr("����@΢��TWK", 5);
}

void trailerframe03()
{
    system("cls");
    cout << "[3 1 21:23:18]  Vapor : �󹦸�ɣ�����ʹ��make�������ͺ���\n" << endl;
    cout << "[3 1 21:23:22]  Vapor : �ȵȣ�����������ƺ���̫����,��ȥ������ô����\n" << endl;
    cout << "������������ע�⡪����������" << endl;
    cout << "ʧȥ��IRC������������" << endl;
    cout << "SWH@UNIX 127.0.0.1/>" << endl;
    Sleep(1500);
    PlaySound(TEXT("invate.wav"), NULL, SND_ASYNC);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
    coutwithsleep("\n�����������棺��δ֪���Ӵ��먏������\n", 0);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void trailerframe04()
{
    system("cls");
    cout << "\n\n\n\n\n";
    cout << ">";
    Sleep(2000);
    ptr("�ҵ�����", 40);
    Sleep(1000);
    ptr("��Bit", 40);

}

void trailerframe05()
{
    system("cls");
    cout << "[3 1 08:25:46]  Vapor : Bit������Ȧ����֪�����൱�ߵ���" << endl;
    Sleep(2000);
    cout << "[3 1 08:25:48]  Vapor : Ҳ���Һ��������ºڿ͵�������" << endl;
    Sleep(2100);
    cout << "[3 1 08:25:50]  Vapor : ���Ǻ�EnSEC��������ҵ�������������ڼ�����ʯͷ";
}

void trailerframe06()
{
    system("cls");
    cout << "\n\n\n\n\n";
    cout << ">�ҵ�������Bit" << endl << endl;
    cout << ">";
    ptr("��������EnSEC������", 40);
    Sleep(800);
    ptr("������һ��ǳ�ǿ�����͸�׼�", 40);
}

void trailerframe07()
{
    system("cls");
    cout << "V-Mach BIOS V4.3.2 Wed Oct 07:42:11 PDT 2011\n";
    cout << endl << endl;
    cout << "vm_page_bootstrap: 987323 free pages and 53061 wired pages\n";
    cout << "standard timeslicing quantum is 10000 us\n";
    cout << "CPU Dection:\n";
    cout << "ACPICPU: ProcessorId=1 LocalApicId=0 Enabled\n";
    cout << "ACPICPU: ProcessorId=2 LocalApicId=1 Enabled\n";
    cout << "ACPICPU: ProcessorId=3 LocalApicId=2 Enabled\n";
    cout << "ACPICPU: ProcessorId=4 LocalApicId=3 Enabled\n\n";
    cout << "calling mpo_policy_init for TMSafetyNet\n";
    cout << "Security policy loaded: Safety net for Time Machine (TMSafetyNet)\n";
    cout << "calling mpo_policy_init for Sandbox\n";
    cout << "Security policy loaded: Seatbelt sandbox policy (Sandbox)\n";
    cout << "calling mpo_policy_init for Quarantine\n";
    cout << "Security policy loaded: Quarantine policy (Quarantine)\n";
    cout << "Copyright (c) 1982, 1986, 1989, 1991, 1993\n The Regents of the University of California.All rights reserved.\n";
    cout << endl << endl;

    cout << "Initializing Network";
    cout << ".............";
    cout << "RTL8188 Wired Network\n";
    cout << "MAC Address:8C-8C-AA-F7-EF-5B\n";
    cout << "Initializing Sound";
    cout << "...";
    cout << "VBox Default High Definiton Sound Device\n";
    cout << "Initializing Grapic";
    cout << "......";
    cout << "VBox Standard Graphic Card\n";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
    coutwithsleep("fatal error: core file missing\n", 1000);
    cout << "error";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void trailerframe08()
{
    system("cls");
    cout << "\n\n\n\n\n";
    cout << ">�ҵ�������Bit" << endl << endl;
    cout << ">" << "��������EnSEC������" << "������һ��ǳ�ǿ�����͸�׼�" << endl << endl;
    cout << ">";
    ptr("������ҵ�Э���±��ǿ���EnSEC��ȴ���в���\n\n", 40);
    Sleep(400);
    cout << ">";
    ptr("�˶���ħ���Ѿ����򿪣����ܽ��������", 40);
}

void trailerframe09()
{
    system("cls");
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
    cout << "�������������������������������ر��˶�����ħ�С�����������������������������" << endl;
    cout << endl << endl << "�ڿ����磺��Դ  By WeiguangTWK\n\n\n";
    cout << "������ֹ���ҵ�������"<<endl<<endl<<endl;

    cout << "������������Ŀǰ�Ľ��Ⱦ�����Щ�����������и��ḻ���淨�������ڴ���";
}