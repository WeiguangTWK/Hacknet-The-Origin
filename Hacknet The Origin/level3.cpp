#include"Animation.h"
#include"cmds.h"
#include"host.h"
#include"�浵ȫ�ֱ�����.h"
#include<Windows.h>
#include<mmsystem.h>
#include<iostream>
//constexpr auto FRIEND = "Vapor";
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
		std::cin.ignore(1, '\n');
	}
	initcomplv3();
	//mainconsole(false);
	ircmassage(FRIEND, "�������Ĳ����漰�����ڽ̳�����û���ᵽ�Ķ���", 2000);
	ircmassage(FRIEND, "����˵�����ͺ�", 3000);
	ircmassage(FRIEND, "������Ҫ���ӵ�IP��ַΪ\"31.121.158.159\"������", 3300);
	ircmassage(FRIEND, "������û���Ǹ������Ĺ���ԱȨ�ޣ�����ȥ����ʲô��������", 2900);
	ircmassage(FRIEND, "��ʱ����Ҫʹ��login���Ȼ���ṩ�û���������", 2200);
	ircmassage(FRIEND, "���ģ����Ѿ����������������", 2450);
	ircmassage(FRIEND, "�û���:naix�����룺3gy2ufdd3q9u", 3100);
	ircmassage(FRIEND, "�����������home�ļ�������һ�����ִ�hacknet���ļ�", 2800);
	ircmassage(FRIEND, "��������һ��������ô��ʱ������help������", 3000);
	ircmassage(FRIEND, "���ͣ�������������ʵ��������һ��",1500);
	ircmassage(FRIEND, "��������\"connect 31.121.158.159\"", 800);
	mainconsole(true,"scp hacknet_VER0.8_BUILD_2011.zip");
	ircmassage(FRIEND, "�������Ѿ����ļ��㵽���ˣ��ܺ�!", 2500);
	ircmassage(FRIEND, "����Ŀ��������ÿһ����������������־", 2600);
	ircmassage(FRIEND, "��Щ��־�����ᵼ���Լ����ٵı�¶", 2500);
	ircmassage(FRIEND, "����ǰ��Ŀ��������logsĿ¼", 2800);
	ircmassage(FRIEND, "ʹ��\"rm *\"���logsĿ¼�µ������ļ�",800);
	mainconsole(true, "rm *");
	ircmassage(FRIEND, "����ʹ��\"dc\"����Ͽ�����", 800);
	mainconsole(true, "dc");
	ircmassage(FRIEND, "�󹦸�ɣ�����ʹ��make�������ͺ���", 3500);
	PlaySound(NULL, NULL, SND_ASYNC | SND_LOOP);

	//mainconsole(false);
	sav->level = 4;
	save();
}