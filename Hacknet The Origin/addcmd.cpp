#pragma once
#include"cmds.h"
#include"savedata.h"
#include"�浵ȫ�ֱ�����.h"
#include<iostream>
typedef void (*f_ptr)();
typedef void (*f_ptr2)(std::string);
/*inline*/ void addcmd1(std::string name, const void (*ptr)(std::string))
{
	command1 cmd1;
	cmd1.name = name;
	cmd1.ptr = (f_ptr2)ptr;
	cmd1s.push_back(cmd1);
	save();
};

/*inline*/ void addcmd2(std::string name, const void (*ptr)())
{
	command2 cmd2;
	cmd2.name = name;
	cmd2.ptr = (f_ptr)ptr;
	//std::cout <<"��������������"<< name << std::endl;
	//std::cout << "�����������ַ��" << ptr << std::endl;
	cmd2s.push_back(cmd2);
	save();
};