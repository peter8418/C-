#include <stdio.h>

int main() {
	int a = 10;
	int* ptr_a;
	ptr_a = &a;

	printf("a의 값:  %d\n", a);
	printf("a의 주솟값:  %d\n", &a);
	printf("ptr_a의 값:  %d\n", ptr_a);
	printf("ptr_a의 값:  %d\n", *ptr_a+1);
	*ptr_a = 20;
	printf("a의 값:  %d\n", a);
}