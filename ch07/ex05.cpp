// 정적 and 동적(dynamic) 할당
// 컴파일 시점에 메모리가 할당되는 것을 의미합니다.. 
// 즉 프로그램이 실해애되기 전에 변수의 크기와 위치가 이미 결정되어 있음.

// 동적할당 new/delete연산자를 사용하여 동적으로 메모리를 할당하고 해제합니다.
// delete연산자를 사용하여 메모리를 해제해야 한다.


#include <iostream>
#include <string>

using namespace std;
/*
int main() {
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;

	//동적으로 배열 할당.
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i;
		cout << arr[i] << " ";
	}

	// 할당된 메모리 해제
	delete[] arr;
	return 0;
}
*/
// 얕은 복사 와 깊은 복사
// 얕은 복사(shallow copy): 객체의 멤버 변수들의 실제 값을 복사하는 것이 아님. 멤버 변수의 포인터만 복사함.
// 따라서 원래 객체와 복사된 객체가 동일한 메모리 주소를 참조하게 됨.

// 
// 얕은 복사 문제점. 
// - 원본 객체나 복사된 객체 중 하나가 수정되면, 다른 객체의 값도 함께 변경 됨.
// - 하나가 소멸될 때 메모리를 해제하면 다른 객체는 이미 해제된 메모리를 참조. -> 원본 해제하면 모두 해제


// 깊은 복사 : 새롭게 만들어서 복사
// 참조하는 곳이 다르고 값이 같으면 다르다..(다른곳을 바라보고 있으므로) 같은 주소를 가르키고 있어야 함 같다고 봄.

// - 문제점.
//  -원본 객체와 복사된 객체는 독립적이다.
//  - 한 객체가 수정되거나 소멸되어도 다른 객체에 영향이 없다.
/*
class Shallow {
private:
	int* data;

public:
	Shallow(int d) {
		data = new int;
		*data = d;
	}
	void changeData(int d) {
		*data = d;
	}
	void print() {
		cout << *data << endl;
	}


};

int main() {
	Shallow original(10);
	Shallow copy = original;
	copy.changeData(20);

	original.print();
	copy.print();


	return 0;

}
*/



class Deep {
private:
	int* data;

public:
	Deep(int d) {
		data = new int;
		*data = d;
	}
	// 복사 생성자
	Deep(Deep& source) {
		data = new int;
		*data = *source.data;
	}
	void changeData(int d) {
		*data = d;
	}
	void print() {
		cout << *data << endl;
	}


};

int main() {

	Deep original(10);
	Deep copy = original;
	copy.changeData(20);

	original.print();
	copy.print();
	return 0;

}

