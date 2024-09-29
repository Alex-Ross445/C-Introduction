#include <stdio.h>
#include <ctype.h>

void count(const char* str) {
    int count[26] = {0}; 
    int hasAlphabet = 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++;
            hasAlphabet = 1;
        }
    }

    if (hasAlphabet) {
        for (int i = 0; i < 26; i++) {
            if (count[i] > 0) {
                printf("%c: %d\n", 'a' + i, count[i]);
            }
        }
    } else {
        printf("-1\n");
    }
}

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    printf("So lan xuat hien cua cac chu cai tu a den z:\n");
    count(str);

    return 0;
}