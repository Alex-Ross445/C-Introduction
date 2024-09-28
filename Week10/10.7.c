#include <stdio.h>

int isSym(int a[], int size);

int main() {
	int a[100], n, i;

	printf("Insert numbers of array: ");
	scanf("%d", &n);

	printf("Insert nnumbers: ");
	for (int i = 0; i < n; ++i)
	{
		printf("A[%d] = ", i);
 		scanf("%d", &a[i])
	}
}