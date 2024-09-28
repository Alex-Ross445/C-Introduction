#include <stdio.h>

int main() {
	int x = 1, y = 2, z = 3, temp;
	int *p, *q, *r, *temp_ptr;

	p = &x;
	q = &y;
	r = &z;

	printf("Lan 1: \n");
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	printf("p = %p, y = %p, z = %p\n", p, q, r);
	printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

	temp = x; x= y; y = z; z = temp;

	printf("Lan 2: \n");
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	printf("p = %p, y = %p, z = %p\n", p, q, r);
	printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

	temp_ptr = p; p = q; q = r; r = temp_ptr;

	printf("Lan 3: \n");
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	printf("p = %p, y = %p, z = %p\n", p, q, r);
	printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

	return 0;
}