//命令行模拟以及迭代查询命令


#include<iostream>
#include<string>
#include"cmds.h"
#include"存档全局变量区.h"
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
		//cout << "精简前:" << currpath << endl;
		//cout << "精简后" << path << endl;
		cout << sav->name << sav->terminaltype << " " << path << ">";
		getline(cin, cmd);
		if (!cmdquery(cmd))cout << "命令无效——检查语法" << endl;
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
		//cout << "带参数运行" << endl;
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