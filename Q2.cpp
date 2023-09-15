#include <stdio.h>

int main() {

	int n;
	int a[1000];
	int temp =0;


	printf("입력할 숫자의 개수 :");
	scanf("%d", &n);

	printf("숫자 %d개를 입력하세요:", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);

	}
	/*
	printf("입력 확인: \n");
	for (int i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);

	}
	*/

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i]>a[j]) {
				temp = a[j];
				a[j] = a[i];
				a[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}


}