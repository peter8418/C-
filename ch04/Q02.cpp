#include <stdio.h>

int main() {
	int month;

	printf("�� �Է� (1~12��): ");
	scanf("%d", &month);
	/*
	if (month == 12 || month == 1 || month == 2) {
		printf("������ �ܿ��Դϴ�.\n");
	}
	else if (month == 3 || month == 4 || month == 5) {
		printf("������ ���Դϴ�.\n");
	}
	else if (month == 6 || month == 7 || month == 8) {
		printf("������ �����Դϴ�.\n");
	}
	else if (month == 9 || month == 10 || month == 11) {
		printf("������ �����Դϴ�.\n");
	}
	else {
		printf("���� ���Դϴ�.\n");
	}
	*/

	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("������ �ܿ��Դϴ�.\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("������ ���Դϴ�.\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("������ �����Դϴ�.\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("������ �����Դϴ�.\n");
		break;
	default:
		printf("���� ���Դϴ�.\n");
		break;
	}
}