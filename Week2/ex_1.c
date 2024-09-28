#include <stdio.h>

int main() {
	printf("%d\n", 455);
	printf("%i\n", 455);
	printf("%d\n", +455);
	printf("%d\n", -455);
	printf("%hd\n", 3200);
	printf("%ld\n", 2000000000);
	printf("%o\n", 455);
	printf("%u\n", +455);
	printf("%u\n", -455);
	printf("%x\n", 455);
	printf("%X\n", 455);

	printf("**************************************\n");

	printf("%e\n", 1234567.89);
	printf("%e\n", +1234567.89);
	printf("%e\n", -1234567.89);
	printf("%E\n", 1234567.89);
	printf("%f\n", 1234567.89);
	printf("%g\n", 1234567.89);
	printf("%G\n", 1234567.89);

	printf("**************************************\n");

	char character = 'A';
	char string[] = "C'est un string";
	const char *stringPtr = "C'est aussi un string";

	printf("%c\n", character);
	printf("%s\n", "This is a string");
	printf("%s\n", string);
	printf("%s\n", stringPtr);

	printf("**************************************\n");

	int *ptr;
	int x = 12345, y;
	ptr = &x;
	printf("The value of ptr is %p\n", ptr);
	printf("The address of ptr is %p\n", &x);
	printf("Total character printed on this line is: %n\n", &y);
	printf("%d\n\n", y);

	y = printf("This line has 28 characters\n");
	printf("%d characters were printed\n\n", y);
	printf("Printing a %% in a format control string\n");

	printf("**************************************\n");

	int i = 873;
	double f = 123.94536;
	char s[] = "Happy birthday";

	printf("Using precision for intergers\n");
	printf("\t%.4d\n\t%.9d\n\n",i ,i);
	printf("Using precision for floating-point numbers\n");
	printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);
	printf("Using precision for string\n");
	printf("\t%.11s\n", s);

	printf("**************************************\n");

	printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
	printf("%-10s%-10d%-10c%-10f%c\n\n", "hello", 7, 'a', 1.23, 'd');

	printf("**************************************\n");

	return 0;
}