#include <stdio.h>

void incomeplus(long *salary_ptr, int year);

int main() {
	long salary;
	int year;

	do{
		printf("Nhap so trong doan [1,50]: ");
		scanf("%d", &year);
	}while(year < 0 || year > 50);

	do {
		printf("Nhap luong trong khoang [0,10M]: ");
		scanf("%ld", &salary);
	}while (salary < 0 || salary > 1e7);

	incomeplus(&salary, year);

	printf("Luong sau xu ly: %ld\n", salary);

	return 0;
}

void incomeplus(long *salary_ptr, int year) {
	if (year > 3) *salary_ptr +=300000;
}
