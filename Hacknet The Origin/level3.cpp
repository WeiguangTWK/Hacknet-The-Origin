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
void level3()
{
	if (!ifinited)
	{
		system("cls");
		PlaySound(TEXT("Revolve.wav"), NULL, SND_ASYNC | SND_LOOP);
		initplayercmdlv1();
		//sysinit();
		ifinited = true;
	}
	ircmassage(FRIEND, "键入\"connect 31.121.158.159\"", 2000);
	mainconsole(false);
}