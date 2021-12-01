#include "linkedList.h"

int main()
{
	linkedList sll;
	sll.Insert(1);
	sll.Print();
	sll.Insert(2);
	sll.Insert(3);
	sll.Print();
	sll.Delete(2);
	sll.Print();


	return 0;
}