#pragma once
#include <iostream>

using namespace std;

class enemy
{
private:
	int _hp;
	int _atk;
public:
	enemy();
	~enemy();
	//에너지 현재 변수상황을 보여주는 함수 
	void printEnemy();

	int getEnemyHP() { return _hp; }
	void setEnemyHP(int hp) { _hp = hp;}

	int getEnemyAtk() { return _atk; }

	
};

