//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2 - 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5- 1.5
//----------4.5---------//

#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdio_ext.h>
typedef struct{
  char b[100];
  int c[100];;
}mang;
int size()
{
	int n;
	printf("Nhap size cua mang: ");
	scanf("%d", &n);
	while (n < 0)
	{
		printf("Invalid size! Nhap lai: ");
		scanf("%d", &n);
	}
	return n;
}
void tach_ten(char st[300], char s[50][50], int n)
{
	const char d[2] = " ";
	char *token;
	token = strtok(st, d);
	int j = 0;
	while (token != NULL)
	{
		sprintf(s[j], token);
		j++;
		token = strtok(NULL, d);
	}
	printf("\n Mang ten: \n");
	for (int i = 0; i < j; i++)
		printf("%s\n ", s[i]);
}
void input(int a[50], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("arr[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void output(int a[50], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
  char st[300];
	char choice, mangten[50][50];
	int n, i;
	int mangso[50];
	while (choice != '5')
	{
		printf("\n    =====MENU=====\n"
			   "|1. Nhap va in mang so nguyen.            |\n"
			   "|2. Nhap va in mang ten.                  |\n"
			   "|3. Dao nguoc mang so nguyen.             |\n"
			   "|4. Dem chu cai trong mang ten.           |\n"
			   "|5. In moi ten 1 lan trong mang ten.      |\n"
			   "|6. Thoat chuong trinh.                   |\n");
		printf("Input your choice: ");
		scanf("%c", &choice);
		while (choice < '1' || choice > '6')
		{
			printf("Invalid! Nhap lai: ");
			scanf("%c", &choice);
		}
		switch (choice)
		{
		case '1':
		{
			n = size();
			input(mangso, n);
			output(mangso, n);
			printf("-%d\n",n);
			break;
		}
		case '2':
		{
			int h;
			char a, mangten[50][50];
			
			printf("Nhap N ten moi ten cach nhau 1 dau cach: ");
			// strupr(st);
			__fpurge(stdin);
			gets(st);
			tach_ten(st, mangten, n);
			break;
		}
		case '3':
		{
			for (i = 0; i < n; i++)
			{
				printf("%d: ", mangso[i]);
			}
			break;
		}
		case '4':
		{
      char a[100];
      mang mang;
      int i,j;
      strcpy(mang.b,st);
      for(i=0;i<=strlen(mang.b);i++)
        {
          mang.c[i]=1;
          for(j=i+1;j<=strlen(mang.b);j++)
            {
              if(mang.b[i]==mang.b[j]&&mang.b[j]!='0')
                {
                  mang.c[i]++;
                  mang.b[j]='0';
                }
            }
        }
      for(i=0;i<=strlen(mang.b)-1;i++)
        {
          if(mang.b[i] !='0'&&mang.b[i]!=' ')
            {
              printf(" %c:%d",mang.b[i],mang.c[i]);
            }
        }
			break;
		}
		}
	}
	return 0;
}

