#include <iostream>
#include <string>

using namespace std;

// 고양이 클래스 만들기
// 멤버 변수: 이름, 품종, 나이, 성별, 체력
// 멤버 함수: 자기소개, 자는거(체력증가), 츄르먹기(체력증가), 집사랑놀기(체력감소)
// 생성자 함수 이용 this;

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
		cout << "냠냠 밥먹습니다." << endl;
		energy += 10;
		cout << "energy: " << energy << endl;
		// cout << name << " 냠냠 밥먹습니다." << endl;
	}

	void sleep() {
		cout << "잠자요" << endl;
		energy += 10;
		cout << "energy: " << energy << endl;
		// cout << name << " 냠냠 밥먹습니다." << endl;
	}

	void play() {
		cout << "놀아요" << endl;
		energy -= 10;
		cout << "energy: " << energy << endl;
		// cout << name << " 냠냠 밥먹습니다." << endl;
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