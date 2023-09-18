#include <stdio.h>

int main() {

	/*
	int num[1000];
	int max = 0;
	int input;

	printf("입력:");
    scanf_s("%d", &input);

	printf("숫자입력:");

	for (int i = 0; i < input; i++) {
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < input; i++ ) {
		if (max < num[i]) {
			max = num[i];
		}
	}

	printf("가장 큰 수 %d", max);

	*/
	
	char a = 'a';
	char s[6] = "kim";
	char k[5] = {'a','b','c','d'};

	char  b[] = "hello\n workl";

	char c[] = "megastudy";
	printf("%c", c[3]); // a가 나옴
	c[0] = 'n'; // negastudy
	c[1] = 'a'; // nagastudyy
	printf("%s", c); //nagastudy;

	//문자열 입력 받기

	char m[1000];
	scanf_s("%s", m);


}