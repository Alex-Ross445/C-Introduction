//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5 - 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------5---------//
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int N, M;
int a[100];
char Ten[100];
char menu, enter;
int main()
{
    while(0==0){
    printf("thicuoiky\nkhi hien menu lan nua hay nhap enter lan nua\nem moi lam duoc phan a, c\n");
    printf("a.nhap mang:\n");
    printf("b.nhap ten:\n");
    printf("c.dao nguoc mang so nguyen:\n");
    printf("d.dem so lan xuat hien ky tu:\n");
    printf("e.in danh sach ten trong mang ten:\n");
    printf("f.thoat.\n");
    scanf("%c", &menu);
    scanf("%c", &enter);
    switch(menu){
        case 'a':
        printf("nhap N:");
        scanf("%d-",&N);
        for(int i = 0; i<N; i++){
            printf("nhap mang:\n");
            printf("a[%i]:\n",i);
            scanf("%d",&a[i]);
        }
        printf("%d,",N);
        for(int i = 0; i<N; i++){
        printf("%2d", a[i] );
        }printf("\n");
        break;
        case 'b':
        printf("nhap M:");
        scanf("%d",&M);
        
        break;
        case 'c':
        printf("%d-", N);
        for(int i = N - 1; i >= 0; i--){
            printf("%2d", a[i]);
            printf("\n");
        }
        break;
        case 'd':
        break;
        case 'e':
        break;
        case 'f':
        exit(0);
        
        
    }
}
}
