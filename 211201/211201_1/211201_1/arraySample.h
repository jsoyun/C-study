#pragma once
#include <iostream>
using namespace std;

template <typename T>
class arraySample
{
public:
	T* buffer; //배열 확장을 위한 버퍼
	int size; //배열 사이즈 용 변수

	void pushBack(T num)
	{
		if (size != 0)
		{
			T* temp;
			temp = new T[size + 1];
			memcpy(temp, buffer, size * sizeof(T));
			delete[]buffer;
			buffer = temp;

		}
		//buffer[0]=num을 넣고
		//buffer[1]로 바뀐다

		//대입 먼저 하고 더해지는 거
		buffer[size++] = num;

	}


	//배열의 갯수를 반환하는 함수(?왜 물음표가..?)
	int GetSize() { return size; }
	//연산자 오버로딩은 알아두면 좋다
	T operator[](int index) const
	{
		return buffer[index];
	}
	//생성자 
	arraySample()
	{
		size = 0;
		buffer = new T[1]; //<--배열 동적할당
	}
	//소멸자
	~arraySample()
	{
		delete[] buffer; //배열동적할당 메모리 해제 문법

	}
};

