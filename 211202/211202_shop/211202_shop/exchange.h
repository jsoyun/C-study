#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//enum �� ������, ���� ������ ������� ����
enum COIN
{
	COIN_BIT =1,
	COIN_ETH,
	COIN_RIP,
	COIN_ALT,
	COIN_END
};

class tagCoinInfo
{
public:
	COIN coinKind;
	string name;
	string description;
	int price;
	float change;
};

class exChange
{
private:
	//���������� ��� Ŭ������ ���� ���� �����̳�
	vector<tagCoinInfo> _vCoin;

	vector<tagCoinInfo>::iterator	_viCoin;

public:
	void coinSetup();
	void coinOutput(int coinNum);

	vector<tagCoinInfo> getCoinVector() { return _vCoin; }

	exChange();
	~exChange();
};

