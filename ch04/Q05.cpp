#include <stdio.h>

int main() {
	int   kor, eng, math;
	float avr;


	printf("국어: ");
	scanf("%d", &kor);
	printf("영어: ");
	scanf("%d", &eng);
	printf("수학: ");
	scanf("%d", &math);


	if (kor > 100 || eng > 100 || math > 100) {
		if (kor > 100) {
			printf("국어 ");
	     }
		if (eng > 100) {
			printf("영어 ");
		}
		if (math > 100) {
			printf("수학 ");
		}
		printf("점수가 잘 못 입력 됐습니다. \n");
	}
	else {
		avr = (kor + eng + math) / 3.0;
		printf("평균 %0.1f점이고 ", avr);
		if (avr >= 95) {
			printf("학점은 A+ 입니다.");
		}
		else if (avr >= 90) {
			printf("학점은 A 입니다.");
		}
		else if (avr >= 85) {
			printf("학점은 B+ 입니다.");
		}
		else if (avr >= 80) {
			printf("학점은 B 입니다.");
		}
		else if (avr >= 75) {
			printf("학점은 C+ 입니다.");
		}
		else if (avr >= 70) {
			printf("학점은 C 입니다.");
		}
		else if (avr >= 60) {
			printf("학점은 D 입니다.");
		}
		else {
			printf("학점은 F 입니다.");
		}

	}
}
