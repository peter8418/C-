#include <stdio.h>

enum Day {
	MONDAY, TUESDAY, WENDESDAY, THURSDAY, FRIDAY, SATRUDAY, SUNDAY
};
enum Grade {
	BRONZE, SLIVER, GOLD, DIAMOND, VIP, VVIP
};

struct CGVMember {
	char nickname[100];
	enum Grade tier;
};

void canHegetPopcorn(enum Grade a) {
	if (a == BRONZE || a == SLIVER) {
		printf("���ϴ� ������ ���� �ڰ��� �����ϴ�.\n");
	}
	else {
		printf("���ϴ� ������ ���� �� �ֽ��ϴ�.\n");
	}
}

int main() {
	/*
	enum Day a = FRIDAY;

	if (a == FRIDAY) {
		printf("�ұ� ��Ƽ!\n");
	}
	printf("��");
	*/

	struct CGVMember jenny = { "jenny mega", GOLD };

	canHegetPopcorn(jenny.tier);

	struct CGVMember jenny1 = { "jenny mega1",  SLIVER };

	canHegetPopcorn(jenny1.tier);
}