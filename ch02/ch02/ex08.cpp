#include <stdio.h>

int main() {
	int a = 5;
	printf("���� a�� ���� %d����!\n", a);

	a = a + 3;
	printf("a�� 3�� ���ߴ��� %d�� �Ǿ���!!!\n", a);

	int b = 5;
	printf("���� a�� ���� %d����!\n", b);
	b++;
	printf("1 �����ؼ� %d�� �ƴ�!\n", b);
	b--;
	printf("1 �����ؼ� %d�� �ƴ�!\n", b);

	int c = 5;
	int d;

	d = ++c;
	printf("=== ��ġ ���� ���� ===\n");
	printf("c = %d\n", c);
	printf("d = %d\n", d);

	d = c++;
	printf("=== ��ġ ���� ���� ===\n");
	printf("c = %d\n", c);
	printf("d = %d\n", d);

}