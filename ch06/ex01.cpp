#include <stdio.h>

int c=10;

void a() {
	int a = 10;
	c++;
	printf("a값은 %d\n", a);
}

void b() {
	int b = 10;
	c++;
	printf("b값은 %d\n", b);
}

int main() {
	a();
	b();
	printf("c의 값은 %d",c);

}