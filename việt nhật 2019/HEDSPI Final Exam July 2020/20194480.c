//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5 - 1.5
//In ra mang so dao nguoc: 2 - 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------3.0---------//
#include<stdio.h>
#include<stdlib.h>

void songuyen()
{
	int n, i;
	int a[100];
	printf("Nhap n: \n");
	scanf("%d", &n);
	while(n > 100){
		printf("Hay nhap lai n: \n");
		scanf("%d", &n);
	}
	if (n < 100){
		for(i = 0; i < n; i++){
			printf("Nhap mot so: \n");
			scanf("%d", &a[i]);	
			}
		for ( i=0; i < n; i++){
			printf("%d ", a[i]);
		}			
	}

	
}
void nhapten(){
	int n, a;
	printf("nhap n: \n");
	scanf("%d", &n);
	char b[100];
	if (n < 100){
		for (a=0; a < n; a++){
			printf("nhap ten: \n");
			scanf("%s", &b[a]);
		}
		for (a=0; a < n; a++){
			printf("%s ", b[a]);
		}
	}
}

int main()
{
	int menu;
	do{
	printf("\n1. In ra mang cac so nguyen\n");
	printf("2. In ra mang cac ten\n");
	printf("3. In ra mang dao nguoc\n");
	printf("4. In ra cac chu cai va so lan dau xuat hien\n");
	printf("5. In ra cac ten duy nhat\n");
	printf("6. Thoat\n");
	printf("hay chon menu: \n");
	scanf("%d", &menu);
	
		switch (menu)
		{
			case 1:
			songuyen();
			break;
			
			case 2:
			nhapten();
			break;
			
			case 3:
			
	
			break;
			
			case 4:
			break;
			
			case 5:
			break;
			
			case 6:
			exit(0);
		}
	}
	while(menu != 6);

		return 0;
}