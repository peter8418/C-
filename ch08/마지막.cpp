#include <iostream>
#include <string>
#include <vector>  // STL
#include <set>    // �ߺ��� �ȵ�. �ߺ��Ȱ��� ������ �Ѱ��� ����.
using namespace std;

// Auto : ������ Ÿ���� �ڵ����� �߷��մϴ�..
/*
 auto i = 5; // i�� int Ÿ��
 auto s = "hello" // s�� const char* Ÿ��
*/

// STL (Standard Template Library)
// 
/*
int main() {
	vector<int> b; // vector<int> <- ������� class��� �����ϸ� ��.vector<int>  ������ �ִ� b

	for (int i = 0; i <= 100; i++) {
		if(i%2==0) b.push_back(i); // ¦���� b�� ��.
	}
	
	cout << b.at(0) << endl; // b. 0��°
	cout << b.at(1) << endl; // b. 1��°
	cout << b.at(2) << endl; // b. 2��°
	cout << b.at(3) << endl; // b. 3��°


	return 0;
}
*/

// vector ����
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

	// ���� for loop��
	for (int i : numbers) {
		cout << i << endl;
	}
}

*/

/// set ����

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

	// ���� for loop�� for(int i: stl���� ���Ȱ� �����)
	for (int i : numbers) {
		cout << i << endl;
	}

	set<int> s;
	s.insert(3);
	s.insert(1);
	s.insert(4);
	s.insert(1);

	for (int num : s) {
		cout << num << endl; // 1, 3, 4 �� ����
	}

	return 0;
}
