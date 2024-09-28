#include <stdio.h>

void swap(int a, int b);
void new_swap(int *a, int *b);

int main() {
	int a = 10, b = 20;
	printf("a = %d, b = %d (before calling swap)\n", a, b);
	// swap(a, b);
	new_swap(&a, &b);
	printf("a = %d, b = %d (after calling swap)\n", a, b);

	return 0;
}

void swap(int a, int b) { //Tham tri
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void new_swap(int *a, int *b) { //Tham chieu
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}