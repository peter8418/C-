#include <iostream>
#include <string>

using namespace std;

class Car {
private: // ¸â¹ö º¯¼ö
	string name;
	string color;
	int price;
	int gasoline;

public:
	// »ý¼ºÀÚ ÇÔ¼ö == ÃÊ±âÈ­
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
		cout << "ºÎ¸ªºÎ¸ª" << endl;
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