//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5 - 0.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5 
//In cac ten duy nhat: 1.5 - 1.5
//----------6.5---------//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char ten[15];
}sinhvien;
int menu;
int i,n,A[100],trunggian;
int a;
sinhvien ds[100];
char enter,comfrim;
int main()
{
    while(1)
    {
        printf("1.Nhap vao mot so nguyen duong (n<100),sau do nhap n so nguyen duong va luu vao mot mang\n");
        printf("2.Nhap n ten khac nhau cac nhau bang dau cach \n");
        printf("3.Dao nguoc mang so nguyen va in ra man hinh \n");
        printf("4.Diem so lan xuat phat cac chu cai tring mang ten va in ra man hinh\n");
        printf("5.In ra cac ten trong mang sao cho moi ten chi duoc in ra mot lan\n");
        printf("6.Thoat\n");
        printf("Ban hay chon mot menu : ");
        scanf("%d",&menu);
        scanf("%c",&enter);
        switch(menu)
        {
            case 1:
                do
                {
                   printf("Nhap mot so nguyen duong n (n<100): ");
                   scanf("%d",&n);
                } while (n<=0 || n>=100);
                for(i=0;i<n;i++)
                {
                   
                    scanf("%d",&A[i]);
                }
                for(i=0;i<n;i++)
                {
                    printf("%d ",A[i]);  
                }
                printf("\n");
            break;

            case 2:
                
                for(i=0;i<n;i++)
                {
                    printf("Ten : ");
                    fflush(stdin);
                    gets(ds[i].ten);
                }
                for(i=0;i<n;i++)
                {
                    printf("%s ",ds[i].ten);
                }
                printf("\n");
            break;

            case 3:
                
                for(int i=0; i< n/2; i++)
                {
                    a = n - i - 1;
                    int tmp = A[a];
                    A[a] = A[i];
                    A[i] = tmp;
                }
                for(int i=0; i<n; i++)
                {
                    printf("%d ", A[i]);
                }
                printf("\n");
            break;

            case 4:
                printf("Chua lam duoc\n");
            break;

            case 5:
                printf("Chua lam duoc\n");
            break;

            case 6:
                 printf("Ban co muon thoat khong (y/n) ? : ");
                scanf("%c",&comfrim);
                if (comfrim == 'y')
                    exit(0);

        }
    }
}