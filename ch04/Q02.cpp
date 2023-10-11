#include <stdio.h>

int main() {
	int month;

	printf("월 입력 (1~12월): ");
	scanf("%d", &month);
	/*
	if (month == 12 || month == 1 || month == 2) {
		printf("계절은 겨울입니다.\n");
	}
	else if (month == 3 || month == 4 || month == 5) {
		printf("계절은 봄입니다.\n");
	}
	else if (month == 6 || month == 7 || month == 8) {
		printf("계절은 여름입니다.\n");
	}
	else if (month == 9 || month == 10 || month == 11) {
		printf("계절은 가을입니다.\n");
	}
	else {
		printf("없는 달입니다.\n");
	}
	*/

	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("계절은 겨울입니다.\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("계절은 봄입니다.\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("계절은 여름입니다.\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("계절은 가을입니다.\n");
		break;
	default:
		printf("없는 달입니다.\n");
		break;
	}
}