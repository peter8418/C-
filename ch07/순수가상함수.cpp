#include <iostream>
#include <string>

using namespace std;


// 순수 가상 함수 (pure virtual function)
// 순수 가상 함수는 기본 클래스에서 선언되지만 구현이 제공되지 않은 함수입니다.
// C++에서 순수 가상 함수는 =0을 사용하여 선언됩니다.
// 순수가상 함수는 파생 클래스에서 반드시 구현되어야 합니다.

/*
* ex)


class Shape {
public:
	virtual void draw() = 0; // 순수 가상 함수 (정의를 안함)

	virtual void draw() ={
	  cout << << endl;
	} // 가상함수
}

int main() {
	return 0;
}
*/

// 추상 클래스 : 하나 이상의 순수 가상 함수를 포함하는 클래스

class Shape {
public:
	virtual void draw() = 0; // 순수 가상 함수 (정의를 안함)
}

class Circle : public Shape {
public:
	void draw() override {
		cout << "원이 그립니다." << endl;
	}
};

int main() {

}