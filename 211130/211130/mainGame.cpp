#include "mainGame.h"

mainGame::mainGame()
{
	_hp = 100;
	_mp = 50;
}

mainGame::mainGame(int hp)
{
	_hp = hp;
	_mp = 50;
}
//��� �̴ϼȶ����� - ������ const ���ڸ� �ʱ�ȭ�ϱ� ���� �����ε� ���ؼ�..����..
//���� �ʱ�ȭ�Ҷ� �� ���� ���µ�
mainGame::mainGame(int hp, int mp)
	: _hp(hp), _mp(mp)
{
	int num = 3; //c��� ���Կ�����
	int num2(5); //c++��ȣ�� ���� �ʱ�ȭ ����
}

mainGame::~mainGame()
{
}
