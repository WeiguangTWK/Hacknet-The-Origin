#include"host.h"
#include"Animation.h"
#include"�浵ȫ�ֱ�����.h"
#include<iostream>
using namespace std;

void ipmanaconsole();
string chartostr(const unsigned char* ip, int count);
void initcomptraced()
{
	host* ispcomp = new host("68.144.93.18", "AB:56:9A:BF:7A:C5", true);
	ispcomp->hostname = "BJUST ISP Destribute";
	ispcomp->ishacked = false;
	ispcomp->hackport = 0;
	ispcomp->status[7] = true;
	ispcomp->connectedfunc = ipmanaconsole;
	ispcomp->hostutility = ipmanaconsole;
	ispcomp->hackedfunc = ipmanaconsole;
}

void ipmanaconsole()
{
	ptr("\nBJUST ѧ����������������̨\n\n", 5);
	if (!currcomptr->ishacked)
	{
		cout << "��Ȩ�������˳�����" << endl;
		return;

	}
	ptr("������Ҫִ�в�����IP\n\n", 5);
	bool tc;
	string userinp;
	string playerip = chartostr(sav->ip, 4);
	while (true)
	{
		cout << "scan >";
		cin >> userinp;
		cout << "����ɨ��" << userinp << endl;
		ptr("====================", 100);
		cout << "���" << endl;
		if (userinp == playerip)
		{
			ptr("���ڸõ�ַ��ѡ������\n\n\t dhcp ���·���IP��ַ\n\n\t exit �����ϼ��˵�\n\t ִ������������Ҫ��¼�ϼ�·�� \n\n", 5);
			while (true)
			{
				cout << userinp << ">";
				cin >> userinp;
				if (userinp == "exit") break;
				else if (userinp == "dhcp")
				{
					dhcp();
					istraced = false;
					return;
				}
			}
		}
		else cout << "�õ�ַ���鱾�����Ͻ" << endl;
	}
}