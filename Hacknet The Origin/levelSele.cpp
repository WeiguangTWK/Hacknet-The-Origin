#include"�浵ȫ�ֱ�����.h"
#include"levels.h"
#include<iostream>

void leveldec()
{
	switch (sav->level)
	{
	case 0: { level0(); break; };
	case 1: { level1(); break; };
	case 2: { level2(); break; };
	default:
		break;
	}
}