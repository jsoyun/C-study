#include<iostream>
using namespace std;
class Cat {
private:
	int age;
public:
	//������,��������������� //��ȣ��, �Ű�����
	Cat(int age) {
		age =age;

	}
	Cat() {
		age = 1;

	}
	~Cat() {
		cout << "�Ҹ�\n";

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