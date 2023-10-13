#include <iostream>
#include <string>

using namespace std;

//���ø� : ���� Ÿ���� �����Ϳ� �����ϴ� ���� �Լ��� �����ϴµ� ���˴ϴ�.
/*
template <typename T, typename U>


void swap_temp(T& a, T& b, U& re) {
	T temp = a;
	a = b;
	b = temp;


	re = a - b;
}

int main() {
    int x=5;
	int y=10;
	double z;
	swap_temp(x, y,z);

	cout << "x��" << x << " y��" << y << endl;
	cout << "z��" << z << endl;
}
*/

//template <typename A, typename B, typename C>
/*
template <typename T>
T maximum(T a, T b, T c) {
	T max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main() {


	cout << "max ����:" << maximum(40,20,30) << endl;
}
*/

// Ŭ���� ���ø�
template <typename T>
class Box {
private:
	T a;
public:
	Box(T a_) {
		this->a = a_; // �ʱ�ȭ
	}
	T getA() {
		return this->a;
	}
};

int main() {

	Box<int> a(30); // 30�� �ʱ�ȭ

	cout << a.getA() << endl;

	Box<string> b("����");
	cout << b.getA() << endl;

	Box<double> c(10.102);
	cout << c.getA() << endl;

	return 0;
}

