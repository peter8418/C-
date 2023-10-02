#include <stdio.h>
#include <string.h>


typedef int length;
typedef char* string;

struct Student {
	int id;
	char name[100];
	char major[100];
};

int main() {
	//int size = 10;
	//length size = 100;
	length width = 100;
	length height = 10;

	printf("면적은 %d입니다.\n", width *height);

	string name = "megastudy";


	struct Student kim = {27, "kim jh","computer"}; // 선언 및 초기화
	printf("%s의 전공은 %s이고 id는 %d 입니다.\n", kim.name, kim.major, kim.id);

	kim.id = 100;
	//kim.name[0] = 'k';
	//kim.name[1] = 'i';
	//kim.name[2] = 'm';
	//kim.name[3] = '\0';

	strcpy_s(kim.name, sizeof(kim.name), "kim mega");
	//kim.name = "kim";
	//kim.major = "c언어";

	//kim.major[0] = 'c';
	//kim.major[1] = 'o';
	//kim.major[2] = 'm';
	//kim.major[3] = '\0';
	strcpy_s(kim.major, sizeof(kim.major), "com");

	printf("%s의 전공은 %s이고 id는 %d 입니다.", kim.name, kim.major, kim.id);
}