#pragma once
#include<string>
#include<vector>
#include"pcinfo.h"
#include"cmds.h"
#define SAVEFILE "data.sav"

struct savedata
{
	std::string name;
	std::string terminaltype = "@UNIX";
	unsigned char ip[4] = { 0 };
	unsigned char mac[6] = { 0 };
	unsigned int level = 0;
	unsigned int chapter = 0;
};
