#include <stdio.h>
#include <stdlib.h>

int main() {
    char grade;
    printf("Input your grade ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Great job!");
        break;
    case 'B':
        printf("Ok");
        break;
    case 'C':
        printf("Poorly");
        break;
    case 'D':
        printf("Very bad");
        break;
    case 'F':
        printf("Failed");
        break;
    
    default:
        printf("Invalid Grade!");
        break;
    }

    return 0;
}