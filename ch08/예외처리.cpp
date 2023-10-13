#include <iostream>
#include <string>

using namespace std;

// 예외 처리
// 에러의 종류
// 1. 컴파일 에러 :실행 전 에러 : int a =3.14;
// 2. 런타임 에러 :실행 중 에러 : 정수를 입력하세요-> 김치찌개 (정수입력을 안함) => 예외처리 문법 사용
// 3. 컨텍스트 에러: 사람만 알 수 있는 에러. 베타 테스트 

#include <exception> //에러 처리해주는 함수들.

int divide(int a, int b) {
	if (b == 0) {
		throw exception();
	}
	return a / b;
}
int main() {

	// 조건문 (if, switch)
	//반복문 (for, while)
	//예외처리 (try-chtch 문)
	try {
		//짰던 코드, 여기에 에러가 발생하면 catch문으로 이동함.
		cout << divide(10, 2) << endl;
		cout << divide(10, 5) << endl;
		cout << divide(10, 0) << endl; // 에러 발생하여 종료 됨.
		cout << divide(10, 10) << endl;
	}
	catch(exception& abc){
		cout << "에러발생!" << endl;
	}

	return 0;
}
