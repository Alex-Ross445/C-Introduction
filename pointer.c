#include <stdio.h>

int main()
{
    int a;
    int *p;
    a = 10;
    p = &a; // &a: address of a
    printf("%d\n", p);
    printf("%d\n", *p); //*p: value at address pointed by p
    printf("%d\n", &a);
    *p = 12;
    printf("%d\n", a);

    int b;
    int *q;
    b = 10;
    q = &b;
    printf("Address of Q is %d\n", q);
    printf("Value of Q is %d\n", *q);
    int c = 20;
    *q = c;
    printf("Address of Q is %d\n", q);
    printf("Value of Q is %d\n", *q);

    int d = 10;
    int *r;
    r = &d;
    printf("Address of R is %d\n", r);
    printf("Value at address of *R is %d\n", *r);
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Adress R+1 is %d\n", r+1); //r+1 = address+4
    printf("Value at address of *R+1 is %d\n", *(r+1));
}