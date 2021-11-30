#include "enemy.h"

enemy::enemy()
{
	_hp = 100;
	_atk = 8;
}

enemy::~enemy()
{
}

void enemy::printEnemy()
{

cout << "적의 체력: " << _hp << endl;
cout << "적의 체력: " << _atk << endl;


}
