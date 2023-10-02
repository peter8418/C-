#include <stdio.h>
/*
struct ingredients {
	int shots;
	int milks;
	int syrup;
};

struct starbuckCoffee {
	char name[100];
	int  price;
	char size;
	int  cal;
	struct ingredients ii;
};

int main() {

	struct starbuckCoffee  b = { "americano", 4500, 'G', 100,{2,150,0}};
	printf("name : %s, price: %d, size: %c, cal %d K, 원두: %d, 우유:%d, 시럽: %d\n", b.name, b.price, b.size, b.cal, b.ii.shots, b.ii.milks, b.ii.syrup);

}
*/


typedef struct Student {
	int id;
	char name[100];
	char major[100];
} STUDENT;

int main() {

	STUDENT lee;

}
