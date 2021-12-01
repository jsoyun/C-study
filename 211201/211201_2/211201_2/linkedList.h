#pragma once
#include <iostream>

using namespace std;
class node
{
public:
	int data; //값
	node* next; //다음 데이터 노드를 가르킬 포인터
};
class linkedList
{
private:
	node* _head;// 기준이 되는 노드(제일 첫 생성되는 노드)
public:
	linkedList();
	~linkedList();

	void Insert(int data); //값 추가
	void Delete(int data); //값 삭제
	void Print(); //출력

};

