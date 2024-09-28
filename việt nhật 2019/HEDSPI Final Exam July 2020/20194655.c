//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5
//----------8.5---------//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int menu,n,i,So[100];
char temp[]="";
int tmp=0;
char Ten[15][10];
char enter;
int main()
{
    while (0==0)
    {
        printf("1.nhap vao N so nguyen \n");
        printf("2.nhap vao N ten moi ten cach nhau boi dau cach\n");
        printf("3.dao nguoc mang so nguyen\n");
        printf("4.dem so lan xuat hien cua cac chu cai trong mang ten\n");
        printf("5.in cac ten trong mang\n");
        printf("6.thoat\n");
        printf("Hay chon menu:\n");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1:
            printf("so luong so nguyen can nhap:");
            scanf("%d",&n);
            scanf("%c",&enter);
            if (n<100 && n>0)
            {
                printf("nhap so nguyen:");
                for (i=0;i<n;i++)
                {
                    scanf("%d",&So[i]);
                }
                for (i=0;i<n;i++)
                {
                    printf("%d ",So[i]);
                }
                printf("\n");
            }
            
            break;
        
        case 2:
            printf("so luong ten can nhap:");
            scanf("%d",&n);
            scanf("%c",&enter);
            printf("nhap ten in hoa:");
            for (i=0;i<n;i++)
            {
                scanf("%s",&Ten[i]);
            }
            for (i=0;i<n;i++)
                {
                    printf("%s ",Ten[i]);
                }
                printf("\n");
            
            break;
        case 3:
            for(i=n-1;i>=0;--i)
            {
                printf("%d ",So[i]);
            }
            
            break;
        case 4:
            
            for(char c='A';c<='Z';++c)
            {
                for(i=0;i<n;++i)
                {
                    for(int k=0;k<10;++k)
                    {
                        if(c==Ten[i][k])
                            tmp++;
                    }
                }
                if(tmp>0) 
                printf("%c:%d ",c,tmp);
            }
            break;
        case 5:
            
            for(i=0;i<n-1;++i)
            {
                {    
                for(int k=i+1;k<n;++k)
                    if(strcmp(Ten[i],Ten[k])==0)
                        strcpy(Ten[k],temp);
                }   
            }
            for(i=0;i<n;++i)
                printf("%s ",Ten[i]);
            break;
        case 6:
            exit(0);
            break;
        }
        
        
    }
    
}