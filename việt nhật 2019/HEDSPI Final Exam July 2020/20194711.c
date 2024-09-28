//Menu: 2
//In ra cac so nhap vao: 1.5 - 0.5 //Nhap thieu so cuoi cung
//In ra cac ten nhap vao: 1.5 - 1.0 //Nhap ko dung quy cach va cung ko in ra gi sau khi nhap
//In ra mang so dao nguoc: 2
//In so chu va so lan xuat hien: 1.5 - 1.5
//In cac ten duy nhat: 1.5 - 1.5
//----------5.5---------//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    	int menu = 0;
    	int N = 0;
    	int array[N-1];
    	char name[N-1];
	int i = 0;
	while (0==0)
	{
		printf ("1. In ra mang cac so nguyen\n");
		printf ("2. In ra mang cac ten\n");
		printf ("3. In ra mang dao nguoc\n");
		printf ("4. In ra cac chu cai va so lan xuat hien\n");
		printf ("5. In ra cac ten duy nhat\n");
		printf ("6. Thoat\n");
		printf ("Xin vui long chon menu: ");
		scanf ("%d", &menu);
		switch (menu)
		{
		    case 1:
		        printf ("Xin hay nhap so nguyen duong N (N<100): ");
		        scanf ("%d", &N);
		        
		        for (i=0; i<N; i++)
		        {
				printf ("Nhap so nguyen thu %d: ", i+1);
		           	scanf ("%d", &array[i]);
		        }
		        for (i=0; i<=N; i++)
		        {
		            	printf ("%d ", array[i]);
		        }
		        printf ("\n");
		        break;
		    case 2:
		        for (i=0; i<=N; i++)
		        {
		            	scanf ("%s", &name[i]);
				fflush (stdin);
		        }
		        printf ("\n");
		        break;
		    case 3:
		        for (i=N; i>=0; i--)
		        {
		            	printf ("%d ", array[i]);
				fflush (stdin);
		        }
		        printf ("\n");
		        break;
		    case 4:
		        printf ("Chua lam duoc");
		        printf ("\n");
		        break;
		    case 5:
		        printf ("Chua lam duoc");
		        printf ("\n");
		        break;
		    case 6:
		        exit (0);
		        break;
		    
		}



	}
}
