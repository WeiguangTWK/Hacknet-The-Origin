#include"Animation.h"
#include"cmds.h"
#include"host.h"
#include"�浵ȫ�ֱ�����.h"
#include<Windows.h>
#include<mmsystem.h>
#include<iostream>
constexpr auto FRIEND = "Vapor";

using namespace std;
void mainconsole(bool jumprequired, string jumpcmd = "none");
void level2()
{
	
	//system("pause");
	if (!ifinited)
	{
		system("cls");
		PlaySound(TEXT("Revolve.wav"), NULL, SND_ASYNC | SND_LOOP);
		initplayercmdlv1();
		//sysinit();
		ifinited = true;
	}
	getchar();
	//mainconsole(false);
	ptr("\n\n���������̳�......\n\n", 10);
	Sleep(1500);
	ptr("�ڱ��̳̽����б�ϵͳ���������Ľ�ѧ\n\n", 10);
	Sleep(1000);
	ptr("���ڼ�������\"ls\"��ִ�У���������Ϊ�����ǰĿ¼������\n\n", 10);
	mainconsole(true,"ls");
	ptr("\n\n������������Ŀ¼Ϊ�ü�����ĸ�Ŀ¼\n\n", 10);
	ptr("��Ŀ¼�µ����ݷֱ�Ϊ��\n\n", 10);
	ptr("\tbin����/�������ļ��ļ���\n\n\thome�û�Ŀ¼�������ص��ļ��Լ��������в������ļ���Ĭ�Ϸ����ڸ�Ŀ¼��\n\n\tlogs��־�ļ��С�����Ŀ¼���ü��������״����¼�ļ�\n\n\tsystemϵͳ�ļ���\n", 10);
	cout << endl<<endl;
	ptr("���ڳ��Խ����û��ļ��У���Ҫʹ��\"cd\"���������ĸ�ʽΪ��\n", 10);
	cout << endl<<"\tcd <path>"<<endl;
	ptr("���� cd bin\n",10);
	mainconsole(true,"cd home");
	ptr("\n�������Ŀ¼����ʲô\n", 10);
	mainconsole(true, "ls");
	ptr("\nȻ�������Ѷ�û�У�\n\n\tû�о�û�аɣ��˳�����ļ���\n\n����һ���ļ������\n\tcd ..", 10);
	mainconsole(true, "cd ..");
	ptr("\n����ʹ��\"cd\"����һ��������������Ҫ���\"����\"һ��ʹ�ã���������ĳЩ�������ʹ��ʱ�ͼ���\"help\"�������\n\n", 10);
	coutwithsleep("************�̳����************", 2000);
	ptr("\n�����˳�....\n\n\n", 10);

	coutwithsleep("������������ע�⡪����������\n", 2500);
	coutwithsleep("������IRC�����������ӣ��������", 2000);
	ircmassage(FRIEND, "�ɵ�Ư������ܿ����������ϵͳ����������ѧϰ��", 1888);
	ircmassage(FRIEND, "��ô������д�Ľ̳��ǲ��Ǻ����Ի��� XD", 4000);
	ircmassage(FRIEND, "��Ȼ���ϵͳ�Ƚϼ�ª�����������������ֱ���ģ�����������Щ�������̵�\"����ϵͳ\"�ö�����˵�԰�", 2000);
	ircmassage(FRIEND, "�Ҹո��ҵ�һ����Ȥ�Ķ���", 1800);
	ircmassage(FRIEND, "����ĳ��ϵͳ��Դ��",2800);
	ircmassage(FRIEND, "����ֵ����������ϵ������ط��Ҳ������������κ���Ϣ",2000);
	sav->level = 3;
	save();
}