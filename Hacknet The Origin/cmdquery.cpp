//������ģ���Լ�������ѯ����


#include<iostream>
#include<string>
#include"cmds.h"
#include"�浵ȫ�ֱ�����.h"
using namespace std;

string getvirtualpath(filesystem::path pth);
void mainconsole(bool jumprequired,string jumpcmd="none")
{
	string cmd;
	string parameter;
	string path,workp,compm;
	//int begin;
	while (true)
	{
		path = currpath.generic_string();
		workp = workpath.generic_string();
		compm = COMPUTERMAMP;
		//cout << "path:" << path << endl << "workp:" << workp<<endl;
		path.erase(0, workp.length() + compm.length());
		//cout << currpath.generic_string() << endl << workpath.generic_string() << endl;
		//begin = path.find(workpath.generic_string());
		//cout << "����ǰ:" << currpath << endl;
		//cout << "�����" << path << endl;
		cout << sav->name << sav->terminaltype << " " << path << ">";
		getline(cin, cmd);
		if (!cmdquery(cmd))cout << "������Ч��������﷨" << endl;
		else if (jumprequired)
		{
			if (jumpcmd == "none") break;
			else if (cmd == jumpcmd) break;
		}
	}
}

bool cmdquery(string cmd)
{
	if (cmd.find(" ") == string::npos)
	{
		for (auto it : cmd2s)
		{
			if (it.name == cmd)
			{
				//cout << cmd << " found!" << endl;
				(*it.ptr)();
				return true;
			}

		}
	}
	else
	{
		int n = cmd.find(" ");
		string c = cmd.substr(0, n);
		string para = cmd.substr(n+1, cmd.size() - n);
		//cout << "����������" << endl;
		for (auto it : cmd1s)
		{
			if (it.name == c)
			{
				//cout << c << " found!" << "Para:" << para << endl;
				(*it.ptr)(para);
				return true;
			}
		}
	}
	return false;
}