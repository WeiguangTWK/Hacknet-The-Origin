#include"cmds.h"
#include"�浵ȫ�ֱ�����.h"
#include"Animation.h"
#include<iostream>
using namespace std;


//���±����Ǹ�scp��upload�����õ�
bool jumprequire = false;
void(*jumpfunc)() = NULL;
string jumpfilename;
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
	currcomp = LOCALHOST;
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


void scp(string para)
{
	if (currcomp == "127.0.0.1")
	{
		cout << "����������Զ������" << endl;
		return;
	}
	filesystem::path dest= workpath,src=currpath;
	dest += COMPUTERMAMP;
	dest += LOCALHOST;
	dest += "\\home\\";
	dest += para;
	src += para;
	if (!filesystem::exists(src))
	{
		cout << "Ŀ���ļ������ڣ�" << endl;
		return;
	}
	cout << "��Զ����������" << para;
	ptr("......", 500);
	cout << "��ɣ�" << endl;
	cout << "SRC:" << src.generic_string() << endl << "DEST:" << dest.generic_string() << endl;
	if (filesystem::exists(dest))
	{
		cout << "Ŀ���ļ�������" << endl;
		return;
	}
	filesystem::copy_file(src, dest);
}

void upload(string para)
{
	if (currcomp == "127.0.0.1")
	{
		cout << "����������Զ������" << endl;
		return;
	}
	filesystem::path src=workpath, dest=currpath;
	src += COMPUTERMAMP;
	src += LOCALHOST;
	src += "\\home\\";
	src += para;
	dest += para;
	filesystem::copy_file(src, dest);
}