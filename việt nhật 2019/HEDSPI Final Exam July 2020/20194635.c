//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5
//----------10.0---------//
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
typedef struct
{
	char str[100];
}NAME;

int main()
{
    NAME name1[100];
    int dem[100];
    int i;
    int v;
    int n;
    int a[1000];
    int b[1000];
    char menu,enter;
    while(0==0)
    {
        printf("Menu: \n");
        printf("1.Mang so nguyen. \n");
        printf("2.Nhap mang ten. \n");
        printf("3.Dao nguoc mang so nguyen. \n");
        printf("4.So lan xuat hien cua chu cai. \n");
        printf("5.In ten ra man hinh.\n");
        printf("6.Thoat.\n");
        scanf("%c%c",&menu,&enter);
        switch (menu)
        {
            case '1'://In ra mang so nguyen
            {
                printf("Nhap vao n : ");
                scanf("%d",&n);
                scanf("%c",&enter);
                for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                }                
                scanf("%c",&enter);
                printf("\n");
                for(i=0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }
                printf("\n");
            }
                break;
            case '2'://In ra mang cac ten
            {
                int j;
                printf("\n");
                printf("Nhap so luong ten (N) : ");
                scanf("%d", &v);
                scanf("%c", &enter);
                while (v <= 0)
                {
                    scanf("%d", &v);
                }
                printf("\n");
                for (int i = 0; i < v; i++)scanf("%s", name1[i].str);
                scanf("%c",&enter);
                printf("\n");
                for(i=0; i<v; i++)
                    for(j=0;j<strlen(name1[i].str);j++) name1[i].str[j]=toupper(name1[i].str[j]);
                for (int i = 0; i < v; i++)printf("%s ", name1[i].str);
                printf("\n");
                break;
            }   
            case '3':
            {
                int j;
                int tmp;
                for(i=0;i<n;i++) b[i]=a[n-i-1];
                for(i=0;i<n;i++) printf("%d ",b[i]);//mang a dao nguoc la mang b.
                printf("\n");
            }
                break;
            case '4'://In ra cac chu cai va so lan xuat hien
            {
                    memset(dem, 0, 100*sizeof(int));
                for (int i = 0; i < v; i++)
                {
                    for (int j = 0; j < strlen(name1[i].str); j++)
                    dem[name1[i].str[j] - 65]++;
                }
                printf("\n");
                for (int i = 0; i < 26; i++)
                {
                    if (dem[i] > 0)printf("%c:%d ", i+65, dem[i]);
                }
                printf("\n");
            }
                break;
            case '5'://In ra cac ten duy nhat
            {
                for (int i = 0; i < v-1; i++)
                {
                    for (int j = i + 1; j < v; j++)
                    if (strcmp(name1[i].str, name1[j].str) == 0)
                        strcpy(name1[j].str, "$$");
                }
                printf("\n");
                for (int i = 0; i < v; i++)
                {
                    if (strcmp(name1[i].str, "$$") != 0)printf("%s ", name1[i].str);
                }
                printf("\n");
                for (int i = 0; i < v; i++) memset(name1[i].str,0,100);
            }
                break;
            case '6'://Thoat
            {
                exit(0);
            }
        }
    }
}