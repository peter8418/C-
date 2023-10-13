#include <iostream>
#include <string>
#include <vector>  // STL
#include <set>    // 중복이 안됨. 중복된것을 넣으면 한개만 나옴.
using namespace std;

// Auto : 변수의 타입을 자동으로 추론합니다..
/*
 auto i = 5; // i는 int 타입
 auto s = "hello" // s는 const char* 타입
*/

// STL (Standard Template Library)
// 
/*
int main() {
	vector<int> b; // vector<int> <- 여기까지 class라고 이해하면 됨.vector<int>  가지고 있는 b

	for (int i = 0; i <= 100; i++) {
		if(i%2==0) b.push_back(i); // 짝수만 b에 들어감.
	}
	
	cout << b.at(0) << endl; // b. 0번째
	cout << b.at(1) << endl; // b. 1번째
	cout << b.at(2) << endl; // b. 2번째
	cout << b.at(3) << endl; // b. 3번째


	return 0;
}
*/

// vector 예제
/*
vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	for (int i = 0; i < numbers.size(); i++) {
		answer.push_back(numbers[i] * 2); // 4 20 6 46 16
	}
	return answer;
}

int main() {
	vector<int> numbers;
	numbers.push_back(4);
	numbers.push_back(1);
	numbers.push_back(8);
	numbers.push_back(3);

	// 향상된 for loop문
	for (int i : numbers) {
		cout << i << endl;
	}
}

*/

/// set 예제

vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	for (int i = 0; i < numbers.size(); i++) {
		answer.push_back(numbers[i] * 2); // 4 20 6 46 16
	}
	return answer;
}

int main() {
	vector<int> numbers;
	numbers.push_back(4);
	numbers.push_back(1);
	numbers.push_back(8);
	numbers.push_back(3);

	// 향상된 for loop문 for(int i: stl에서 사용된것 쓰면됨)
	for (int i : numbers) {
		cout << i << endl;
	}

	set<int> s;
	s.insert(3);
	s.insert(1);
	s.insert(4);
	s.insert(1);

	for (int num : s) {
		cout << num << endl; // 1, 3, 4 만 나옴
	}

	return 0;
}
