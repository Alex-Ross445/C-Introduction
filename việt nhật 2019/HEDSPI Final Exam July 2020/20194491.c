//Menu: 2
//In ra cac so nhap vao: 1.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5
//----------10.0---------//
#include <stdio.h>
#include <string.h>

#define flush while(getchar() != '\n')
int n, a[101], count[200];
char name[100][100];
int nName, check[10000];

void option1()
{
	printf("Nhap N phan tu:\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    flush;
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void option2()
{   
	printf("nhap so ten can nhap:\n");
    scanf("%d", &nName);
    flush;
    for(int i = 1; i <= nName; i++){
        scanf("%s", name[i]);
    }
    for(int i = 1; i <= nName; i++){
        for(int j = 0; j < strlen(name[i]); j++)
            if('a' <= name[i][j] && name[i][j] <= 'z')
                name[i][j] -= ('z' - 'Z');
    }
    for(int i = 1; i <= nName; i++)
        printf("%s ", name[i]);
    printf("\n");
}

void option3(){
    for(int i = n-1; i >= 0; i--)
        printf("%d ", a[i]);
    printf("\n");
}

void option4(){
    for(int i = 'A'; i <= 'Z'; i++)
        count[i] = 0;
    for(int i = 1; i <= nName; i++){
        for(int j = 0; j < strlen(name[i]); j++){
            count[name[i][j]]++;
        }
    }
    for(int i = 'A'; i <= 'Z'; i++)
        if(count[i] != 0)
            printf("%c:%d ", i, count[i]);
    printf("\n");
}

void option5(){
    int dem = 0;
    for(int i = 1; i <= nName; i++){
        dem = 0;
        for(int j = 0; j < strlen(name[i]); j++){
            dem += name[i][j];
        }
        if(check[dem] == 0)
            printf("%s ", name[i]);
        check[dem] = 1;
    }
    printf("\n");
}

int main(){
    int choose;
    do{ 
        printf("1. In ra mang cac so nguyen.\n");
        printf("2. In ra mang cac ten.\n");
        printf("3. In ra mang dao nguoc.\n");
        printf("4. In ra chu cai va so lan xuat hien.\n");
        printf("5. In ra cac ten duy nhat.\n");
        printf("6. Thoat khoi chuong trinh.\n");
        scanf("%d", &choose);
        flush;
        switch(choose){
            case(1):
                option1();
                break;
            case(2):
                option2();
                break;
            case(3):
                option3();
                break;
            case(4):
                option4();
                break;
            case(5):
                option5();
                break;
            default:
                break;
        }
    }while(choose != 6);
    return 0;
}