//Menu: 2
//In ra cac so nhap vao: 1.5 - 1.5
//In ra cac ten nhap vao: 1.5 - 1.5
//In ra mang so dao nguoc: 2 - 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------2.0---------//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main()
{
	int chon,N;
	char enter, ten[100],mangphu[1000], so[100];
	while (0==0)
	{
		printf("Chon chuc nang ban muon:\n");
		printf("1.Nhap so\n");
		printf("2.Nhap ten\n");
		printf("3.Dao nguoc so\n");
		printf("4.In so lan chu cai xuat hien\n");
		printf("5.In cac ten da nhap\n");
		printf("6.Thoat chuong trinh\n");
		printf("Hay chon menu\n");
		scanf("%d",&chon);
		scanf("%c",&enter);
		switch (chon)
		{
			case 1:
				printf("Nhap so nguyen duong N nho hon 100:\n");
				scanf("%d",&N);
				printf("Nhap N so nguyen tu ban phim moi so cach nhau 1 dau cach\n");
				gets(so);
				scanf("%d",&enter);
				
			
				for (int dem =0;dem<strlen(so);dem++)
				{
					
					if (so[dem] == ' ' )
					{						
						strcat(mangphu, (so + dem + 1));
						strcat(mangphu," ");
					}
				}
				printf("%c",mangphu);
				break;
			case 2:
				printf("Nhap ten\n");
				gets(ten);
				scanf("%d",&enter);
				
				
				for (int dem =0;dem<strlen(ten);dem++)
				{
				
					if (ten[dem] == ' ' )
					{						
						strcat(mangphu, (ten + dem + 1));
							strcat(mangphu," ");
					}
				}
				printf("%c",mangphu);
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
}