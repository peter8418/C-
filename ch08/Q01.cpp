#include <iostream>
#include <string>

using namespace std;

class Monster {
protected:
	int hp;
public:
	Monster(int hp_) {
		this->hp = hp_;
	}
	void getDamaged(int damage) {
		this->hp = hp - damage;
		//cout << hp << endl;
	}
	int getHp() {
		return this->hp;
	}
};
// Monster에서 상속 받음.
class Slime : public Monster { 
public:
	Slime() : Monster(50) {} // 위 Monster에 hp50을 줌

};
class Wolf : public Monster {
public:
	Wolf() : Monster(100) {} // 위 Monster에 hp100을 줌

};
class Golem : public Monster {
public:
	Golem() : Monster(200) {} // 위 Monster에 hp200을 줌

};

class Player {
protected:
	int hp;
public:
	// 생성자
	Player(int hp_) {
		this->hp = hp_;
	}
	virtual void attack(Monster& monster_) = 0; // 추상함수. Monster& monster_ -> monster class 주소의 monster 체력
	virtual void specialAttack(Monster& monster_) = 0;
};

class Warrior : public Player {
public:
	Warrior() : Player(200) {}
	// 재정의 override
	void attack(Monster& monster_) override {
		monster_.getDamaged(30);
	}
	void specialAttack(Monster& monster_) override {
		monster_.getDamaged(50);
	}
};

class Archer : public Player {
public:
	Archer() : Player(150) {}
	// 재정의 override
	void attack(Monster& monster_) override {
		monster_.getDamaged(20);
	}
	void specialAttack(Monster& monster_) override {
		monster_.getDamaged(40);
	}
};

int main() {
	Archer mega;
	Slime a;
	Wolf b;
	Golem c;

	cout << "골렘 체력" << endl;
	cout << c.getHp() << endl;
	cout << "공격!" << endl;
	mega.attack(c); // c == Golem
	cout << c.getHp() << endl;

	return 0;
}