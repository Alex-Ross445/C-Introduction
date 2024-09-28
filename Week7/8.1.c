#include <stdio.h>

int main() {
	char c;
	int count = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' && count == 0) {
			count = 1;
			putchar(c);
		}
		if (c != ' ') {
            count = 0;
            putchar(c);
		}
	}
	printf("Insert characters: ");
}