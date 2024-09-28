#include <stdio.h>

void getJudgeData(double *score);
void calcScore(double a, double b, double c, double d, double e, double *result);
double findLowest(double a, double b, double c, double d, double e);
double findHighest(double a, double b, double c, double d, double e);

int main() {
	double a, b, c, d, e, result;
	printf("First jduge's score: ");
	getJudgeData(&a);
	printf("Second jduge's score: ");
	getJudgeData(&b);
	printf("Third jduge's score: ");
	getJudgeData(&c);
	printf("Fourth jduge's score: ");
	getJudgeData(&d);
	printf("Fifth jduge's score: ");
	getJudgeData(&e);
	calcScore(a, b, c, d, e, &result);
	printf("The score is %.2f\n", result);

	return 0;
}

void getJudgeData(double *score) {
	scanf("%lf", score);
	while (*score < 0 || *score > 10) {
		printf("Score must be in range [0,10]! Input again: ");
		scanf("%lf", score);
	}
}

void calcScore(double a, double b, double c, double d, double e, double *result) {
	*result = (a + b + c + d + e) - findLowest(a, b, c, d, e) - findHighest(a, b, c, d, e) / 3;
}

double findLowest(double a, double b, double c, double d, double e) {
	double lowest = a;
	if (lowest > b)
	{
		lowest = b;
	}else if (lowest > c) {
		lowest = c;
	}else if (lowest > d) {
		lowest = d;
	}else if (lowest > e) {
		lowest = e;
	}

	return lowest;
}

double findHighest(double a, double b, double c, double d, double e) {
	double highest = a;
	if (highest < b)
	{
		highest = b;
	}else if (highest < c) {
		highest = c;
	}else if (highest < d) {
		highest = d;
	}else if (highest < e) {
		highest = e;
	}

	return highest;
}