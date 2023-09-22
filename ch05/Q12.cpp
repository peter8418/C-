#include <stdio.h>

int main() {
	/*
	int num[10];

	int even[10] = {0,};
	int odd[10] = {0,};
	int j,k;
	j = 0;
	k = 0;

	printf("정수 10개 입력하세요.");

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (num[i] % 2 == 1) {
			odd[j] = num[i];
			j++;
		}
		else {
			even[k] = num[i];
			k++;
		}
		//printf("%d",num[i] % 2);
	}
	
	printf("홀수\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", odd[i]);
	}
	printf("\n");

	printf("짝수\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", even[i]);
	}
	*/
	
	
	int a;
	int b;
	int* pnum;
	int* pnum1;

	printf("정수 a 입력:");
	scanf_s("%d", &a);
	printf("정수 b 입력:");
	scanf_s("%d", &b);

	printf("a값: %d  b값: %d\n", a, b);
	pnum = &a;
	pnum1 = &b;


	
	b = *pnum;
	a = *pnum1;
	
	printf("a값: %d  b값: %d\n", a, b);
}