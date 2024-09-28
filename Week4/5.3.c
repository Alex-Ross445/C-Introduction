#include <stdio.h>

int main() {
	int n, m, abs, max;
	printf("Enter a positive or negative interger: ");
	scanf("%i", &n);
	
	printf("\nYou entered %i.\n", n);
	abs = n < 0 ? -n : n;
	printf("Its absolute value is %i.\n", abs);

	printf("Enter 2 intergers: ");
	scanf("%i %i", &n, &m);

	printf("\nYou entered %i and %i.\n", n, m);
	printf("%i is the larger value.\n", n > m ? n : m);

	return 0;
}