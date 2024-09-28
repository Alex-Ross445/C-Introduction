// write first name and last name

#include <stdio.h>

int main() {
	char firstName[50], lastName[50];

	printf("Enter your first name and your last name, seperated by a space: ");
	scanf("%s %[^\n]", firstName, lastName);

	printf("Hello %s.\n", firstName);

	return 0;
}