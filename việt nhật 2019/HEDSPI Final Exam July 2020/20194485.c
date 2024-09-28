//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 
//In cac ten duy nhat: 1.5
//----------10.0---------//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int N=0; int menu=0;
    int num[100]; char name[100][100];
    char letters[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    while (1)
	{
		printf("1. Nhap vao so nguyen duong N cung N phan tu so\n");
		printf("2. Nhap vao N ten\n");
		printf("3. Dao nguoc mang so nguyen va in ra man hinh\n");
		printf("4. Dem so lan xuat hien cac chu cai \n");
		printf("5. In cac ten trong mang (moi ten xuat hien 1 lan)\n");
		printf("6. Thoat chuong trinh\n");
		printf("Hay chon menu: ");
		scanf("%d", &menu);

		switch (menu)
		{
			case 1:
				printf("Nhap vao so N: ");
				scanf("%d", &N);
				printf("Nhap vao N so: ");
				for (int i=0;i<N;i++) scanf("%d", &num[i]);
				for (int i=0;i<N;i++) printf("%d ", num[i]);
				printf("\n");
            break;
			case 2:
			    if (N==0) printf("So N chua duoc khai bao\n");
			    else
                {
                    printf("Nhap vao N ten: ");
                    for (int i=0;i<N;i++) scanf("%s", name[i]);
                    for (int i=0;i<N;i++)
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
			    for (int i=0;i<N/2;i++)
                {
                    int t=num[i];
                    num[i]=num[N-i-1];
                    num[N-i-1]=t;
                }
                for (int i=0;i<N;i++) printf("%d ",num[i]);
                printf("\n");
            break;
            case 4:
                for (int i=0;i<26;i++)
                {
                    int c=0;
                    for (int j=0;j<N;j++)
                    {
                        int k=0;
                        while (name[j][k]!='\0')
                        {
                            if (letters[i]==name[j][k]) c++;
                            k++;
                        }
                    }
                    if (c>0) printf("%c:%d ",letters[i],c);
                }
                printf("\n");
            break;
            case 5:
                printf("%s ",name[0]);
                for (int i=1;i<N;i++)
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
            break;
            case 6:
                exit(0);
			default:
                printf("Lua chon khong hop le \n");
		}
	}
}
