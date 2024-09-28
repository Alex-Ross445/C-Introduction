//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2 - 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------5---------//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int menu=0;
    int n=0, k=0;
    int N=0;
    int so[n];
    char ten[10];
    char name[100];
    int bcc[26];

    while (0 == 0)
    {
        printf("1. Nhap du lieu\n");
        printf("2. Nhap ten\n");
        printf("3. Dao nguoc so\n");
        printf("4. Dem\n");
        printf("5. In ten\n");
        printf("6. Thoat\n");
        printf("Moi nhap menu: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("Nhap vao gia tri cua n (n > 0 va n < 100): ");
            scanf("%d", &n);
            printf("Nhap gia tri cac so nguyen:\n");
            for (int i = 1; i <= n; i++)
            {
                scanf("%d", &so[i]);
                printf("%d ", so[i]);
            }
        break;
        
        case 2:
            printf("Nhap vao gia tri cua N: ");
            scanf("%d", &N);
            printf("Nhap ten:\n");
            for (int i = 0; i < N; i++)
            {
                scanf("%s", ten);
                for (int j = 0; j < strlen(ten); j++)
                {

                    name[k] = ten[j];
                    k++;
                }
                if (i < N - 1)
                {
                    name[k] = ' ';
                    k++;
                }
            }
            name[k] = '\0';
            for (int i = 0; i < strlen(name); i++)
                printf("%c", name[i]);
        break;

        case 3:
            printf("Dao nguoc mang so nguyen:\n");
            int i=1;
            for (int k=n; k >= 1; k--)
            {
                do
                {
                    so[k] = so[i];
                    printf("%d ", so[k]);
                    i++;
                } while (i >= n);
                
            }

            printf("\n");
        break;

        case 4:
            for (int i = 0; i < 26; i++)
            {
                bcc[i]=0;
            }
            for (int i = 0; i < strlen(name); i++)
            {
                
            }
            
        break;

        case 5:
        break;

        case 6:
            exit(0);
        break;
        }
    }
}