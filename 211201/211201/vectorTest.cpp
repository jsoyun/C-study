#include "vectorTest.h"

vectorTest::vectorTest()

{//���Ϳ� �����͸� �����Ϸ��� push_back()
	_vNum.push_back(1);
	_vNum.push_back(2);
	_vNum.push_back(3);
	//�ݺ��� ������ ���Ե� ����
	/*for (int i)*/


	//���� �ȿ� �����͸� �ڿ������� �������� ������ pop_back();
	/*_vNum.pop_back();*/

	//���� �ȿ� �������� ������ �˷��� size()
	cout << "���;ȿ� " << _vNum.size() << endl;

	for (int i = 0; i < _vNum.size(); ++i)
	{
		cout << _vNum[i] << endl;

	}
}

vectorTest::~vectorTest()
{
}
