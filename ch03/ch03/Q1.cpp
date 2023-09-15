#include <stdio.h>

int main() {
	int a, b;
	printf("숫자입력 :");
	scanf("%d%d", &a, &b);
	printf("더하기 결과 값 : %d\n", a + b);
	printf("빼기 결과 값 : %d\n", a - b);
	printf("곱하기 결과 값 : %d\n", a * b);
	printf("나누기 결과 값 : %d\n", a / b);
	printf("나머지 연산자 결과 값 : %d\n", a % b);
}