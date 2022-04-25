#pragma once
//用途如字面意思

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
extern bool ifinited;  //游戏是否刚刚启动
extern bool istraced; //是否被追踪到
extern savedata* sav; //存档数据
extern std::filesystem::path currpath;  //当前路径
extern std::filesystem::path currcomp;  //当前连接的电脑
extern host* currcomptr;  //当前连接的电脑对应的对象的指针
const extern std::filesystem::path workpath;   //存放这个游戏程序运行的目录
extern std::vector<pcinfo> pcs;    //存放电脑对象的IP和对象指针，用于玩家输入IP地址连接主机时寻找IP对应的对象，具体使用看networkgeneral.cpp
extern std::vector<command1> cmd1s;
extern std::vector<command2> cmd2s;

constexpr auto FRIEND = "Vapor";