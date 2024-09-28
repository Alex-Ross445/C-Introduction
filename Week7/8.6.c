#include <stdio.h>

int main() {
	float overallPoint = 0.0, score;
	int avr;
	printf("Input score: ");
	scanf("%f", &score);

	while (score > 0.0) {
		overallPoint += score;
		avr++;
		printf("Input score: ");
		scanf("%f", &score);
	}

	printf("Avr score is %.2f\n", overallPoint / avr);
	return 0;
}