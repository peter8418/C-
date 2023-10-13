#include <iostream>
#include <string>

using namespace std;

// ���� ó��
// ������ ����
// 1. ������ ���� :���� �� ���� : int a =3.14;
// 2. ��Ÿ�� ���� :���� �� ���� : ������ �Է��ϼ���-> ��ġ� (�����Է��� ����) => ����ó�� ���� ���
// 3. ���ؽ�Ʈ ����: ����� �� �� �ִ� ����. ��Ÿ �׽�Ʈ 

#include <exception> //���� ó�����ִ� �Լ���.

int divide(int a, int b) {
	if (b == 0) {
		throw exception();
	}
	return a / b;
}
int main() {

	// ���ǹ� (if, switch)
	//�ݺ��� (for, while)
	//����ó�� (try-chtch ��)
	try {
		//®�� �ڵ�, ���⿡ ������ �߻��ϸ� catch������ �̵���.
		cout << divide(10, 2) << endl;
		cout << divide(10, 5) << endl;
		cout << divide(10, 0) << endl; // ���� �߻��Ͽ� ���� ��.
		cout << divide(10, 10) << endl;
	}
	catch(exception& abc){
		cout << "�����߻�!" << endl;
	}

	return 0;
}
