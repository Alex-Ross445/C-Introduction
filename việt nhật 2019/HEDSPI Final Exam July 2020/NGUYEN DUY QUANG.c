//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5 - 0.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------6.0---------//
#include<stdio.h>

#include<stdlib.h>
#include<string.h>
#define MAXX 100

int N = 0,a[MAXX];
typedef struct MangSoNguyen
{
	char name[10];
	
} SN;

void menu()
{
    printf("\tMENU\n");
    printf("1.Nhap n\n");
    printf("2.Nhap ten\n");
    printf("3.Dao nguoc day so\n");
    printf("4.Dem chu cai\n");
    printf("5.In ten\n");
    printf("6.Thoat\n");
}

int checkn(int n)
{
    if(n==0)
    {
        printf("Unknown N\nReturn 1 to input N\n\n");
        return 1;
    }
    return 0;
}

void chucnang1()
{	
	char enter;
	int i;
    do
    {
        printf("Nhap so N: ");
        scanf("%d",&N);
        if(N>MAXX||N<0) printf("0 < N < %d\n\n",MAXX);
    }
    while(N>MAXX||N<0);

    for(i=0; i<N; i++)
    {
        printf("So thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nMang so nguyen: ",N);
    for(i=0; i<N-1; i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d\n",a[N-1]);
}

void chucnang2(SN sn[])
{
	char enter;
	int i,SoTen,j;
	for(i=1;i<=N;i++)
	{
		printf("Nhap ten thu %d:",i);
		scanf("%[^\n]s",&sn[i].name);
		scanf("%c",&enter);
	}
	printf("\nDay ten: ");
	for(j=1;j<=N;j++)
	{
		printf("%s ",sn[j].name);
	}
}


void chucnang3()
{	
	int i;
    for(i=0; i<=N/2; i++)
    {
        int temp=a[i];
        a[i]=a[N-1-i];
        a[N-1-i]=temp;
    }
    for(i=0; i<N-1; i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d\n",a[N-1]);
}



int main()
{
    SN sn[100];
	char enter;
	int n,number;
    do
    {
        menu();
        printf("Input your choice: ");
        scanf("%d",&number);
        scanf("%c",&enter);
        printf("\n");
        switch(number)
        {
        case 1:
            chucnang1();
            printf("\n");
            break;
        break;
        case 2:
            if(checkn(N)==1) break;
            chucnang2(sn);
            printf("\n");
            break;
        case 3:
            if(checkn(N)==1) break;
            chucnang3();
            printf("\n");
            break;
        case 4:
            if(checkn(N)==1) break;
            printf("\n");
            break;
        case 5:
            if(checkn(N)==1) break;
            printf("\n");
            break;
        case 6:
        	break;
        default :
            printf("Not support\n"); break;
        }
    }
    while(number!=6);
    return 0;
}
