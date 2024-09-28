#include <stdio.h>

int digits_check(int n);
int main() {
	int n;
	do {
		printf("Input interger: ");
		scanf("%d", &n);
	} while (n <= 0);

	switch (digits_check(n)) {
		case 0:
		printf("%d has both odd and even numbers,\n", n);
		break;
		case 1:
		printf("%d only has odd numbers\n", n);
		break;
		case 2:
		printf("%d only has even numbers\n", n);
		break;
	}

	return 0;
}

int digits_check(int n) {
	int flag_even = 0, flag_odd = 0, digit;
	while (n > 0) {
		digit = n % 10;

		if (digit % 2 == 0) {
			flag_even = 1;
		}else {
			flag_odd = 1;
		}

		n = n / 10;
	}

	if (flag_even && flag_odd) {
		return 0;
	}else if ( flag_odd) {
		return 1;
	}else {
		return 2;
	}
}