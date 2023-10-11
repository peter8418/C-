#include <iostream>
#include <string>
/*
// ���ӽ����̽� : �̸� �浹�� �����ϱ� ���� 

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

// using ��
*/

// class, ������(����ü) + �� �����͸� ó���ϴ� �Լ�(�Լ�)���� �� ��.
// Ŭ������ ��ü(���ø�)���� ���α׷��ֿ��� (C���� �������� ���α׷���)
// ������(struct)�� �� �����͸� ó���ϴ� �Լ�(function)�� �ϳ��� ���� ����� ���� ������ Ÿ��(Class)�Դϴ�.
// ��ü�� Ŭ������ �ν��Ͻ��� �ǹ��մϴ�.
// -Ŭ������ ��ü�� ���赵�� ���ø����� �� �� �ִ�.
// - ��ü�� Ŭ������ ���ǵ� ��� ������ ��ü(entity)�Դϴ�.
// - Ŭ���� ������ �����ʹ� ��� ����(struct)��, �Լ��� ��� �Լ�(function)�� ���ǵ˴ϴ�.
using namespace std;

// Ŭ���� �̸��� �ձ��� �빮�� �ʼ�
class Dog {
public:
	string name;
	int age;
	int energy;



public:
	void showEnergy() {
		cout << "���� ü����" << energy << "�Դϴ�." << endl;
	}
	void eating() {
		cout << "�ȳ� ��Խ��ϴ�." << endl;
		energy += 10;
		// cout << name << " �ȳ� ��Խ��ϴ�." << endl;
	}
	void eatingSome(int energy) {
		cout << "�ȳ� ��Խ��ϴ�." << endl;
		//energy += energy;
		this->energy += energy;
		this->bark();
	}
	void bark() {
		cout << "�۸�!" << endl;
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


