#include <iostream>
#include <string>

using namespace std;

class Account {
private: // ��� ����
	string accountName;
	double balance;

public:
	//������ class�̸����� ����.
	/*
	Account() {
		this->accountName = "HAN"; //���� �̸�
		this->balance = 0;
	}
	*/
	Account(string accountName_, double balance_) {
		this->accountName = accountName_;
		this->balance = balance_;
	}

	//�Ա� �Լ�.
	void deposit(double amount) {
		this->balance = balance + amount;
	}
	// ��� �Լ�.
	void withdraw(double amount) {
		if (this->balance < amount) {
			cout << "�ܾ��� �����մϴ�. ����� �� �����ϴ�. " << endl;
		}
		else this->balance -= amount;
		/*
		this->balance = balance - amount;
		if (this->balance < 0) {
			cout << "�ܾ��� �����մϴ�. ����� �� �����ϴ�. " << endl;
			this->balance = balance + amount;
		}
		*/
	}
	void printBalance() {
		cout << this->accountName <<"���� �ܾ��� "<< this->balance <<"���Դϴ�." << endl;
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