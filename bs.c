#include<stdio.h>

int main() {
	int n;
    printf("Enter the number of elements in array: ");
	scanf("%d", &n);
	int arr[n];
    printf("Enter number: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		printf("%d ", arr[i]);
	}
	return 0;
}