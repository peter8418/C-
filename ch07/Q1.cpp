#include <iostream>
using namespace std;
/*
int main() {

	int num;
	cout << "숫자를 입력하세요." << endl;

	cin >> num;

	if ( num <= 0) {
		cout << "양의 정수가 아닙니다." << endl;
	}
	else {
		cout << "약수는 ";
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

	cout << "정수를 입력하세요 (0은 종료입니다.)";

	// for 끝을 알 경우 vs while 끝을 알 수 없는 경우 -> 람다, 고차 함수

	while (true) {
		cin >> n;
		if (n == 0) break;
		sum += n;
	}
	cout << "총 합은" << sum << "입니다." << endl;
	return 0;
}