#pragma once
//�ļ���������

#include "cmds.h"
#include"�浵ȫ�ֱ�����.h"
#include"Animation.h"
#include<iostream>
#include<filesystem>
#include<string>
#include<Windows.h>

using namespace std;

string getvirtualpath(filesystem::path pth)  //���ڶ������·�������޸��Ա�������ҿ���������Ϸ������ļ�·��
{
    string fstr = currpath.generic_string();
    string str = pth.generic_string();
    int n = str.find(fstr);
    str.erase(n, fstr.size());
    return str;
}

void ls()    //�����ǰĿ¼�µ������ļ�
{
    if (currcomp != "127.0.0.1")
        if (currcomptr->ishacked !=true)
        {
            //cout <<"ls:" << currcomptr << endl;
            cout << "hostname:" << currcomptr->hostname << endl;
            cout << "\n��Ŀ����������Ա����Ȩ����\n" << endl;
            return;
        }
    cout << endl;
    for (filesystem::path dir_it : filesystem::directory_iterator(currpath)) cout << getvirtualpath(dir_it)<<endl;
    cout << endl;
}

void cd(string para)  //�˳�\��Ŀ¼
{
    if (currcomp != "127.0.0.1")
        if (currcomptr->ishacked==false)
        {
            cout << "\n��Ŀ����������Ա����Ȩ����\n" << endl;
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
            cout << "\n�Ѵ���Ŀ��������Ŀ¼\n" << endl;
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
        cout << "\nĿ��·��������\n" << endl;
        currpath = bak;
    }
}

void rm(string para)  //ɾ��ָ���ļ�
{
    filesystem::path rmpath=currpath;
    
    if(currcomp!="127.0.0.1")
        if (currcomptr->ishacked==false)
        {
            cout << "\n��Ŀ����������Ա����Ȩ����\n" << endl;
            return;
        }

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
        cout << "\nĿ���ļ�������\n" << endl;
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
        cout << "\nɾ���Ķ���ΪĿ¼��\n" << endl;
        return;
    }
}

void compile(string para)     //���루����ؾ��飩
{

    filesystem::path pat=currpath;
    pat += para;
    string comp = pat.generic_string();
    if (filesystem::exists(currpath))
    {
        if (comp.find("zip") == string::npos)
        {
            cout << "\n�ļ��ǿɱ����ļ�\n" << endl;
            return;
        }
        compileanim();
    }
    else cout << "�ļ�������" << endl;
}