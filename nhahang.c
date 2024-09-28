#include<stdio.h>
#include<string.h>
int so;
void clear_buffer(void){
    int ch;
    while ( (ch=getchar()) != '\n' && ch!=EOF);
}
typedef struct 
{
    char ten[31];
    char des[500];
    float rate;
    char addr[100];
} nhahang ; 
void nhapnhahang( nhahang nh[])
{
    int i;
    for(i=0;i< so;i++)
    {
        printf("\n nhap ten nha hang %d : ",i+1);
        fgets(nh[i].ten,31,stdin);
        nh[i].ten[strlen(nh[i].ten)-1] = '\0';
        printf("\n nhap mo ta nha hang %d : ",i+1);
        fgets(nh[i].des,501,stdin);
        nh[i].des[strlen(nh[i].des)-1] = '\0';
        printf("\n nhap danh gia nha hang %d : ",i+1);
        scanf("%f",&nh[i].rate);
        clear_buffer();
        printf("\n nhap dia chi nha hang %d : ",i+1);
        fgets(nh[i].addr,501,stdin);
        nh[i].addr[strlen(nh[i].addr)-1] = '\0';

        




    }
}
void in(nhahang nh[])
{
    for(int i=0;i<so;i++)
    {
        printf("\n nha hang %d",i+1);
        printf("\n name: %s",nh[i].ten);
        printf("\n description: %s",nh[i].des);
        printf("\n rating: %.1f",nh[i].rate);
        printf("\n andress: %s \n \n \n ",nh[i].addr);

    }
}
void timten(nhahang nh[]) {
char t[30];
int tm=0;

  printf("nhap ten nha hang muon tim kiem: ");
   fgets(t,31,stdin);
   t[strlen(t)-1]= '\0';


    for(int i=0;i< so; i++)
    {
        if (!strcmp(t,nh[i].ten))
{
     printf("\n nha hang %d",i+1);
        printf("\n name: %s",nh[i].ten);
        printf("\n description: %s",nh[i].des);
        printf("\n rating: %.1f",nh[i].rate);
        printf("\n andress: %s \n \n \n ",nh[i].addr);
        tm++;
}
 
    }
    if(tm=0) printf(" \n khong co nha hang can tim");
}
   void timmon(nhahang nh[])
{
char t[30];
int tm=0;

  printf("nhap ten mon an muon tim kiem: ");
   fgets(t,31,stdin);
   t[strlen(t)-1]= '\0';


    for(int i=0;i< so; i++)
    {
        if (strstr(nh[i].des,t))
{
     printf("\n nha hang %d",i+1);
        printf("\n name: %s",nh[i].ten);
        printf("\n description: %s",nh[i].des);
        printf("\n rating: %.1f",nh[i].rate);
        printf("\n andress: %s \n \n \n ",nh[i].addr);
        tm++;
}
 
    }
    if(tm=0) printf(" \n khong co mon can tim");
}

int main()
{
    int k;
    printf("nhap k ");
    scanf("%d",&k);
   getchar();
   so=k;
    nhahang nn[3];
    nhapnhahang(nn);
    in(nn);

    timmon(nn);
    return 0;
    
}

