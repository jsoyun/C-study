#pragma once
#include <iostream>
using namespace std;


class mainGame
{
public:
	mainGame() {};
	~mainGame() {};


	//�Լ� ���ø��� ����, ��ȿ������ �Լ� �ϳ��� ���ѵȴ�.
	template<typename T>
	void Output(T t);
};


template<typename T>
inline void mainGame::Output(T t)
{
	cout << t << endl;
}

