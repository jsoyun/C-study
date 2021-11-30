#include<iostream>
using namespace std;
class Cat {
private:
	int age;
public:
	//생성자,여러개만들수있음 //괄호안, 매개변수
	Cat(int age) {
		age =age;

	}
	Cat() {
		age = 1;

	}
	~Cat() {
		cout << "소멸\n";

	}
	int getAge() {
		return age;

	}
	void setAge(int a) {
		age = a;
	}

};

int main()
{
	Cat nabi(10), na;
	cout << nabi.getAge() << endl;
	cout << na.getAge() << endl;
	nabi.setAge(5);
	cout << nabi.getAge() << endl;
	return 0;
}