#include "host.h"
#include<iostream>
#include<vector>


host::host(unsigned char* p, unsigned char* m, bool w)
{
	for (size_t i = 0; i < 6; i++)
	{
		if (i < 4) ip[i] = p[i];
		mac[i] = m[i];
	}
}

