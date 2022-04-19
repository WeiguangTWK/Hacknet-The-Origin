#include"存档全局变量区.h"
#include"levels.h"
#include<iostream>

void leveldec()
{
	switch (sav->level)
	{
	case 0: { level0(); break; };
	case 1: { level1(); break; };
	case 2: { level2(); break; };
	case 3: { level3(); break; };
	default:
		break;
	}
}