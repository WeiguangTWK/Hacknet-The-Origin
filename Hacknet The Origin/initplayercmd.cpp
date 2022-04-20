#pragma once
#include"addcmd.cpp"
#include<string>


void initplayercmdlv1()   //初始化玩家指令（第一关）
{
	void (*c1)(std::string);
	void(*c2)();
	c2 = ls;
	addcmd2("ls", c2);
	c2 = help;
	addcmd2("help", c2);
	c2 = shutdown;
	addcmd2("shutdown", c2);
	c2 = reboot;
	addcmd2("reboot", c2);
	c2 = dc;
	addcmd2("dc", c2);
	c2 = connauth;
	addcmd2("login", c2);
	//以下是带参区
	c1 = cd;
	addcmd1("cd", c1);
	c1 = rm;
	addcmd1("rm", c1);
	c1 = hostconnect;
	addcmd1("connect", c1);
	c1 = scp;
	addcmd1("scp", c1);
	c1 = upload;
	addcmd1("upload", c1);
};