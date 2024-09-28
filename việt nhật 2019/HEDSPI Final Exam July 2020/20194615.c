//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5 - 0.5 //In thieu 1 ten
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------6.5---------//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char ten[10];
}nhapten;
int main()
{
    int menu=0, songuyen[100], n=0, i=0, k=0, in=0, r=0, giong=0, chucai[26]  ;
    nhapten mangten[100];
    while (0==0)
    {
        printf("1. Nhap so nguyen\n");
        printf("2. Nhap ten\n");
        printf("3.Dao nguoc bang so nguyen\n");
        printf("4.So lan xuat hien chu cai\n");
        printf("5.In ten khong trung lap\n");
        printf("6.Thoat\n");
        scanf("%d",&menu);
        switch (menu)
        {
         case 1:
            printf("Nhap N<100:\n");
            scanf("%d",&n);
            for (i=0; i < n; i++)
            {
                scanf("%d",&songuyen[i]);
            }
            for (i=0; i<n; i++)
            {
                printf(" ");
                printf("%d", songuyen[i]);
            }
            printf("\n");
         break;
         case 2:
            for (i=0; i<n; i++)
            {
                printf(" ");
                scanf("%s",&mangten[i].ten);
            }
            for (i=0; i<n; i++)
            {
                printf(" ");
                printf("%s",mangten[i].ten);
            }
            printf("\n");
         break;
         case 3:
            for (i=n-1; i >= 0; i--)
            {
                printf("%d ",songuyen[i]);
            }
            printf("\n");
         break;
         case 4:
            for (i=0; i<n; i++)
            {
                for (r=1; r<= strlen(mangten[i].ten); r++)
                {
                   k= atoi(mangten[i].ten[r]);

                }
            }
         break;
         case 5:
            printf("%s",mangten[0].ten);
            for (i=1; i<n; i++)
            {
                in = 1;
                for (k=0; k<i; k++)
                {
                    if (strlen(mangten[k].ten)==strlen(mangten[i].ten))
                    {
                        for (r=1; r<= strlen(mangten[k].ten); r++)
                        {
                            giong=1;
                            if (mangten[k].ten[r]!=mangten[i].ten[r])
                            {
                                giong=0;
                            }
                        }
                        if (giong==1)
                        {
                            in=0;
                        }
                    }
                }
                if (in==1)
                {
                    printf(" ");
                    printf("%s",mangten[i].ten);
                }
            }
            printf("\n");
         break;
         case 6:
         break;
         default:
         printf("Lua chon sai!\n");
         break;
        }
        if (menu == 6)
        {
            break;
        }

    }
}

