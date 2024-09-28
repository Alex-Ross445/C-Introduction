//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------8.5---------//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int menu;
	int arr[100];
	char tennguoi[1000];
	int N, n, temp;
	int dem=0;
	char chucai;
	while(0==0){
		printf("\n1. In ra mang cac so nguyen");
		printf("\n2. In ra mang cac ten");
		printf("\n3. In ra mang dao nguoc");
		printf("\n4. In ra cac chu cai va so lan xuat hien");
		printf("\n5. In ra cac ten duy nhat");
		printf("\n6. Thoat");
		printf("\nBan hay chon menu: ");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				do{
					printf("\nNhap vao so nguyen duong N:");
					scanf("%d", &N);
				}while((N <= 0) || (N >= 100 ));
				for(int i=0; i < N; i++){
					scanf("%d", &arr[i]);
				}
				for(int i=0; i < N; i++){
					printf("%d ", arr[i]);
				}
				break;
			case 2:
				printf("\nSo ten muon nhap: ");
				scanf("%d", &n);
				printf("\nNhap cac ten:");
				fflush(stdin);
				fgets(tennguoi, sizeof(tennguoi),stdin);
				puts(tennguoi);
				break;
			case 3:
				for(int i = 0; i < (int)(N/2); i++){
					temp = arr[i];
					arr[i] = arr[N-i-1];
					arr[N-i-1] = temp;
				}
				printf("\nDao nguoc mang so nguyen:\n");
				for(int i=0; i < N; i++){
					printf("%d ", arr[i]);
				}
				break;
			case 4:
				puts(tennguoi);
				for(chucai = 'A'; chucai <= 'Z'; chucai++){
					for(int i=0; i < strlen(tennguoi); i++){
						if(tennguoi[i] == chucai){
							dem +=1;
						}
					}
					if(dem!=0){
						printf("%c:%d ", chucai, dem);
					}
					dem = 0;
				}
				break;
			case 5:
				break;
			case 6: 
				exit(0);
		}
	}
}