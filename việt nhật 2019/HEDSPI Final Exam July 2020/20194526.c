//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5 - 0.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5
//----------9---------//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
    char hoten[10];
}ten;

int main()
{ 
    char enter;
    int *so = NULL;
    int menu, N, i, dem[30], n;
    int A[100];
    ten name[30];
    while (0==0)
    {
        printf("1. Nhap so N nguyen duong va N so nguyen roi in N so nguyen\n");
        printf("2. Nhap N ten\n");
        printf("3. Dao nguoc mang so nguyen\n");
        printf("4. Dem so lan xuat hien cua chu cai\n");
        printf("5. In ten sao cho moi ten chi hien 1 lan\n");
        printf("6. Thoat\n");
        printf("Chon: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            do
            {
                printf("Nhap N: ");
                scanf("%d", &N);
                printf("Nhap N so nguyen:\n");
                for (i = 0; i < N; i++)
                {
                    printf("N[%d]= ", i);
                    scanf("%d", &A[i]);
                }
                printf("Thu tu nhap vao:\n");
                printf("%d\n", N);
                for (i = 0; i < N; i++)
                {
                    printf("%d ", A[i]);
                }
                printf("\n");
            } while (N <= 0 && N >= 100);
            printf("\n");
            break;
        
        case 2:
        printf("Nhap so luong ten: ");
        scanf("%d", &n);
        scanf("%c", &enter);
            printf("Nhap ten: ");
            for (i = 0; i < n; i++)
            {
                printf("Name[%d] = ", i);
                gets(name[i].hoten);
                fflush(stdin);
            }
            printf("Thu tu nhap ten:\n");
            for (int i = 0; i < n; i++)
            {
                printf("%s ", name[i].hoten);
            }
            printf("\n");
            break;
        case 3:
            for (i = N - 1; i >= 0; i--)
            {
                printf("%d ", A[i]);
            }
            printf("\n");
        break;
        case 4:
        for (char c = 65; c <= 90; c++)
        {
            dem[c] = 0;
            for (i = 0; i < n; i++)
            {
                for(int j = 0; j < strlen(name[i].hoten); j++)
                {
                if (c == name[i].hoten[j])
                {
                    dem[c] += 1;
                }
                }
            }
            if((dem[c] != 0)) printf("%c:%d ", c, dem[c]);
        }
        printf("\n");
        break;
        case 5:
        for (i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
            if(strcmp(name[i].hoten, name[j].hoten) == 0) 
            {
                for (int k = 0; k < n; k++)
                {
                    name[j].hoten[k] = 0;
                }
                
            }
            }
            printf("%s ", name[i].hoten);
        }
        printf("\n");
        break;
        case 6:
        exit(0);
        break;
        }
    }
    
}