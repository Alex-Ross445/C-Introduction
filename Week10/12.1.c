#include <stdio.h>

int countEven(int *array_ptr, int n);

int main() {
	int A[100], n;
	do {
		printf("Nhap so ptu(0,100]: ");
		scanf("%d", &n);
	}while(n < 0 || n > 100);

	printf("Nhap mang: \n");
	for (int i = 0; i < n; ++i)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}

	printf("Even numbs are %d.\n", countEven(A, n));

	return 0;
}

int countEven(int *array_ptr, int n) {
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		//if (*(array_ptr + i) % 2 == 0)
		if(array_ptr[i] % 2 == 0) 
			count++;
	}
	return count;
}