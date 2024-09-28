#include <stdio.h>
#include <string.h>

int main() {
    char products[][7] = {"TV127", "CD057", "TA877", "CS409", "PC655"};
    char descriptions[][25] = {"31 inch Television", "CD Player", "Answering Machine",
                               "Car Stereo", "Personal Computer"};
    int num_products = sizeof(products) / sizeof(products[0]);
    
    char query[7];
    printf("Enter product number: ");
    scanf("%s", query);
    
    for (int i = 0; i < num_products; i++) {
        if (strstr(products[i], query) != NULL) {
            printf("Product description: %s\n", descriptions[i]);
        }
    }
    
    return 0;
}