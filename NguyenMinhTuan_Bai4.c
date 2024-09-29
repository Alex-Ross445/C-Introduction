#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int hangtruc, hangdonvi;
    printf("Nhap so: ");
    scanf("%d", &n);
    if (n < 1 || n > 99)
        printf("-1");
    hangtruc = n / 10;
    hangdonvi = n - 10 * hangtruc;
    if (n > 10)
    {
        switch (hangtruc)
        {
        case 1:
        {
            printf("thap");
            break;
        }
        case 2:
        {
            printf("nhi thap");
            break;
        }
        case 3:
        {
            printf("tam thap");
            break;
        }
        case 4:
        {
            printf("tu thap");
            break;
        }
        case 5:
        {
            printf("ngu thap");
            break;
        }
        case 6:
        {
            printf("luc thap");
            break;
        }
        case 7:
        {
            printf("that thap");
            break;
        }
        case 8:
        {
            printf("bat thap");
            break;
        }
        case 9:
        {
            printf("cuu nhat");
            break;
        }
        }
        printf(" ");

        switch (hangdonvi)
        {
        case 1:
        {
            printf("nhat");
            break;
        }
        case 2:
        {
            printf("nhi");
            break;
        }
        case 3:
        {
            printf("tam");
            break;
        }
        case 4:
        {
            printf("tu");
            break;
        }
        case 5:
        {
            printf("ngu");
            break;
        }
        case 6:
        {
            printf("luc");
            break;
        }
        case 7:
        {
            printf("that");
            break;
        }
        case 8:
        {
            printf("bat");
            break;
        }
        case 9:
        {
            printf("cuu");
            break;
        }
        }
    }

    if (n < 10)
    {
        switch (n)
        {
        case 1:
        {
            printf("nhat");
            break;
        }
        case 2:
        {
            printf("nhi");
            break;
        }
        case 3:
        {
            printf("tam");
            break;
        }
        case 4:
        {
            printf("tu");
            break;
        }
        case 5:
        {
            printf("ngu");
            break;
        }
        case 6:
        {
            printf("luc");
            break;
        }
        case 7:
        {
            printf("that");
            break;
        }
        case 8:
        {
            printf("bat");
            break;
        }
        case 9:
        {
            printf("cuu");
            break;
        }
        }
    }
    return 0;
}