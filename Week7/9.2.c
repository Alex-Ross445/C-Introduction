#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main() {
	int n;
	do {
		printf("Input positive interger (> 1): ");
		scanf("%d", &n);
	}while (n <= 1);

	printf("Smaller intergers are: ");
	for (int i = 2; i < n; ++i)
	{
		if (is_prime(i)) {
			printf(" %d", i);
		}
	}

	return 0;
}
	int is_prime(int n) {
		if (n == 2 || n == 3) return 1;
		for (int i = 2; i <= sqrt(n); ++i)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}