#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, max = 0;

    do
    {
        printf("Nhap mang: ");
        scanf("%d", &n);

        if (n < 0 || n > 100)
        {
            printf("So lan do khong thoa man. Nhap lai: ");
        }
    } while (n < 0 || n > 100);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap muc bao thu %d: ", (i + 1));
        scanf("%d", &array[i]);

        if (max < array[i])
        {
            max = array[i];
        }
    }

    if (max >= 119 && max <= 153)
    {
        printf("1\n");
    }
    else if (max >= 154 && max <= 177)
    {
        printf("2\n");
    }
    else if (max >= 178 && max <= 209)
    {
        printf("3\n");
    }
    else if (max >= 210 && max <= 249)
    {
        printf("4\n");
    }
    else if (max >= 250)
    {
        printf("5\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
