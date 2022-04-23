#pragma once
//这里是我存放命令的地方

#include<vector>
#include <string>

//这几个命令是后面用来创建vector用的，主要用途是配合后面的命令行模拟

struct command1
{
	std::string name;
	void (*ptr)(std::string);
};

struct command2
{
	std::string name;
	void (*ptr)();
};


void addcmd1(std::string name, void (*ptr)(std::string));
void addcmd2(std::string name, void (*ptr)());
bool cmdquery(std::string);

//基础命令
void shutdown();
void reboot();
void help();
void ls();
void cd(std::string para);
void rm(std::string para);
void hostconnect(std::string para);
void dc();
void connauth();
void scp(std::string para);
void upload(std::string para);
void console();

//骇入命令
void hacknethelp();
void porthack();
void nmap();

//第五关专用
void compile(std::string para);

//初始化命令记录

void initplayercmdlv1();
void initplayercmdlv6();

//以下变量是给scp和upload命令用的，用来在下载或上传某文件时触发事件
extern bool jumprequire;
extern void(*jumpfunc)();
extern std::string jumpfilename;