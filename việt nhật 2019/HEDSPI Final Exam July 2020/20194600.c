//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5
//----------9.5---------//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
    {
        char ten[1000];
    }TEN;

int main ()
{
    int menu;
    char enter;
    int n=0;
    int N=0;
    int mang[1000];
    TEN ba[1000];
    int chuoi[100];
    int x;
    int dem;
     
    
    


    while (1)
    {
        printf("1. In mang so nguyen\n");
        printf("2. In ra mang cac ten\n");
        printf("3. In mang dao nguoc\n");
        printf("4. In ra cac chu cai va so lan xuat hien\n");
        printf("5. In ra cac ten duy nhat\n");
        printf("6. Thoat\n");
        printf("Chon menu:");
        scanf("%d", &menu);
        scanf("%c", &enter);

        switch (menu)
        {
        case 1:
            do
            {
                printf("Nhap N so luong so:");
                scanf ("%d", &n);
                scanf("%c", &enter);
            }
            while (n >= 100 || n<1);
            for (int i=0;i<n;i++)
            {
                printf("A[%d]=", i+1);
                scanf("%d", &mang[i]);
                scanf("%c", &enter);
            }
            for (int i=0; i<n;i++)
            {
                printf("%d ", mang[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("Nhap N so luong ten:");
            scanf("%d", &N);
            scanf("%c", &enter);
            printf("Luu y: Ten bang chu IN - Ko chua dau cach\n");
            for (int i=0; i<N; i++)
            {
                scanf("%s", &ba[i].ten);
                scanf("%c", &enter);
            }

            for (int i=0; i<N; i++)
            {
                printf("%s ", ba[i].ten);
                
            }
            printf("\n");

            break;

        case 3:
            for (int i=n-1; i>=0; i--)
            {
                printf("%d ", mang[i]);
            }
            printf("\n");

            break;
        case 4:
            for (int i =0; i<100;i++)
            {
                chuoi[i]=0;
            }
            for (int i=0; i<N; i++)
            {
                for (int j=0; j<strlen(ba[i].ten); j++)
                {
                    for (x=0;x<=25; x++ )
                    {
                        if (ba[i].ten[j] == (65+x)) chuoi[x]++;
                    }
                }
            }
            for (int i=0; i<25; i++)
            {
                if (chuoi[i] >0) 
                {
                    printf ("%c:%d ", 'A'+i,chuoi[i]);
                }
            }
            printf("\n");
            break;
        case 5:
            for (int i=0; i<N;i++)
            {
                dem =0;
                for (int j=i+1;j<N;j++)
                {
                    if (strcmp(ba[j].ten,ba[i].ten) ==0) 
                        {
                        
                        ba[j].ten[0] = '\0';dem++;}
                    
                }
                if (ba[i].ten != NULL && strlen(ba[i].ten) > 0)
                {
                    printf("%s ", ba[i].ten);
                }
                
            }
            printf("\n");
            break;
        case 6:
            exit(0);
    
        
        }

    }
}
