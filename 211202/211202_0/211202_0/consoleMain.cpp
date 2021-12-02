#include <iostream>
using namespace std;

//struct ==구조체 ==객체(기본적으로 접근제한지시자가 public인게 특지이)
struct tagUnit
{
	const char* name; //유닛의 이름
	int hp; 
	int atk
};
//전투
void battle(const char *name, int *hp, const char *name2, int atk)
{
	cout << name2 << "은(는)" << name << "을 공격했다 " << endl;

	*hp -= atk;

	cout << name2 << "은(는) 체력이" << *hp<< "남았다다 " << endl;
	cout << endl << endl;


}

int main()
{
	tagUnit dragoon;
	dragoon.name = "드라균";
	dragoon.hp = "100";
	dragoon.atk = "80";

	tagUnit me;
	me.name = "드라균";
	me.hp = "100";
	me.atk = "80";

	battle(me.name, &me.hp, dragoon.name, dragoon.atk);
	battle(me.name, &me.hp, dragoon.name, dragoon.atk);

	battle(me.name, &me.hp, dragoon.name, dragoon.atk);
	battle(me.name, &me.hp, dragoon.name, dragoon.atk);

	return 0

}