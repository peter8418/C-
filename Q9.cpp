#include <stdio.h>

int main() {

	/*
	//1.
	int a, b;

	printf("ù ��° ���� : ");
	scanf("%d", &a);
	printf("�� ��° ���� : ");
	scanf("%d", &b);

	printf("��: %d", a+b);
	*/



	//2.
	int a;
	printf("�Է�:");
	scanf("%d", &a);

	int divider = 10000;
	int result[5];
	for (int i = 0; i < 5; i++) {
	   result[i] = a / divider;
	   a = a % divider;
	   divider /= 10;
    }

	printf("%d��%dõ%d��%d��%d",result[0], result[1], result[2], result[3], result[4]);

	
	
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