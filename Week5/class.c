#include <stdio.h>

int main() {
	//if else
	unsigned short age;
	printf("Nhap tuoi: ");
	scanf("%hd", &age);
	if (age >= 18) {
		printf("U'r an adult\n");
		if (age >= 62)
		{
			printf("U'r an elderly\n");
			printf("U should have check-up regularly\n");
		}else {
			printf("U'r middle-age\n");
		}
	}else {
		printf("U'r not an adult\n");
	}

	//switch case
	short day;
	printf("Input day corresponds to date: ");
	scanf("%hd", &day);
	switch(day) {
		case 2:
			printf("Mon\n");
			break;
		case 3:
			printf("Tues\n");
			break;
		case 4:
			printf("Wed\n");
			break;
		case 5:
				printf("Thurs\n");
			break;
		case 6:
			printf("Fri\n");
			break;
		case 7:
			printf("Satur\n");
			break;
		case 8:
			printf("Sun\n");
			break;
		default:
			printf("Invalid number\n");
			break;
	}

	char a, b, c;
	// printf("Input 1st letter: ");
	// scanf("%c", a);
	// printf("Input 2nd letter: ");
	// scanf("%c", b);
	// printf("Input 3rd letter: ");
	// scanf("%c", c);
	printf("Input 3 letters: ");
	scanf("%c %c %c", &a, &b, &c);
	if (a < b && a < c)
	{
		printf("%c is the smallest letter\n", a);
	}else if(b < c) {
		printf("%c is the smallest letter\n", b);
	}else {
		printf("%c is the smallest letter\n", c);
	}

	return 0;
}