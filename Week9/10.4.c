#include <stdio.h>

void DesSort(int arr[], int size);
void OddAscSort(int arr[], int size);
int main() {
	int arr[10];

	printf("Insert intergers: ");
	for (int i = 0; i < 10; ++i)
		{
			printf("Arr[%d] = ", i);
			scanf("%d", &arr[i]);
		}

	DesSort(arr, 10);
	printf("Cac phan tu theo giam dan: \n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	OddAscSort(arr, 10);
	printf("Cac phan tu le tang dan: \n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

void DesSort(int arr[], int size) {
	int temp;

	for (int i = 0; i < 10; ++i)
	{
		for (int j = i+1; j < 10; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	return;
}

void OddAscSort(int arr[], int size) {
	int temp;

	for (int i = 0; i < 10-1; ++i)
	{
		if (arr[i] % 2 == 1) {
			for (int j = i+1; j < 10; ++j)
			{
				if (arr[j] % 2 == 1 && arr[i] > arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;				
				}
			}
		}
	}
	return;
}