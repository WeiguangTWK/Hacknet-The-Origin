#include<iostream>
//帮助程序
using namespace std;



void help()
{
	cout << "help 显示本帮助" << endl;
	cout << "connect <host> 连接指定主机" << endl;
	cout << "login 登录连接到的主机" << endl;
	cout << "dc 断开连接返回本地主机" << endl;
	cout << "cd <path> 打开指定文件夹" << endl;
	cout << "ls 列出当前目录文件夹结构" << endl;
	cout << "rm <filename> 删除指定文件" << endl;
	//cout << "cat <filename> 读取指定文件" << endl;
	cout << "upload <filename> 上传文件至远程主机" << endl;
	cout << "scp <filename> 从远程主机下载指定文件" << endl;
	cout << "shutdown 结束会话并关闭关闭计算机" << endl;
	cout << "reboot 结束会话并重启计算机" << endl;
}

void lv5help()
{
	cout << "\nhelp 显示本帮助" << endl;
	cout << "cd <path> 转到指定文件夹" << endl;
	cout << "rm <flie> 删除指定文件" << endl;
	cout << "ls 列出当前文件夹下内容" << endl;
	cout << "compile <file> 编译指定文件" << endl;
	cout << "shutdown 结束会话并关闭关闭计算机" << endl;
	cout << "reboot 结束会话并重启计算机\n" << endl;
}

