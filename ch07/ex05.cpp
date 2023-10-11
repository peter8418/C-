// ���� and ����(dynamic) �Ҵ�
// ������ ������ �޸𸮰� �Ҵ�Ǵ� ���� �ǹ��մϴ�.. 
// �� ���α׷��� ���ؾֵǱ� ���� ������ ũ��� ��ġ�� �̹� �����Ǿ� ����.

// �����Ҵ� new/delete�����ڸ� ����Ͽ� �������� �޸𸮸� �Ҵ��ϰ� �����մϴ�.
// delete�����ڸ� ����Ͽ� �޸𸮸� �����ؾ� �Ѵ�.


#include <iostream>
#include <string>

using namespace std;
/*
int main() {
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;

	//�������� �迭 �Ҵ�.
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i;
		cout << arr[i] << " ";
	}

	// �Ҵ�� �޸� ����
	delete[] arr;
	return 0;
}
*/
// ���� ���� �� ���� ����
// ���� ����(shallow copy): ��ü�� ��� �������� ���� ���� �����ϴ� ���� �ƴ�. ��� ������ �����͸� ������.
// ���� ���� ��ü�� ����� ��ü�� ������ �޸� �ּҸ� �����ϰ� ��.

// 
// ���� ���� ������. 
// - ���� ��ü�� ����� ��ü �� �ϳ��� �����Ǹ�, �ٸ� ��ü�� ���� �Բ� ���� ��.
// - �ϳ��� �Ҹ�� �� �޸𸮸� �����ϸ� �ٸ� ��ü�� �̹� ������ �޸𸮸� ����. -> ���� �����ϸ� ��� ����


// ���� ���� : ���Ӱ� ���� ����
// �����ϴ� ���� �ٸ��� ���� ������ �ٸ���..(�ٸ����� �ٶ󺸰� �����Ƿ�) ���� �ּҸ� ����Ű�� �־�� �� ���ٰ� ��.

// - ������.
//  -���� ��ü�� ����� ��ü�� �������̴�.
//  - �� ��ü�� �����ǰų� �Ҹ�Ǿ �ٸ� ��ü�� ������ ����.
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
	// ���� ������
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

