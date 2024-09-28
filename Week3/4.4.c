#include "stdio.h"

int main() {
	int id;
	char code[3];
	printf("Input your code: ");
	scanf("%2s%*c%3d", code, &id);
	printf("Plane code: %s\n", code);
	printf("Plane number: %d\n", id);

	return 0;
}