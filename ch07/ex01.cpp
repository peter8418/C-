#include <iostream> // ����� �Ҷ� �ʿ�

using namespace std; // std ���� ����

int main() {
	// cout ��� printf
	// cin �Է�  scanf

	/*
	std::cout << "Hello world!" << std::endl; // endl = endline == \n, std�ȿ��ִ� cout�� ���.
	cout << "Hello world!" << endl; // using namespace std�� ����ϸ� std ���� ������.

	int age, weight, height;
	cout << "����� ���̴�?";
	cin >> age;
	cout << "����� Ű��?";
	cin >> height;
	cout << "����� �����Դ�?";
	cin >> weight;
	cout << "����� ���̴� " << age << "�̰� " << "����� Ű�� " << height << "�̰� " << "����� �����Դ� " << weight << " �Դϴ�." << endl;
	
	*/

	int num[5], result;
	result = 0;
	cout << "���� 5���� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < 5; i++) {
		if (num[i] >= 0) {
			result = num[i] + result;
		}
	}

	cout << "����� " << result << endl;
	/*
	for (int i = 0; i < 5; i++) {
		cout << num[i] << endl;
	}
	*/



	return 0;
}