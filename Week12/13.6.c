// write a program that returns 1 if the strend is at the end of given string and 0 if reverse

#include <stdio.h>
#include <string.h>

int strend(char* s, char* t);

int main() {
	char s[100];
	printf("Enter a line: ");
	scanf(" %[^\n]", s);

	char t[100];
	printf("Enter the word(line): ");
	scanf(" %[^\n]", t);

	if (strend(s, t))
	{
		printf("1\n");
	}else {
		printf("0\n");
	}

	return 0;	
}

int strend(char* s, char* t) {
	int s_length = strlen(s);
	int t_length = strlen(t);

	if (s_length < t_length) {
		return 0;
	}

	char* s_end = s + (s_length - t_length);

	return strcmp(s_end, t) == 0;
}