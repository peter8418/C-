#include <iostream>
#include <string>

using namespace std;

// ����� Ŭ���� �����
// ��� ����: �̸�, ǰ��, ����, ����, ü��
// ��� �Լ�: �ڱ�Ұ�, �ڴ°�(ü������), �򸣸Ա�(ü������), ��������(ü�°���)
// ������ �Լ� �̿� this;

class Cat {

private:
	string name;
	string kind;
	int age;
	string sex;
	int energy;

public:
	Cat(string inName, string inKind, int inAge, string inSex, int inEnergy) : name(inName), kind(inKind), age(inAge), sex(inSex), energy(inEnergy) {
	};

	void introduce() {
		cout << "Hello my name is " << this->name << endl;
		cout << "kind :    " << this->kind << endl;
		cout << "age :     " << this->age << endl;
		cout << "sex :     " << this->sex << endl;
		cout << "energy :  " << this->energy << endl;

	}

	void eating() {
		cout << "�ȳ� ��Խ��ϴ�." << endl;
		energy += 10;
		cout << "energy: " << energy << endl;
		// cout << name << " �ȳ� ��Խ��ϴ�." << endl;
	}

	void sleep() {
		cout << "���ڿ�" << endl;
		energy += 10;
		cout << "energy: " << energy << endl;
		// cout << name << " �ȳ� ��Խ��ϴ�." << endl;
	}

	void play() {
		cout << "��ƿ�" << endl;
		energy -= 10;
		cout << "energy: " << energy << endl;
		// cout << name << " �ȳ� ��Խ��ϴ�." << endl;
	}


};

int main() {

	Cat Cat1("megacat", "black", 3, "b", 100);

	Cat1.introduce();
	Cat1.eating();
	Cat1.play();
	Cat1.sleep();


	return 0;
}