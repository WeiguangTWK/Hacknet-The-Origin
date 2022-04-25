#include"host.h"
#include"Animation.h"
#include"存档全局变量区.h"
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
	ptr("\nBJUST 学生宿舍网络管理控制台\n\n", 5);
	if (!currcomptr->ishacked)
	{
		cout << "无权操作，退出连接" << endl;
		return;

	}
	ptr("请输入要执行操作的IP\n\n", 5);
	bool tc;
	string userinp;
	string playerip = chartostr(sav->ip, 4);
	while (true)
	{
		cout << "scan >";
		cin >> userinp;
		cout << "正在扫描" << userinp << endl;
		ptr("====================", 100);
		cout << "完成" << endl;
		if (userinp == playerip)
		{
			ptr("对于该地址可选操作：\n\n\t dhcp 重新分配IP地址\n\n\t exit 返回上级菜单\n\t 执行其他操作需要登录上级路由 \n\n", 5);
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
		else cout << "该地址不归本区域管辖" << endl;
	}
}