#include "stdio.h"
#include "limits.h"

int main() {
	printf("The lower and upper limit of int is %d and %d\n", INT_MIN, INT_MAX);
	printf("The lower and upper limit of long is %ld and %ld\n", LONG_MIN, LONG_MAX);

	return 0;
}