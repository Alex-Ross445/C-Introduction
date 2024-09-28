#include <stdio.h>

int main() {
	int a;
	printf("Insert number: ");
	scanf("%d", &a);

	printf("Perfect numbers smaller than %d are: ", a);
	for (int i = 0; i < a; ++i)
		{
			int sum = 0;
			for (int j = 1; j < i; ++j)
			{
				if(i % j == 0) {
					sum += j;
				}
			}
			if(sum == i) {
				printf("%d", i);
			}	
	}
		printf("\n");
		return 0;
}