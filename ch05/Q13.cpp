#include <stdio.h>

int main(){
	/*
	// 1.
	int ar[5] = {2,3,-7,1,4};
    int* p;

	p = ar+1;

	printf("두번째 주소 %d, 값 %d \n", p, *(p));
	p++;
	printf("세번째 주소 %d, 값 %d \n", p, *(p));
	*/

	// 2.
	int x, y;
	int* px, * py, * tmp;

	px = &x;
	py = &y;
	scanf_s("%d", px);
	x = *px;
	printf("X값:%d\n", x);
	scanf_s("%d", py);
	y = *py;
	printf("X값:%d\n", y);

	tmp = px;
	px = py;
	py = tmp;
	printf("X값:%d\n", *px);
	printf("Y값:%d\n", *py);

}