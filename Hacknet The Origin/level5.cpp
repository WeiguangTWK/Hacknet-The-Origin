#include"Animation.h"
#include"cmds.h"
#include"host.h"
#include"存档全局变量区.h"
#include<Windows.h>
#include<thread>
#include<mmsystem.h>
#include<iostream>

using namespace std;

void bootseqerr();
void initfailsafe();
void initplayercmdlv5();
void level5()
{
	initplayercmdlv5();
    bootseqerr();

}

void play()
{
    PlaySound(TEXT("CrashTrack.wav"), NULL, SND_ASYNC);
}

void bootseqerr()
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
        cout << "error"<<endl;
        Sleep(1000);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    Sleep(700);
    system("cls");
    Sleep(3000);
    system("pause");
}

void initfailsafe()
{
    ptr("initializating failsafe......", 5);
    Sleep(350);
    coutwithsleep("Done!", 800);
    ptr("Scanning system components....", 5);
    coutwithsleep("Done!", 1000);
    ptr("3 commands availble", 5);
    cout << endl << endl;
    ptr("initialization completed, type \"help\" for command help", 5);

}