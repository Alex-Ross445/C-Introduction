//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------8.5---------//

#include <stdio.h>
#include <string.h>

int main()
{
    int menu, i, j, k = 0, tmp, A[100], n, nten;
    char Name[100], bangchucai[26];
    char ten[10];
    char enter;


    do
    {
        printf("\n1. Nhap N so nguyen tu ban phim va in.\n");
        printf("2. NHap N ten va in\n");
        printf("3. Dao nguoc mang so nguyen va in\n");
        printf("4. Dem so lan xuat hien va in\n");
        printf("5. In cac ten trong mang ten va in\n");
        printf("6. Thoat\n");
        printf("Chon chuc nang ban muon thuc hien: ");
        scanf("%d", &menu);
        switch(menu)
        {
            case 1:
            do
            {
                printf("Nhap so nguyen duong N: ");
                scanf("%d", &n);
            } while (n <= 0);
            printf("Nhap n so nguyen tu ban phim: ");
            for(i = 0; i< n; i++)
            {
                scanf("%d",&A[i]);
            }
            printf("Mang so nguyen ban vua nhap la: ");
            for(i = 0; i< n; i++)
            {
                printf("%d ", A[i]);
            }
            break;
            case 2:
            i= 1;
                printf("Nhap so N: ");
                scanf("%d", &nten);
                printf("Nhap vao %d ten: ", nten);

                for(i = 0; i <nten; i++)
                {
                    scanf("%s", ten);
                    for(j= 0; j<strlen(ten); j++)
                    {
                        Name[k] = ten[j];
                        k++;
                    }
                    if(i < nten -1)
                    {
                        Name[k] = ' ';
                        k++;
                    }
                }
                Name[k] = '\0';
                for(i= 0; i <strlen(Name); i++)
                    printf("%c", Name[i]);

        
                
            break;
            case 3:
                /*
                for(i = 0; i<n; i++)
                {
                    tmp = A[i];
                    A[i] = A[n-i-1] ;
                    A[n-i-1] = tmp;
                }
                */
                // printf("Mang so nguyen sau khi dao nguoc: ");
                for(i = n-1; i >= 0;i--)
                {
                    printf("%d ", A[i]);
                }


            break;
            case 4:
            for(i = 0; i < 26; i++)
                bangchucai[i] = 0;
            for(i = 0; i <strlen(Name); i++)
            {
                bangchucai[Name[i] - 65] ++;
            }
                
            printf("So lan xuat hien cua chu cai: ");
            
            for ( i = 0; i < 26; i++)
                if(bangchucai[i] != 0) printf("%c:%d ", i+65, bangchucai[i]);

            break;
            case 5:

            break;
            case 6:
            break;
        }
    } while (menu != 6);
    
    return 0;
}