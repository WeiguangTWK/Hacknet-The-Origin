#pragma once
//文件处理命令

#include "cmds.h"
#include"存档全局变量区.h"
#include"Animation.h"
#include<iostream>
#include<filesystem>
#include<string>
#include<Windows.h>

using namespace std;

string getvirtualpath(filesystem::path pth)  //用于对输出的路径进行修改以便于让玩家看见的是游戏世界的文件路径
{
    string fstr = currpath.generic_string();
    string str = pth.generic_string();
    int n = str.find(fstr);
    str.erase(n, fstr.size());
    return str;
}

void ls()    //输出当前目录下的所有文件
{
    if (currcomp != "127.0.0.1")
        if (currcomptr->ishacked !=true)
        {
            //cout <<"ls:" << currcomptr << endl;
            cout << "hostname:" << currcomptr->hostname << endl;
            cout << "\n非目标主机管理员，无权操作\n" << endl;
            return;
        }
    cout << endl;
    for (filesystem::path dir_it : filesystem::directory_iterator(currpath)) cout << getvirtualpath(dir_it)<<endl;
    cout << endl;
}

void cd(string para)  //退出\打开目录
{
    if (currcomp != "127.0.0.1")
        if (currcomptr->ishacked==false)
        {
            cout << "\n非目标主机管理员，无权操作\n" << endl;
            return;
        }
    
    if (para == ".") return;
    if (para == "..")
    {
        filesystem::path init = workpath;
        init = workpath;
        init += COMPUTERMAMP;
        init += currcomp;
        init += "\\";
        //cout << init.generic_string() << endl << currpath.generic_string() << endl;
        if (init == currpath)
        {
            cout << "\n已处于目标主机根目录\n" << endl;
            return;
        }
        //cout<< currpath.parent_path()<<endl;
        currpath = currpath.parent_path();
        currpath = currpath.parent_path();
        currpath += "\\";
        return;
    }
    
    filesystem::path bak = currpath;
    currpath += para;
    currpath += "\\";
    //cout << currpath.generic_string() << endl;
    if (!filesystem::exists(currpath))
    {
        cout << "\n目标路径不存在\n" << endl;
        currpath = bak;
    }
}

void rm(string para)  //删除指定文件
{
    filesystem::path rmpath=currpath;
    
    if(currcomp!="127.0.0.1")
        if (currcomptr->ishacked==false)
        {
            cout << "\n非目标主机管理员，无权操作\n" << endl;
            return;
        }

    if (para == "*")
    {
        for (filesystem::path dir_it : filesystem::directory_iterator(currpath))
        {
            if (!filesystem::is_directory(dir_it))
            {
                cout << "删除" << getvirtualpath(dir_it);
                ptr("...", 500);
                cout << "完成！" << endl;
                remove(dir_it);
            }
        }
        return;
    }
    
    rmpath += para;
    if (!filesystem::exists(rmpath))
    {
        cout << "\n目标文件不存在\n" << endl;
        return;
    }
    if (!filesystem::is_directory(rmpath))
    {
        cout<<"删除" << getvirtualpath(rmpath);
        ptr("...", 500);
        cout << "完成！" << endl;
        remove(rmpath);
        return;
    }
    else
    {
        cout << "\n删除的对象为目录！\n" << endl;
        return;
    }
}

void compile(string para)     //编译（第五关剧情）
{

    filesystem::path pat=currpath;
    pat += para;
    string comp = pat.generic_string();
    if (filesystem::exists(currpath))
    {
        if (comp.find("zip") == string::npos)
        {
            cout << "\n文件非可编译文件\n" << endl;
            return;
        }
        compileanim();
    }
    else cout << "文件不存在" << endl;
}