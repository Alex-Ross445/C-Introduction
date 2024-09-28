#include <stdio.h>

int main() {
	int a,b;
	printf("Nhap so thu nhat\n");
	scanf("%d", &a);
	printf("Nhap so thu hai\n");
	scanf("%d", &b);
	printf("a + b = %d\n", a+ b);
	printf("a - b = %d\n", a- b);
	printf("a * b = %d\n", a* b);
	printf("a / b = %d\n", a/ b);
	printf("a %% b = %d\n", a% b);

	return 0;
}