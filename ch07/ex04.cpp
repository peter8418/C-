#include <iostream>
#include <string>

using namespace std;

class Car {
private: // ��� ����
	string name;
	string color;
	int price;
	int gasoline;

public:
	// ������ �Լ� == �ʱ�ȭ
	Car() {
		this->name = "avante";
		this->color = "pink";
		this->price = 2000;
		this->gasoline = 100;
	}
	Car(string name_, string color_) {
		this->name = name_;
		this->color = color_;
		this->price = 2000;
		this->gasoline = 100;
	}
	void info() {
		cout << this->name << endl;
		cout << this->color << endl;
		cout << this->price << endl;
		cout << this->gasoline << endl;
	}
	void driving() {
		cout << "�θ��θ�" << endl;
		this->gasoline -= 10;
	}
};

int main() {
	Car car1;
	car1.info();

	Car car2("tesla", "black");
	car2.info();

	return 0;
}