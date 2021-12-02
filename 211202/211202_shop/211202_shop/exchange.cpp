#include "exchange.h"

exchange::exchange()
{
}

exchange::~exchange()
{
}


void exchange::conSetup()
{
	tagCoinInfo coin1;
	coin1.coinKind = COIN_BIT;
	coin1.name = "비트코인골드";
	coin1.description = "2017년 비트코인을 하드포크한 코인 ";
	coin1.price = 68250;
	coin1.change = -1.68f;

	_vCoin.push_back(coin1);

	tagCoinInfo coin2;
	coin2.coinKind = COIN_BIT;
	coin2.name = "비트코인골드";
	coin2.description = "2017년 비트코인을 하드포크한 코인";
	coin2.price = 68250;
	coin2.change = -1.68f;

	_vCoin.push_back(coin2);

	tagCoinInfo coin3;
	coin3.coinKind = COIN_BIT;
	coin3.name = "라이트코인";
	coin3.description = "찰리가 C++로 만들었다고 함";
	coin3.price = 260000;
	coin3.change = -2.25f;

	_vCoin.push_back(coin3);

	tagCoinInfo coin4;
	coin4.coinKind = COIN_ETH;
	coin4.name = "이더리움";
	coin4.description = "부테린 형이 만듬";
	coin4.price = 5700000;
	coin4.change = -2.31f;

	_vCoin.push_back(coin4);

	tagCoinInfo coin5;
	coin5.coinKind = COIN_ETH;
	coin5.name = "이더리움 클래식";
	coin5.description = "해킹당해서 분리된 이더리움";
	coin5.price = 59600;
	coin5.change = -2.31f;

	_vCoin.push_back(coin5);

	tagCoinInfo coin6;
	coin6.coinKind = COIN_ETH;
	coin6.name = "에이다";
	coin6.description = "이더리움을 넘어선 차세대 코인(?)";
	coin6.price = 1900;
	coin6.change = -3.06f;

	_vCoin.push_back(coin6);

	tagCoinInfo coin7;
	coin7.coinKind = COIN_RIP;
	coin7.name = "리플";
	coin7.description = "리또속의 주인공";
	coin7.price = 1200;
	coin7.change = -2.26f;

	_vCoin.push_back(coin7);

	tagCoinInfo coin8;
	coin8.coinKind = COIN_RIP;
	coin8.name = "나노코인";
	coin8.description = "리플보다 더 빠른 코인";
	coin8.price = 5893;
	coin8.change = -0.06f;

	_vCoin.push_back(coin8);

	tagCoinInfo coin9;
	coin9.coinKind = COIN_ALT;
	coin9.name = "도지코인";
	coin9.description = "머스크형 입좀 그만.. 제에발";
	coin9.price = 259;
	coin9.change = -4.06f;

	_vCoin.push_back(coin9);

	tagCoinInfo coin10;
	coin10.coinKind = COIN_ALT;
	coin10.name = "위믹스";
	coin10.description = "위메이드 생태계에서 사용될 코인";
	coin10.price = 18000;
	coin10.change = -6.36f;

	_vCoin.push_back(coin10);

}

void exchange::coinOutput(int coinNum)
{
	for (_viCoin = _vCoin.begin(); _viCoin != _vCoin.end(); ++_viCoin)
	{
		if (_viCoin->coinKind != coinNum) continue;

		cout << "=======================거래소==========================" << endl;
		cout << "이름:" << _viCoin->name << endl;
		cout << "이름:" << _viCoin->price << endl;
		cout << "이름:" << _viCoin->change << endl;
		cout << "이름:" << _viCoin->description << endl;
		cout << "======================================================" << endl;
	}
}


