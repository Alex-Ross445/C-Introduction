#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char color[20];
    char pluralNoun[20];
    char celebF[20];
    char celebL[20];

    printf("Color?");
    scanf("%s", &color);
    printf("PluralNoun?");
    scanf("%s", &pluralNoun);
    printf("Celeb?");
    scanf("%s%s", &celebF, &celebL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebF, celebL);

    return 0;
}