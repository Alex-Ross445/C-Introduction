#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2) {
    int result;
    if(num1 > num2) {
        result = num1;
        printf("%d is bigger than %d", num1, num2);
    } else {
        result = num2;
        printf("%d is bigger than %d", num2, num1);
    }
}

int main()
{
    printf(max(12,5));

    return 0;
}