#include <stdio.h>

int main() {
	int n;
	printf("Input interger: ");
	do {
		scanf("%d", &n);
	} while (n <= 0);

	printf("Satisfied numbers: %d ", n);
	do {
		n--;
		printf("%d ", n);
	}while (1 < n);

	printf("\n");

	return 0;
}