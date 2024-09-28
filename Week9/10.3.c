#include <stdio.h>

int main() {
	int compare_array(int arr1[], int arr2[], int size);
	int arr1[5], arr2[5];

	printf("Insert intergers: ");
	for (int i = 0; i < 5; ++i)
		{
			printf("Arr[%d] = ", i);
			scanf("%d", &arr1[i]);
		}

	printf("Insert intergers: ");
		for (int i = 0; i < 5; ++i)
			{
				printf("Arr[%d] = ", i);
				scanf("%d", &arr2[i]);
			}

	// for (int i = 0; i < 5; ++i)
	// {
	// 	if(arr1[i] == arr2[i]) {
	// 		printf("1\n");
	// 	}else {
	// 		printf("0\n");
	// 	}
	// }

	if(compare_array(arr1, arr2, 5)) {
		printf("Giong\n");
	}else {
		printf("Khac\n");
	}

	return 0;
}

int compare_array(int arr1[], int arr2[], int size) {
	for (int i = 0; i < 5; ++i)
	{
		if (arr1[i] != arr2[i])
		{
			return 0;
		}
	}
		return 1;
}