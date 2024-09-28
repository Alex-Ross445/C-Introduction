//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------6.5---------//

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<stdio_ext.h>
typedef struct{
	char name[30];
}SN;
const int MAX = 100;
 
 
void NhapMang(int a[], int n){
	int i;
    for(i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
	int i;
    for(i = 0;i < n; ++i){
        printf("%d ", a[i]);
    }
}

void DaoMang(int a[],int n)
{
   for(int i=0;i<n/2;i++)
    {
      int temp=a[i];
         a[i]=a[n-1-i];
         a[n-1-i]=temp; 
   }
}
 void NhapTen(SN sn[])
{
	char enter;
	int e,SoTen,f;
	printf("So ten muon nhap: ");
	scanf("%d",&SoTen);
	scanf("%c",&enter);
	for(e=1;e<=SoTen;e++)
	{
		printf("Nhap ten thu %d:",e);
		scanf("%[^\n]s",&sn[e].name);
		scanf("%c",&enter);
	}
	printf("\nDay ten: ");
	for(f=1;f<=SoTen;f++)
	{
		printf("%s ",sn[f].name);
	}
}
int main(){
    int a[MAX];
    int n;
    int e,SoTen,b;
    char enter;
    int chon;
    SN sn[100];
    do{
	printf("\n======MENU======\n");
	printf("1.in ra mang cac so nguyen\n");
	printf("2.inra cac mang ten\n");
	printf("3.in ra cac mang dao nguoc\n");
	printf("4.in ra cac chu cai va so lan xuat hien\n");
	printf("5.in ra cac ten duy nhat\n");
	printf("6.thoat\n");
	printf("nhap lua chon cua ban: ");
	scanf("%d",&chon);
	switch(chon){
	case 1:
    do{
    printf("\nnhap vao so nguyen duong: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > MAX);
    printf("\n======NHAP MANG=====\n");
    
    NhapMang(a, n);
    printf("%d\n", n);
    XuatMang(a, n);
    break;
    case 2:
    NhapTen(sn);
				break;
case 3:
 
DaoMang(a, n);
    printf("\n======DAO NGUOC MANG=====\n");
    XuatMang(a, n);
      break;
                       case 4:

				break;
			case 5:

				break;
			case 6:
				break;
			default:
                printf("Ban chon sai. Moi ban chon lai MENU!\n");
                break;
		}
	} while(chon != 6); 
return 0;
}
