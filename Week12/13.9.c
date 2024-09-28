#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char last_word[50] = "";
    char user_input[100];
    char *token;

    while (1) {
        printf("Nhap tu co hai tieng cach nhau bang dau phay: ");
        fgets(user_input, sizeof(user_input), stdin);
        user_input[strcspn(user_input, "\n")] = '\0';  // Xoa ky tu xuong dong

        token = strtok(user_input, ",");
        char* second_token = strtok(NULL, ",");

        if (token == NULL || second_token == NULL) {
            printf("Tu nhap vao khong hop le!\n");
            break;
        }

        if (strlen(last_word) > 0 && strcasecmp(last_word, second_token) != 0) {
            printf("Tieng dau cua tu nay khong trung voi tieng thu hai cua tu truoc do!\n");
            break;
        }

        strcpy(last_word, strtok(NULL, ","));
        for (int i = 0; i < strlen(last_word); i++) {
            last_word[i] = tolower(last_word[i]);
        }
    }

    return 0;
}