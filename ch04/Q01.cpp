#include <stdio.h>

int main() {
	int num1, num2;
	char op;
	
	printf("���� 1�Է� : ");
	scanf("%d", &num1);
	printf("���� 2�Է� : ");
	scanf("%d", &num2);
	getchar();
	printf("������ �Է� : ");
	scanf("%c", &op);
	/*
	if (op == '+') {
		printf("��� �� : %d", num1 + num2);
	}
	else if (op == '-') {
		printf("��� �� : %d", num1 - num2);
	}
	else if (op == '*') {
		printf("��� �� : %d", num1 * num2);
	}
	else if (op == '/') {
		printf("��� �� : %.1f", (float)num1 / num2);
	}
	else {
		printf("�߸��� ������ �Դϴ�. \n");
	}
	*/
	switch (op) {
	case '+' : 
		printf("��� �� : %d", num1 + num2);
		break;
	case '-':
		printf("��� �� : %d", num1 - num2);
		break;
	case '*':
		printf("��� �� : %d", num1 * num2);
		break;
	case '/':
		printf("��� �� : %.1f", (float)num1 / num2);
		break;
	default :
		printf("�߸��� ������ �Դϴ�. \n");
		break;

	}

}