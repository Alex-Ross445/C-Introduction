#include <stdio.h>
#include <math.h>

int main() {
	int i, j;
	printf("%d", 2);
	for (int i = 3; i < 100; i += 2)
	{
		for(j = 2; j < i; j++) {
			if(i % j == 0) {
				break;
			}else if(j > sqrt(i)) {
				printf(", %d", i);
				break;
			}
		}
	}
	printf("\n");

	return 0;
}