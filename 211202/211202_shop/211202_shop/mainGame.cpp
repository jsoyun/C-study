#include "mainGame.h"

mainGame::mainGame()
{
	//거래소 클래스 동적할당 및 코인세팅
	_ex = new exChange;
	_ex->coinSetup();
	_wal = new wallet;

	//단순 변수 초기화
	_money = 10000000;
	_selectNum = 0;

	//맨처음 실행 시 메인화면이 나오게끔 세팅을 해두자
	setMainPage();

}

mainGame::~mainGame()
{
	delete _ex;
	delete _wal;
	
}

void mainGame::setLocation(int num)
{
	switch (num)
	{
	case LOCATION_EX:
		setExPage();
	break;
	case LOCATION_WALLET:

		setWalletPage();

		break;
	default:
		setMainPage();
		break;
	}

}

void mainGame::setMainPage()
{
	cout << "===========블록 3기============" << endl;
	cout << "1. 거래소            2. 내 지갑" << endl;
	cout << "==============================" << endl;

	cin >> _selectNum;
	system("cls"); //화면을 깨끗하게 밀어주는 명령어
	setLocation(_selectNum);


}

void mainGame::setExPage()
{
//거래소 안에서는 계속해서 어떤 행위를 할테니까 while문으로..
	while (true)
	{
		cout << "=============블록3기 거래소============" << endl;
		cout << "1.비트코인계열    2.이더리움계열  3.리플계열 4.알트고인" << endl;
		cout << "메인화면으로 가려면 0번" << endl;

		cin >> _selectNum;
		system("cls");
		if (_selectNum == 0)  //메인화면으로 가려고 한다면
		{
			//메인페이지를 호출해주고 브레이크로 와일문 탈출
			setMainPage();
			break;
		}
		_ex->coinOutput(_selectNum);
		cout << "다른 코인을 보려면 아무키나 누르세요" << endl;
		cin >> _selectNum;
		system("cls");

	}
}

void mainGame::setWalletPage()
{
	cout << "================== 내 지 갑 ====================" << endl;
	_ex->getCoinVector();
}