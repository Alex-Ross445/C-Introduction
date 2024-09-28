#include <stdio.h>

int main() {
	char name[20];
	printf("Ban ten la gi?\n");
	scanf("%s", name);
	printf("Xin chao %s!\n", name);

	char class[4];
	printf("Ban co phai lop VP K67 ko?\n");
	scanf("%s", class);
	if (class[0] == 'k') {
		printf("Tam biet\n");
	}else if (class[0] == 'c') {
		printf("Xin chao\n");
	}

	return 0;
}