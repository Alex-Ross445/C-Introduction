#include <stdio.h>
#define WAGE 15000

int salary(int hours);

int main() {
	int hours;
	
	do{
        printf("Insert worker's working hr(>= 10 and <= 65): ");
	    scanf("%d", &hours);
    }while (hours < 10 || hours > 65);
    printf("Wage = %d.\n", salary(hours));
}

int salary(int hours) {
	int wage;
	if (hours <= 40)
	{
		wage = hours * WAGE;
	}else {
		wage = 40 * WAGE + (hours - 40) * WAGE * 3 / 2;
	}
	return wage;
}