#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int ans, guess;
	srand(time(NULL));
	ans = rand() % 10;
	printf("Your guess: ");
	scanf("%d", &guess);
	while (guess > 0) {
	if (ans > guess)
		{
			printf("The answer is higher than your guess\n");
			printf("Your guess: ");
			scanf("%d", &guess);
		}else if (ans < guess)
		{
			printf("The answer is lower than your guess\n");
			printf("Your guess: ");
			scanf("%d", &guess);
		}else {
			printf("Your answer is correct\n");
			break;
		}
	}

	return 0;
}