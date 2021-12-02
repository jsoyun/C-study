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
	coin1.name = "��Ʈ���ΰ��";
	coin1.description = "2017�� ��Ʈ������ �ϵ���ũ�� ���� ";
	coin1.price = 68250;
	coin1.change = -1.68f;

	_vCoin.push_back(coin1);

	tagCoinInfo coin2;
	coin2.coinKind = COIN_BIT;
	coin2.name = "��Ʈ���ΰ��";
	coin2.description = "2017�� ��Ʈ������ �ϵ���ũ�� ����";
	coin2.price = 68250;
	coin2.change = -1.68f;

	_vCoin.push_back(coin2);

	tagCoinInfo coin3;
	coin3.coinKind = COIN_BIT;
	coin3.name = "����Ʈ����";
	coin3.description = "������ C++�� ������ٰ� ��";
	coin3.price = 260000;
	coin3.change = -2.25f;

	_vCoin.push_back(coin3);

	tagCoinInfo coin4;
	coin4.coinKind = COIN_ETH;
	coin4.name = "�̴�����";
	coin4.description = "���׸� ���� ����";
	coin4.price = 5700000;
	coin4.change = -2.31f;

	_vCoin.push_back(coin4);

	tagCoinInfo coin5;
	coin5.coinKind = COIN_ETH;
	coin5.name = "�̴����� Ŭ����";
	coin5.description = "��ŷ���ؼ� �и��� �̴�����";
	coin5.price = 59600;
	coin5.change = -2.31f;

	_vCoin.push_back(coin5);

	tagCoinInfo coin6;
	coin6.coinKind = COIN_ETH;
	coin6.name = "���̴�";
	coin6.description = "�̴������� �Ѿ ������ ����(?)";
	coin6.price = 1900;
	coin6.change = -3.06f;

	_vCoin.push_back(coin6);

	tagCoinInfo coin7;
	coin7.coinKind = COIN_RIP;
	coin7.name = "����";
	coin7.description = "���Ǽ��� ���ΰ�";
	coin7.price = 1200;
	coin7.change = -2.26f;

	_vCoin.push_back(coin7);

	tagCoinInfo coin8;
	coin8.coinKind = COIN_RIP;
	coin8.name = "��������";
	coin8.description = "���ú��� �� ���� ����";
	coin8.price = 5893;
	coin8.change = -0.06f;

	_vCoin.push_back(coin8);

	tagCoinInfo coin9;
	coin9.coinKind = COIN_ALT;
	coin9.name = "��������";
	coin9.description = "�ӽ�ũ�� ���� �׸�.. ������";
	coin9.price = 259;
	coin9.change = -4.06f;

	_vCoin.push_back(coin9);

	tagCoinInfo coin10;
	coin10.coinKind = COIN_ALT;
	coin10.name = "���ͽ�";
	coin10.description = "�����̵� ���°迡�� ���� ����";
	coin10.price = 18000;
	coin10.change = -6.36f;

	_vCoin.push_back(coin10);

}

void exchange::coinOutput(int coinNum)
{
	for (_viCoin = _vCoin.begin(); _viCoin != _vCoin.end(); ++_viCoin)
	{
		if (_viCoin->coinKind != coinNum) continue;

		cout << "=======================�ŷ���==========================" << endl;
		cout << "�̸�:" << _viCoin->name << endl;
		cout << "�̸�:" << _viCoin->price << endl;
		cout << "�̸�:" << _viCoin->change << endl;
		cout << "�̸�:" << _viCoin->description << endl;
		cout << "======================================================" << endl;
	}
}


