#pragma once
#include "exchange.h"
#include "wallet.h"


enum LOCATION
{
	LOCATION_EX =1, //거래소
	LOCATION_WALLET //지갑
};

class mainGame
{
private:
	exChange* _ex; //거래소 클래스
	wallet* _wal; //지갑 클래스

	LOCATION _location;

	int _money; //소지금
	int _selectNum; //메뉴 고를 때 선택으로 쓰일 변수
public:
	mainGame();
	~mainGame();

	void setLocation(int num);
	void setMainPage();
	void setExPage();
	void setWalletPage();
	
};

