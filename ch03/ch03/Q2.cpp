#include <stdio.h>

int main() {
	int a, b;
	
	printf("체중(Kg) 입력 :");
	scanf("%d", &a);
	printf("키(m) 입력 :");
	scanf("%d", &b);
	printf("BMI: %f", a / (b * b));
}