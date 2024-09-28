#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Input string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        switch (str[i]) {
            case ',':
            case ';':
            case '!':
            case ':':
            case '?':
                str[i] = ' ';
                break;
            default:
                break;
        }
    }
    printf("New string is: %s", str);

    return 0;
}