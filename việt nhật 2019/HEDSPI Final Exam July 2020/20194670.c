//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5 - 0.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5
//----------9.0---------//
#include<stdio.h>
#include<string.h>
#include<conio.h>


int menu, n, a[100], tmp;
char enter;

typedef struct
{
	char name[30];
}TEN;
TEN Name[30];


int main()
{
	
	
	while (0 == 0)
	{
		printf("1. In ra mang cac so nguyen.\n");
		printf("2. In ra mang cac ten.\n");
		printf("3. In ra mang dao nguoc.\n");
		printf("4. In ra cac chu cai va so lan xuat hien.\n");
		printf("5. In ra cac ten duy nhat.\n");
		printf("6. Thoat\n");
		printf("Hay chon menu: ");
		scanf("%d", &menu);
		scanf("%c", &enter);
		if(menu==1)
		{
			do
			{
				printf("Hay nhap so nguyen duong n: \n");
				scanf("%d",&n);
				if(n<0)
				{
					printf("So can nhap phai la so nguyen duong!Vui long nhap lai.\n");
				}
			}while(n<0);
			for(int i=0; i<n; i++)
			{
				printf("Nhap phan tu thu %d: ",i+1);
				scanf("%d",&a[i]);
			}
			for(int i=0; i<n; i++)
			{
				printf("%d ",a[i]);
			}
			printf("\n");
		}
		else if(menu==2)
		{
			for(int i=0; i<n; i++)
			{
				printf("Nhap ten thu %d: ",i+1);
				//scanf("%s",&name[i]);
				gets(Name[i].name);
				fflush(stdin);
				strupr(Name[i].name);
			}
			for(int i=0; i<n; i++)
			{
				printf("%s ",Name[i].name);
			}
			printf("\n");
			
		}
		else if(menu==3)
		{
			
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
			printf("Mang nguoc chieu: ");
			for(int i=0;i<n;i++)
			{
				printf("%d ",a[i]);
			}
			printf("\n");
		}
		else if(menu==4)
		{
			int e[26];
			for(int i=0;i<26;i++)
			{
				e[i]=0;
			}
			for(int i=0;i<n;i++)
			{
				 int k=strlen(Name[i].name);
				 for(int j=0;j<k;j++)
				 {
				 	int h=Name[i].name[j]-65;
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
			printf("\n");
		}
		else if(menu==5)
		{
			for (int i = 1; i < n; i++)
			{
				for (int j = 0; j < i; j++)
				{
					if (strcmp(Name[i].name , Name[j].name) == 0)
					{
						for (int k = i; k < n; k++) 
						{
							Name[k] = Name[k + 1];
							n--;
							i--;
						}
					}
				}
			}
			printf("\nCac ten duy nhat la:\n");
			for (int i = 0; i < n; i++) 
			{
				printf(" %s ", Name[i].name);
			}
			printf("\n");
		}
		else if(menu==6)
		{
			break;
		}
	}
 return 0;
}

