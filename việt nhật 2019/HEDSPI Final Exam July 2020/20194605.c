//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5
//----------10---------//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
typedef struct ten
{
	char st[100];
}namae;
int main()
{
	char enter;
	int n, v, menu;
	int a[100], dem[100];
	namae name[100];
	while(1)
	{
		printf("\nMenu: ");
		printf("\n1. In mang cac so nguyen.");
		printf("\n2. in mang cac ten.");
		printf("\n3. In mang dao nguoc.");
		printf("\n4. In cac chu cai va so lan xuat hien.");
		printf("\n5. In ra cac ten duy nhat.");
		printf("\n6. Thoat chuong trinh.\n");
		scanf("%d", &menu);
		scanf("%c", &enter);
		if (menu == 1)
		{
			memset(a, 0, 100);
			scanf("%d", &n);
			while (n < 0)
			{
				scanf("%d", &n);
			}
			for (int i = 0; i < n; i++)
			{
				scanf("%d", &a[i]);
			}
			for (int i = 0; i<n; i++)printf("%d ", a[i]);
			
		}
		else
		if (menu == 2)
		{	
			for (int i = 0; i< 100; i++)
			memset(name[i].st, 0, 100);
			scanf("%d", &v);
			scanf("%c", &enter);
			while (v <= 0)
			{
				scanf("%d", &v);
			}
			for (int i = 0; i < v; i++)scanf("%s", &name[i].st);
			printf("\n");
			for (int i = 0; i < v; i++)printf("%s ", name[i].st);
			printf("\n");
		}
		else
		if (menu == 3)
		{
			for (int i = n - 1; i >= 0; i--)printf("%d ", a[i]);
		}
		else
		if (menu == 4)
		{
			memset(dem, 0, 100*sizeof(int));
			for (int i = 0; i < v; i++)
			{
				for (int j = 0; j < strlen(name[i].st); j++)
				dem[name[i].st[j] - 65]++;
			}
			for (int i = 0; i < 26; i++)
			{
				if (dem[i] > 0)printf("%c:%d ", i+65, dem[i]);
			}
		}
		else
		if (menu == 5)
		{
			for (int i = 0; i < v-1; i++)
			{
				for (int j = i + 1; j < v; j++)
				if (strcmp(name[i].st, name[j].st) == 0)
				strcpy(name[j].st, "**");
			}
			for (int i = 0; i < v; i++)
			{
				if (strcmp(name[i].st, "**") != 0)printf("%s ", name[i].st);
			}
		}
		else
		if (menu == 6)exit(0);
	}
}