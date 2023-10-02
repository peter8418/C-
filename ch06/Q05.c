#include <stdio.h>

typedef struct ingredients {
	int shots;
	int milks;
	int syrup;
} ingredients ;

typedef struct ediyaCoffee {
	char name[100];
	int  price;
	char size;
	int  cal;
	struct ingredients ii;
} ediya;

typedef struct Custom {
	char nick_name[50];
	//list
	char bought_list[100][50];
	//{{"a"},{"b"},{"c"},{"d"}}
	int  bought_amount;
	int  bought_payment;
} Custom;


void buyCoffee(Custom *customer, ediya coffee) {
	customer->bought_amount = customer->bought_amount+ 1;
	customer->bought_payment = customer->bought_payment + customer->bought_payment;
}

int main() {

	ediya a_coffee = { 
		.name="americano_0", 
		.price= 4500, 
		.size = 'R', 
		.cal = 100, 
		.ii = {2,100,0} 
	};
	ediya b_coffee = {
	.name = "americano_1",
	.price = 5000,
	.size = 'R',
	.cal = 200,
	.ii = {3,200,1}
	};
	ediya c_coffee = {
	.name = "americano_2",
	.price = 5500,
	.size = 'R',
	.cal = 300,
	.ii = {4,300,2}
	};

	Custom kim_a = {
		.nick_name="kim",
		.bought_amount = 0, 
		.bought_payment = kim_a.bought_amount *a_coffee.price
	};
	
	//printf("%s %s %d", kim_a.nick_name, kim_a.bought_list, kim_a.bought_payment);
	
	buyCoffee(&kim_a, a_coffee);
	buyCoffee(&kim_a, a_coffee);
	buyCoffee(&kim_a, a_coffee);
	buyCoffee(&kim_a, a_coffee);

	printf("%d번 구매하고, %d 지출하였다.", kim_a.bought_amount, kim_a.bought_payment);
}