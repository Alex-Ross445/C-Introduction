#include <stdio.h>

int main() {
	int i, j;
	printf("           I  J\n");

	for (int i = 1; i < 4; ++i)
	{
		printf("Outer %6d\n", i);
		for (int j = 0; j < i; ++j)
		{
			printf("Inner %9d\n", j);
		}
	}

	return 0;
}