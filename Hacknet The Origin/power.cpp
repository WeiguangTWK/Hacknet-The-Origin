#include"Animation.h"
#include"savedata.h"
#include<iostream>
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
	bootseq();
}