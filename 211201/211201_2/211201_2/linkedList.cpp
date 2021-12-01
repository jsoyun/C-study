#include "linkedList.h"

linkedList::linkedList()
	: _head(nullptr)
{
}

linkedList::~linkedList()
{
}

void linkedList::Insert(int data)
{
	//�����͸� ������ �� ��Ȳ
	//1. �����Ͱ� �ϳ��� ���� ��
	//2. �����Ͱ� �ϳ��� ������
	//3. �����Ͱ� ������ ������

	//��尡 �����ɶ� 
	node* newNode = new node;
	newNode->data = data;
	newNode->next = nullptr;

	//��尡 �ϳ��� ���� ��Ȳ ������ ��带 �����Ҷ�
	if (_head == NULL)
	{
		_head = newNode;
		return;
	}
	//��尡 1���϶�
	if (_head->next == NULL)
	{
		_head->next = newNode;
		return;
	}
	else
	{
		node* tempNode;
		tempNode = _head->next;

		while (tempNode->next != nullptr)
		{
			tempNode = tempNode->next;
		}
		//�����Ͱ� ���� ��带 ã�Ҵٸ� �����Ϸ� ��ġ�� ���⸦ �а��ְ���?
		tempNode->next = newNode;
	}


}

void linkedList::Delete(int data)
{
	//��尡 �ϳ��� ����
	if (_head == nullptr)
	{
		cout << "�����Ͱ� �ϳ��� �����" << endl;
		return;
	}

	//��尡 �ϳ��� ������
	if (_head->next == nullptr)
	{
		//���� ������� �����Ͱ� ����� �����Ͱ� �´�
		if (_head->data == data)
		{
			cout << _head->data << "��� ����" << endl;
			_head = nullptr;
			delete _head;
		}
		else
		{
			cout << "���� �ִµ� �����Ϸ��� ���� �ƴմϴ�" << endl;
		}

		return;
	}
	else //��尡 ������ ���� ��
	{
		node* tempNode;	//Ž���� ����
		node* prevNode;	//�������� ��Ȳ�� ������ ���� ����� �ٷ� �� ���

		tempNode = _head->next;
		prevNode = _head;

		if (prevNode->data == data)
		{
			cout << prevNode->data << "����" << endl;
			_head = tempNode;
			prevNode->next = nullptr;
			delete prevNode;
			return;
		}

		while (tempNode != nullptr)
		{
			if (tempNode->data == data)
			{
				cout << tempNode->data << "����" << endl;
				prevNode->next = tempNode->next;
				tempNode->next = nullptr;
				delete tempNode;
				return;
			}
			else
			{
				prevNode = prevNode->next;
				tempNode = tempNode->next;
			}
		}
	}

}

void linkedList::Print()
{
	node* tempNode = _head;

	if (tempNode == nullptr)
	{
		cout << "��尡 �ϳ��� �����" << endl;
		return;
	}

	if (tempNode->next == nullptr)
	{
		cout << tempNode->data << "��� Only" << endl;
		return;
	}
	else
	{
		while (tempNode != nullptr)
		{
			cout << tempNode->data << " -> ";
			tempNode = tempNode->next;
		}

		cout << endl;
	}
}
