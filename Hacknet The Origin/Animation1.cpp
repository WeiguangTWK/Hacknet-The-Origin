#pragma once
//һ���һ��һЩ���õ�С�Ͷ�����������

#include"�浵ȫ�ֱ�����.h"
#include"Animation.h"
#include<iostream>
#include<string>
#include<Windows.h>
//#include<time.h>
using namespace std;


void vlptr(char c, int count) //�������
{
    for (int i = 0; i < count; i++) cout << c;
}

void ptr(string str,int delay)   //һ����һ���ֵ����
{
	for (auto it : str)
	{
		Sleep(delay);
		cout << it;
	}
}

void counter(int start,long long end, int delay) //��һ������������һ����
{
    for (size_t i = start; i <= end; i++)
    {
        cout << i;
        Sleep(delay);
        if (i == 0)
        {
            cout << '\b';
            continue;
        }
        if (i < end&&i>0)
        {
            for (long long j = i; j != 0; j /= 10)
                cout << '\b';
        }
    }
}

void coutwithsleep(std::string str, int delay)  //������˼���Դ���ʱ�����
{
    cout << str;
    Sleep(delay);
};


void ircmassage(string sender,string message,int delay)  //ģ����˺��Լ���IRCͨ��
{
    time_t now;
    time(&now);

    struct tm tmTmp;
    char stTmp[32];

    localtime_s(&tmTmp, &now);
    asctime_s(stTmp, &tmTmp);
    cout << "[" << tmTmp.tm_mon << " " << tmTmp.tm_wday << " " << tmTmp.tm_hour << ":" << tmTmp.tm_min << ":" << tmTmp.tm_sec << "]  " << sender << " : " << message << endl << endl;
    Sleep(delay);
};
