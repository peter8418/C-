#include <iostream>
#include <string>

using namespace std;

// 오버라이딩 :  부모 클래스를 재정의 한다.

// 기본 클래스 Animal선언
class Animal {
public:
	void eat() {
		cout << "This animal eats food." << endl;
	}
	// 오버라이딩. -> 이름, 매개변수 타입 및 개수 모두 동일하게 사용해야 함. void -> void, int -> int,
	// private에서는 시작이 안됨.
	virtual void sound() {

	}
};

// 파생 클래스 Dog가 Animal을 상속
class Dog : public Animal {
	//public:
protected: // 자기 자식 물려받은 애들만 사용 가능함.
	void bark() {
		cout << "The dog barks." << endl;
	}

public:
	// sound override
	void sound() override {
		cout << "멍멍멍" << endl;
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
		cout << "야옹야옹" << endl;
	}
};

class Siba : public Dog {
public:
	void go() {
		this->bark();
		cout << "도지코인 가즈아" << endl;
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


	cout << "/// 오버라이딩 test" << endl;

	Dog a;
	a.sound();
	myCat.sound();

	return 0;
}