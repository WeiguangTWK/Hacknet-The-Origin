#include"cmds.h"
#include"�浵ȫ�ֱ�����.h"
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
		cout << "���ӵ�" << currcomptr->hostname << endl;
	}
	else
	{
		cout << "Ŀ�����������ڻ���������" << endl;
	}
}

void dc()
{
	currpath = workpath;
	currpath += COMPUTERMAMP;
	currpath += LOCALHOST;
	currpath += "\\";
	cout << "������" << currcomp << "�Ͽ�����" << endl;
	currcomptr = NULL;
}

void connauth()
{
	if (currcomptr == NULL||currcomptr->ishacked)
	{
		cout << "������Ŀ�������Ĺ���Ա" << endl;
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
			cout << "�޴��û���" << endl;
			return;
		}
		else if (currcomptr->pwd == passwd)
		{
			cout << "������Ŀ�������Ĺ���Ա" << endl;
			currcomptr->ishacked = true;
			getchar();
			return;
		}
		else
		{
			cout << "�������" << endl;
			return;
		}
	}
}

