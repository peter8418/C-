#include <stdio.h>

int main(){
	/*
	// 1.
	int ar[5] = {2,3,-7,1,4};
    int* p;

	p = ar+1;

	printf("�ι�° �ּ� %d, �� %d \n", p, *(p));
	p++;
	printf("����° �ּ� %d, �� %d \n", p, *(p));
	*/

	// 2.
	int x, y;
	int* px, * py, * tmp;

	px = &x;
	py = &y;
	scanf_s("%d", px);
	x = *px;
	printf("X��:%d\n", x);
	scanf_s("%d", py);
	y = *py;
	printf("X��:%d\n", y);

	tmp = px;
	px = py;
	py = tmp;
	printf("X��:%d\n", *px);
	printf("Y��:%d\n", *py);

}