#include <stdio.h>

int main ()
{
    int i = 0;

    while (i<10) {
        printf("%d\n",i);
        i++;
    };

    int tong=0, dem = 0, sopt, sosau;

    printf("So ptu trong day so:");
    scanf("%d", &sopt);

    while (dem < sopt)
    {
        scanf("%d", &sosau);
        tong += sosau;
        dem++;
    }

    printf("Tong la %d\n", tong);

    int a, b, c;
    printf("Ma mon an: \n");
    scanf("%d", &a);
    printf("Ten mon an: \n");
    scanf("%d", &b);
    printf("Don gia: \n");
    scanf("%d", &c);
    printf("%d, %d, %d\n", a,b,c);

    return 0;
}