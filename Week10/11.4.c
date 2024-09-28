#include <stdio.h>

void swap(int *a, int *b, int *c);

int main() {

	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);

	swap(&a, &b, &c);

	printf("a = %d, b = %d, c = %d\n", a, b, c);

	return 0;
}

void swap(int *a, int *b, int *c) {
	int temp;

	temp= *a;
	*a = *b;
	*b = *c;
	*c = temp;
}