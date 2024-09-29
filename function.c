#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("Mike", 27);

    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s, age: %d \n", name, age);
}