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
	printf("a값 입력 :");
	scanf_s("%d", &a);

	printf("b값 입력 :");
	scanf_s("%d", &b);

	sum();
	sub();
}
*/

// 리턴값(int,char...) 함수이름 (매개변수....){
// 로직..
// 로직..
// 로직..
// return 값;
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

	printf("점수를 입력하세요 :");
	scanf_s("%d", &a);
	if (a >= 0 && a <= 100) {
		if (a >= 70) {
		   char c = getscore(a);

		   printf("결과 : %c", c);
	    }
	    else {
		    printf("ㅅㄱ 재수강\n");
	    }
	}
	else {
		printf("0~100까지 입력해주세요.");
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

	printf("a값을 입력하세요:");
	scanf_s("%d", &a);

	printf("b값을 입력하세요:");
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

