#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	/*
	int a, b, c;
	int flag =1;
	a = rand() % 9 + 1;
	b = rand() % 9 + 1;
	c = rand() % 9 + 1;
	while (flag == 1) {
		if (a == b || a == c || b == c) {
			srand(time(NULL));
			a = rand() % 9 + 1;
			b = rand() % 9 + 1;
			c = rand() % 9 + 1;
		}
		else {
			flag = 0;
		}

	}

	printf("%d \n", a);
	printf("%d \n", b);
	printf("%d \n", c);
	*/
	int a[1000];
	int last;
	last = 6;
	srand(time(NULL));
	//printf("%d\n", time(NULL));
	
	for (int i = 0; i < last; i++) {
		a[i] = rand() % 9 + 1;
	}

	//a[0] = 1;
	//a[1] = 1;
	//a[2] = 1;

	for (int i = 0; i < last; i++) {
		printf("initial: %d \n", a[i]);
	}
	for (int i = 0; i < last; i++) {
		for (int j = 1; j < last; j++) {
			if (a[i] == a[j]) {
				a[i] = rand() % 9 + 1;
				printf("---%d \n", a[i]);
			}
		}
	}

	for (int i = 0; i < last; i++) {
		printf("%d \n", a[i]);
	}


}