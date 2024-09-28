#include "stdio.h"

int main() {
	int count = 0;
	char c;

	printf("Enter string: ");

	while ((c = getchar()) != EOF) {
		count++;
		// if you want to exclude spaces:
		// if (c != ' ')
		// {
		// 	count++
		// }
	}

	printf("Number of symbols: %d\n", count);

	char str[9];
	printf("Hay nhap vao mot chuoi\n");
	scanf("%[abcdef]", str);
	printf("Chuoi vua nhap la \"%s\"\n", str);

	return 0;
}