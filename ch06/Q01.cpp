#include <stdio.h>
/*
int a, b;

void sum() {
	printf("a + b = %d\n", a + b);
}

void sub() {
	printf("a - b = %d\n", a - b);
}

int main() {
	printf("a�� �Է� :");
	scanf_s("%d", &a);

	printf("b�� �Է� :");
	scanf_s("%d", &b);

	sum();
	sub();
}
*/

// ���ϰ�(int,char...) �Լ��̸� (�Ű�����....){
// ����..
// ����..
// ����..
// return ��;
// }
/*
int sum(int x) {
	return x + 5;
}

int main() {
	int b = sum(10);
	printf("%d\n", b);
}
*/
/*
double divide(double a, double b) {
	return a / b;
}
*/

/*
char getscore(int result) {
	if (result <= 100 && result >= 90) {
		return 'A';
	}
	else if (result <= 90 && result >= 80) {
		return 'B';
	}
	else if (result <= 80 && result >= 70){
		return 'C';
	}
}

int main() {
	int a;

	printf("������ �Է��ϼ��� :");
	scanf_s("%d", &a);
	if (a >= 0 && a <= 100) {
		if (a >= 70) {
		   char c = getscore(a);

		   printf("��� : %c", c);
	    }
	    else {
		    printf("���� �����\n");
	    }
	}
	else {
		printf("0~100���� �Է����ּ���.");
	}
}
*/
/*
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	//printf("%d %d %d",*x,*y, temp);
}

int main() {
	int a, b;

	printf("a���� �Է��ϼ���:");
	scanf_s("%d", &a);

	printf("b���� �Է��ϼ���:");
	scanf_s("%d", &b);

	swap(&a,&b);

	printf("%d %d", a, b);

}
*/
/*
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int myArray[] = {1,2,3,4,5};
	printArray(myArray, 5);
	return 0;
}
*/

