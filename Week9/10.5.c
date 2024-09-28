#include <stdio.h>

int main() {
	int arr[10];
	int count1 = 0, count2 = 0, max = 0, temp, count = 0;

	printf("Insert intergers: ");
	for (int i = 0; i < 10; ++i)
		{
			printf("Arr[%d] = ", i);
			scanf("%d", &arr[i]);
		}

	for (int i = 0; i < 10; ++i)
	{
		if (arr[i] == 0) {
			count1++;
		}
	}
	printf("So ptu 0 cua mang: %d.\n", count1);

	for (int i = 0; i < 10; ++i)
	{
		if (arr[i] == 0) {
			count2++;
		}else {
			if (count2 > max) {
				max = count2;
			}
			count2 = 0;
		}
	}
	if (count2 > max) {
		max = count2;
	}
	printf("Do dai chuoi lon nhat toan 0 la: %d\n", max);

	//Sap xep chuoi
	for (int i = 0; i < 10; ++i)
	{
		for (int j = i+1; j < 10; ++j)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	//Dem so lan xuat hien
	for (int i = 0; i < 10; ++i)
	{
		if (arr[i] == arr[i-1])
		{
			count += 1;
		}else {
			printf("Phan tu %d xuat hien %d lan\n", arr[i-1], count);
			count = 1;
		}
	}
	printf("Phan tu %d xuat hien %d lan\n", arr[10-1], count);

	return 0;
}