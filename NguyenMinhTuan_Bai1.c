#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, step;
    int walk = 0;
    int missed;
    int less60 = 10000, more60 = 8000;

    do
    {
        printf("Nhap tuoi nguoi dung: ");
        scanf("%d", &age);

        if (age <= 0)
        {
            printf("Tuoi khong hop le. Nhap lai: ");
        }

    } while (age <= 0);

    if (age < 60)
    {
        while (1)
        {
            printf("Nhap so buoc chan moi lan van dong: ");
            scanf("%d", &step);
            walk += step;

            if (step == -1)
            {
                break;
            }
        }

        if (walk < less60)
        {
            int missed = less60 - walk - 1;
            printf("%d", missed);
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        while (1)
        {
            printf("Nhap so buoc chan moi lan van dong: ");
            scanf("%d", &step);
            walk += step;

            if (step == -1)
            {
                break;
            }
        }

        if (walk < more60)
        {
            int missed = more60 - walk;
            printf("%d", missed);
        }
        else
        {
            printf("0");
        }
    }

    return 0;
}