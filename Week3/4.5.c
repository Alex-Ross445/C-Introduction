#include "stdio.h"

int main() {
	int rad;
	const float pi = 3.14;
	float c;
	printf("Input radius: ");
	scanf("%d", &rad);
	c = 2 * pi * rad;
	printf("Circle's circumference is %.2f\n", c);
	float s, bs, v;
	s = pi * rad * rad;
	printf("Circle's area is %.2f\n", s);
	bs = 4 * pi * rad * rad;
	printf("Sphere's area is %.2f\n", bs);
	v = 4/3 * pi * rad * rad * rad;
	printf("Sphere's volume is %.2f\n", v);

	return 0;
}