#include <stdio.h>

int main(){
	int n;

    printf("�ڿ��� �Է�: ");
	scanf("%d", &n);

	int i, pow;

	for (i = 1, pow = 1; i <= n; i++, pow *= 2) {

		printf("2�� %d������ %d\n", n, pow);
	}
}