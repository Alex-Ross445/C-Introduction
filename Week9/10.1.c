#include <stdio.h>
#include <limits.h>

int main() {
	int num[20], odd_sum = 0, min = INT_MAX;
	printf("Insert intergers: ");

	for (int i = 0; i < 20; ++i)
	{
		printf("Arr[%d] = ", i);
		scanf("%d", &num[i+1]);
	}

	for (int i = 0; i < 20; ++i)
	{
		if (num[i] % 2 == 1)
		{
			odd_sum += num[i];
		}
		if (num[i] < min)
		{
			min = num[i];
		}
	}

	printf("Sum of odd in Array: %d\n", odd_sum);
	printf("Smallest interger: %d\n", min);

	return 0;
}