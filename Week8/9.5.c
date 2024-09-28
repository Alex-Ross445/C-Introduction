#include <stdio.h>

void printchar(char ch, int n);

int main() {
	int n;
	do {
	printf("Insert numbers of line: ");
	scanf("%d", &n);
	} while (n <= 0);

	char ch;
	printf("Insert character you want to print: ");
	scanf(" %c", &ch);

	for (int i = 1; i <= n; ++i)
	{
		printchar(ch, i);
	}

	return 0;
}

void printchar(char ch, int n) {
	for (int i = 1; i <= n; ++i)
	{
		printf("%c", ch);
	}
	printf("\n");
}