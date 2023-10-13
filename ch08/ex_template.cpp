#include <iostream>
#include <string>

using namespace std;

//템플릿 : 여러 타입의 데이터에 동작하는 단일 함수를 정의하는데 사용됩니다.
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

	cout << "x는" << x << " y는" << y << endl;
	cout << "z는" << z << endl;
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


	cout << "max 값은:" << maximum(40,20,30) << endl;
}
*/

// 클래스 템플릿
template <typename T>
class Box {
private:
	T a;
public:
	Box(T a_) {
		this->a = a_; // 초기화
	}
	T getA() {
		return this->a;
	}
};

int main() {

	Box<int> a(30); // 30값 초기화

	cout << a.getA() << endl;

	Box<string> b("종강");
	cout << b.getA() << endl;

	Box<double> c(10.102);
	cout << c.getA() << endl;

	return 0;
}

