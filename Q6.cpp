#include <stdio.h>

int main() {
	int a[5][5];
	int num;
	num = 1;
	/*
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a[i][j] = num++;
		}
	}

	for (int i = 0; i < 5;i++) {
		for(int j = 0; j < 5; j++){
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	*/

	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < 5; j++) {
				a[i][j] = num++;
				//printf("%4d", a[i][j]);
			}
		}
		else {
			for (int j = 4; j >= 0; j--) {
				a[i][j] = num++;
				//printf("%4d", a[i][j]);
			}
		}

		printf("\n");
	}

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {
			printf("%4d", a[i][j]);
		}
	
		printf("\n");

	}

}