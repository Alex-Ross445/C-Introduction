#include <stdio.h>
#include <string.h>
#include <ctype.h>

void correct_name(char str[]) {
    int len = strlen(str);


    char temp[len+1];
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(str[i])) {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';

    
    int i = 0;
    while (temp[i] != '\0') {
        
        temp[i] = toupper(temp[i]);
        i++;
        while (temp[i] != '\0' && temp[i] != ' ') {
            
            temp[i] = tolower(temp[i]);
            i++;
        }
        
        while (temp[i] == ' ') {
            i++;
        }
    }

    strcpy(str, temp);
}

int main() {
    char name[100];

    printf("Nhap ten: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  

    correct_name(name);

    printf("Ten sua doi: %s\n", name);

    return 0;
}