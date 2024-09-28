#include "stdio.h"

int main()
{
	int apple_num, orange_num, jackfruit_num, banana_num;
	int apple_price = 5000, orange_price = 7000;
	int jackfruit_price = 50000;
	int banana_price = 2000;
	printf("How many apple? \n");
	scanf("%d", &apple_num);
	printf("How many orange? \n");
	scanf("%d", &orange_num);
	printf("How many jackfruit? \n");
	scanf("%d", &jackfruit_num);
	printf("How many banana? \n");
	scanf("%d", &banana_num);
	int apple, orange, banana, jackfruit;
	apple = apple_num * apple_price;
	orange = orange_num * orange_price;
	jackfruit = jackfruit_num * jackfruit_price;
	banana = banana_num * banana_price;
	int overall;
	overall = apple_num * apple_price + orange_num * orange_price + jackfruit_num * jackfruit_price + banana_num * banana_price;

	printf("Number |   Fruits     | Money\n");
	printf("------------------------------\n");
	printf("%-7d|   Apples     | %8d VND\n",apple_num, apple );
	printf("%-7d|   Oranges    | %8d VND\n",orange_num, orange );
	printf("%-7d|   Jackfruit  | %8d VND\n",jackfruit_num, jackfruit );
	printf("%-7d|   Banana     | %8d VND\n",banana_num, banana );
	printf("Overall price: %d VND\n", overall);
	return 0;
}