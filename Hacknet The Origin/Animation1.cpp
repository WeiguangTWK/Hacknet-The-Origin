#pragma once
//一般我会把一些常用的小型动画放在这里

#include"存档全局变量区.h"
#include"Animation.h"
#include<iostream>
#include<string>
#include<Windows.h>
//#include<time.h>
using namespace std;


void vlptr(char c, int count) //批量输出
{
    for (int i = 0; i < count; i++) cout << c;
}

void ptr(string str,int delay)   //一个字一个字地输出
{
	for (auto it : str)
	{
		Sleep(delay);
		cout << it;
	}
}

void counter(int start,long long end, int delay) //从一个数递增到另一个数
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

void coutwithsleep(std::string str, int delay)  //字面意思，自带延时的输出
{
    cout << str;
    Sleep(delay);
};


void ircmassage(string sender,string message,int delay)  //模拟别人和自己的IRC通信
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
