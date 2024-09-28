//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5 - 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------5.5---------//
#include<stdio.h>
#include<string.h>
typedef struct{
	char ten[40];
}TEN;
int menu;
int A[100];
int n;
TEN Name[30];
char enter;
char B[100];

int main()
{
	
	do
		{
			printf("\n----Menu----\n1.in ra cac mang so nguyen\n2.in ra cac ten mang \n3.in ra mang dao nguoc \n4.in ra cac chu cai va so lan xuat hien \n5.in ra cac ten duy nhat \n6.thoat.\n");
			printf("hay chon menu: ");
			scanf("%d", &menu);
			scanf("%c", &enter);
			switch (menu)
			{
				case 1:
			{
				do
				{
					printf("N = ");
					scanf("%d", &n);
				} while((n >=100) || (n < 0));
				for (int i = 0; i < n; i++)
				{
					scanf("%d", &A[i]);
				}
				for (int i = 0; i < n; i++)
				{
					printf("%d ", A[i] );
				}
				break;
			}
				
				
				case 2:
			{
			
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
					
					for (int i=(n-1) ; i >=0 ; i--)
						
					{
						printf("%d ",A[i]);
					}
				break;
				case 4:
				break;
				case 5:
				break;
				case 6:
				break;
			}
		}
	while(menu!=6);
}

