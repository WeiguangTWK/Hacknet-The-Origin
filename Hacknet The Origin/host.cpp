#include "host.h"
#include"�浵ȫ�ֱ�����.h"
#include<iostream>
#include<vector>


host::host(std::string p, std::string m, bool w)
{
	ip = p;
	mac = m;
	icmpable = w;
	pcinfo tmp;
	tmp.ip = p;
	tmp.ptr = this;
	pcs.push_back(tmp);
}


