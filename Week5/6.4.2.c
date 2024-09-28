#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main() {
	int ans, guess;
	srand(time(NULL));
	ans = rand() % 10;
	printf("Your guess: ");
	scanf("%d", &guess);

	switch(guess - ans) {
		case 0:
			printf("Equal\n");
			break;
		case INT_MIN ... -1:
			printf("Lower\n");
			break;
		case 1 ... INT_MAX:
			printf("Higher\n");
			break;
	}
	return 0;
}