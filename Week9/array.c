#include <stdio.h>

int main() {
	int arr1[10] = {2, 4, 5, 7, 8, 9, 1, 4, 2, 6};
	int arr2[] = {2, 4, 6, 8, 10};

	printf("Cac phan tu cua Arr1: ");
	for (int i = 0; i < 10; ++i)
	{
		printf(" %d", arr1[i]);
	}
	printf("\n");

	printf("Cac phan tu cua Arr2: ");
	for (int i = 0; i < 5; ++i)
	{
		printf(" %d", arr2[i]);
	}
	printf("\n");

	printf("Cac phan tu cua Arr2: ");
	for (int i = 0; i < 7; ++i)
	{
		printf(" %d", arr2[i]);
	}
	printf("\n");

	printf("(Cach 1: ) Arr1[0] = %d.\n", *arr1);
	printf("(Cach 2: ) Arr1[0] = %d.\n", arr1[0]);

	printf("(Cach 1: ) Arr1[0] = %d.\n", *(arr1+1));
	printf("(Cach 2: ) Arr1[0] = %d.\n", arr1[1]);
}