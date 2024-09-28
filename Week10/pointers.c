#include <stdio.h>

int main() {
	int A, B, C;
	int *ptr;

	printf("Nhap bien A: ");
	scanf("%d", &A);
	printf("Nhap bien B: ");
	scanf("%d", &B);
	printf("Nhap bien C: ");
	scanf("%d", &C);

	ptr = &A;
	printf("Gia tri bien A: %d\n", *ptr);
	ptr = &B;
	printf("Gia tri bien B: %d\n", *ptr);
	ptr = &C;
	printf("Gia tri bien C: %d\n", *ptr);
}