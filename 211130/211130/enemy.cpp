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

cout << "���� ü��: " << _hp << endl;
cout << "���� ü��: " << _atk << endl;


}
