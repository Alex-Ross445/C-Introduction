/* replacement for strcpy() in string.h*/

#include <stdio.h>
// #include <string.h>

void string_cpy(char* endpoint, char* source);

int main() {
	char source[100];
	printf("Enter a line: ");
	scanf(" %[^\n]", source);
	char endpoint[100];

	string_cpy(endpoint, source);

	printf("Source string: %s\n", source);
	printf("Copied string: %s\n", endpoint);

	return 0;
}

void string_cpy(char* endpoint, char* source) {
	while(*source) {
		*endpoint = *source;
		*endpoint++;
		*source++;
	}
	*endpoint = '\0';
}