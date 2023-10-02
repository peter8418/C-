#include <stdio.h>

void swap(int* a, int *b, int* result) {
	int temp;
	int *result;

	temp = *a;
	*a = *b;
	*b = temp;

	&result = *a + *b;
}

int main() {
	int a = 10;
	int	b = 20;
	swap(&a,&b);

	printf("a = %d, b = %d", a, b);
}