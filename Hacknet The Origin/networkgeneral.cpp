#include"cmds.h"
#include"存档全局变量区.h"
using namespace std;

void hostconnect(string para)
{
	
	string tarpc;
	for (auto host_it : pcs)
	{
		if (host_it.ip == para) tarpc == para;
	}
}