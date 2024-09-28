#include <stdio.h>

int main() {
	int a;
	double b;
	printf("Input real num: \n");
	scanf("%d", &a);
	printf("Input double num: \n");
	scanf("%.2lf", &b);
	printf("The real num is %d, and the float num is %.2lf\n", a, b);

	return 0;
}