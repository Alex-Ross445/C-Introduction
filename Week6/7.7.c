#include <stdio.h>

int main() {
	float f, c, start, end;
	printf("Insert start temperature: ");
	scanf("%f", &start);
	printf("Insert end temperature: ");
	scanf("%f", &end);
	printf("Celcius    Farenheit   \n");
	for (c = start; c <= end; c++)
	{
		f = 1.8 * c + 32.0;
		printf("%4.2f %12.2f\n", c, f);
	}

	return 0;	
}