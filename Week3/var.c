#include <stdio.h>
#include <limits.h>

int main() {
	int my_int = 5;
	double my_double = 3.5;
	int a, b, c;
	printf("The first number:");
	scanf("%d", &a);
	printf("The second number:");
	scanf("%d", &b);
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	printf("**************************************\n");

	// int d = 22, m = 6, y = 2007, x = 4;
	// char ch1 = 'a', ch2 = 'b';
	// float f = 12;
	// scanf("%d", &a);
	// scanf("%2d%2d%4d", &d, &m, &y);
	// scanf("%d/%d/%d", &d, &m, &y);
	// scanf("%c%c", &ch1, &ch2);
	// scanf("%f", &f);

	char x, y[ 9 ];
	printf("Enter a string: ");
	scanf("%c%s", &x, y);
	printf("The input was: \"%c%s\" \n", x, y );
	printf("the character \"%c\" ", x);
	printf("and the string \"%s\" \n", y);

	char z [ 9 ] = { '\0' };
	printf("Enter a string: ");
	scanf("%[^aeiou]", z);
	printf("The input was \"%s\"", z);

	return 0;
}