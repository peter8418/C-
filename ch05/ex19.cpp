#include <stdio.h>

int main() {
	/*
	int a = 5;
	int* pa;
	pa = &a;
	int** ppa;
	ppa = &pa;

	printf("%d ", ppa); // &pa
	printf("%d ", *ppa); // pa == &a
	printf("%d ", **ppa); // a
	*/
	
	/*
	int a = 10;
	int* pa;
	pa = &a;
	int** ppa;
	ppa = &pa;

	printf("a�� ���� %d", a); //10
	printf("a�� �ּҰ��� %d", &a); // &a

	printf("pa�� ���� %d", pa); // &a
	printf("pa�� �ּҰ��� %d", &pa); // &pa

	printf("ppa�� ���� %d", ppa); // &pa
	printf("pa�� �� �Ǵ� a�� �ּҰ� %d", *ppa); //&a
	printf("a�� ���� %d", **ppa); // a�� ��

	*/

	/*
	int a[5] = {100, 3,5,7,9};
	int* pArr;
	pArr = a;

	printf("%d\n", pArr); // �迭 a�� �ּҰ�
	printf("%d\n", *pArr); // 1. a�� ù��° ��
	printf("%d\n", *(pArr+1));

	pArr++;
	printf("%d\n", *pArr);
	*/

	/*
	int arr[3] = { 1,2,3 };
	int(*pa)[3] = &arr;

	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(pa)[i]);
	}
	*/

	int matrix[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	//printf("matrix[1][2]: %d\n", matrix[1][2]);

	int(*p)[4] = matrix;
	//printf("p[1][2]: %d\n", p[1][2]);

	/*
	for (int i = 0; i < 4; i++) {
		//printf("p[1][%d]: %d\n",i, p[1][i]);
		printf("%d ", p[1][i]);
	}
	*/
	/*
	int (*pp)[4];
	pp = &matrix[1];

	for (int i = 0; i < 4; i++) {
		printf("%d ", (*pp)[i]);
	}
	*/

	char words[4][7] = {
		"hello",
		"world",
		"doodle",
		"google"
	};

	char* ptr = words[2];
	//printf("Before: %s\n", words[2]);

	int num;
	char val;


	while (true) {
		printf("�ٲٰ� ���� �ܾ �����ϼ���.(1~4) 0�Է½� ���� :");
		scanf_s("%d", &num);
		if (num == 0) {
			printf("����");
			return 0;
		}
		getchar();
		printf("������ ���ڸ� �Է��ϼ���.");
		scanf_s("%c", &val);

		if (num >= 1 && num <=4) {
			words[num-1][2] = val;

			for (int i = 0; i < 4; i++) {
				printf("%s \n", words[i]);
			}
		}
		else {
			printf("���� %d�� �Է��ϼ̽��ϴ�.\n", num);
			printf("�ٲٰ� ���� �ܾ �� �� �����ϼ̽��ϴ�. 0 ~ 3���� �Է����ּ���.\n");
		}
	}

}