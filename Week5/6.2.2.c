#include <stdio.h>
#include <limits.h>

int main() {
	short age;
	printf("Input age: ");
	scanf("%hd", &age);

	switch(age) {
		case 0 ... 17:
			printf("You are a kid\n");
			break;
		case 18 ... 64:
			printf("You are an adult\n");
			break;
		case 65 ... INT_MAX:
			printf("You are an elderly\n");
			break;
		default:
			printf("Invalid number\n");
			break;
	}
}