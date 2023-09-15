#include <stdio.h>

int main() {
	int a = 5;
	printf("원래 a의 값은 %d였다!\n", a);

	a = a + 3;
	printf("a에 3을 더했더니 %d이 되었다!!!\n", a);

	int b = 5;
	printf("원래 a의 값은 %d였다!\n", b);
	b++;
	printf("1 증가해서 %d이 됐다!\n", b);
	b--;
	printf("1 감소해서 %d가 됐다!\n", b);

	int c = 5;
	int d;

	d = ++c;
	printf("=== 전치 증가 연산 ===\n");
	printf("c = %d\n", c);
	printf("d = %d\n", d);

	d = c++;
	printf("=== 전치 증가 연산 ===\n");
	printf("c = %d\n", c);
	printf("d = %d\n", d);

}