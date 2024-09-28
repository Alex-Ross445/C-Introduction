#include <stdio.h>

void reverse(float a[], int size);

int main() {
	float a[100];
	int size, i;

	printf("Nhap so cac phan tu: ");
	scanf("%d", &size);

	printf("Nhap cac phan tu");
	for (int i = 0; i < size; ++i)
	{
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}

	reverse(a, size);

	printf("Mang sau khi dao nguoc: \n");
	for (int i = 0; i < size; ++i)
	{
		printf("a[%d] = %2.1f\n", i, a[i]);
	}

	return 0;
}

void reverse(float a[], int size) {
	float temp;

	for (int i = 0; i < size / 2; ++i)
	{
		temp = a[i];
		a[i] = a[size - i - 1];
		a[size - i - 1] = temp;
	}
}