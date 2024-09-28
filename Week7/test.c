#include <stdio.h>
#define PERIOD '.'

int main() {
	// char c;
	// while ((c = getchar()) != PERIOD)
	// 	putchar(c);
	// printf("Goodbye.\n");

	int product = 2;
	while (product <= 1000) {
		printf("%d\n", product);
		product =  2* product;
	}

	int c;
	while ((c = getchar()) != -1) {
		if (c == '.')
			break;
		else if (c >= '0' && c <= '9') {
			continue;
		}else{
			putchar(c);
		}
	}
	printf("*** Goodbye ***\n");

	return 0;
}