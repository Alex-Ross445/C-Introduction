//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5 - 0.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5
//----------9.5---------//
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
typedef struct
{
	char ten[10];
}DS;

DS b[100];
int main()
{	
	int a[1000];
	int so,soten;
	int menu;
	
	while(1)
	{
		printf("1. In mang so nguyen\n");
		printf("2. In mang ten\n");
		printf("3. In mang dao nguoc\n");
		printf("4. Dem so lan xuat hien\n");
		printf("5. In mang ten moi ten 1 lan\n");
		printf("6. Thoat chuong trinh\n");
		printf("Chon menu: ");
		scanf("%d", &menu);
		switch(menu)
		{
			case 1:
			{
				do
				{
					printf("Nhap so so nguyen: ");
					scanf("%d",&so);
				}
				while(so>100);
				for(int i=0;i<so;i++)
				{
					scanf("%d",&a[i]);
				}
				for(int i=0;i<so;i++)
				{
					printf("%d ",a[i]);
				}
				printf("\n");
				break;
			}
			case 2:
			{
				printf("So ten can nhap: ");
				scanf("%d",&soten);
				printf("Nhap ten: \n");
				fflush(stdin);
				for(int i=0;i<soten;i++)
				{
					gets(b[i].ten);
					fflush(stdin);
					printf("\n");
				}
				for(int i=0;i<soten;i++)
				{
					printf("%s ",b[i].ten);
				}
				printf("\n");
				break;
			}
			case 3:
			{
				for(int i=0;i<so;i++)
				{
					for(int j=i+1;j<so;j++)
					{	
						int tmp;
						tmp=a[j];
						a[j]=a[i];
						a[i]=tmp;
					}
				}	
				for(int i=0;i<so;i++)
				{
					printf("%d ",a[i]);
				}
				printf("\n");	
				break;
			}
			case 4:
			{
				for(char i='A';i<='Z';i++)
				{
					int dem=0;
					for(int j=0;j<soten;j++)
					{
						if (strchr(b[j].ten, i)!=NULL)
							dem++;
						
					}
					if(dem>0)
					{
						printf("%c:%d ",i,dem);
					}
				}
				printf("\n");
				break;
			}
			case 5:
			{
				for(int i=0;i<soten;i++)
				{
					int dem=0;
					
					for(int j=i+1;j<=soten;j++)
					{	
						if(stricmp(b[i].ten,b[j].ten)==0)
						{
							dem++;
						}		
					}
					if(dem==0)
						printf("%s ",b[i].ten);
					else
						continue;
					
				}
				printf("\n");
				break;
			}
			case 6:
			{
				exit(0);
			}
		}
	}
}