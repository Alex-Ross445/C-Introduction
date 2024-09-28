#include <stdio.h>

int main() {
	// for (int i = 0; i <= 10; i++)
	// {
	// 	printf("%d ", i);
	// 	printf("\n");
	// }

	int i = 1;
	for ( ; i <= 10; )
	{
		printf("%d ", i);
		i++;
	}
	printf("\n");

	for (int i = 0, j = 1; i * i < 100; i++, j = i + 1)
	{
		printf("i = %d, j = %d\n", i, j);
	}

	for (int i = 10; i >= 0; i--)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 0; i < 100; i = i + 3)
	{
		printf("%d ", i);
	}
	printf("\n");

	// int x = 0;
	// for (int i = 1; i < 100; ++i)
	// {
	// 	x += i;
	// 	if ((x % i) == 0)
	// 	{
	// 		i--;
	// 	}
	// 	printf("i = %d, x = %d\n", i, x);
	// }

	char c;
	int count;

	for (count = 0; (c = getchar() != EOF); count++) //EOF: end of file: triggered by Ctrl + D on Linux or Ctrl + Z on Wins
	{
	}
	printf("The number of inputed char is %d\n", count);

	return 0;
}