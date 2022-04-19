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

struct dlcommand1    //dl=download �˴���ŵ���\bin\�ļ����µ�����
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

//��������
void shutdown();
void reboot();
void help();
void ls();
void cd(std::string para);
void rm(std::string para);
void hostconnect(std::string para);
void dc();
//��ʼ�������¼

void initplayercmdlv1();