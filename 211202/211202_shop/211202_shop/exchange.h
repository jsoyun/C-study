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

class exchange
{
private:
	//���������� ��� Ŭ������ ���� ���� �����̳�
	vector<tagCoinInfo> _vCoin;

	vector<tagCoinInfo>::iterator	_viCoin;

public:
	void conSetup();
	void coinOutput(int coinNum);

	vector<tagCoinInfo> getCoinVector() { return _vCoin; }

	exchange();
	~exchange();
};

