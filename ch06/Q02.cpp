#include <stdio.h>
#include <math.h>

void equa(double a, double b, double c) {
	double root = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
	double root1 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
	printf("%.2lf %.2lf", root, root1);
}


int main() {

	//ax^2+bx+c =0
	// x^2-4x+4�� x����??

	double a = 1, b = -4, c = 4;
		//, x, result;
	/*
	printf("a���� �Է��ϼ���:");
	scanf_s("%d", &a);

	printf("b���� �Է��ϼ���:");
	scanf_s("%d", &b);

	printf("c���� �Է��ϼ���:");
	scanf_s("%d", &c);
	*/

	equa(a,b,c);
}
