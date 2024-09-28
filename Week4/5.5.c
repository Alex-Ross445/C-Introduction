#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, d, s, p, sTr, h, e;
	printf("Input side 1: ");
	scanf("%f", &a);
	printf("Input side 2: ");
	scanf("%f", &b);
	printf("Input side 3: ");
	scanf("%f", &c);
	printf("Input side 4: ");
	scanf("%f", &d);

	p = (c + b + fabs(a - d)) / 2;
	e = p * (p - c) * (p - b) * (p - fabs(a - d));
	sTr = sqrt(e);
	h = 2 * sTr / fabs(a - d);
	s = (a + d) * h / 2;
	printf("The area of the trapezoid is %.2f\n", s);

	return 0;
}