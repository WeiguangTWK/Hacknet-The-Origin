//�����ŵ���������ص�����

#include"cmds.h"
#include"�浵ȫ�ֱ�����.h"
#include"Animation.h"
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;


//���±����Ǹ�scp��upload�����õ�
bool jumprequire = false;
void(*jumpfunc)() = NULL;
string jumpfilename;
void dc();
void logging(string content);
string chartostr(const unsigned char* ip, int count);
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
		cout << endl << "���ӵ�" << currcomptr->hostname << endl;
		logging(" connected ");
		if (currcomptr->hostutility != NULL) (*currcomptr->hostutility)();
	}
	else
	{
		cout << "\nĿ�����������ڻ���������\n" << endl;
	}
}

void dc()
{
	if(currcomp!=LOCALHOST) logging(" disconnected ");
	currpath = workpath;
	currpath += COMPUTERMAMP;
	currpath += LOCALHOST;
	currpath += "\\";
	cout << endl << "������" << currcomp << "�Ͽ�����" << endl << endl;
	currcomp = LOCALHOST;
	currcomptr = NULL;
}

void connauth()
{
	if (currcomptr == NULL||currcomptr->ishacked)
	{
		cout << "\n������Ŀ�������Ĺ���Ա\n" << endl;
		return;
	}
	else
	{
		string user, passwd;
		cout << "\nusername: ";
		cin >> user;
		cout << "\npassword: ";
		cin >> passwd;
		if (!(currcomptr->usr == user))
		{
			cout << "\n�޴��û���\n" << endl;
			return;
		}
		else if (currcomptr->pwd == passwd)
		{
			cout << "\n������Ŀ�������Ĺ���Ա\n" << endl;
			currcomptr->ishacked = true;
			logging(" gained root permission ");
			cin.ignore(1, '\n');
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
		cout << "\n����������Զ������\n" << endl;
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
		cout << "\nĿ���ļ������ڣ�\n" << endl;
		return;
	}
	if (filesystem::exists(dest))
	{
		cout << "\nĿ���ļ�������\n" << endl;
		return;
	}
	cout << "��Զ����������" << para;
	ptr("......", 500);
	cout << "��ɣ�" << endl;
	//cout << "SRC:" << src.generic_string() << endl << "DEST:" << dest.generic_string() << endl;
	filesystem::copy_file(src, dest);
	string loggs=" downloaded ";
	loggs += para;
	logging(loggs);
}

void upload(string para)
{
	if (currcomp == "127.0.0.1")
	{
		cout << "\n����������Զ������\n" << endl;
		return;
	}
	filesystem::path src=workpath, dest=currpath;
	src += COMPUTERMAMP;
	src += LOCALHOST;
	src += "\\home\\";
	src += para;
	dest += para;
	filesystem::copy_file(src, dest);
	filesystem::copy_file(src, dest);
	string loggs = " uploaded ";
	loggs += para;
	logging(loggs);
}

void console()
{
	if (currcomptr == NULL) return;
	if (currcomptr->hostutility != NULL) (*currcomptr->hostutility)();
	else cout << "Ŀ���������ṩ��������" << endl;
}

void logging(string content)
{
	
	filesystem::path logp=workpath;
	logp += COMPUTERMAMP;
	logp += currcomp;
	logp += "\\logs\\"; 
	logp += chartostr(sav->ip, 4);
	logp += content;
	logp += ".log";
	ofstream logfile;
	//cout << logp.generic_string() << endl;
	logfile.open(logp, ios::out | ios::app);
	logfile << chartostr(sav->ip, 4) << content;

}

string chartostr(const unsigned char* ip,int count)
{
	string res;
	for (int i = 0; i < count; i++)
	{
		int b, s, g;
		b = (int)ip[i] / 100;
		g = (int)ip[i] - (int)ip[i] / 10 * 10;
		s = (int)ip[i] - b * 100 - g;
		s /= 10;
		if (b != 0)res += (char)(b + 48);
		res += (char)(s + 48);
		res += (char)(g + 48);
		if (i < count - 1) res += ".";
	}
	return res;
}