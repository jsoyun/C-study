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
	//데이터를 삽입할 때 상황
	//1. 데이터가 하나도 없을 때
	//2. 데이터가 하나만 있을때
	//3. 데이터가 여러개 있을때

	//노드가 생성될때 
	node* newNode = new node;
	newNode->data = data;
	newNode->next = nullptr;

	//노드가 하나도 없는 상황 최초의 노드를 생성할때
	if (_head == NULL)
	{
		_head = newNode;
		return;
	}
	//노드가 1개일때
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
		//포인터가 없는 노드를 찾았다면 컴파일러 위치는 여기를 읽고있겠쥬?
		tempNode->next = newNode;
	}


}

void linkedList::Delete(int data)
{
	//노드가 하나도 없다
	if (_head == nullptr)
	{
		cout << "데이터가 하나도 없어요" << endl;
		return;
	}

	//노드가 하나만 있을때
	if (_head->next == nullptr)
	{
		//내가 지우려는 데이터가 헤드의 데이터가 맞다
		if (_head->data == data)
		{
			cout << _head->data << "노드 삭제" << endl;
			_head = nullptr;
			delete _head;
		}
		else
		{
			cout << "노드는 있는데 삭제하려는 노드는 아닙니다" << endl;
		}

		return;
	}
	else //노드가 여러개 있을 때
	{
		node* tempNode;	//탐색할 노드랑
		node* prevNode;	//지워야할 상황이 왔을때 지울 노드의 바로 전 노드

		tempNode = _head->next;
		prevNode = _head;

		if (prevNode->data == data)
		{
			cout << prevNode->data << "삭제" << endl;
			_head = tempNode;
			prevNode->next = nullptr;
			delete prevNode;
			return;
		}

		while (tempNode != nullptr)
		{
			if (tempNode->data == data)
			{
				cout << tempNode->data << "삭제" << endl;
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
		cout << "노드가 하나도 없어요" << endl;
		return;
	}

	if (tempNode->next == nullptr)
	{
		cout << tempNode->data << "헤드 Only" << endl;
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
