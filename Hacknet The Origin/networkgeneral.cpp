#include"cmds.h"
#include"�浵ȫ�ֱ�����.h"
#include<iostream>
using namespace std;

bool connauth(host* ptr);
void hostconnect(string para)
{
	bool found = false;
	pcinfo tarpc;
	for (auto host_it : pcs)
	{
		if (host_it.ip == para)
		{
			tarpc = host_it;
			found = true;
		}
	}
	if (found)
	{
		if (!connauth) return;
		
		currpath = workpath;
		currpath += COMPUTERMAMP;
		currpath += tarpc.ip;
		currpath += "\\";
		currcomp = tarpc.ip;
		currcomptr = tarpc.ptr;
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

bool connauth(host* ptr)
{
	if (ptr->ishacked) return true;
	else
	{
		string user, passwd;

		cout << "login: " << endl;
		cin >> user;
		cout << "password: " << endl;
		cin >> passwd;
		if (!(ptr->usr == user))
		{
			cout << "�޴��û���" << endl;
			return false;
		}
		else if (ptr->pwd == passwd) return true;
		else
		{
			cout << "�������" << endl;
			return false;
		}
	}
}