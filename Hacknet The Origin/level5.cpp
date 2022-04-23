#include"Animation.h"
#include"cmds.h"
#include"host.h"
#include"存档全局变量区.h"
#include<Windows.h>
#include<mmsystem.h>
#include<iostream>

using namespace std;

void bootseqerr();
void initplayercmdlv5();
void mainconsole(bool jumprequired, string jumpcmd = "none");
void level5()
{
	initplayercmdlv5();
    bootseqerr();
    cin.ignore(1, '\n');
    mainconsole(true, "compile hacknet_VER0.8_BUILD_2011.zip");
    sav->terminaltype = "@HACKNET";
    mainconsole(true, "reboot");
    system("pause");
    sav->level = 6;
    save();
}
