#include <stdio.h>

float F2C(float n);

int main() {
	float n;
	do {
		printf("Insert Farenheit degree: ");
		scanf("%f", &n);
	} while (n <= 0);

	printf("| Farenheit | Celsius |\n");
	printf("-----------------------\n");
	for (int i = 1; i <= n; ++i)
	{
		printf("|%11d|%8.2f |\n", i, F2C(i));
	}
	printf("-----------------------\n");

	return 0;
}

float F2C(float n) {
	return 5.0 / 9.0 * (n - 32.0);
}