#include"cmds.h"
#include"存档全局变量区.h"
#include<iostream>
using namespace std;

void dc();
void hostconnect(string para)
{
	bool found = false;
	pcinfo tarpc;
	if (para == "127.0.0.1" || para == "localhost")
	{
		dc();
		return;
	}
	for (auto host_it : pcs)
	{
		if (host_it.ip == para)
		{
			tarpc = host_it;
			currcomptr = host_it.ptr;
			found = true;
			break;
		}
	}
	if (found)
	{
		currpath = workpath;
		currpath += COMPUTERMAMP;
		currpath += tarpc.ip;
		currpath += "\\";
		currcomp = tarpc.ip;
		currcomptr = tarpc.ptr;
		cout << "连接到" << currcomptr->hostname << endl;
	}
	else
	{
		cout << "目标主机不存在或主机离线" << endl;
	}
}

void dc()
{
	currpath = workpath;
	currpath += COMPUTERMAMP;
	currpath += LOCALHOST;
	currpath += "\\";
	cout << "从主机" << currcomp << "断开连接" << endl;
	currcomptr = NULL;
}

void connauth()
{
	if (currcomptr == NULL||currcomptr->ishacked)
	{
		cout << "您已是目标主机的管理员" << endl;
		return;
	}
	else
	{
		string user, passwd;
		cout << "login: ";
		cin >> user;
		cout << "password: ";
		cin >> passwd;
		if (!(currcomptr->usr == user))
		{
			cout << "无此用户！" << endl;
			return;
		}
		else if (currcomptr->pwd == passwd)
		{
			cout << "您已是目标主机的管理员" << endl;
			currcomptr->ishacked = true;
			getchar();
			return;
		}
		else
		{
			cout << "密码错误！" << endl;
			return;
		}
	}
}

