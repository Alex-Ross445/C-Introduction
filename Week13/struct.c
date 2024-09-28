#include <stdio.h>

struct student
{
	char name[20];
	int age;
	float grade;
};

struct car
{
	char* make;
	char* model;
	int year;
};

int main() {
	struct student s1;
	struct car mycar;
	// typedef int songuyen;
	// songuyen a;
	// typedef struct student student_t;
	// student_t s2;

	struct student s1 = ("Nguyen Le", 19, 8.0);
	struct car mycar = ("Fiat", "Punto", 2004);

	car_t mycar;
	mycar.year = 2004;

	student_t excel_P;
	excel_P.age = 18;
	excel_P.grade = 8.0;

	return 0;
}