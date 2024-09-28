//Loi dich ca tren Windows va Linux
#include <stdio.h>
#include <string.h>


int main ()
{
    int chonmenu;

    

    while (0 == 0)
    {
        printf ("1. Nhap so nguyen duong n va nhap n so nguyen duong vao mang va in ra\n");
        printf ("2. Nhap n ten");
        printf ("3. Dao nguoc mang so nguyen va in ra man hinh\n");
        printf ("4. Dem so lan xuat hien chu cai theo bang ten\n");
        printf ("5. In cac ten trong mang ten ra man hinh\n ");
        printf ("6. Thoat\n");
        printf ("chon menu : \n");
        scanf ("%d",&chonmenu);
        
        if (chonmenu == 1)
        {
            int n;
            printf ("nhap n = \n");
            scanf ("%d",&n);
            if (n < 100 && n > 0)
            {
                int chuoisonguyen[1000];
                printf ("nhap chuoi so nguyen :\n");
                for (int i=0;i<n;i++)
                {
                    scanf ("%d",&chuoisonguyen[i]);                
                }
                printf ("in chuoi \n");
                for (int j=0;j<n;j++)
                    printf ("%2d",chuoisonguyen[j]);
            }
            else if (n < 0 && n>100)
            {
                break;
            }
        }
        else if (chonmenu == 2)
        {
            char ten[1000];
            int n;
            
            printf ("nhap chuoi ");
            
            fgets (ten);
            strupr (ten);
            printf ("%2s",ten);
            
            
        }
        else if (chonmenu == 3)
        {
            int songuyen[1000];
            printf ("nhap mang so nguyen ");
            fgets (songuyen);
            for (int i=strlen(songuyen);i>=0;i--)
            {
                printf ("%d",songuyen[i]);
            }
        }
       

        else if (chonmenu == 6)
        {
            break;
        }
    }

}