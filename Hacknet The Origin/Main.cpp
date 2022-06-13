// Hacknet The Origin.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#pragma comment(lib,"winmm.lib")
#include"Animation.h"
#include"存档全局变量区.h"
#include<iostream>
#include<Windows.h>
#include<mmsystem.h>
//#include<filesystem>
using namespace std;


void ls();
void mainmenu();
void leveldec();
bool ifinited = false;
bool istraced = false;
savedata *sav=new savedata;
std::vector<pcinfo> pcs;
std::vector<command1> cmd1s;
std::vector<command2> cmd2s;
std::filesystem::path currpath;
std::filesystem::path currcomp(LOCALHOST);
host* currcomptr = NULL;
const std::filesystem::path workpath(std::filesystem::current_path());
int main(int argc,char *argv[])
{
    SetConsoleTitle(TEXT("HACKNET The Origin ---关闭潘多拉的盒子---"));
    currpath = workpath;
    currpath += COMPUTERMAMP;
    currpath += currcomp;
    currpath += "\\";
    //cout << currpath << endl<<endl;
    string opt;
    load();
    cout << "本作品与《黑客网络》同世界观，涉及人物时间皆为虚构" << endl << endl;
    cout << "打开声音体验更佳" << endl;
    Sleep(3000);
    system("cls");
    cout << currpath << endl << endl;
    mainmenu();
    PlaySound(TEXT("AmbientDrone.wav"),NULL, SND_FILENAME | SND_ASYNC);
    while (true)
    {
        cout << "VMConsole>";
        cin >>opt; 
        if (opt == "new")
        {
            char inp;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            ptr ("原有的存档将被删除！确认？（Y/N）",2);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            cin >> inp;
            if (inp == 'y' || inp == 'Y') { clear();load(); PlaySound(TEXT("node.wav"), NULL, SND_SYNC); break; }
            else
            {
                continue;
            }
        }
        else if (opt == "recover")
        {
            PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
        cout << "无此命令，请重试"<<endl;
    }
    while (true)
    {
         
    }
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
