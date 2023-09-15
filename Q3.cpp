#include <stdio.h>

int main() {
	int i,j,k;
	char str[1000];
	printf("숫자 입력: ");
	scanf("%d", &i);

	printf("문자열 입력하세요: ");
	scanf("%s", str);

	printf("1.짝수 2.홀수: ");
	scanf("%d", &j);

	if (j==1 || j==2) {
		for (k = j-1; k < i; k=k+2) {

				printf("%c", str[k]);
		}

	}
	else {
		printf("잘못 입력하셨습니다.");
	}
}