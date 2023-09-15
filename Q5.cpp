#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

	int num[3];
	int randnum[3];
	int strike, ball;
	int flag =1;
	strike = 0;
	ball = 0;


	//for (int i = 0; i < 3; i++) {
	//	printf("%d자리 %d:\n", i+1, num[i]);
	//}

	srand(time(NULL));
	for (int i = 0; i < 3; i++) {
		randnum[i] = rand() % 9 + 1;
	}

	//for (int i = 0; i < 3; i++) {
	//	printf("%d자리 %d:\n", i + 1, randnum[i]);

	//}

	while (flag == 1) {
		if (randnum[0] == randnum[1] || randnum[0] == randnum[2] || randnum[1] == randnum[2]) {
			srand(time(NULL));
			randnum[0] = rand() % 9 + 1;
			randnum[1] = rand() % 9 + 1;
			randnum[2] = rand() % 9 + 1;
		}
		else {
			flag = 0;
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d자리 %d:\n", i + 1, randnum[i]);
    }

	flag = 1;

	while (flag ==1) {
		strike = 0;
		ball = 0;
		printf("3자리 숫자 입력\n");
		for (int i = 0; i < 3; i++) {
			printf("%d자리:", i + 1);
			scanf("%d", &num[i]);
		}

		if (num[0] != num[1] && num[0] != num[2] && num[1] != num[2]) {


			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (randnum[i] == num[j]) {
						if (i == j) {
							strike++;
						}
						else {
							ball;
						}
					}
				}
			}


			printf("%d Strike, %d ball ", strike, ball);

			printf("\n ");
			if (strike == 0 && ball == 0) {
				printf("out\n");
			}

			if (strike == 3) {
				flag = 0;
			}


		}
		else {
			printf("잘못된 입력입니다.\n");
		}
	}

}
