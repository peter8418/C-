#include <stdio.h>

int main() {
	float num[5];
	float sum;
	float average;
	float max;

	sum = 0;
	average = 0;
	max = 0;

	printf("숫자입력:");
	for (int i = 0; i < 5; i++) {
		scanf_s("%f", &num[i]);
	}

	for (int i = 0; i < 5; i++) {
		sum = sum + num[i];
	}
	average = sum / 5;
	printf("합: %f, 평균: %f \n",  sum, average);

	for (int i = 0; i < 5; i++) {
		if (max < num[i]) {
			max = num[i];
		}
	}

	printf("최대값: %f", max);
}