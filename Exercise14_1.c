#include <stdio.h>

typedef struct
{
	unsigned char day;
	unsigned char month;
	int year;
} Date;

int isLeapYear(int year);
int check_day(unsigned char day, unsigned char month, int year);
void struct_input(Date *A);
void struct_output(Date A);
int datecmp(Date A, Date B);

int main()
{
	Date A, B;
	printf("Input the first date:\n");
	struct_input(&A);
	printf("Input the second date:\n");
	struct_input(&B);

	switch (datecmp(A, B))
	{
	case 1:
		printf("%hhu/%hhu/%d > %hhu/%hhu/%d.\n", A.day, A.month, A.year, B.day, B.month, B.year);
		break;
	case -1:
		printf("%hhu/%hhu/%d < %hhu/%hhu/%d.\n", A.day, A.month, A.year, B.day, B.month, B.year);
		break;
	default:
		printf("%hhu/%hhu/%d = %hhu/%hhu/%d.\n", A.day, A.month, A.year, B.day, B.month, B.year);
		break;
	}

	return 0;
}

int isLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int check_day(unsigned char day, unsigned char month, int year)
{
	int num_day = 0;

	if (month == 2)
	{
		if (isLeapYear(year))
			num_day = 29;
		else
			num_day = 28;
	}
	else
	{
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			num_day = 31;
			break;
		default:
			num_day = 30;
			break;
		}
	}

	if (day >= 1 && day <= num_day)
		return 1;
	else
		return 0;
}

void struct_input(Date *A)
{
	// Input year
	printf("year = ");
	scanf("%d", &A->year);
	// Input month
	printf("month = ");
	scanf("%hhu", &A->month);
	while (A->month < 0 || A->month > 12)
	{
		printf("Error!!! month > 12 or month < 1.\n");
		printf("Reinput month = ");
		scanf("%hhu", &A->month);
	}
	// Input day
	printf("day = ");
	scanf("%hhu", &A->day);
	int valid_day = check_day(A->day, A->month, A->year);
	while (valid_day == 0)
	{
		printf("Error!!!.\n");
		printf("Reinput day = ");
		scanf("%hhu", &A->day);
		valid_day = check_day(A->day, A->month, A->year);
	}
}

void struct_output(Date A)
{
	printf("year = %d\n", A.year);
	printf("month = %hhu\n", A.month);
	printf("day = %hhu\n", A.day);
}

int datecmp(Date A, Date B)
{
	if (A.year > B.year)
		return 1;
	else if (A.year < B.year)
		return -1;
	else if (A.month > B.month)
		return 1;
	else if (A.month < B.month)
		return -1;
	else if (A.day > B.day)
		return 1;
	else if (A.day < B.day)
		return -1;
	else
		return 0;
}