#pragma once
#include <iostream>
#include <map>

using namespace std;

class mapTest
{
private:
	//        first, second
	map<const char*, int>           _mapTest;
	map<const char*, int>::iterator _mi;

public:
	mapTest();
	~mapTest();
};

