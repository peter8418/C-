#include <iostream>
#include <string>

using namespace std;

// �������̵� :  �θ� Ŭ������ ������ �Ѵ�.

// �⺻ Ŭ���� Animal����
class Animal {
public:
	void eat() {
		cout << "This animal eats food." << endl;
	}
	// �������̵�. -> �̸�, �Ű����� Ÿ�� �� ���� ��� �����ϰ� ����ؾ� ��. void -> void, int -> int,
	// private������ ������ �ȵ�.
	virtual void sound() {

	}
};

// �Ļ� Ŭ���� Dog�� Animal�� ���
class Dog : public Animal {
	//public:
protected: // �ڱ� �ڽ� �������� �ֵ鸸 ��� ������.
	void bark() {
		cout << "The dog barks." << endl;
	}

public:
	// sound override
	void sound() override {
		cout << "�۸۸�" << endl;
	}
};

class Cat : public Animal {
public:
	void meow() {
		cout << "The cat meows." << endl;
	}
public:
	// sound override
	void sound() override {
		cout << "�߿˾߿�" << endl;
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


	cout << "/// �������̵� test" << endl;

	Dog a;
	a.sound();
	myCat.sound();

	return 0;
}