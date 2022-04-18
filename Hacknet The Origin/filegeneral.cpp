#pragma once

#include "cmds.h"
#include"�浵ȫ�ֱ�����.h"
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
        init += currcomp;
        //cout << init.generic_string() << endl << currpath.generic_string() << endl;
        if (init == currpath)
        {
            cout << "�Ѵ���Ŀ��������Ŀ¼" << endl;
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
    currpath += currcomp;
    currpath += para;
    currpath += "\\";
    //cout << currpath.generic_string() << endl;
    if (!filesystem::exists(currpath))
    {
        cout << "Ŀ��·��������" << endl;
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
                cout << "ɾ��" << getvirtualpath(dir_it);
                ptr("...", 500);
                cout << "��ɣ�" << endl;
                remove(dir_it);
            }
        }
        return;
    }
    
    rmpath += para;
    if (!filesystem::exists(rmpath))
    {
        cout << "Ŀ���ļ�������" << endl;
        return;
    }
    if (!filesystem::is_directory(rmpath))
    {
        cout<<"ɾ��" << getvirtualpath(rmpath);
        ptr("...", 500);
        cout << "��ɣ�" << endl;
        remove(rmpath);
        return;
    }
    else
    {
        cout << "ɾ���Ķ���ΪĿ¼��" << endl;
        return;
    }
}