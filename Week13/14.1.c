#include<stdio.h>

 

typedef struct
{
    unsigned char day;
    unsigned char month;
    int year;
} Date;

int isLeapYear(int year);
int checkday(unsigned char day, unsigned char month, int year);
void struct_input(Date *A);

 

void struct_output(Date A);

 

int main(int argc, char const *argv[])
{
    Date A;
    struct_input(&A);
    struct_output(A);
    return 0;
}

int isLeapYear(int year) {
	if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return 1;
	}else {
		return 0;
	}
}

int checkday(unsigned char day, unsigned char month, int year) {
	int leap_year = 0;
} 

void struct_input(Date *A){
    printf("Input data:\n");
    printf("year = ");
    scanf("%d", &A->year);
    printf("month = ");
    scanf("%hhu", &A->month);
    while(A->month < 0 || A->month > 12){
        printf("Error!!! month > 12 or month < 1. \n");
        printf("Reinput month = ");
        printf("month = ");
    }
    printf("day = ");
    scanf("%hhu", &A->day);
}

 

void struct_output(Date A){
    printf("Output data:\n");
    printf("year = %d\n", A.year);
    printf("month = %u\n", A.month);
    printf("day = %u\n", A.day);
}