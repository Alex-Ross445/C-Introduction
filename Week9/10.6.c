#include <stdio.h>

void printMatrix(int X[][n], int n);

int main() {
	int n;
	printf("n: ");
	scanf("%d", &n);

	int A[n][n], B[n][n], C[n][n];
	printf("Nhap phan tu mang: \n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("A[%d][%d] = \n",i ,j);
			// scanf("%d", (A + i * n + j));
			scanf("%d", &A[i][j]);
		}
	}

	printf("Nhap phan tu mang: \n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("B[%d][%d] = \n",i ,j);
			// scanf("%d", (B + i * n + j));
			scanf("%d", &B[i][j]);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				C[i][j] += A[i][k] * A[k][j];
			}
		}
	}

	printf("Matrix A:\n");
	printMatrix(A, n);
	printf("Matrix B:\n");
	printMatrix(B, n);
	printf("Matrix C:\n");
	printMatrix(C, n);

	return 0;
}

void printMatrix(int X[][n], int n) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf(" %3d\n", X[i][j]);
		}
	}
	printf("\n");
}