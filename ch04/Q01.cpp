#include <stdio.h>

int main() {
	int num1, num2;
	char op;
	
	printf("숫자 1입력 : ");
	scanf("%d", &num1);
	printf("숫자 2입력 : ");
	scanf("%d", &num2);
	getchar();
	printf("연산자 입력 : ");
	scanf("%c", &op);
	/*
	if (op == '+') {
		printf("결과 값 : %d", num1 + num2);
	}
	else if (op == '-') {
		printf("결과 값 : %d", num1 - num2);
	}
	else if (op == '*') {
		printf("결과 값 : %d", num1 * num2);
	}
	else if (op == '/') {
		printf("결과 값 : %.1f", (float)num1 / num2);
	}
	else {
		printf("잘못된 연산자 입니다. \n");
	}
	*/
	switch (op) {
	case '+' : 
		printf("결과 값 : %d", num1 + num2);
		break;
	case '-':
		printf("결과 값 : %d", num1 - num2);
		break;
	case '*':
		printf("결과 값 : %d", num1 * num2);
		break;
	case '/':
		printf("결과 값 : %.1f", (float)num1 / num2);
		break;
	default :
		printf("잘못된 연산자 입니다. \n");
		break;

	}

}