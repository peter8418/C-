#include <stdio.h>

int main() {
	int month;
	int temp;

	printf("�� �Է� (1~12��): ");
	scanf("%d", &month);
	printf("�µ� �Է�:");
	scanf("%d", &temp);
	if ((temp <=37 && temp >=-15) || (month >= 1 && month <= 12)) {
		if (month == 12 || month == 1 || month == 2) {
			if (temp <= 2 && temp >= -15) {
				printf("������ �ܿ��Դϴ�. �µ��� %d���Դϴ�.\n", temp);
			}
			else {
				printf("������ �µ��� ���� �ʽ��ϴ�.\n");
			}
		}
		else if (month == 3 || month == 4 || month == 5) {

			if (temp <= 15 && temp >= 3) {
				printf("������ ���Դϴ�. �µ��� %d���Դϴ�.\n", temp);
			}
			else {
				printf("������ �µ��� ���� �ʽ��ϴ�.\n");
			}
		}
		else if (month == 6 || month == 7 || month == 8) {
			if (temp <= 37 && temp >= 18) {
				printf("������ �����Դϴ�. �µ��� %d���Դϴ�.\n", temp);
			}
			else {
				printf("������ �µ��� ���� �ʽ��ϴ�.\n");
			}
		}
		else if (month == 9 || month == 10 || month == 11) {
			if (temp <= 15 && temp >= 3) {
				printf("������ �����Դϴ�. �µ��� %d���Դϴ�.\n", temp);
			}
			else {
				printf("������ �µ��� ���� �ʽ��ϴ�.\n");
			}
		}
		else {
			printf("������ �µ��� ���� �ʽ��ϴ�.\n");
		}
	}
	else {
		printf("�߸��� �Է��Դϴ�.");
	}

}