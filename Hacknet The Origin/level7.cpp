#include"Animation.h"
//#include"cmds.h"
#include"host.h"
#include"�浵ȫ�ֱ�����.h"
#include<Windows.h>
#include<mmsystem.h>
#include<iostream>
using namespace std;


void openinganim();
void level7()
{
	if (!ifinited)
	{
		system("cls");
		
		initplayercmdlv1();
		initplayercmdlv6();
		sysinit();
		ifinited = true;
		std::cin.ignore(1, '\n');
	}
	PlaySound(TEXT("RemiDrone.wav"), NULL, SND_ASYNC | SND_LOOP);
	coutwithsleep("������������ע�⡪����������\n", 2500);
	coutwithsleep("������IRC�����������ӣ��������\n", 2000);
	ircmassage(FRIEND, "��ӭ������", 2500);
	ircmassage(FRIEND, "�ղ��Ǳ��������������Ҳ��������", 2200);
	ircmassage(FRIEND, "���ϵͳ��־��ô��һ���ˣ������ǻ�ϵͳ����", 2000);
	ircmassage(FRIEND, "����������⵽���ƻ��治С", 3200);
	ircmassage(FRIEND, "�и�����Ҫ�������ң��������������ѣ��Ե�һ��", 3100);
	ircmassage("Bit", "����������һ������ã��ҽ�Bit", 2100);
	ircmassage(FRIEND, "����������ô�ҵ���������", 2500);
	ircmassage("Bit", "���ǵ����ǲ�����������һ����HACKNET��ϵͳ", 2600);
	ircmassage("Bit", "�����Լ���صķ������Ϸ�����һ��İ����IP��Ȼ������������", 2200);
	ircmassage(FRIEND, "�Ҹոո㵽һ�ݹ�������Դ�룬��û�б���", 2500);
	ircmassage(FRIEND, "�����Һ����ողŴ����繥���л�����", 1800);
	ircmassage(FRIEND, "ò�ƺ����Դ���й�", 2500);
	ircmassage("Bit", "�������Ų��٣����Դ���������������ҵ���", 2000);
	ircmassage(FRIEND, "31.121.158.159���������������������", 2400);
	ircmassage("Bit", "�ðɣ���ʵ���ϵͳ���Һ�һ����EnSEC����ҵ�ĺ�����Ŀ",1800);
	ircmassage("Bit", "�����ұ�������Ŷ�", 2200);
	ircmassage(FRIEND, "��ô���£�", 2300);
	ircmassage("Bit", "�����ҵ��������һЩ�����Һ��ߵ�����", 1900);
	ircmassage("Bit", "��Щ��������һ������˵���", 2300);
	ircmassage("Bit", "�����ڵĴ������������˷�ʱ�䣬�����ܰ���һ����", 2100);

	Sleep(3500);
	PlaySound(NULL, NULL, SND_ASYNC | SND_LOOP);
	sav->chapter = 1;

	openinganim();
	//sav->level = 8;
}