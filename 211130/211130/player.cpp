#include "player.h"

player::player()
{
	_hp = 100;
	_atk = 10;
}

player::~player()
{
}

void player::printPlayer()
{
	cout << "플레이어의 체력: " << _hp << endl;
	cout << "플레이어의 체력: " << _atk << endl;

}
