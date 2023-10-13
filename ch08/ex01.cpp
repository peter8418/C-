#include <iostream>
#include <string>

using namespace std;

class Monster {
protected:
	int hp;
public:
	void getDamaged(int damage) {
		this->hp = hp - damage;
		cout << hp << endl;
	}
};

class Slime : public Monster {
public:
	Slime() {
		this->hp = 50;
	}
};
class Wolf : public Monster {
public:
	Wolf() {
		this->hp = 100;
	}
};
class Golem : public Monster {
public:
	Golem() {
		this->hp = 200;
	}
};

class Player {
public:
	virtual void attack() = 0; // 순수 가상 함수.
	virtual void specialAttack() = 0;
};

class 


int main() {
	Wolf a;
	a.getDamaged(10);

	return 0;
}