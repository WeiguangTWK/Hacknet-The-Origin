//����ŵ�����Ϸ������ص�

#include"Animation.h"
#include"savedata.h"
#include<iostream>
#include"�浵ȫ�ֱ�����.h"
using namespace std;


void save();
void load();
void shutdown()
{
	char inp;
	cout << "�����˴λỰ���ر�ϵͳ��(Y/N)";
	cin >> inp;
	if (inp == 'Y' || inp == 'y')
	{
		save();
		exit(1);
	}
}

void reboot()
{
	system("cls");
	if (sav->terminaltype == "@failsafe")
	{
		bootseqerr();
		return;
	}
	bootseq();
}