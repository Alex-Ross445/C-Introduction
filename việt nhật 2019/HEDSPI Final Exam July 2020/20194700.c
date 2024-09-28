//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------6.5---------//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct cuoiky
{
    char ten[100];
}cuoiky;
cuoiky ck[100];
int main()
{   int luachon;
    int n;
    int a[100];
    int count[26]={0};
    
    while(0==0)
    {
        printf("\n1. Nhap vao cac so nguyen");
        printf("\n2. Nhap vao cac ten");
        printf("\n3. Dao nguoc cac so nguyen");
        printf("\n4. Dem so lan xuat hien chu cai trong mang");
        printf("\n5. In cac ten trong mang");
        printf("\n6. Thoat chuong trinh");
        printf("\nNhap so lua chon:");
        scanf("%d",&luachon);
        switch (luachon)
        {
        case 1:
            printf("Nhap vao 1 so nguyen duong:");
            scanf("%d",&n);
            while(n<0||n>100){
                printf("Khong hop le, moi nhap lai so nguyen: ");
                scanf("%d",&n);
            }
            for(int i=0;i<n;i++){
                printf("Nhap vao so nguyen thu %d: ",i+1);
                scanf("%d",&a[i]);
            }
            for(int i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            break;
        case 2:
            printf("Cac ten khong chua dau cach, phan cach nhau boi dau cach\n");
            printf("Nhap vao cac ten: ");
            for(int i=0;i<n;i++)
            {
                scanf("%s",&ck[i].ten);
            }
            for(int i=0;i<n;i++)
            {
                printf("%s ",ck[i].ten);
            }
            break;
        case 3:
            for(int i=n-1;i>=0;i--)
            {
                printf("%d ",a[i]);
            }
            break;
        case 4:
            for (int i=0;i<n;i++){
                for(int j =0;j<26;j++)
                {
                    count[atoi(ck[i].ten[j])-'A']++;
                }
            }
            for (int i=0;i<26;i++)
            {
                if(count[i]>0){
                    printf("%c:%d",i+'A',count[i]);
                }
            }
            printf("\n");
            break;
        case 5:

            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Khong co lua chon, moi nhap lai\n");
            break;
        }
    }



    return 0;
}