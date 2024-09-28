#include <stdio.h>

int main() {
	int a[100], n;

	do {
		printf("Input a number of array(0,100]: ");
		scanf("%d", &n);
	}while (n <= 0 || n > 100);

	printf("Nhap mang: \n");
	for (int i = 0; i < n; ++i)
	{
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}

	printf("Cac mang con cua mang vua nhap: \n");
	for (int i = 0; i < n; ++i)
	{
		for (int len = 1; len <= n-i; len++)
		{
			for (int k = 0; k < len; ++k)
			{
				printf("%d ", a[i+k]);
			}
			printf("\n");
		}
	}

	return 0;
}