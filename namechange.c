#include <stdio.h>
#include <stdlib.h>

int main() {
    char characterName[] = "Johnson";
    int charaterAge = 25;

    printf("There once was a man named %s \n", characterName);
    printf("he was %d years old \n", charaterAge);

    charaterAge = 50;
    printf("He really liked the name %s \n", characterName);
    printf("but did not like being %d years old \n", charaterAge);

    return 0;
}