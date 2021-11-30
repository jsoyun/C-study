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
//멤버 이니셜라이즈 - 원래는 const 인자를 초기화하기 위한 수단인데 편해서..빨라서..
//변수 초기화할때 더 많이 쓰는듯
mainGame::mainGame(int hp, int mp)
	: _hp(hp), _mp(mp)
{
	int num = 3; //c언어 대입연산자
	int num2(5); //c++괄호로 변수 초기화 가능
}

mainGame::~mainGame()
{
}
