#include <stdio.h>

int main() {
	/*
   // ������ (�޸� ���� ������)
	int a = 1;

	printf("%d\n", a);
	printf("%p\n", &a);

	int b = 2;
	printf("%d\n", b);
	printf("%p\n", &b);

	int c = 3;
	printf("%d\n", c);
	printf("%p\n", &c);

	// &(�ּ� ������)
	// *(���� ������)
	int* pa;
	int* pb;
	int* pc;
	*/

	/*
	int a = 1;

	int* pa;
	pa = &a;
	printf("%d\n", &a); // a�� �ּҰ�
	printf("%d\n", pa); // a�� �ּҰ�
	printf("%d\n", *pa); // 1

	*pa = 3;
	printf("%d\n", *pa);
	*/

	/*
	int a = 10;
	int* pa;
	pa = &a;
	printf("a�� ���� %d\n", a);
	printf("a�� �ּڰ��� %d\n", &a);
	printf("a�� �ּڰ��� %d\n", pa);
	printf("a�� ���� %d\n", *pa);

	*pa = 100;
	printf("a�� ���� %d\n", a);
	
	int b;
	pa = &b;

	*pa = 1000;
	printf("b�� ���� %d\n", b);
	*/

	int num;
	int* pval;
	int bit[3] = {0,0,0};


	while(true){
		printf("���α׷�: ��Ʈ����\n");
		printf("1. ��Ʈ���� �ü� �����ϱ�\n");
		printf("2. �̴����� �ü� �����ϱ�\n");
		printf("3. �������� �ü� �����ϱ�\n");
		printf("4. �� �ü� ����\n");
		printf("5. ���α׷� ����\n");
		printf("�Է�:");

		scanf_s("%d", &num);

		switch (num) {
		   case 1:
			   printf("  - ��Ʈ���� �ü� ���� ");
			   pval = &bit[0];
			   scanf_s("%d", pval);
			   break;
		   case 2:
			   printf("  - �̴����� �ü� ���� ");
			   pval = &bit[1];
			   scanf_s("%d", pval);
			   break;
		   case 3:
			   printf("  - �������� �ü� ���� ");
			   pval = &bit[2];
			   scanf_s("%d", pval);;
		   case 4:
			   pval = &bit[0];
			   printf("��Ʈ���� %d\n",*pval);
			   pval = &bit[1];
			   printf("�̴����� %d\n", *pval);
			   pval = &bit[2];
			   printf("�������� %d\n", *pval);
			   break;
		   case 5: 
		      return 0;
		}

	}


}