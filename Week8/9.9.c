#include <stdio.h>

int isLeapYear(int year);

int main() {
	int year;
	printf("Insert a year: ");
	scanf("%d", &year);

	if (isLeapYear(year)) {
		printf("Nam nhuan\n");
	}else {
		printf("Nam ko nhuan\n");
	}

	return 0;
}

int isLeapYear(int year) {
	if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return 1;
	}else {
		return 0;
	}
}