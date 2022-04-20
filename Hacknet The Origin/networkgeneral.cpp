#include"cmds.h"
#include"存档全局变量区.h"
#include"Animation.h"
#include<iostream>
using namespace std;


//以下变量是给scp和upload命令用的
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
	currcomp = LOCALHOST;
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


void scp(string para)
{
	if (currcomp == "127.0.0.1")
	{
		cout << "请先连接至远程主机" << endl;
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
		cout << "目标文件不存在！" << endl;
		return;
	}
	cout << "从远程主机下载" << para;
	ptr("......", 500);
	cout << "完成！" << endl;
	cout << "SRC:" << src.generic_string() << endl << "DEST:" << dest.generic_string() << endl;
	if (filesystem::exists(dest))
	{
		cout << "目标文件已下载" << endl;
		return;
	}
	filesystem::copy_file(src, dest);
}

void upload(string para)
{
	if (currcomp == "127.0.0.1")
	{
		cout << "请先连接至远程主机" << endl;
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