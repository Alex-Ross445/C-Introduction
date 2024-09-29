#include <stdio.h>
#include <stdlib.h>

struct  Student
{
    char Name[50];
    char Major[50];
    int age;
    double gpa;
};


int main() {
    struct Student Student1;
    Student1.age = 22;
    Student1.gpa = 3.2;
    strcpy(Student1.Name, "Jim");
    strcpy(Student1.Major, "Business");

    printf("%.1f \n", Student1.gpa);
    printf("%s", Student1.Name);

    return 0;
}