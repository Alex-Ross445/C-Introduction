#include <stdio.h>

int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %d in bytes\n", sizeof(int));
    printf("Address = %d,value = %d\n", p, *p);
    printf("Address = %d,value = %d\n", p+1, *(p+1));
    char *p0;
    p0 = (char*)p; //typecasting
    printf("size of character is %d in bytes\n", sizeof(char));
    printf("Address = %d,value = %d\n", p0, *p0);
    printf("Address = %d,value = %d\n", p0+1, *(p0+1));

    //Void pointer - Generic pointer
    void *p1;
    p1 = p;
    printf("Address = %d\n", p1);
    printf("Address = %d", p1+1);
}