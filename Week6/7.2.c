#include <stdio.h>

int main() {
	int a, i;
	printf("Input number: ");
	scanf("%d", &a);
	for (int i = 1; i < a; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			printf("*");
		}
	printf("\n");
	}

	for (int i = 9, j = 1; i >= 0 ; i--, j += 2)
	{
		for(int k = 1; k <= i; k++) {
			printf(" ");
		}
		for(int k = 1; k <= j; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}