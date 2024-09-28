#include <stdio.h>

int main() {
	char c;
	int count;

	while (( c = getchar()) != EOF) {
		count = 0;

		if ( c == '\\') {
			putchar('\\');
			putchar('\\');
			count = 1;
		}

		if ( c == '\t') {
			putchar('\\');
			putchar('t');
			count = 1;
		}

		if ( c == '\b') {
			putchar('\\');
			putchar('b');
			count = 1;
		}

		if (count == 0) {
			putchar(c);
		}
	}

	return 0;
}