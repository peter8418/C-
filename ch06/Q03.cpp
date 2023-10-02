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
	printf("원을 입력해 주세요.");
	scanf_s("%lf", &KRW);
	getchar();

	printf("원하는 화폐를 선택해 주세요.");
	scanf_s("%d", &sel);
	
	if (sel >= 0 && sel <=2) {
		result = change(sel,KRW);
	}
	else {
		printf("잘못입력했습니다.");
	}

	printf("환전 : %lf", result);
}