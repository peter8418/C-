#include <iostream>
using namespace std;
/*
int main() {

	int num;
	cout << "���ڸ� �Է��ϼ���." << endl;

	cin >> num;

	if ( num <= 0) {
		cout << "���� ������ �ƴմϴ�." << endl;
	}
	else {
		cout << "����� ";
		for (int i = 1; i <= num; i++) {
			if (num % i == 0) {
				cout << " " << i;
			}

		}
	}
}
*/

int main() {
	int sum = 0;
	int n;

	cout << "������ �Է��ϼ��� (0�� �����Դϴ�.)";

	// for ���� �� ��� vs while ���� �� �� ���� ��� -> ����, ���� �Լ�

	while (true) {
		cin >> n;
		if (n == 0) break;
		sum += n;
	}
	cout << "�� ����" << sum << "�Դϴ�." << endl;
	return 0;
}