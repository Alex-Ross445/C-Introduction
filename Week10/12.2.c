#include <stdio.h>

double* maximum(double *array_ptr, int size);

int main() {
	double A[100];
	int n;

	do {
		printf("Nhap ptu (0,100]: ");
		scanf("%d",&n);
	}while(n <= 0 || n > 100);

	printf("Nhap mang so thuc: \n");
	for (int i = 0; i < n; ++i)
	{
		printf("A[%d] = ", i);
		scanf("%lf", &A[i]);
	}

	double *max_ptr = maximum(A, n);

	printf("Maximum of mang: %lf\n", *max_ptr);

	return 0;
}

double* maximum(double *array_ptr, int size) {
	double *max_ptr = array_ptr, *ptr;

	for (ptr = array_ptr + 1; ptr < array_ptr + size; ptr++)
	{
		if (*max_ptr < *ptr)
		{
			max_ptr = ptr;
		}
	}

	return max_ptr;
}