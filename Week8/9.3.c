#include <stdio.h>

int cube(int n);
int uoc_so(int n);
int perfect_num(int n);

int main() {
	int n;
	do{
		printf("Insert positive interger: ");
		scanf("%d", &n);
	}while(n <= 0);

	printf("Sum of cube from 1 to %d is %d.\n", n, cube(n));
	uoc_so(n);
	perfect_num(n);
	return 0;
}

int cube(int n) {
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		sum += i * i * i;
	}

	return sum;
}

int uoc_so(int n) {
	printf("Uoc so cua %d la: ", n);
	for (int i = 1; i <= n; ++i)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

int perfect_num(int n) {
	printf("%d perfect numbers are: ", n);
	for (int i = 1; i <= n; ++i)
	{
		printf("%d ", i * i);
	}
	printf("\n");
}