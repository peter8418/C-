#include <stdio.h>

int main() {
	int choice;

	printf("�� ����: 1\n");
	printf("�ҷ�����: 2\n");
	printf("����: 3\n");
	printf("ũ����: 4\n");
	scanf("%d", &choice);

	if (choice == 1) {
		printf("�� ����.\n");
	}
	else if (choice == 2) {
		printf("�ҷ�����.\n");
	}
	else if (choice == 3) {
		printf("����.\n");
	}
	else if (choice == 4) {
		printf("ũ����.\n");
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
}