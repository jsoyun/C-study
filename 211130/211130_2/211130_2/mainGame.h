#pragma once
#include <iostream>
using namespace std;


class mainGame
{
public:
	mainGame() {};
	~mainGame() {};


	//함수 템플릿의 형태, 유효범위는 함수 하나에 국한된다.
	template<typename T>
	void Output(T t);
};


template<typename T>
inline void mainGame::Output(T t)
{
	cout << t << endl;
}

