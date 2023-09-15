#include <stdio.h>

int main() {

	/*
	//1.
	int a, b;

	printf("첫 번째 정수 : ");
	scanf("%d", &a);
	printf("두 번째 정수 : ");
	scanf("%d", &b);

	printf("합: %d", a+b);
	*/



	//2.
	int a;
	printf("입력:");
	scanf("%d", &a);

	int divider = 10000;
	int result[5];
	for (int i = 0; i < 5; i++) {
	   result[i] = a / divider;
	   a = a % divider;
	   divider /= 10;
    }

	printf("%d만%d천%d백%d십%d",result[0], result[1], result[2], result[3], result[4]);

	
	
	//3.
	/*
	int num;
	scanf("%d", &num);

	if (num > 40) {
		printf("%d -> hot", num);
	} 
	else if (num >= 0 && num <= 40) {
		printf("%d -> moderate", num);
	}
	else {
		printf("%d -> cold", num);
	}
	*/


}