#include <iostream>
#include <string>

using namespace std;

class Account {
private: // 멤버 변수
	string accountName;
	double balance;

public:
	//생성자 class이름으로 만듬.
	/*
	Account() {
		this->accountName = "HAN"; //나의 이름
		this->balance = 0;
	}
	*/
	Account(string accountName_, double balance_) {
		this->accountName = accountName_;
		this->balance = balance_;
	}

	//입금 함수.
	void deposit(double amount) {
		this->balance = balance + amount;
	}
	// 출금 함수.
	void withdraw(double amount) {
		if (this->balance < amount) {
			cout << "잔액이 부족합니다. 출금할 수 없습니다. " << endl;
		}
		else this->balance -= amount;
		/*
		this->balance = balance - amount;
		if (this->balance < 0) {
			cout << "잔액이 부족합니다. 출금할 수 없습니다. " << endl;
			this->balance = balance + amount;
		}
		*/
	}
	void printBalance() {
		cout << this->accountName <<"님의 잔액은 "<< this->balance <<"원입니다." << endl;
	}

};

int main() {
	Account Account1("Han", 0);

	Account1.printBalance();
	Account1.deposit(1000);
	Account1.printBalance();
	Account1.withdraw(500);
	Account1.printBalance();

	Account1.withdraw(1000);
	Account1.printBalance();

	Account1.withdraw(500);
	Account1.printBalance();

}