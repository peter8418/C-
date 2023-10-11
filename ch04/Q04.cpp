#include <stdio.h>

int main() {
	int a;

	scanf("%d", &a);
	printf("%d의 약수는 ", a);

	
	for (int b = 1; b <= a; b++) {
		if (a % b == 0) {
			
			if (b==a) {
				printf("%d입니다.", b);
			}
			else {
				printf("%d, ", b);
			}
			
			
		}
	}

}