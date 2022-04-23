#pragma once
#include<string>
#include"host.h"

struct pcinfo   //这个东西在后面的构造函数里面会用上
{
	std::string ip;
	host* ptr=NULL;
};