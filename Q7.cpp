#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num[10];
	int max=0;
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		num[i] = rand() % 11;
		printf("%d \n",num[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (max <= num[i]) {
			max = num[i];
		}
	}
	printf("max: %d\n", max);
	for (int i = 0; i < 10; i++) {
		if (max == num[i]) {
			printf("index: %d ", i);
		}
	}




}