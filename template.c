#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

typedef struct{
    int a;
    double b;
    char c[50];
} info;

void clear_buffer(void){
    int ch;
    while ( (ch=getchar()) != '\n' && ch!=EOF);
}

bool checkstring(char s[]){
    if (strlen(s) == 4)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (!isalpha(s[i]))
            {
                return false;
            }

        }
        return true;
    }
    else return false;
}

void input(int *num, info *subject){
    int i;
    for (int i=0; i<*num; i++) {
        do{
                printf("Nhap so nguyen: ");
                scanf("%d", &subject[i]->a);
        } while(dieu kien);
        printf("Nhap so thuc: ");
        scanf("%lf", &subject[i]->b);
        do{
                printf("Nhap string: ");
        clear_buffer();
        fgets(subject[i]->c, 50, stdin);
        subject[i].c[strlen(subject[i].c)-1]='\0';
        } while(!checkstring(subject[i]->c)))
        printf("----\n");
    }
}

void swap_struct(info *ptr1, info *ptr2) {
    info temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int num;
    int choice;
    int dachon1 = 0;
    int found = 0, foundstring = 0;
    char inputstring[30];
    int x; //hoac float x;
    info subject[50];
    do{
        printf("Menu\n");
        printf("|1. Nhap thong tin\n");
        printf("|2. In thong tin\n");
        printf("|3. \n");
        printf("|4. \n");
        printf("|5. \n");
        printf("|6. Ket thuc\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d",&choice);
        if (choice == 1) {
            dachon1++;
        }

        while(choice < 1 || choice > 6){
            printf("Lua chon khong hop le! Nhap lai: ");
            scanf("%d",&choice);
        }

        while (dachon1 == 0&& (choice == 2 || choice == 3 || choice == 4 || choice == 5)) {
            printf("ERROR! Chua chon chuc nang 1!\n");
            printf("Nhap lua chon cua ban: ");
            scanf("%d",&choice);
            if (choice == 1) {
                dachon1++;
            }
        }

        switch(choice){
    case 1:
        do{
                    printf("Nhap so luong: ");
                    scanf("%d",&num);
                    if (){
                        printf("So luong(dieu kien). Nhap lai!\n");
                    }
                }while (dieu kien cua num);
                input(&num,subject);
                break;
    case 2:
        printf("In thong tin\n");
                printf("Cot 1     Cot 2    Cot 3\n");
                for (int i=0; i<num; i++) {
                    printf("%-d%-f%-s\n",subject[i].a,subject[i].b,subject[i].c);
                }
                break;
    case 3:
        printf("Tim kiem theo x ");
            scanf("%f", &x); //x co the la %d hoac %f
            for (int i=0; i<num; i++) {
                    if ((dieu kien){
                        printf("%-d%-f%-s\n",subject[i].a,subject[i].b,subject[i].c);
                         sizefound = 1;
                    }
                }
            if(found == 0){printf("NOT FOUND!\n");}

        printf("Tim kiem theo string: ");
        fgets(inputstring,31,stdin);
        inputstring[strlen(inputstring)-1] = '\0';
        for(int i=0;i< num; i++){
            if (!strcmp(inputstring,subject[i].c)){
                printf("\n %d",i+1);
                printf("\n name: %s",nh[i].ten);
                printf("\n description: %s",nh[i].des);
                printf("\n rating: %.1f",nh[i].rate);
                printf("\n andress: %s \n \n \n ",nh[i].addr);
                printf("%-d%-f%-s\n",subject[i].a,subject[i].b,subject[i].c);
        foundstring++;
}

    }
    if(foundstring ==0) printf(" \n khong co nha hang can tim");
}
            break;
    case 4:
        printf("Sap xep nho den lon theo a: ");
            for(int i = 0; i < num - 1; i++)
                for(int j = i + 1; j < num; j++)
                    if(subject[i].a < subject[j].a)
                {
                   swap_struct(&subject[i], &subject[j]);
                }
        printf("In ket qua: ");
        fgets(t,31,stdin);
        for(int i = 0; i < num-1; i++){
                printf("%-d%-f%-s\n",subject[i].a,subject[i].b,subject[i].c);
            }
            break;

    case 5:
        break;
        }



    } while (choice != 6);
    return 0;
}
/* Tinh giai thua
#include <stdio.h>

int main(void)
{
	int time, start;

	printf("Enter starting time (an integer) in seconds> ");
	scanf("%d", &start);
	printf("\nBegin countdown\n");

	for (time = start; time > 0; time = time - 1)
	{
		printf("T - %d\n", time);
	}

	printf("Blast-off!\n");
	return (0);
} */

/* tim so nguyen to
int is_prime(int n){
	if(n == 2 || n == 3) return 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0)
			return 0;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int n;
	do{
		printf("Nhap mot so nguyen duong(>): ");
		scanf("%d", &n);
	} while (n<=1);

	printf("Cac so nguyen to nho hon %d la: ", n);
	for(int i = 2; i <= n; i++){
		if(is_prime(i))
			printf(" %d", i);
	}
	printf("\n");
	return 0;
} */

/* dao nguoc mang
#include<stdio.h>

void reverse(float a[], int size);

int main(int argc, char const *argv[])
{
	float a[100];
	int  size, i;
	printf("Nhap so phan tu: ");
	scanf("%d", &size);

	printf("Nhap cac phan tu: \n");
	for(i = 0; i < size; i++){
		printf("A[%d] = ", i);
		scanf("%f", &a[i]);
	}

	reverse(a, size);

	printf("Mang sau khi dao nguoc: \n");
	for (int i = 0; i < size; i++)
	{
		printf("a[%d] = %2.1f\n", i, a[i]);
	}
	return 0;
}

void reverse(float a[], int size){
	float temp;
	 for (int i = 0; i < size/2; i++)
	 {
	 	temp = a[i];
	 	a[i] = a[size - i -1];
	 	a[size - i - 1] = temp;
	 }
} */
