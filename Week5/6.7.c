#include <stdio.h>

int main() {
	float ch, bh, th, car_price, bus_price, truck_price;
	char type[15];
	printf("Type of vehicles(c for car, b for bus, t for truck): ");
	scanf("%s", type);

	if(type[0] == 'c') {
			printf("Hours for car: ");
			scanf("%f", &ch);
		if(ch - 2 <= 0){
			printf("Invalid! Negative hours\n");
		}else {
			car_price = 0.70 * 2 + 2.50 * (ch - 2);
			printf("Price for car is $%.2f\n", car_price);
		}
	}else if(type[0] == 'b') {
			printf("Hours for bus: ");
			scanf("%f", &bh);
		if(bh - 2 <= 0){
			printf("Invalid! Negative hours\n");
		}else {
			bus_price = 1.50 * 2 + 2.00 * (bh - 2);
			printf("Price for bus is $%.2f\n", bus_price);
		}
	}else if(type[0] == 't') {
			printf("Hours for truck: ");
			scanf("%f", &th);
		if(th - 2 <= 0){
			printf("Invalid! Negative hours\n");
		}else {
			truck_price = 2.50 * 2 + 3.25 * (th - 2);
			printf("Price for truck is $%.2f\n", truck_price);
		}
	}else {
		printf("Invalid\n");
	}

	return 0;
}