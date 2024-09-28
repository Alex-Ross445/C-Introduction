//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2 - 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------4.5---------//
#include <stdio.h>
#include <string.h>

int main()
{
    int menu, i, N;
    int a[100];
    while(0 == 0)
    {
        printf("1. Nhap so nguyen duong N (n < 100).\n");
        printf("2. Nhap vao N ten.\n");
        printf("3. Dao nguoc mang.\n");
        printf("4. Dem so lan xuat hien cua cac chu cai trong mang ten.\n");
        printf("5. In cac ten trong mang.\n");
        printf("6. Thoat.\n");
        printf("Hay chon menu.\n");
        scanf("%d",&menu);
        switch (menu)
        {
            case 1:
            {
                printf("Nhap N (N < 100): ");
                scanf("%d", &N);
                if (N >= 100)
                {
                    printf("Nhap lai.");
                    break;
                }
                for (i = 0; i < N; i++)
                {
                    printf("a[%d]= ",i);
                    scanf("%d", &a[i]);
                }
                for (i = 0; i < N; i++)
                    printf("%d ",a[i]);
                printf("\n");
                break;
            }
            case 2:
            {
                char* s1 = NULL;
                char* s2 = NULL;
                char s3 = ' ';
                char* s[1000];
                for (i = 0; i < N; i++)
                {
                    printf("Nhap ten a[%d]: ",i);
                    scanf("%s", &s[i]);
                }
                for (i = 0; i < N; i++);
                {
                    printf("%s ",s[i]);
                }
                break;
            }
            case 3:
            {
                int tg;
                for (i = 0; i < (N / 2); i++)
                {
                    tg = a[i];
                    a[i] = a[N-i-1];
                    a[N-i-1] = tg;
                }
                for (i = 0; i < N; i++)
                {
                    printf("%d ",a[i]);
                }
                printf("\n");
                break;
            }
            case 4:
            {
                break;
            }
            case 5:
            {
                break;
            }
            case 6:
            {
                exit(0);
                break;
            }
        }
    }
    return 0;
}
