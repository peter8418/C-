#include <stdio.h>

int main() {
	float num[5];
	float sum;
	float average;
	float max;

	sum = 0;
	average = 0;
	max = 0;

	printf("�����Է�:");
	for (int i = 0; i < 5; i++) {
		scanf_s("%f", &num[i]);
	}

	for (int i = 0; i < 5; i++) {
		sum = sum + num[i];
	}
	average = sum / 5;
	printf("��: %f, ���: %f \n",  sum, average);

	for (int i = 0; i < 5; i++) {
		if (max < num[i]) {
			max = num[i];
		}
	}

	printf("�ִ밪: %f", max);
}