#include <stdio.h>

int main() {
	/*
   // 포인터 (메모리 조작 연산자)
	int a = 1;

	printf("%d\n", a);
	printf("%p\n", &a);

	int b = 2;
	printf("%d\n", b);
	printf("%p\n", &b);

	int c = 3;
	printf("%d\n", c);
	printf("%p\n", &c);

	// &(주소 연산자)
	// *(참조 연산자)
	int* pa;
	int* pb;
	int* pc;
	*/

	/*
	int a = 1;

	int* pa;
	pa = &a;
	printf("%d\n", &a); // a의 주소값
	printf("%d\n", pa); // a의 주소값
	printf("%d\n", *pa); // 1

	*pa = 3;
	printf("%d\n", *pa);
	*/

	/*
	int a = 10;
	int* pa;
	pa = &a;
	printf("a의 값은 %d\n", a);
	printf("a의 주솟값은 %d\n", &a);
	printf("a의 주솟값은 %d\n", pa);
	printf("a의 값은 %d\n", *pa);

	*pa = 100;
	printf("a의 값은 %d\n", a);
	
	int b;
	pa = &b;

	*pa = 1000;
	printf("b의 값은 %d\n", b);
	*/

	int num;
	int* pval;
	int bit[3] = {0,0,0};


	while(true){
		printf("프로그램: 비트코인\n");
		printf("1. 비트코인 시세 수정하기\n");
		printf("2. 이더리움 시세 수정하기\n");
		printf("3. 도지코인 시세 수정하기\n");
		printf("4. 총 시세 보기\n");
		printf("5. 프로그램 종료\n");
		printf("입력:");

		scanf_s("%d", &num);

		switch (num) {
		   case 1:
			   printf("  - 비트코인 시세 수정 ");
			   pval = &bit[0];
			   scanf_s("%d", pval);
			   break;
		   case 2:
			   printf("  - 이더리움 시세 수정 ");
			   pval = &bit[1];
			   scanf_s("%d", pval);
			   break;
		   case 3:
			   printf("  - 도지코인 시세 수정 ");
			   pval = &bit[2];
			   scanf_s("%d", pval);;
		   case 4:
			   pval = &bit[0];
			   printf("비트코인 %d\n",*pval);
			   pval = &bit[1];
			   printf("이더코인 %d\n", *pval);
			   pval = &bit[2];
			   printf("도지코인 %d\n", *pval);
			   break;
		   case 5: 
		      return 0;
		}

	}


}