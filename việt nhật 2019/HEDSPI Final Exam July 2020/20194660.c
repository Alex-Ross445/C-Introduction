//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------8.0---------//
#include<stdio.h>
#include<string.h>

int main()
{
	
	int menu;
	int nguyen[100];
	char ten[1000];
	int sum = 0;
	printf("Chon menu: \n");
	printf("1. Nhap N so nguyen vao mang va in ra man hinh\n");
	printf("2. Nhap vao ten theo kieu viet hoa khong dau\n");
	printf("3. Dao nguoc mang so nguyen va in ra man hinh\n");
	printf("4. Dem so lan xuat hien cua moi chu cai trong mang\n");
	printf("5. In ten (Moi ten chi duoc in 1 lan)\n");
	printf("6. Thoat chuong trinh\n");
	while(0==0)
	{
		scanf("%d", &menu);
		fflush(stdin);
		if(menu==1)
		{
			int so_luong;
			int i;
			int j;
			printf("So luong so nguyen duong can nhap: \n");
			scanf("%d", &so_luong);
			fflush(stdin);
			for(i=sum;i<sum+so_luong;i++)
			{
				printf("Nhap vao thu %d: ", i+1);
				scanf("%d", &nguyen[i]);
				fflush(stdin);
				while(nguyen[i]>100)
				{
					printf("so vua nhap > 100. yeu cau nhap lai\n");
					printf("Nhap vao thu %d: ", i+1);
					scanf("%d", &nguyen[i]);
					fflush(stdin);
				}
			}
			sum = sum + so_luong;
			printf("In ket qua da nhap ra man hinh: \n");
			for(j=0;j<sum;j++)
			{
				printf("%d ", nguyen[j]);
			}
			printf("\n");
		}
		else if(menu==2)
		{
			int q=0;
			printf("Nhap ten voi ki tu viet hoa khong dau: \n");
			scanf("%[^\n]", ten);
			fflush(stdin);
			while(ten[q]!='\0')
			{
				if(ten[q]>=97&&ten[q]<=122)
				{
					ten[q] = ten[q]-32;
				}
				q++;
			}
			printf("In ten: \n");
			printf("%s\n", ten);
		}
		else if(menu==3)
		{
			int k= sum-1;
			while(k>=0)
			{
				printf("%d ", nguyen[k]);
				k--;
			}
			printf("\n");
		}
		else if(menu==4)
		{
			char k;
			int l;
			int tim;
			int m = strlen(ten);
			for(k=65;k<90;k++)
			{
				tim = 0;
				for(l=0;l<m;l++)
				{
					if(ten[l]==k)
					{
						tim++;
					}
				}
				if(tim!=0)
				{
				printf("%c:%d ", k, tim);
				}
			}
			printf("\n");
		}
		else if(menu==5)
		{
			printf("Chua lam duoc\n");
		}
		else if(menu==6)
		{
			break;
		}
	}
	
}