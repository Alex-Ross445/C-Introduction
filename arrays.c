#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckNum[] = {12, 4, 7, 8, 9, 10 , 13};
    printf("%d\n", luckNum[0]);

    char word[20];
    printf("Word?");
    scanf("%s", &word);
    printf("I love %s", word);

    return 0;
}