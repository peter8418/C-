#include <stdio.h>

int main() {
	int i,j;


	for (int i = 2; i <= 9; i++) {
		printf("%d�� \n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d \n", i, j, i*j);
		}
	}
}