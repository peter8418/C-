#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		printf("%d ¹øÂ° : %d \n", i + 1, rand()%6+1);
	}
	//rand() % 6 + 1;// 0~5

}