#include <iostream>
#include <string>

using namespace std;

class Damakozi {
private:
	string name;
	int age;

public:
	// ������ �Լ� --> �Լ��̸��� �ڱ� Ŭ���� �̸��ϰ� ���ƾ� ��. class �̸� Damakozi = ������ �Լ� �̸� Damakozi
	Damakozi(string inputName,int inputAge) : name(inputName), age(inputAge) {

	}

	// �Ϲ� �Լ�
	void introduce() {
		cout << "Hello my name is " << this->name << endl;
		cout << "my age is " << this->age << endl;
	}
};

int main() {
	Damakozi megamon("megamon",10); // ó������ megamon���� �̸��� ���� ��.

	megamon.introduce();


	return 0;
}