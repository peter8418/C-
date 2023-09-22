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

	printf("a의 값은 %d", a); //10
	printf("a의 주소값은 %d", &a); // &a

	printf("pa의 값은 %d", pa); // &a
	printf("pa의 주소값은 %d", &pa); // &pa

	printf("ppa의 값은 %d", ppa); // &pa
	printf("pa의 값 또는 a의 주소값 %d", *ppa); //&a
	printf("a의 값은 %d", **ppa); // a의 값

	*/

	/*
	int a[5] = {100, 3,5,7,9};
	int* pArr;
	pArr = a;

	printf("%d\n", pArr); // 배열 a의 주소값
	printf("%d\n", *pArr); // 1. a의 첫번째 값
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
		printf("바꾸고 싶은 단어를 선택하세요.(1~4) 0입력시 종료 :");
		scanf_s("%d", &num);
		if (num == 0) {
			printf("종료");
			return 0;
		}
		getchar();
		printf("변경할 문자를 입력하세요.");
		scanf_s("%c", &val);

		if (num >= 1 && num <=4) {
			words[num-1][2] = val;

			for (int i = 0; i < 4; i++) {
				printf("%s \n", words[i]);
			}
		}
		else {
			printf("현재 %d를 입력하셨습니다.\n", num);
			printf("바꾸고 싶은 단어를 잘 못 선택하셨습니다. 0 ~ 3까지 입력해주세요.\n");
		}
	}

}