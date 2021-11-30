#pragma once
#include <iostream>

using namespace std;
class player
{
private:
	int _hp;
	int _atk;
public:
	player();
	~player();
	//플레이어 클래스의 변수상황 출력 함수
	void printPlayer();

	//접근자는 변수에 접근만 하도록 해준다.
	int getPlayerHP() { return _hp; }
	//설정자
	void setPlayerHP(int hp) { _hp = hp; }
	//공격력에 대한 접근자
	int getPlayerAtk() { return _atk; }
};

