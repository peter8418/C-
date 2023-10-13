#include <iostream>
#include <string>

using namespace std;


// �⺻ Ŭ���� Animal����
class Animal {
public:
	void eat() {
		cout << "This animal eats food." << endl;
	}
};

// �Ļ� Ŭ���� Dog�� Animal�� ���
class Dog : public Animal {
//public:
protected: // �ڱ� �ڽ� �������� �ֵ鸸 ��� ������.
	void bark() {
		cout << "The dog barks." << endl;
	}
};

class Cat : public Animal {
public:
	void meow() {
		cout << "The cat meows." << endl;
	}
};

class Siba : public Dog {
public:
	void go() {
		this->bark();
		cout << "�������� �����" << endl;
		this->bark();
	}
};

int main() {
	Dog myDog;
	Cat myCat;
	Siba doge;

	myDog.eat();
	//myDog.bark();

	myCat.eat();
	myCat.meow();
	
	cout << "///// doge protected test ////" << endl;
	doge.eat();
	doge.go();

	return 0;
}


//��������
// 1. private ->  �� �ڽŸ� ���
// 2. protected -> �ڱ� �ڽĿ��Ը� ���
// 3. public -> ����� ���
/*
class Base {
private:
	int privVar;
protected:
	int protVar;
public:
	int pubVar;

};

class Derived : public Base {
public:
	void AccessMembers(){
		// privVar = 10; // ����/ ������ �� ����
		protVar = 20;  // ����
		pubVar = 30;   // ����
	}
};

*/