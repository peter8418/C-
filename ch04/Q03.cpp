#include <stdio.h>

int main() {
	int month;
	int temp;

	printf("월 입력 (1~12월): ");
	scanf("%d", &month);
	printf("온도 입력:");
	scanf("%d", &temp);
	if ((temp <=37 && temp >=-15) || (month >= 1 && month <= 12)) {
		if (month == 12 || month == 1 || month == 2) {
			if (temp <= 2 && temp >= -15) {
				printf("계절은 겨울입니다. 온도는 %d도입니다.\n", temp);
			}
			else {
				printf("계절과 온도가 맞지 않습니다.\n");
			}
		}
		else if (month == 3 || month == 4 || month == 5) {

			if (temp <= 15 && temp >= 3) {
				printf("계절은 봄입니다. 온도는 %d도입니다.\n", temp);
			}
			else {
				printf("계절과 온도가 맞지 않습니다.\n");
			}
		}
		else if (month == 6 || month == 7 || month == 8) {
			if (temp <= 37 && temp >= 18) {
				printf("계절은 여름입니다. 온도는 %d도입니다.\n", temp);
			}
			else {
				printf("계절과 온도가 맞지 않습니다.\n");
			}
		}
		else if (month == 9 || month == 10 || month == 11) {
			if (temp <= 15 && temp >= 3) {
				printf("계절은 가을입니다. 온도는 %d도입니다.\n", temp);
			}
			else {
				printf("계절과 온도가 맞지 않습니다.\n");
			}
		}
		else {
			printf("계절과 온도가 맞지 않습니다.\n");
		}
	}
	else {
		printf("잘못된 입력입니다.");
	}

}