#pragma once
#include<vector>
#include <string>

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

struct dlcommand1    //dl=download 此处存放的是\bin\文件夹下的命令
{
	std::string name;
	void (*ptr)(std::string);
};

struct dlcommand2
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
//初始化命令记录

void initplayercmdlv1();