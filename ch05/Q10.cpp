#include <stdio.h>

int main() {

	/*
	int num[1000];
	int max = 0;
	int input;

	printf("�Է�:");
    scanf_s("%d", &input);

	printf("�����Է�:");

	for (int i = 0; i < input; i++) {
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < input; i++ ) {
		if (max < num[i]) {
			max = num[i];
		}
	}

	printf("���� ū �� %d", max);

	*/
	
	char a = 'a';
	char s[6] = "kim";
	char k[5] = {'a','b','c','d'};

	char  b[] = "hello\n workl";

	char c[] = "megastudy";
	printf("%c", c[3]); // a�� ����
	c[0] = 'n'; // negastudy
	c[1] = 'a'; // nagastudyy
	printf("%s", c); //nagastudy;

	//���ڿ� �Է� �ޱ�

	char m[1000];
	scanf_s("%s", m);


}