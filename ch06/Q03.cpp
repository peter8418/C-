#include <stdio.h>
int sel;
double result;

double change(int sel, double w) {
	double a;
	if (sel == 0) {
		a = 1338.5;
	}
	else if (sel == 1) {
		a = 900.56;
	}
	else if (sel == 2) {
		a = 183.09;
	}
	return  w / a;
}
int main() {
	double KRW,JPY, USD, CNY;

	double result;
	printf("���� �Է��� �ּ���.");
	scanf_s("%lf", &KRW);
	getchar();

	printf("���ϴ� ȭ�� ������ �ּ���.");
	scanf_s("%d", &sel);
	
	if (sel >= 0 && sel <=2) {
		result = change(sel,KRW);
	}
	else {
		printf("�߸��Է��߽��ϴ�.");
	}

	printf("ȯ�� : %lf", result);
}