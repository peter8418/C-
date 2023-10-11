#include <iostream>
#include <string>
/*
// 네임스페이스 : 이름 충돌을 방지하기 위해 

namespace MyNamespace {
	int value = 10;
	void display() {
		printf("Inside MyNamespace\n");
	}
}

int main() {
	printf("%d \n", MyNamespace::value);
	MyNamespace::display();
	return 0;

}

// using 문
*/

// class, 데이터(구조체) + 이 데이터를 처리하는 함수(함수)포함 된 것.
// 클래스는 객체(템플릿)지향 프로그래밍에서 (C언어는 절차지향 프로그래밍)
// 데이터(struct)와 이 데이터를 처리하는 함수(function)을 하나로 묶은 사용자 정의 데이터 타입(Class)입니다.
// 객체는 클래스의 인스턴스를 의미합니다.
// -클래스는 객체의 설계도나 템플릿으로 볼 수 있다.
// - 객체는 클래스에 정의된 대로 생성된 실체(entity)입니다.
// - 클래스 내에서 데이터는 멤버 변수(struct)로, 함수는 멤버 함수(function)로 정의됩니다.
using namespace std;

// 클래스 이름은 앞글자 대문자 필수
class Dog {
public:
	string name;
	int age;
	int energy;



public:
	void showEnergy() {
		cout << "현재 체력은" << energy << "입니다." << endl;
	}
	void eating() {
		cout << "냠냠 밥먹습니다." << endl;
		energy += 10;
		// cout << name << " 냠냠 밥먹습니다." << endl;
	}
	void eatingSome(int energy) {
		cout << "냠냠 밥먹습니다." << endl;
		//energy += energy;
		this->energy += energy;
		this->bark();
	}
	void bark() {
		cout << "멍멍!" << endl;
		energy -= 10; //energy = energy - 10;
	}

};

int main() {
	Dog dog1;

	//dog1.name = "mega";
	//dog1.eating();

	dog1.name = "mega";
	dog1.age = 1;
	dog1.energy = 100;

	dog1.showEnergy();
	dog1.bark();
	dog1.bark();
	dog1.bark();
	dog1.showEnergy();
	dog1.eating();
	dog1.showEnergy();
	dog1.eatingSome(50);
	dog1.showEnergy();

}


