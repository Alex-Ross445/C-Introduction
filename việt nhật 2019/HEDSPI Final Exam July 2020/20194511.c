//Menu: 2
//In ra cac so nhap vao: 1.5-0.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5
//----------9.5---------//

#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

// em lam tren linux
typedef struct mang
{
  int a;
  char name[MAX];
} mang;
void menu()
{
  printf("\n%30s|=====================================================================|", " ");
  printf("\n%30s|-------------------MENU----------------------------------------------|", " ");
  printf("\n%30s|      LUA CHON      ||            NOI DUNG                           |", " ");
  printf("\n%30s|=====================================================================|", " ");
  printf("\n%30s|         1          ||     In ra mang cac so nguyen                  |", " ");
  printf("\n%30s|         2          ||     In ra mang cac ten                        |", " ");
  printf("\n%30s|         3          ||     In ra mang dao nguoc                      |", " ");
  printf("\n%30s|         4          ||     In ra cac chu so va so lan xuat hien      |", " ");
  printf("\n%30s|         5          ||     In ra cac ten duy nhat                    |", " ");
  printf("\n%30s|         6          ||             THOAT                             |", " ");
  printf("\n%30s|=====================================================================|\n", " ");
}
int chose(int e)
{
  int chon;
  do
    {
      while((scanf("%d", &chon))!=1)
	{
	  printf("Nhap sai, chi duoc nhap so tu 1->%d!!!\n", e);
	  __fpurge(stdin);
	}
      __fpurge(stdin);
      if(chon>e||chon<1)
	{
	  printf("Nhap sai, hay nhap lai gia tri tu 1->%d!!!\n", e);
	  chon=0;
	}
    }
  while(chon==0);
  return chon;
}
int chose1()
{
  int chon;
  while((scanf("%d", &chon))!=1)
	{
	  printf("Nhap sai, chi duoc nhap so nguyen!\n");
	  __fpurge(stdin);
	}
  return chon;
}
char *upperall(char name[])
{
  int k;
  for(k=0;k<(int)strlen(name);k++)
    {
      name[k]=toupper(name[k]);
    }
  return name;
}
void swip(mang *x, mang *y)
{
  mang tmp;
  tmp=*x;
  *x=*y;
  *y=tmp;
}
void swip_arr(mang a[],int n)
{
  int i;
  for(i=0;i<n/2;i++)
    swip(&a[i],&a[n-i-1]);
}
int main()
{
 /* here: */
 /*  goto here; */
  int thoat=1;
  mang arr[MAX];
  int n,i, j,k, so[MAX];
  do
    {
      menu();
      switch(chose(6))
	{
	case 1 :
	  i=0;
	  printf("Hay nhap do dai cua mang: ");
	  n=chose(100);
	  for(i=0;i<n;i++){
	    printf("A[%d]", i);  
	    arr[i].a=chose1();
	  __fpurge(stdin);
	  }
	  for(i=0;i<n;i++)
	    {
	      printf("%d ", arr[i].a);
	    }
	  printf("\n");
	  break;
	case 2 :
	  printf("Hay nhap ten cua cac hoc sinh:\n");
	  for(i=0;i<n;i++)
	    {
	      scanf("%s", arr[i].name);
	      strcpy(arr[i].name,upperall(arr[i].name));
	      printf("%s ", arr[i].name);
	    }
	  break;
	case 3 :
	  swip_arr(arr,n);
	  for(i=0;i<n;i++)
	    printf("%d ", arr[i].a);
	  printf("\n");
	  break;
	case 4 :
	  for(i=0;i<26;i++)
	    so[i]=0;
	  for(i=0;i<n;i++)
	    for(j=0;j<(int)strlen(arr[i].name);j++)
	      for(k=0;k<26;k++)
		so[arr[i].name[j]-'A']++;
	  for(k=0;k<26;k++)
	    {
	      if(so[k])
		printf("%c:%d  ", 'A'+k, so[k]/26);
	    }
	  break;
	case 5 :
	  k=0;
	  printf("%s ", arr[0].name);
	  for(i=1;i<n;i++)
	    {
	    for(j=0;j<i;j++)
	      {
	      if(strcmp(arr[i].name,arr[j].name)==0)
		k++;
	      }
	    if(k==0)
	      printf("%s ", arr[i].name);
	    k=0;
	    }
	  printf("\n");
	  break;
	case 6 :
	  thoat=0;
	  break;
	}
    }
  while(thoat);
}