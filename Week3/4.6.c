#include "stdio.h"

int main() {
	int wt, ot;
	int wt_salary = 250000, ot_salary = 400000;
	printf("Working time: \n");
	scanf("%d", &wt);
	printf("OT time: \n");
	scanf("%d", &ot);
	int month;
	month = wt * wt_salary + ot * ot_salary;

	printf("A worker's monthly salary is %d VND\n", month);

	return 0;
}