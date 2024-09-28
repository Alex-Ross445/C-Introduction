#include <stdio.h>

int main() {
	short age;
	printf("Input age: ");
	scanf("%hd", &age);
	if (age > 0 && age < 18) {
		printf("You are a kid\n");
	}else if (age >= 18 && age < 65) {
		printf("You are an adult\n");
	}else if(age >= 65) {
		printf("You are an elderly\n");
	}else {
		printf("Invalid number\n");
	}
}