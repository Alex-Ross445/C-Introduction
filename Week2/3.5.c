#include <stdio.h>

int main() {
	int a, b;
	printf("Enter first num:\n");
	scanf("%d", &a);
	printf("Enter second num:\n");
	scanf("%d", &b);
	printf("Accumulated sum: %d\n",(a+b)*(b-a+1)/2 );
}