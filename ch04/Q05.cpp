#include <stdio.h>

int main() {
	int   kor, eng, math;
	float avr;


	printf("����: ");
	scanf("%d", &kor);
	printf("����: ");
	scanf("%d", &eng);
	printf("����: ");
	scanf("%d", &math);


	if (kor > 100 || eng > 100 || math > 100) {
		if (kor > 100) {
			printf("���� ");
	     }
		if (eng > 100) {
			printf("���� ");
		}
		if (math > 100) {
			printf("���� ");
		}
		printf("������ �� �� �Է� �ƽ��ϴ�. \n");
	}
	else {
		avr = (kor + eng + math) / 3.0;
		printf("��� %0.1f���̰� ", avr);
		if (avr >= 95) {
			printf("������ A+ �Դϴ�.");
		}
		else if (avr >= 90) {
			printf("������ A �Դϴ�.");
		}
		else if (avr >= 85) {
			printf("������ B+ �Դϴ�.");
		}
		else if (avr >= 80) {
			printf("������ B �Դϴ�.");
		}
		else if (avr >= 75) {
			printf("������ C+ �Դϴ�.");
		}
		else if (avr >= 70) {
			printf("������ C �Դϴ�.");
		}
		else if (avr >= 60) {
			printf("������ D �Դϴ�.");
		}
		else {
			printf("������ F �Դϴ�.");
		}

	}
}
