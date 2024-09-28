#include <stdio.h>

int main() {
	int a;
	printf("Input number: ");
	scanf("%d", &a);
	for (int i = 0; i < a; ++i)
	{
		printf("%-2d, %d\n", i, i * i);
	}

	return 0;
}