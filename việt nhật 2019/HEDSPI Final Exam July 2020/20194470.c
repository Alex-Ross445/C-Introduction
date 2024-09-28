//Menu: 2
//In ra cac so nhap vao: 1.5- 0.5
//In ra cac ten nhap vao: 1.5
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5
//In cac ten duy nhat: 1.5
//----------9.5---------//

#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void chuanhoa(char *s);
int main()
{
    int menu,a[100];
    char name[100],name1[100];
    while (0==0)
    {
        int n;
        printf("\n---CHUONG TRINH MENU---");
        printf("\n1.NHAP N SO NGUYEN TU BAN PHIM VA IN RA MANG");
        printf("\n2.NHAP VAO TEN CACH NHAU BOI 1 DAU CACH");
        printf("\n3.DAO NGUOC MANG SO NGUYEN RA MAN HINH");
        printf("\n4.DEM SO LAN KI TU XUAT HIEN TRONG MANG");
        printf("\n5.IN CAC TEN RA MAN HINH");
        printf("\n6.THOAT CHUONG TRINH");
        do
        {
            printf("\nXin moi chon 1 menu:");
            scanf("%d",&menu);
        } while (menu<=0||menu>6);
        switch (menu)
        {
        case 1:
            printf("\n---Ban dang o menu 1---");
            do
            {
                printf("\n Xin moi ban nhap vao 1 so nguyen N (<100):");
                scanf("%d",&n);
            } while (n>=100||n<=0);
            for (int i = 0; i < n; i++)
            {
                printf("\nNhap vao phan tu thu %d:",i+1);
                scanf("%d",&a[i]);
            }
            printf("\n Mang so nguyen la: ");
            for (int i = 0; i < n; i++)
            {
                printf("%d ",a[i]);
            }
            break;
        case 2:
            printf("\n---Ban dang o menu 2---");
            printf("\n Nhap vao ten :");
            fflush(stdin);
            gets(name);
            chuanhoa(name);
            int dem=0;
            for (int i = 0; i < strlen(name); i++)
            {
                if(a[i]==' ')dem++;
            }
            puts(name);
            break;
        case 3:
            printf("\n---Ban dang o menu 3---");
            printf("\n Mang so nguyen dao nguoc la: ");
            for (int i = n-1; i >=0; i--)
            {
                printf("%d ",a[i]);
            }
            break;
        case 4:
            printf("\n---Ban dang o menu 4---");
            printf("\ndem chu cai xuat hien trong chuoi\n");
			char occ[26];
			for (int i = 0; i < 26; ++i) {
				occ[i] = 0;
			}
			for (int i = 0; i < strlen(name); ++i) {
				if (name[i] >= 'A' && name[i] <= 'Z') {
					occ[name[i] - 'A']++;
				}
			}
			for (int i = 0; i < 26; ++i) {
				if (occ[i] != 0) {
					printf("%c xuat hien: %d lan\n", 'A'+i, occ[i]);
				}
			}
            break;
        case 5:
            printf("\n---Ban dang o menu 5---");
            printf("\n In ra cac ten :\n");
			char names[30][30];
			int row = 0, col = 0;
			for (int i = 0; i < strlen(name); ++i) {
				if (name[i] == ' ') {
					names[row][col] = '\0';
					row++;
					col = 0;
				} else {
					names[row][col] = name[i];
					col++;
				}
			}
			for (int i = 0; i<=row;++i) {
				for (int j = 0; j < i; ++j) {
					if (strcmp(names[i], names[j]) == 0) {
						names[j][0] = 0;
						break;
					}
				}
			}
			for (int i = 0; i<= row; ++i) {
				if (names[i][0] != 0) {
					printf("%s ", names[i]);
				}
			}
            break;
        case 6:
            exit(0);
        }
    }
    return 0;
}
void chuanhoa(char *s)
{
   while(s[0]==' ')strcpy(s,s+1);
   while(s[strlen(s)-1]==' ')
   s[strlen(s)-1]='\0';
   for (int i = 0; i < strlen(s); i++)
   {
       if(s[i]==' '&&s[i+1]==' ')
       {
           strcpy(s+i,s+i+1);
           i--;
       }
   }
   for (int i = 0; i < strlen(s); i++)
   {
       if (isalpha(s[i])&&(s[i-1]==' '||(i==0)))
       {
           s[i]=toupper(s[i]);
       }
       else s[i]=toupper(s[i]);    
   }      
}

