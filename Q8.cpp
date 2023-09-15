#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int seat[9][2] = { 0, };
	int num0, num1;
	int cnt=0;

	while (cnt != 18) {
		printf("예약하실 좌석을 입력해주세요(총18석):");
		scanf("%d %d", &num0, &num1);

		if (num0 < 9 && num1 < 2) {
			if (seat[num0][num1] == 0) {
				seat[num0][num1] = 1;
				printf("예약이 완료 됐습니다. seat[%d][%d]\n", num0, num1);
				cnt=cnt+1;
			}
			else {
				printf("예약이 완료된 자리 입니다.\n");
				for (int i = 0; i < 9; i++) {
					for (int j = 0; j < 2; j++) {
						if (seat[i][j] == 0) {
							printf("seat[%d][%d]\n", i, j);
						}
					}
				}
			}
		}
		else {
			printf("잘못 입력하셨습니다.");
		}
		//printf("cnt: %d", cnt);
	}
	printf("예약이 끝났습니다.\n");

}