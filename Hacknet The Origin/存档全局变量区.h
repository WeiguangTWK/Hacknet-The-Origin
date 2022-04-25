#pragma once
//��;��������˼

#include"savedata.h"
#include"host.h"
#include<filesystem>
#include<vector>

constexpr auto LOCALHOST = "127.0.0.1";
constexpr auto COMPUTERMAMP = "\\computermap\\";
void clear();
void save();
void load();
void dhcp();
extern bool ifinited;  //��Ϸ�Ƿ�ո�����
extern bool istraced; //�Ƿ�׷�ٵ�
extern savedata* sav; //�浵����
extern std::filesystem::path currpath;  //��ǰ·��
extern std::filesystem::path currcomp;  //��ǰ���ӵĵ���
extern host* currcomptr;  //��ǰ���ӵĵ��Զ�Ӧ�Ķ����ָ��
const extern std::filesystem::path workpath;   //��������Ϸ�������е�Ŀ¼
extern std::vector<pcinfo> pcs;    //��ŵ��Զ����IP�Ͷ���ָ�룬�����������IP��ַ��������ʱѰ��IP��Ӧ�Ķ��󣬾���ʹ�ÿ�networkgeneral.cpp
extern std::vector<command1> cmd1s;
extern std::vector<command2> cmd2s;

constexpr auto FRIEND = "Vapor";