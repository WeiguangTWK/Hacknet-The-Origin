#include"Animation.h"
#include"cmds.h"
#include"host.h"
#include"�浵ȫ�ֱ�����.h"
#include<Windows.h>
#include<mmsystem.h>
#include<iostream>
using namespace std;

void level6()
{
	if (!ifinited)cin.ignore(1, '\n');
	ifinited = true;
	cmd1s.clear();
	cmd2s.clear();
	pcs.clear();
	initplayercmdlv1();
	initplayercmdlv6();
	ptr("initializing Hacknet integration Module", 5);
	ptr("...", 500);
	coutwithsleep("Done!\n", 800);
	ptr("setting locale", 5);
	ptr("....", 500);
	ptr("�й�", 5);
	cout << endl << endl;
	ptr("����������������ɣ�\n", 5);
	//sysinit();
	string path;
	string workp;
	path = currpath.generic_string();
	workp = workpath.generic_string();
	path.erase(0, sizeof(workp) + sizeof("Origin/Hacknet The Origin/computermap"));
	cout << sav->name << sav->terminaltype << " " << path << ">";
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	coutwithsleep("\n\n�����������棺��⵽�쳣������������\n\n", 0);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	for (int i = 20; i > 0; i--)
	{
		PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
		cout << "����������������״̬����......�������ݰ�(��" << (20 - i) << "����" << endl << endl;;
		Sleep(i*20);
	}
	inittraced();
	sav->level = 7;
	save();
}