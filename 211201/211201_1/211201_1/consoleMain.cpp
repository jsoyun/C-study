#include "arraySample.h"

int main()
{
	arraySample<int> asi;
	asi.pushBack(1);
	asi.pushBack(3);
	asi.pushBack(7);
	asi.pushBack(777);
	asi.pushBack(5);

	for (int i = 0; i < asi.GetSize(); ++i)
	{
		cout << asi[i] << endl;
	}

	arraySample<const char*> asString;

	asString.pushBack("2�ð� �ڸ� ��������");
	asString.pushBack("�������� �������̴�");
	asString.pushBack("��ø�");

	for (int i = 0; i < asString.GetSize(); ++i)
	{
		cout << asString[i] << endl;
	}   
	
}