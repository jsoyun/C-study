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

	asString.pushBack("2시간 뒤면 점심이죠");
	asString.pushBack("수요일은 수요일이다");
	asString.pushBack("잠시만");

	for (int i = 0; i < asString.GetSize(); ++i)
	{
		cout << asString[i] << endl;
	}   
	
}