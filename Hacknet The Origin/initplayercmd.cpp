#pragma once
#include"addcmd.cpp"
#include<string>


void initplayercmdlv1()   //��ʼ�����ָ���һ�أ�
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
	c1 = cd;
	addcmd1("cd", c1);
	c1 = rm;
	addcmd1("rm", c1);
};