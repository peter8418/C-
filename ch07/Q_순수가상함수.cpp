#include <iostream>
#include <string>

using namespace std;


class Shape {
public:
	virtual double area() = 0; // 넓이 구하는 순수 가상함수
	virtual double round() = 0; // 둘레 구하는 순수 가상함수
};

class Circle : public Shape {
private: // 멤버 변수
	double radius;
public:
	Circle(double r_) {
		this->radius = r_;
	}
	double area() override {
		return 3.14 * this->radius * this->radius;
	}
	double round() override {
		return 3.14 * this->radius * 2;
	}
};

class Triangle :public Shape {
private: // 멤버 변수
	double a;
	double b;
	double c;
public:
	Triangle(double a_, double b_, double c_) {
		this->a = a_;
		this->b = b_;
		this->c = c_;
	}
	double area() override {
		return a * b * 1/2;
	}
	double round() override {
		return a + b + c;
	}

};
/*
class Rectangle :public Shape {

};
*/

int main() {

	Circle a(10);
	cout << a.area() << endl;

	Triangle b(10, 10, 10);
    cout << b.area() << endl;

	Triangle c(10, 10, 10);
	cout << b.round() << endl;

}
