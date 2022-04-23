#pragma once
//�������Ҵ������ĵط�

#include<vector>
#include <string>

//�⼸�������Ǻ�����������vector�õģ���Ҫ��;����Ϻ����������ģ��

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

//��������
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

//��������
void hacknethelp();
void porthack();
void nmap();

//�����ר��
void compile(std::string para);

//��ʼ�������¼

void initplayercmdlv1();
void initplayercmdlv6();

//���±����Ǹ�scp��upload�����õģ����������ػ��ϴ�ĳ�ļ�ʱ�����¼�
extern bool jumprequire;
extern void(*jumpfunc)();
extern std::string jumpfilename;