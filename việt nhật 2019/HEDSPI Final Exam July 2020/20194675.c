//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5 - 1.0 //N=6 nhung moi nhap duoc 5 da xong
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5 - 1.5 
//----------7.5---------//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
	char ten[1000];
}NAME;
	
int main()
{
	NAME Name[1000];
	int menu;
	int a[100];
	int n;
	int tmp;
	char name[1000];
	while(1)
	{
		printf("\nChuong trinh menu.\n");
		printf("1.Nhap so nguyen duong\n");
		printf("2.Nhap ten\n");
		printf("3.Mang nguyen dao nguoc.\n");
		printf("4.So lan xuat hien cua cac chu.\n");
		printf("5.In ten.\n");
		printf("6.Thoat chuong trinh.\n");
		printf("Hay chon menu. ");
		scanf("%d", &menu);

		switch(menu)
		{
			case 1:
			{
				printf("Ban da chon menu 1.\n");
				do
				{
					printf("N = ");
					scanf("%d", &n);
				} while((n >=100) || (n < 0));
				for (int i = 0; i < n; i++)
				{
					scanf("%d", &a[i]);
				}
				for (int i = 0; i < n; i++)
				{
					printf("%d ", a[i] );
				}
				break;
			}
			case 2:
			{
				printf("Ban da chon menu 2.\n");
				printf("Nhap ten.\n");
				for (int i = 0; i < n; i++)
				{
						gets(Name[i].ten);
						fflush(stdin);
				}
				for (int i = 0; i < n; i++)
				{
					printf("%s ", Name[i].ten);
				}
				break;
			}
			case 3:
			{
				printf("Ban da chon menu 3.\n");
				for (int i = 0; i <= n; i++)
				{
					for (int j = i+1; j < n ; j++)
					{
						tmp = a[i];
						a[i] = a[j];
						a[j] = tmp;
					}
				}
				printf("Mang nguoc chieu la:\n");
				for (int i = 0; i < n; i++)
				{
					printf("%d ", a[i]);
				}

				break;
			}
			case 4:
			{
				
			int e[26];
			for(int i=0;i<26;i++)
			{
				e[i]=0;
			}
			for(int i=0;i<n;i++)
			{
				 int k=strlen(Name[i].ten);
				 for(int j=0;j<k;j++)
				 {
				 	int h=Name[i].ten[j]-65;
				 	e[h]++;
				 }
			}
			for(int i=0;i<26;i++)
			{
				if(e[i]==0)
				{
					continue;
				}
				else
				{
					printf("%c:%d ",i+65,e[i]);
				}
			}
				break;
			}
			case 5:
			{
				printf("Cau nay em dang nhung dang bi bug a!\n");
				/*
   			int kiemtra = 1;
 		    printf("%s ", ten[1000]);
    		for(int i = 1; i < n; i++) {
        	kiemtra = 1;
        	for(int j = i-1; j >= 0; j--) {
            if(strcmp(ten[i], ten[j]) == 0) {
                kiemtra = 0;
                break;
            }
       		 }
       		 if(kiemtra) printf("%s ", ten[i]);
    		}
    		printf("\n\n");*/ 

				break;
			}
			case 6:
				exit(0);
				break;
			default:
				printf("Ban da chon sai, xin moi chon lai.\n");
				break;
		}
	}
	return 0;
}