#include"�浵ȫ�ֱ�����.h"
#include"levels.h"
#include<iostream>

void leveldec()   //�����ǽ��йؿ�ѡ��ĵط���Ϊ�˱���ؿ����޵����ڴ�ռ�ã��Ҳ��õ�ģʽ�� main --(ѭ��)--> leveldec ----> �ؿ� --(ͨ��)--> main ....(�Դ�����)
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