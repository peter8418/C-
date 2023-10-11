#include <iostream>
#include <string>

using namespace std;

class Damakozi {
private:
	string name;
	int age;

public:
	// 생성자 함수 --> 함수이름을 자기 클래스 이름하고 같아야 함. class 이름 Damakozi = 생성자 함수 이름 Damakozi
	Damakozi(string inputName,int inputAge) : name(inputName), age(inputAge) {

	}

	// 일반 함수
	void introduce() {
		cout << "Hello my name is " << this->name << endl;
		cout << "my age is " << this->age << endl;
	}
};

int main() {
	Damakozi megamon("megamon",10); // 처음부터 megamon으로 이름이 설정 됨.

	megamon.introduce();


	return 0;
}