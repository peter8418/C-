#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int seat[9][2] = { 0, };
	int num0, num1;
	int cnt=0;

	while (cnt != 18) {
		printf("�����Ͻ� �¼��� �Է����ּ���(��18��):");
		scanf("%d %d", &num0, &num1);

		if (num0 < 9 && num1 < 2) {
			if (seat[num0][num1] == 0) {
				seat[num0][num1] = 1;
				printf("������ �Ϸ� �ƽ��ϴ�. seat[%d][%d]\n", num0, num1);
				cnt=cnt+1;
			}
			else {
				printf("������ �Ϸ�� �ڸ� �Դϴ�.\n");
				for (int i = 0; i < 9; i++) {
					for (int j = 0; j < 2; j++) {
						if (seat[i][j] == 0) {
							printf("seat[%d][%d]\n", i, j);
						}
					}
				}
			}
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�.");
		}
		//printf("cnt: %d", cnt);
	}
	printf("������ �������ϴ�.\n");

}