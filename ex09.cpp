#include <stdio.h>
#include <string.h>

int main() {
	char s[100] = "hello";
	int len = strlen(s);

	printf("�迭�� ĭ��: %d\n", sizeof(s)/sizeof(char));
	printf("���ڿ��� ����: %d\n", len);
}