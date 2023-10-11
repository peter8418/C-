#include <iostream> // 입출력 할때 필요

using namespace std; // std 제거 가능

int main() {
	// cout 출력 printf
	// cin 입력  scanf

	/*
	std::cout << "Hello world!" << std::endl; // endl = endline == \n, std안에있는 cout을 사용.
	cout << "Hello world!" << endl; // using namespace std를 사용하면 std 제거 가능함.

	int age, weight, height;
	cout << "당신의 나이는?";
	cin >> age;
	cout << "당신의 키는?";
	cin >> height;
	cout << "당신의 몸무게는?";
	cin >> weight;
	cout << "당신의 나이는 " << age << "이고 " << "당신의 키는 " << height << "이고 " << "당신의 몸무게는 " << weight << " 입니다." << endl;
	
	*/

	int num[5], result;
	result = 0;
	cout << "숫자 5개를 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < 5; i++) {
		if (num[i] >= 0) {
			result = num[i] + result;
		}
	}

	cout << "결과는 " << result << endl;
	/*
	for (int i = 0; i < 5; i++) {
		cout << num[i] << endl;
	}
	*/



	return 0;
}