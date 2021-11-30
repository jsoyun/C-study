#pragma once
#include <iostream>
using namespace std;
class mainGame
{
private:
	int _hp;
	int _mp;

public:
	mainGame();
	mainGame(int hp);
	mainGame(int hp, int mp);
	~mainGame();

};

