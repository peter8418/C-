#include <stdio.h>

int main() {
	int a = 3.14;
	float b = 10;

	printf("a=%d, b=%f\n", a,b);

	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;
	double avg1 = (double)sum / 3;

	printf("��� ���� : %f\n", avg);
	printf("��� ���� : %f\n", avg1);
}