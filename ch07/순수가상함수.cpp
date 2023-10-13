#include <iostream>
#include <string>

using namespace std;


// ���� ���� �Լ� (pure virtual function)
// ���� ���� �Լ��� �⺻ Ŭ�������� ��������� ������ �������� ���� �Լ��Դϴ�.
// C++���� ���� ���� �Լ��� =0�� ����Ͽ� ����˴ϴ�.
// �������� �Լ��� �Ļ� Ŭ�������� �ݵ�� �����Ǿ�� �մϴ�.

/*
* ex)


class Shape {
public:
	virtual void draw() = 0; // ���� ���� �Լ� (���Ǹ� ����)

	virtual void draw() ={
	  cout << << endl;
	} // �����Լ�
}

int main() {
	return 0;
}
*/

// �߻� Ŭ���� : �ϳ� �̻��� ���� ���� �Լ��� �����ϴ� Ŭ����

class Shape {
public:
	virtual void draw() = 0; // ���� ���� �Լ� (���Ǹ� ����)
}

class Circle : public Shape {
public:
	void draw() override {
		cout << "���� �׸��ϴ�." << endl;
	}
};

int main() {

}