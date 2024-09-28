//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------6.5---------//
#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#include<string.h>

void nhap_mang(int i, int n, int a[100]) //	NHAP MANG 
{
    for (i = 0; i < n; ++i) {
        printf("a[%d] =  ", i);
        scanf("%d", & a[i]);
        printf("\n");
    }
}

int in_mang(int i, int n, int a[100]) //	IN MANG
{
    for (i = 0; i < n; ++i) {
        printf("%d", a[i]);
        printf(" ");
    }
}

int dao_nguoc(int i, int n, int a[100]) //	DAO NGUOC 	
{
    for (i = n - 1; i >= 0; --i) {
        printf("%d ", a[i]);
    }
}

int slxh(int n, int a[100], int b[100], char ten[100]) // SO LAN XUAT HIEN
{
    int i, count;
    int do_dai_mang;
    printf("Gia tri \t \tso lan \n");

    for (i = 0; i < do_dai_mang; i++) {
        count = 1;
        if (b[i]) {
            b[i] = 0;
            for (int j = 1 + i; j < do_dai_mang; j++) {
                if (ten[i] == ten[j]) {
                    count++;
                    b[j] = 0;
                }
            }
            printf("%3d: %3d \t", ten[i], count);
        }
    }
}

int main() // CHUONG TRINH CHINH
{
    int i, n, a[100];
    int menu;
    char c;
    int ten[100];
    int b[100];
    char ktu;
    int do_dai_mang, dem;

    while (0 == 0) {
        printf("\t------MENU------\n");
        printf("\t1. In ra mang cac so nguyen \n ");
        printf("\t2. In ra mang cac ten \n");
        printf("\t3. In ra mang dao nguuoc \n");
        printf("\t4. In ra cac chu cai va so lan xuat hien \n");
        printf("\t5. In ra cac ten duy nhat \n");
        printf("\t6. Thoat \n");

        printf("Hay chon menu cua ban : ");
        scanf("%d", & menu);

        switch (menu) {
        case 1: // Nhap va in ra day so cach deu 
            printf("\t Nhap so nguyen n: ");
            scanf("%d", & n);
            nhap_mang(i, n, a);
            printf("Day so ban vua nhap la: \n");
            in_mang(i, n, a);
            printf("\n");
            break;

        case 2:
            /* Nhap va in ten sinh vien (note: TEN VIET HOA)*/
            printf("Hay nhap cac ten ma ban muon nhap: \n");
            char ten[100];
            fflush(stdin);
            fgets(ten, 100, stdin);
            printf("\n");
            printf("Day la day ten duoc in ra theo dung thu tu: \n");
            printf("%s	", ten);
            printf("\n");
            break;

        case 3:
            /*Day so dao nguoc*/
            printf("\nDay so dao nguoc cua ban la: \n");
            dao_nguoc(i, n, a);
            printf("\n");
            break;

        case 4:
            fflush(stdin);
            do_dai_mang = strlen(ten);
            for (; c >= 'A' && c <= 'Z';) {
                for (i = 0; i < do_dai_mang; ++i) {
                    if (c == ten[i]) {
                        dem++;
                    }
                    printf("%c : %d", c, ten[i]);
                }
            }
            break;

        case 5:
            printf("\n");
            printf("Danh sach ten la: \n");
			printf("%s	", ten);
            break;

        case 6:
            printf("\nBan co chac chan muon thoat (y/n) ?");
            scanf("%c", & c);
            if (c == 'y')
                exit(0);
            else
                break;
        }
    }
}
