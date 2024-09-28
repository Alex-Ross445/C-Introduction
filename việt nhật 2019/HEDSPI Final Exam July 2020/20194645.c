//Menu: 2
//In ra cac so nhap vao: 1.5 - 1.5
//In ra cac ten nhap vao: 1.5 - 1.5
//In ra mang so dao nguoc: 2 - 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------2.0---------//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    char so[100];
    char ten[100];

  




int sonhap[100];

int s1;
int menu;
char enter; 
int main()
{   int i;
    while(0==0)
    {
        printf("1. Nhap 1 so nguyen duong n:\n");
        printf("2. Nhap vao N moi ten:\n ");
        printf("3. NDao nguoc  so nguyen:\n  ");
        printf("4. Dem so lan xuat hien cac chu cai :\n ");
        printf("5. In ra cac ten trong mang :\n");
        printf("6. thoat\n");
        printf("Chon menu:");
        scanf("%d",&menu);
        switch(menu)
        {
          case 1:
            printf("So luong so nguyen can nhap :");
            scanf("%d",&s1);
            if(s1<100)
            {
                printf("Nhap so nguyen");
                 scanf("%d",& so[i]);
                for(i=0;i<s1;i++)
                {
                    printf("%d\n",so[i]);
                } 
                


            }
            break;





          case 2:
          printf("SO luong ten can nhap");
          scanf("%d",&s1);
          printf("Nhap ten in hoa :");
          scanf("%d",&ten);
          if(s1 <100)
          {
          for(i=0;i <s1; i++)
          {
              printf("%d",ten);
          }
          }
          
          
          
          
           break;
          
          case 3:
          case 4:
          case 5:
          case 6:
          exit(0);

        }


    }


  



}