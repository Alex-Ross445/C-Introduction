#include <stdio.h>

int main() {
	int a[7] = {13, -355, 235, 47, 67, 943, 1222};

	printf("Dia chi 5 ptu dau: \n");

	for (int i = 0; i < 5; ++i)
	{
		printf("Dia chi a[%d] la %p. \n", i, &a[i]);
	}

	return 0;
}