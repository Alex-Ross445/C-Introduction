//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5
//----------8.5---------//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char b[100];
	int c[100];
}mg;

mg mang[100];
int menu;
int N;
int a[100];
int count[26]={0};

int main(){
	while(0==0){
		printf("__________MENU__________\n");
		printf("1.Nhap N so nguyen\n");
		printf("2.Nhap vao N ten\n");
		printf("3.Dao nguoc mang so nguyen\n");
		printf("4.So lan xuat hien cua chu cai\n");
		printf("5.In ten trong mang\n");
		printf("6.Thoat\n");
		printf("Chon menu: ");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				do{
					printf("Nhap so nguyen N: ");
					scanf("%d",&N);
				}while(N<1 && N>=100);
				for(int i=0;i<N;i++)
				{
					scanf("%d",&a[i]);
				}
				printf("%d\n",N);
				for(int i=0;i<N;i++){
					printf("%d ",a[i]);
				}
				printf("\n");
			break;
			case 2:
				printf("Nhap ten (chu cai viet hoa, khong dau, khong chua dau cach\n");
				for(int i=0;i<N;i++){
					scanf("%s",&mang[i].b);
				}
				for(int i=0;i<N;i++){
					printf("%s ",mang[i].b);
				}
				printf("\n");
			break;
			case 3:
				for(int i=N-1;i>=0;i--){
					printf("%d ",a[i]);
				}
				printf("\n");
			break;
			case 4:
				
				for(int i=0;i<=strlen(mang->b);i++){
					mang->c[i]=1;
					for(int j=i+1;j<=strlen(mang->b);j++){
						if(mang->b[i]==mang->b[j]&&mang->b[j]!='0'){
							mang->c[i]++;
							mang->b[j]='0';
						}
					}
				}
				for(int i=0;i<=strlen(mang->b)-1;i++){
					if(mang->b[i]!='0' && mang->b[i]!=' '){
						printf("%c:%d ",mang->b[i],mang->c[i]);
					}
				}
				printf("\n");
			break;
			case 5:
				
				for(int i=0;i<N-1;i++){
					for(int j=i+1;j<N;j++){
						if(strcmp(mang[i].b,mang[j].b)==0)
							strcpy(mang[j].b,"khonginra");
					}
				}
				for(int i=0;i<N;i++){
					if(strcmp(mang[i].b,"khonginra")!=0)
						printf("%s ",mang[i].b);
				}
				printf("\n");
			break;
			case 6:
				exit(0);
		}
	}
}
		