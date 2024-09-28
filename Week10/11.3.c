#include <stdio.h>

int main() {
	float a,b,c;
	float *ptr;

	printf("Nhap bien A: ");
	scanf("%f", &a);
	printf("Nhap bien B: ");
	scanf("%f", &b);
	printf("Nhap bien C: ");
	scanf("%f", &c);

	ptr = &a;
	*ptr += 100;
	ptr = &b;
	*ptr += 100;
	ptr = &c;
	*ptr += 100;

	printf("a = %4.1f, b = %4.1f, c = %4.1f\n", a, b, c);

	return 0;
}