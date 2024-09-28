#include <stdio.h>

typedef struct 
{
	int total_rain;
	int highest_temp;
	int lowest_temp;
} weather;

void struct_input(weather *A);

int main(int argc, char const *argv[])
{
	weather Arr[12];
	printf("Input data for each month of the year:\n");
	for (int i = 0; i < 12; ++i)
	{
		printf("----- * %d * -----\n", i+1);
		struct_input(&Arr[i]);
	}

	for (int i = 0; i < 12; ++i)
	{
		total_rain += Arr[i].total_rain;
		if (highest_temperature < Arr[i].highest_temp)
		{
			hi
		}
	}
	return 0;
}

void struct_input(weather *A) {
	printf("total_rain = ");
	scanf("%d", &A.total_rain);
	while(A.total_rain < 0) {
		printf("Error!!! Must be greater or equal to zero\n");
		printf("Reinput!!! Total rain =");
		scanf("%d", &A.total_rain);
	}

		printf("Highest temp = ");
	scanf("%d", &A.highest_temp);
	while(A.highest_temp < -40 || A.highest_temp > 50) {
		printf("Error!!! Must be in range (-40, 50)\n");
		printf("Reinput!!! Highest temp =");
		scanf("%d", &A.highest_temp);
	}

		printf("Lowest temp = ");
	scanf("%d", &A.lowest_temp);
	while(A.lowest_temp < -40 || A.lowest_temp > 50 || lowest_temp > highest_temp) {
		printf("Error!!! Must be in range (-40,50) and lower than the highest temp\n");
		printf("Reinput!!! Lowest temp =");
		scanf("%d", &A.lowest_temp);
	}
}