#include "mapTest.h"

mapTest::mapTest()
{
	//pair <�ڷ���1, �ڷ���2>(���� ���� Ű��, ����������)
	//make_pair(���� ����Ű��, ����������) �˾Ƽ� �ڷ��� ã�Ƽ� �־��ش�
	_mapTest.insert(pair<const char*, int>("����",3));
	_mapTest.insert(pair<const char*, int>("����",5));
	_mapTest.insert(pair<const char*, int>("�ع�",8));
	_mapTest.insert(pair<const char*, int>("����",7));


	_mi = _mapTest.find("�ع�");
	//�� �����̳� �ȿ� Ű���� �����ϸ� 
	if (_mi != _mapTest.end())
	{
		cout << _mi->first << "�� �����ϴ� ���ڴ�" << _mi->second << "�Դϴ�" << endl;


	}
	else
	{
		cout << "�׷��� ������" << endl;

	}
}

mapTest::~mapTest()
{
}
