#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube (double num) {
    return pow(num, 3);
}
int main() {
    printf("Answer: %f", cube(3.0));

    return 0;
}