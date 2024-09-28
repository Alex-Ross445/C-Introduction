#include <stdio.h>

int main() {
	int count;
	int start, end;
	printf("Insert starting num: ");
	scanf("%d", &start);
	printf("Insert ending num: ");
	scanf("%d", &end);
	for (int i = 0; i <= end; ++i)
	{
		if (i >= start && i <= end)
		{
			count++;
		}
	}
	printf("%d\n", count);
}