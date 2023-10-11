#include <stdio.h>

int main() {
	/*
	int x;
	x = 4;
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			if (j >= x ) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
		x--;

	}
	*/

	int x, y;
	int in;
	printf("숫자 입력:");
	scanf("%d", &in);

	/*
	int x,y;
	//int in = 4;
	x = in;
	y = 0;
	for (int i = 0; i <= in; i++) {
		for (int j = 0; j <= in; j++) {
			if (j >= x ) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		for (int k = 1; k <= in; k++) {
			if (k > y) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
		x--;
		y++;

	}
	*/


	//int in = 3;
	x = in;
	y = 0;
	for (int i = 0; i <= in; i++) {
		for (int j = 0; j <= in; j++) {
			if (j >= x) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		for (int k = 1; k <= in; k++) {
			if (k > y) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
		x--;
		y++;

	}
	x = 0;
	y = in-1;
	for (int i = 0; i <= in; i++) {
		for (int j = 0; j <= in; j++) {
			if (j > x) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		for (int k = 1; k <= in; k++) {
			if (k > y) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
		x++;
		y--;
	}
}