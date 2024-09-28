//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5 - 0.5
//In ra mang so dao nguoc: 2 - 0.5 //in thua so 0 dau tien
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------5.5---------//
#include <stdio.h>
#include <string.h>

typedef struct
{
	int Number;
	char Name[8];
} MANG;

int N;
int menu;
MANG mng[100];

int main()
{
	while (0 == 0)
	{
		printf("1.Mang so nguyen\n");
		printf("2.Mang ten\n");
		printf("3.Dao nguoc mang so nguyen\n");
		printf("4.Chu cai va so lan xuat hien\n");
		printf("5.Cac ten duy nhat\n");
		printf("6.THoat chuong trinh\n");
		printf("Nhap lenh: ");
		scanf("%d", &menu);
		if (menu == 1)
		{
			printf("Nhap N: ");
			scanf("%d", &N);
			for (int i = 0;i < N;i++)
			{
				printf("Nhap so nguyen: ");
				scanf("%d", &mng[i].Number);				
			}
			printf("Day so nguyen la: ");
			for (int i = 0;i < N;i++)
			{
				printf("%d ", mng[i].Number);
			}		
		}else if (menu == 2)
		{
			for (int i = 0;i < N;i++)
			{
				printf("Nhap ten: ");
				fflush(stdin);
				gets(mng[i].Name);
			}
			for (int i = 0;i < N;i++)
			{
				printf("%s ", mng[i].Name);
			}		
		}else if (menu == 3)
		{
			printf("Mang dao nguoc: ");
			for (int i = N;i >= 0;--i)
			{
				printf("%d ", mng[i].Number);
			}		
		}else if (menu == 4)
		{
		
		}else if (menu == 5)
		{
		
		}else if (menu == 6)
		{
			break;
		}		
	}
}