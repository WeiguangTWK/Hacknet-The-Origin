#include"host.h"

void initcomplv3()  //初始化目标主机群
{
	host* hacknetstoragemach = new host("31.121.158.159", "3E:42:F1:AC:2A:1B", true);
	hacknetstoragemach->hostname = "NAIX's Stroage Machine 001";
	hacknetstoragemach->usr = "naix";
	hacknetstoragemach->pwd = "3gy2ufdd3q9u";
	hacknetstoragemach->ishacked = false;

}