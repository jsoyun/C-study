#pragma once
#include <iostream>
using namespace std;

template <typename T>
class arraySample
{
public:
	T* buffer; //�迭 Ȯ���� ���� ����
	int size; //�迭 ������ �� ����

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
		//buffer[0]=num�� �ְ�
		//buffer[1]�� �ٲ��

		//���� ���� �ϰ� �������� ��
		buffer[size++] = num;

	}


	//�迭�� ������ ��ȯ�ϴ� �Լ�(?�� ����ǥ��..?)
	int GetSize() { return size; }
	//������ �����ε��� �˾Ƶθ� ����
	T operator[](int index) const
	{
		return buffer[index];
	}
	//������ 
	arraySample()
	{
		size = 0;
		buffer = new T[1]; //<--�迭 �����Ҵ�
	}
	//�Ҹ���
	~arraySample()
	{
		delete[] buffer; //�迭�����Ҵ� �޸� ���� ����

	}
};

