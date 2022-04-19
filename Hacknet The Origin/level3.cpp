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
		getchar();
	}
	initcomplv3();
	mainconsole(false);
	ircmassage(FRIEND, "接下来的操作涉及到我在教程里面没有提到的东西", 2000);
	ircmassage(FRIEND, "按我说的做就好", 3000);
	ircmassage(FRIEND, "现在键入\"connect 31.121.158.159\"", 800);
	mainconsole(false);
}