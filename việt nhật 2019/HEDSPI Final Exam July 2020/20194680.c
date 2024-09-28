//Loi dich ca tren Windows va Linux
#include<stdio.h>
#include<stdlib.h>

main()
{
    int menu,i,n,a[100],N,j, re[100], in[100];
    char name[100][100];
    do
    {
    printf("1.day so. \n");
    printf("2.day ten. \n");
    printf("3.dao day so. \n");
    printf("4. dem chu cai. \n");
    printf("5. day ten khong lap. \n");
    printf("6. thoat chuong trinh. \n");
    printf(" chon van de can giai quyet. \n");
    scanf("%d", &menu);
    switch(menu)
    {
        case 1:
            printf(" nhap n: \n");
            scanf("%d", &n);
            for(i = 1; i <= n; i++)
            {
                scanf("%d", &a[i]);
            }
            for(i = 1;i <= n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("nhap N: ");
            scanf("%d", &N);
            for(i = 1; i <= N; i++)
            {
                scanf("%s", &name[i]);
            }
            for(i = 1; i <= N; i++)
            {
                printf("%s ", name[i]);
            }
            printf("\n");
            break;
        case 3:
            for(i = n; i> 0; i--)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;
        case 4:
            for(i=0;i<N;i++)
                for(j=0;j<strlen(name[i];j++))
                re[name[i][j]-65]++;
                for(i=1;i<27;i++)
                    if(re[i] != 0){printf("%c:%d ", i+65, re[i]);}
                    printf("\n")
            break;
        case 5:
            int i,j,k=1;
            for(i=0; i<N; i++)
                in[i]=0;
                in[i]=1;
                for(i=0;i<N;i++)
                    for(j=i+1;j<N;j++)
                    {
                        if(in[i] == 0)in[i]=k;
                        if(strcmp(name[i],name[j] == 0)) in[i]=k;
                        if(j == N-1) k++;
                    }
                    k = 1;
                    for(i=0;i<N;i++)
                        if(in[i]==k){printf("%s", name[i]);}
                        k++;
            break;
    }
    }
    while(menu != 6);
}
