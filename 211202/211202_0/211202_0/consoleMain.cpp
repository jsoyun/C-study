#include <iostream>
using namespace std;

//struct ==����ü ==��ü(�⺻������ �������������ڰ� public�ΰ� Ư����)
struct tagUnit
{
	const char* name; //������ �̸�
	int hp; 
	int atk
};
//����
void battle(const char *name, int *hp, const char *name2, int atk)
{
	cout << name2 << "��(��)" << name << "�� �����ߴ� " << endl;

	*hp -= atk;

	cout << name2 << "��(��) ü����" << *hp<< "���Ҵٴ� " << endl;
	cout << endl << endl;


}

int main()
{
	tagUnit dragoon;
	dragoon.name = "����";
	dragoon.hp = "100";
	dragoon.atk = "80";

	tagUnit me;
	me.name = "����";
	me.hp = "100";
	me.atk = "80";

	battle(me.name, &me.hp, dragoon.name, dragoon.atk);
	battle(me.name, &me.hp, dragoon.name, dragoon.atk);

	battle(me.name, &me.hp, dragoon.name, dragoon.atk);
	battle(me.name, &me.hp, dragoon.name, dragoon.atk);

	return 0

}