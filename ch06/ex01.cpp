#include <stdio.h>

int c=10;

void a() {
	int a = 10;
	c++;
	printf("a���� %d\n", a);
}

void b() {
	int b = 10;
	c++;
	printf("b���� %d\n", b);
}

int main() {
	a();
	b();
	printf("c�� ���� %d",c);

}