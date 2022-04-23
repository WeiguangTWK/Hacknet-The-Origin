#include"存档全局变量区.h"
#include"levels.h"
#include<iostream>

void leveldec()   //这里是进行关卡选择的地方，为了避免关卡套娃导致内存占用，我采用的模式是 main --(循环)--> leveldec ----> 关卡 --(通关)--> main ....(以此类推)
{
	switch (sav->level)
	{
	case 0: { level0(); break; };
	case 1: { level1(); break; };
	case 2: { level2(); break; };
	case 3: { level3(); break; };
	case 4: { level4(); break; };
	case 5: { level5(); break; };
	default:
		break;
	}
}