#include"Animation.h"
#include"cmds.h"
#include"host.h"
#include"�浵ȫ�ֱ�����.h"
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
	ircmassage(FRIEND, "�������Ĳ����漰�����ڽ̳�����û���ᵽ�Ķ���", 2000);
	ircmassage(FRIEND, "����˵�����ͺ�", 3000);
	ircmassage(FRIEND, "���ڼ���\"connect 31.121.158.159\"", 800);
	mainconsole(false);
}