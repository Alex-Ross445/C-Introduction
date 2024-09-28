#include <stdio.h>
#include <ctype.h>

int main() {
	char str[1000];
	int num_letters = 0, num_digits = 0, num_other = 0;

	printf("Input string: ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; str[i] != '\0'; i++) {
		if (isalpha(str[i])) {
			num_letters++;
		} else if (isdigit(str[i])) {
			num_digits++;
		} else {
			num_other++;
		}
	}

	printf("Number of letters: %d\n", num_letters);
	printf("Number of digits: %d\n", num_digits);
	printf("Number of others: %d\n", num_other - 1);

	return 0;
}