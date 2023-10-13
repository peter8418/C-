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
// Monster���� ��� ����.
class Slime : public Monster { 
public:
	Slime() : Monster(50) {} // �� Monster�� hp50�� ��

};
class Wolf : public Monster {
public:
	Wolf() : Monster(100) {} // �� Monster�� hp100�� ��

};
class Golem : public Monster {
public:
	Golem() : Monster(200) {} // �� Monster�� hp200�� ��

};

class Player {
protected:
	int hp;
public:
	// ������
	Player(int hp_) {
		this->hp = hp_;
	}
	virtual void attack(Monster& monster_) = 0; // �߻��Լ�. Monster& monster_ -> monster class �ּ��� monster ü��
	virtual void specialAttack(Monster& monster_) = 0;
};

class Warrior : public Player {
public:
	Warrior() : Player(200) {}
	// ������ override
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
	// ������ override
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

	cout << "�� ü��" << endl;
	cout << c.getHp() << endl;
	cout << "����!" << endl;
	mega.attack(c); // c == Golem
	cout << c.getHp() << endl;

	return 0;
}