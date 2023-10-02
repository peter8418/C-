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
		printf("귀하는 팝콘을 먹을 자격이 없습니다.\n");
	}
	else {
		printf("귀하는 팝콘을 먹을 수 있습니다.\n");
	}
}

int main() {
	/*
	enum Day a = FRIDAY;

	if (a == FRIDAY) {
		printf("불금 파티!\n");
	}
	printf("끝");
	*/

	struct CGVMember jenny = { "jenny mega", GOLD };

	canHegetPopcorn(jenny.tier);

	struct CGVMember jenny1 = { "jenny mega1",  SLIVER };

	canHegetPopcorn(jenny1.tier);
}