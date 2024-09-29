#include <stdio.h>
#include <stdlib.h>

int main() {
    int secretNum = 10;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int OutofGuess = 0;

    while (guess != secretNum)
    {
        printf("Enter a number: ");
        scanf("%d", &guess);
        guessCount++;
    }
    printf("You Win!");
    printf("It took you %d turns", guessCount);

    return 0;
}