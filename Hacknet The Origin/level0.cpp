#include"�浵ȫ�ֱ�����.h"
#include"Animation.h"
#include "levels.h"
#include<Windows.h>
#include<iostream>
#include<mmsystem.h>
//#include<stdlib.h>

void mainstopmusic();
void selfcheck();
void level0_1();

void level0()    //˵��һ�£�����Ϸ�趨�����ϵͳ��������������ϵ�
{
	system("cls");
	ptr("���߸�����㲻֪����һ���������ʱ̽������ǳ���Ҫ����ʱ������һ��\"help\"�����ǳ����ã���ס����̽������\n", 5);
	system("pause");
	system("cls");
	ptr("����һ���������ǰ��ĳЩ������Ҫ�������趨�����ģ����ǻ�ѱ��������׵�", 5);
	Sleep(500);
	while (true)
	{
		char inp;
		std::cin.ignore(1, '\n');
		ptr("\n�������û����û�����", 5);
		std::getline(std::cin, sav->name);
		ptr("���û���Ϊ��", 5);
		std::cout << sav->name<<std::endl;
		ptr("��ȷ����(Y/N)", 5);
		std::cin >> inp;
		if (inp == 'Y' || inp == 'y') break;
	}
	save();
	system("cls");
	selfcheck();
	//PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC);
	level0_1();
	sav->level = 1;
	save();
}

void selfcheck()
{
	system("cls");
	ptr("����Ϊ�½����������׼��", 5);
	ptr("...", 300);
	std::cout << "��ɣ�" << std::endl;
	ptr("����ʹ��Ĭ�����ô��������...\n", 5);
	ptr("Ӳ��......IDE 0: ", 5);
	counter(0, 30, 50);
	ptr("GBytes ��ɣ�\n", 5);
	ptr("�ڴ�......DDR3 ch1: ", 5);
	counter(0, 2, 1000);
	ptr("GBytes ��ɣ�\n", 5);
	ptr("CPU......\n", 5);
	coutwithsleep("CPU1\n", 200);
	coutwithsleep("CPU2\n", 200);
	coutwithsleep("CPU3\n", 200);
	coutwithsleep("CPU4\n", 200);
	coutwithsleep("�����׼������!\n\n", 5);
	system("pause");
};

void level0_1()
{
	bootseq();
}