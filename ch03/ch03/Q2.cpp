#include <stdio.h>

int main() {
	int a, b;
	
	printf("ü��(Kg) �Է� :");
	scanf("%d", &a);
	printf("Ű(m) �Է� :");
	scanf("%d", &b);
	printf("BMI: %f", a / (b * b));
}