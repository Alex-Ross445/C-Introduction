#include <stdio.h>

int main() {
	double total_pay, hours, rate, pay;
	int count_emp;
	int num_emp;
	printf("Enter number of employees: ");
	scanf("%d", &num_emp);
	total_pay = 0.0;
	count_emp = 0;
	while (count_emp < num_emp) {
		printf("Hours: $");
		scanf("%lf", &hours);
		printf("Rate: ");
		scanf("%lf", &rate);
		pay = hours * rate;
		printf("Pay is $%6.2f\n\n", pay);
		total_pay = total_pay + pay;
		count_emp = count_emp + 1;
	}
	printf("All employees processed\n");
	printf("Total payroll is $%8.2f\n", total_pay);

	return 0;
}