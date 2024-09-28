//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5
//----------8.5---------//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void nhap(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void hienThi(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
    }
}
void daoNguoc(int a[],int n)  
{
    for(int i=0;i<=n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("\nM?ng d?o ngu?c s? nguyên l?i là: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    } 
}

void mangTen(int n, char name[][30], int *size)
{
    int i;
    for(i = 0; i < n; i++) 
    {
        scanf("%s",name[i]);
        (*size)++;
    }
    while(getchar() != '\n');
        printf("\n");
    for(i = 0; i < n; i++) 
        printf("%s ", name[i]);
        printf("\n");
}
void demChuCai(char name[][30], int count)
{
    int i, j, cnt[100] = {0};
    int c[26];
    for(int i=0;i<26;i++)
        c[i]=0;
        for(i = 0; i < count; i++) 
        {
            int cntName = strlen(name[i]);
            for(j = 0; j < cntName; j++)
                c[name[i][j]-65]++;
        }
    for(int i=0;i<26;i++)
    printf("%c :%d",i+65,c[i]);
}
void inTen1(char name[][30], int size)
{
    int check = 1;
    printf("%s ", name[0]);
    for(int i = 1; i < size; i++) 
    {
        check = 1;
        for(int j = i-1; j >= 0; j--) 
        {
            if(strcmp(name[i], name[j]) == 0) 
            {
                check = 0;
                break;
            }
        }
        if(check) printf("%s ", name[i]);
    }
    printf("\n\n");
}
int main ()
{
    int count=0;
    int luachon,n;
    int size = 0;
    int a[100];
    char ten[25];
    char name[100][30];
    while(luachon!=6)
    {
        printf("\n=============MENU============\n");
        printf("\n1.In ra m?ng các s? nguyên.");
        printf("\n2.In ra m?ng các tên ");
        printf("\n3.In ra m?ng d?o ngu?c . ");
        printf("\n4.In ra các ch? cái và s? l?n xu?t hi?n.");
        printf("\n5.In ra các tên duy nh?t");
        printf("\n6.Thoát chuong trình");
        printf("\nB?n ch?n?");
        scanf("%d",&luachon);
        switch (luachon)
        {
        case 1:
            printf("Nh?p vào s? nguyên duong n (n < 100): ");
            do
            {
                scanf("%d", &n); while(getchar() != '\n');
                if(n < 1 || n > 100) 
                printf("s? b?n nh?p không h?p l? ,m?i nh?p l?ii: ");
            } while (n < 1 || n > 100);
            nhap(a,n);
            hienThi(a,n);
            break;
        case 2:
            printf("Nh?p vào s? nguyên duong n (n < 100): ");
            do
            {
                scanf("%d", &n); while(getchar() != '\n');
                if(n < 1 || n > 100) 
                printf("s? b?n nh?p không h?p l? ,m?i nh?p l?ii: ");
            } while (n < 1 || n > 100);
            mangTen(n, name, &size);
            break;
        case 3:
            daoNguoc(a,n);
            break;
        case 4:
            demChuCai(name,count);
            break;
        case 5:
            inTen1(name, size);
            break;    
        
        default:
            break;
        }
    }
}