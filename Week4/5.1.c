#include <stdio.h>
#define mile 0.621 

int main() {
	float km;
	printf("Input kilometers: ");
	scanf("%f", &km);
	printf("Equivalent miles: %.2f miles\n", km * mile);

	return 0;
}