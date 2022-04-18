#include"Animation.h"
#include"savedata.h"
#include<iostream>
using namespace std;


void save();
void load();
void shutdown()
{
	char inp;
	cout << "结束此次会话并关闭系统？(Y/N)";
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