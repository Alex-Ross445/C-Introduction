#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age:  \n");
    scanf("%d", &age);
    printf("Your age is: %d \n", age);

    double gpa;
    printf("Enter your gpa:  \n");
    scanf("%lf", &gpa);
    printf("Your gpa score is: %f \n", gpa);

    char grade;
    printf("Enter your grade:  \n");
    scanf("%c", &grade);
    printf("Your grade is: %c \n", grade);

    char name[20];
    printf("Namae wa:  \n");
    scanf("%s", name);
    printf("Your name is %s \n", name);

    char name[20];
    printf("Name? \n");
    fgets(name, 20, stdin);
    printf("Your name is %s \n", name);

    return 0;
}