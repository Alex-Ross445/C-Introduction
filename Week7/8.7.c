#include <stdio.h>

int main() {
	int n, ans = 1, i = 0;

	do {
	printf("Insert num: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Input num must be higher than 0, input again.\n");
		}
	}while (n <= 0);

	while(i <= n) {				
		printf("%d! = %d\n", i, ans);
		i++;
		ans *= i;
	}

	return 0;
}