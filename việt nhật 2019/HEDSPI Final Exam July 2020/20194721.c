//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5 - 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------5.5---------//
#include <stdio.h>

int main()
{
	int menu;
	int n;
	int a[100];
	char str[100];
	while(1)
	{
		printf("1. In day so\n");
		printf("2. In mang ten cach 1\n");
		printf("3. Dao day so\n");
		printf("4. Dem lan xuat hien cua chu cai trong mang ten\n");
		printf("5. In mang ten cach 2\n");
		printf("6. Thoat chuong trinh\n");
		printf("Chon?(1,2,3,4,5,6): ");
		scanf("%d",&menu);
		if (menu==6)
			break;
		switch(menu){
			case 1:
			do{
				printf("Nhap n(n<100): ");
				scanf("%d",&n);
			}
			while(n<1||n>100);
			for (int i=0;i<n;i++)
			{
			printf("Nhap so nguyen thu %d:",i+1);
			scanf("%d",&a[i]);
			}
			for (int i=0;i<n;i++)
			{
			printf("%d ",a[i]);
			}
			printf("\n");
			break;
			case 3:
			do{
				printf("Nhap n(n<100): ");
				scanf("%d",&n);
			}
			while(n<1||n>100);
			for (int i=0;i<n;i++)
			{
			printf("Nhap so nguyen thu %d:",i+1);
			scanf("%d",&a[i]);
			}
			for (int i=n-1;i>=0;i--)
			{
			printf("%d ",a[i]);
			}
			printf("\n");
			break;		
		}
	}
	return 0;
}