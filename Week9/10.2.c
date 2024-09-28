#include <stdio.h>

int main() {
	int n, sum = 0;

	printf("Insert number of array: ");
	scanf("%d", &n);

	int arr[n];
	printf("Insert intergers: ");
	for (int i = 0; i < n; ++i)
		{
			printf("Arr[%d] = ", i);
			scanf("%d", &arr[i]);
		}

	for(int i = 1; i < n - 1; i++) {
		if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
			sum += arr[i];
		}
	}

	printf("Tong cuc dai la: %d\n", sum);

	return 0;
}