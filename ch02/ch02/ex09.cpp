#include <stdio.h>

int main() {
	int a = 30, b = 50;

	bool p = a > b;
	bool q = a < b;
	bool r = a == b;

	printf("%d�� %d���� ũ��: %d\n", a,b,p);
	printf("%d�� %d���� �۴�: %d\n", a, b, q);
	printf("%d�� %d�� ����: %d\n", a, b, r);
}