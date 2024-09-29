#include <stdio.h>
#include <stdlib.h>

int main() {
    int index = 1;
    while(index <= 5) {
        printf("%d \n", index);
        index++;
    }

    int index2 = 6;
    do {
        printf("%d \n", index2);
        index2++;
    }while(index2 <= 5);

    return 0;
}