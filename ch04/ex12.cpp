#include <stdio.h>

int main() {
	int n;

	printf("�ڿ��� �Է�: ");
	scanf("%d", &n);

	int sum = 0;
	/*
	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	printf("1���� %d������ �� : %d \n", n, sum);
	*/

	int i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1���� %d������ �� : %d \n", n, sum);
}