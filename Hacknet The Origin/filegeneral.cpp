#pragma once

#include "cmds.h"
#include"存档全局变量区.h"
#include"Animation.h"
#include<iostream>
#include<filesystem>
#include<string>
#include<Windows.h>

using namespace std;

string getvirtualpath(filesystem::path pth)
{
    string fstr = currpath.generic_string();
    string str = pth.generic_string();
    int n = str.find(fstr);
    str.erase(n, fstr.size());
    return str;
}

void ls()
{
    for (filesystem::path dir_it : filesystem::directory_iterator(currpath)) cout << getvirtualpath(dir_it)<<endl;
}

void cd(string para)
{
    if (para == ".") return;
    if (para == "..")
    {
        filesystem::path init=workpath;
        init += COMPUTERMAMP;
        init += currcomp;
        init += "\\\\";
        //cout << init.generic_string() << endl << currpath.generic_string() << endl;
        if (init == currpath)
        {
            cout << "已处于目标主机根目录" << endl;
            return;
        }
        //cout<< currpath.parent_path()<<endl;
        currpath = currpath.parent_path();
        currpath = currpath.parent_path();
        currpath += "\\";
        return;
    }
    
    filesystem::path bak = currpath;
    currpath = workpath;
    currpath += COMPUTERMAMP;
    currpath += currcomp;
    currpath += "\\";
    currpath += para;
    currpath += "\\";
    cout << currpath.generic_string() << endl;
    if (!filesystem::exists(currpath))
    {
        cout << "目标路径不存在" << endl;
        currpath = bak;
    }
}

void rm(string para)
{
    filesystem::path rmpath=currpath;
    
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
        cout << "目标文件不存在" << endl;
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
        cout << "删除的对象为目录！" << endl;
        return;
    }
}