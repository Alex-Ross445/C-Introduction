//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------8.5---------//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int menu, arr[100], bangchucai[26];
    int N, i, j, k = 0;
    int tmp;
    int soten;
    char ten[10], mangten[100];
    char enter;
    while(1)
    {
        printf("\n1. In ra mang cac so nguyen\n");
        printf("2. In ra mang ten\n");
        printf("3. Dao nguoc mang so nguyen\n");
        printf("4. So lan xuat hien cua cac chu cai\n");
        printf("5. In mang ten xuat hien 1 lan\n");
        printf("6. Exit");
        printf("\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            do
            {
                printf("\nNhap vao N so nguyen duong: ");
                scanf("%c%d", &enter, &N);
                if(N <= 0)
                    printf("\nNhap lai so: ");
            } while (N <= 0);
            for(i = 0; i < N; i++)
            {
                printf("So nguyen [%d]: ", i);
                scanf("%d", &arr[i]);
            }
            printf("\nCac phan tu cua mang: ");
            for(i = 0; i < N; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;
        
        case 2:
            i = 1;
            printf("So ten can nhap: ");
            scanf("%c%d", &enter, &soten);
            for(i = 0; i < soten; i++)
            {
                scanf("%s", ten);
                for(j = 0; j < strlen(ten); j++)
                {
                    mangten[k] = ten[j]; 
                    k++;
                }
                if(i < soten - 1)
                {
                    mangten[k] = ' ';
                    k++;
                }
            }
            mangten[k] = '\0';
            for(i = 0; i < strlen(mangten);i++)
                printf("%c", mangten[i]);
            printf("\n");
            break;
            
        case 3:
            scanf("%c",&enter);
            for(i = N - 1; i >= 0; i--)
                printf("%d ", arr[i]);
            /*for(i = 0; i <= N - 1; i++)
            {
                swap(&arr[i], &arr[N - i]);
            }
            printf("\nMang sau khi dao nguoc : ");
            for(i = 0; i < N; i++)
                printf("%d ", arr[i]);*/
            printf("\n");
            break;

        case 4:
            for(i = 0; i < 26; i++)
                bangchucai[i] = 0;
            for(i = 0; i <strlen(mangten); i++)
            {
                bangchucai[mangten[i] - 65]++;
            }
            printf("So lan xuat hien cua cac chu cai: \n");
            for(i = 0; i < 26; i++)
                if(bangchucai[i] != 0)
                    printf("%c:%d ", i + 65, bangchucai[i]);
            printf("\n");
            break;

        /*case 5:
            break;*/

        case 6:
            exit(12);
            break;

        }
    }
    return 0;
}