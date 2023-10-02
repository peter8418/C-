#include <stdio.h>
//int cnt;
//cnt = 0;

typedef struct MovieScreening {
	char name[50];
	char time[50];
	int  seat[100];

}MovieScreening;

void reserve(MovieScreening *m, int *cnt) {
	int num;
	//int* cnt;
	printf("좌석: ");
	scanf_s("%d", &num);


	if (m->seat[num] == 1) {
		printf("%d 좌석은 예약이 불가능 합니다.\n", num);
	}
	else {
		m->seat[num] = 1;
		printf("%d 좌석은 예약이 되었습니다.\n", num);
		*cnt++;
	}
	m->seat[num] = 1;
	printf("cnt : %d\n", *cnt);
	//printf("예약되었습니다. seat num: %d \n", num);
	//printf("seat  : % d \n", m.seat[num]);
	//printf("seat  : % d \n", m.seat[num-1]);
};

void show(MovieScreening *m) {

	for (int i = 0; i < 100; i++) {
		if (m->seat[i] == 1) {
			printf("seat %d  : 예약됨 \n", i);
		}
		else {
			printf("seat %d  : 예약가능 \n", i);
		}
	}

};


int main() {
	int* cnt1;


	MovieScreening m1 = {
	.name = "Interstellar",
	.time = "15:00",
	.seat = {0},
	};


	while (cnt1 != 5) {
		reserve(&m1, &cnt1);
		//cnt1 = *cnt;
	}
    show(&m1);


	/*
	for (int i = 0; i < 100; i++) {
		Interstellar.seat[i] = 0;
	}
		
	for (int i = 0; i < 100; i++) {
		printf("%s %d\n", Interstellar.name, Interstellar.seat[i]);
	}
	*/


}