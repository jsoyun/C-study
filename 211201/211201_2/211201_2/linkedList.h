#pragma once
#include <iostream>

using namespace std;
class node
{
public:
	int data; //��
	node* next; //���� ������ ��带 ����ų ������
};
class linkedList
{
private:
	node* _head;// ������ �Ǵ� ���(���� ù �����Ǵ� ���)
public:
	linkedList();
	~linkedList();

	void Insert(int data); //�� �߰�
	void Delete(int data); //�� ����
	void Print(); //���

};

