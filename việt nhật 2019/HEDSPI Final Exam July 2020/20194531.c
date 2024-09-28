//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5
//----------8.5---------//
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int menu,n,i ;
	int a[100];
	char name[100][100];
	while (0==0)
	{
		printf("1. Nhap so nguyen duong N \n");
		printf("2. Nhap ten \n");
		printf("3. Dao nguoc mang so nguyen va in ra\n");
		printf("4. Dem so lan suat hien cac chu cai\n");
		printf("5. In ten ra man hinh\n");
		printf("6. Thoat");
		scanf("%d",&menu);
		switch (menu)
		{
			case 1:
			{
				printf("Nhap so duong N\n");
				scanf("%d",&n);
				printf("Nhap cac phan tu cua mang\n");
				for(int i = 0; i < n; i++) 
				{   
					scanf("%d", &a[i]); 
				}
				printf("Cac phan tu cua mang: \n");
				for (i = 0; i < n; i++) 
				{
					printf("%d ", a[i]);
				}
				printf("\n");
			}
			break;
			case 2:
			{
                for (int i=0;i<n;i++) scanf("%s", name[i]);
                for (int i=0;i<n;i++)
                {
                        int k=0;
                        while (name[i][k]!='\0')
                        {
                            char c=name[i][k];
                            name[i][k]=toupper(c);
                            k++;
                        }
                        printf("%s ",name[i]);
                }
                printf("\n");	
			}
			break;
			case 3:
			{
				for(i=n-1;i>=0;i--)
				{
					printf("%d ", a[i]);
				}
				printf("\n");
			}
			break;
			case 4:
			{
				
			}
			break;
			case 5:
			{
				printf("%s ",name[0]);
                for (int i=1;i<n;i++)
                {
                    int b=1;
                    for (int j=0;j<i;j++)
                    {
                        if (strcmp(name[i],name[j])==0)
                        {
                            b=0; break;
                        }
                    }
                    if (b==1) printf("%s ",name[i]);
                }
                printf("\n");
			}
			break;
			case 6:
				exit(0);
		}
	}
}
