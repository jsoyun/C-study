#include "mainGame.h"

mainGame::mainGame()
{
}

mainGame::mainGame(int hp)
{

}
//��� �̴ϼȶ����� - ������ const ���ڸ� �ʱ�ȭ�ϱ� ���� �����ε� ���ؼ�..����..
//���� �ʱ�ȭ�Ҷ� �� ���� ���µ�
mainGame::mainGame(int hp, int mp)
	: _hp(hp), _mp(mp)
{
}

mainGame::~mainGame()
{
}
