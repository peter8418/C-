#include <stdio.h>

int main() {
	int i,j,k;
	char str[1000];
	printf("���� �Է�: ");
	scanf("%d", &i);

	printf("���ڿ� �Է��ϼ���: ");
	scanf("%s", str);

	printf("1.¦�� 2.Ȧ��: ");
	scanf("%d", &j);

	if (j==1 || j==2) {
		for (k = j-1; k < i; k=k+2) {

				printf("%c", str[k]);
		}

	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}
}