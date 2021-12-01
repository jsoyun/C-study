#include "vectorTest.h"

vectorTest::vectorTest()

{//백터에 데이터를 삽입하려면 push_back()
	_vNum.push_back(1);
	_vNum.push_back(2);
	_vNum.push_back(3);
	//반복문 돌려서 삽입도 가능
	/*for (int i)*/


	//벡터 안에 데이터를 뒤에서부터 차곡차곡 빼려면 pop_back();
	/*_vNum.pop_back();*/

	//벡터 안에 데이터의 갯수를 알려면 size()
	cout << "백터안에 " << _vNum.size() << endl;

	for (int i = 0; i < _vNum.size(); ++i)
	{
		cout << _vNum[i] << endl;

	}
}

vectorTest::~vectorTest()
{
}
