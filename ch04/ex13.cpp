#include <stdio.h>

int main() {
	int n;

	printf("�ڿ��� �Է�: ");
	scanf("%d", &n);

	for (; n >= 1; n--) {
		printf("%d ", n);
	}

	for (int i = 1;; i++){
		printf("%d ", i);
	}
}