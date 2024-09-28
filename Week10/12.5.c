#include <stdio.h>

void array_reverse(int *array, int n);

int main(int argc, char const *argv[])
{
	int A[100];
	int n;

	do {
		printf("Nhap ptu (0,100]: ");
		scanf("%d",&n);
	}while(n <= 0 || n > 100);

	printf("Nhap mang so thuc: \n");
	for (int i = 0; i < n; ++i)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}

	array_reverse(A, n);

	printf("Mang sau khi dao:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a+i);
	}
	printf("\n");

	return 0;
}

void array_reverse(int *array, int n) {
	int i = 0, j = n-1, temp;

	while(i < j) {
		temp = *(array + i);
		*(array + i) = *(array + j);
		*(array + j) = temp;

		i++;
		j--;
	}
}