#include"cmds.h"
#include"�浵ȫ�ֱ�����.h"
#include<iostream>
using namespace std;

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
		currpath = workpath;
		currpath += COMPUTERMAMP;
		currpath += tarpc.ip;
		currpath += "\\";
		cout << currpath << endl;
		currcomp += tarpc.ip;
		currcomptr = tarpc.ptr;
		
	}
	else
	{
		cout << "Ŀ�����������ڻ���������" << endl;
	}
}