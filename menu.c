#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FOOD 10

struct Food {
    char name[50];
    float price;
    int orders;
};

int compare_orders(const void *a, const void *b) {
    struct Food *foodA = (struct Food *)a;
    struct Food *foodB = (struct Food *)b;
    return (foodB->orders - foodA->orders);
}

int main() {
    struct Food menu[MAX_FOOD];
    int i, n;

    printf("Enter the number of items in the menu (max %d): ", MAX_FOOD);
    scanf("%d", &n);
    getchar();

    // Input menu items
    for (i = 0; i < n; i++) {
        printf("Enter name of food: ");
        fgets(menu[i].name, sizeof(menu[i].name), stdin);
        menu[i].name[strcspn(menu[i].name, "\n")] = '\0'; // Remove newline character

        printf("Enter price of food: ");
        scanf("%f", &menu[i].price);
        getchar();

        printf("Enter number of orders: ");
        scanf("%d", &menu[i].orders);
        getchar();
    }

    // Sort menu by number of orders
    qsort(menu, n, sizeof(struct Food), compare_orders);

    // Print the sorted menu
    printf("\n\nSorted Menu:\n");
    for (i = 0; i < n; i++) {
        printf("%s - $%.2f - %d orders\n", menu[i].name, menu[i].price, menu[i].orders);
    }

    return 0;
}