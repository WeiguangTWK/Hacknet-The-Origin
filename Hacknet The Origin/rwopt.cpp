//这里用于游戏的存档、读档和清档


#include"存档全局变量区.h"
#include"cmds.h"
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<iostream>
#include<fstream>
#if defined RAND_MAX
#undef RAND_MAX
#endif
#define RAND_MAX 255

void clear()
{
	std::ofstream file;
	savedata blank;
	file.open(SAVEFILE, std::ios::trunc | std::ios::binary);
	file.write((char*)&blank, sizeof(savedata));
	file.close();
}

void save()
{
	std::ofstream file;
	file.seekp(0);
	file.open(SAVEFILE, std::ios::out | std::ios::binary);
	file.write((char*)sav, sizeof(savedata));
	size_t c1, c2;

	/*c1 = cmd1s.size();
	file.write((char*)&cmd1s, sizeof(size_t));
	for (auto it : cmd1s)
	{
		size_t size = it.name.length();
		file.write((char*)&size, sizeof(size_t));
		file.write((char*)it.name.c_str(), sizeof(char) * size);
		size = sizeof(it.ptr);
		file.write((char*)&size, sizeof(size_t));
		file.write((char*)&it.ptr, size);
	}

	c2 = cmd2s.size();
	file.write((char*)&cmd2s, sizeof(size_t));
	for (auto it : cmd2s)
	{
		size_t size = it.name.length();
		file.write((char*)&size, sizeof(size_t));
		file.write((char*)it.name.c_str(), sizeof(char) * size);
		size = sizeof(it.ptr);
		file.write((char*)&size, sizeof(size_t));
		file.write((char*)&it.ptr, size);
	}*/
	
}

void load()
{
	std::ifstream file;
	file.seekg(0);
	file.open(SAVEFILE,std::ios::in|std::ios::binary);
	file.read((char*)sav, sizeof(savedata));

	/*size_t sizec1;
	char cmdtmp[10];
	command1 cmd1tp;
	file.read((char*)&sizec1, sizeof(size_t));
	void (*ptr1)(std::string);
	for (size_t i = 0; i < sizec1; i++)
	{
		size_t size;
		file.read((char*)&size, sizeof(size_t));
		file.read(cmdtmp, sizeof(char) * size);
		file.read((char*)&size, sizeof(size_t));
		file.read((char*)&ptr1, size);
		cmd1tp.name = cmdtmp;
		cmd1tp.ptr = ptr1;
		cmd1s.push_back(cmd1tp);
	}


	size_t sizec2;
	//char cmdtmp[10];
	command2 cmd2tp;
	file.read((char*)&sizec2, sizeof(size_t));
	void (*ptr2)();
	for (size_t i = 0; i < sizec2; i++)
	{
		size_t size;
		file.read((char*)&size, sizeof(size_t));
		file.read(cmdtmp, sizeof(char) * size);
		file.read((char*)&size, sizeof(size_t));
		file.read((char*)&ptr2, size);
		cmd2tp.name = cmdtmp;
		cmd2tp.ptr = ptr2;
		cmd2s.push_back(cmd2tp);
	}*/

	file.close();
}

void dhcp()    //模拟DHCP的IP分配
{
	
	char iotoib(int);
	//srand((unsigned)time(NULL));
	for (size_t i = 0; i < 6; i++)
	{
		srand((unsigned)time(NULL));
		if (i < 4) sav->ip[i] = rand();
		sav->mac[i] = rand();
		Sleep(1000);
	}
	save();
	load();
};