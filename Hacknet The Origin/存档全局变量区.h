#pragma once
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
extern bool ifinited;
extern savedata* sav;
extern std::filesystem::path currpath;
extern std::filesystem::path currcomp;
extern host* currcomptr;
const extern std::filesystem::path workpath;
extern std::vector<pcinfo> pcs;
extern std::vector<command1> cmd1s;
extern std::vector<command2> cmd2s;

