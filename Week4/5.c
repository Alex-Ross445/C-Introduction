#include "stdio.h"

int main() {
	unsigned char a = 18;
	unsigned char b = ~a;
	printf("a << 2 = %d\n", a << 2);
	printf("~a = %d\n", b);
	printf("Gia tri bieu thuc dieu kien la %d\n", 2 > 3 ? 1 : 0);
	printf("So be hon la %d\n", a < b ? a : b);
	int c = 10, d = 3;
	printf("%d / %d = %f\n", c, d, (float)c/d);
	float e = 10.0, f = 3.0;
	printf("%f / %f = %f\n", e, f, e/f);
	printf("%f / %f = %d\n", e, f, (int)e/f);
	return 0;
}