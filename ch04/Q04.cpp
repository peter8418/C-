#include <stdio.h>

int main() {
	int a;

	scanf("%d", &a);
	printf("%d�� ����� ", a);

	
	for (int b = 1; b <= a; b++) {
		if (a % b == 0) {
			
			if (b==a) {
				printf("%d�Դϴ�.", b);
			}
			else {
				printf("%d, ", b);
			}
			
			
		}
	}

}