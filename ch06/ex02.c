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

	printf("������ %d�Դϴ�.\n", width *height);

	string name = "megastudy";


	struct Student kim = {27, "kim jh","computer"}; // ���� �� �ʱ�ȭ
	printf("%s�� ������ %s�̰� id�� %d �Դϴ�.\n", kim.name, kim.major, kim.id);

	kim.id = 100;
	//kim.name[0] = 'k';
	//kim.name[1] = 'i';
	//kim.name[2] = 'm';
	//kim.name[3] = '\0';

	strcpy_s(kim.name, sizeof(kim.name), "kim mega");
	//kim.name = "kim";
	//kim.major = "c���";

	//kim.major[0] = 'c';
	//kim.major[1] = 'o';
	//kim.major[2] = 'm';
	//kim.major[3] = '\0';
	strcpy_s(kim.major, sizeof(kim.major), "com");

	printf("%s�� ������ %s�̰� id�� %d �Դϴ�.", kim.name, kim.major, kim.id);
}