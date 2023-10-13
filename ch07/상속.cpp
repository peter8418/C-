#include <iostream>
#include <string>

using namespace std;


// 기본 클래스 Animal선언
class Animal {
public:
	void eat() {
		cout << "This animal eats food." << endl;
	}
};

// 파생 클래스 Dog가 Animal을 상속
class Dog : public Animal {
//public:
protected: // 자기 자식 물려받은 애들만 사용 가능함.
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

	return 0;
}


//접근제어
// 1. private ->  나 자신만 허용
// 2. protected -> 자기 자식에게만 허용
// 3. public -> 모든지 허용
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
		// privVar = 10; // 오류/ 접근할 수 없음
		protVar = 20;  // 가능
		pubVar = 30;   // 가능
	}
};

*/