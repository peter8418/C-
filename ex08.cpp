#include <stdio.h>

int main() {
	char s[] = "doodle";

	printf("%c\n", s[0]);
	s[0] = 'g';
	s[3] = 'g';
	printf("%s\n", s);

	char s1[1000];

	scanf("%s",s1);
	printf("%s\n",s1);
}