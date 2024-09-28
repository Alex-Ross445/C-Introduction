//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------7.0---------//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
 int main()
 {  char s[100];
    int a[100];
    int n,tmp;
    int menu = 0;
 	while (0 == 0) 
	{   
	    printf("\n_______ Menu ______");
		printf("\n1. In ra mang cac so nguyen\n");
		printf("2. In ra mang cac ten\n");
		printf("3. In ra mang dao nguoc\n");
		printf("4. In ra cac chu cai va so lan xuat hien \n");
		printf("5. In ra cac ten duy nhat\n");
		printf("6. Thoat\n");
		printf("Hay chon menu: ");
		scanf("%d", &menu);
		switch (menu)
		{
			case 1:
			  scanf("%d",&n);
                if(n<100)
			    {
				    
                     for(int i=0;i<n;i++)
				       {
                	     scanf("%d",&tmp);
                        	a[i] = tmp;
                       }
                     for(int i=0;i<n;i++)
                       {
                	     printf("%d ",a[i]);
                       }
                }
                else printf("Hay nhap lai");
			 	    
                break;
            case 2:printf("Nhap cac ten: ");
				fflush(stdin);
				gets(s);
				strupr(s);
				puts(s);
				break;
                
                break;
            case 3:
            	for(int i=n-1; i>=0; i--) 
				{
                    printf("%d ", a[i]);
                }
               
                break;
            case 4:
                break;
         
            case 5:
                break;
			case 6:
				exit(0);
			break;
		}
		
	}
 }
