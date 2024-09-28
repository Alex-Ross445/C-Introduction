#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[5];
    float size;
    int aircond;
} phongtro;

void input(int *num, phongtro *room ){
    char acyesno[6];
    for(int i=0; i<*num; i++){
        printf("Ten: ");
        fflush(stdin);
        fgets(room[i].name, 5, stdin);
        if (room[i].name[strlen(room[i].name) - 1] == '\n') {
    room[i].name[strlen(room[i].name) - 1] = '\0';
        }
        do{
            printf("Dien tich: ");
            fflush(stdin);
            scanf("%f", &room[i].size);
        } while(room[i].size < 10 || room[i].size > 40);
        do{
                printf("Dieu hoa(co hay khong): ");
        fflush(stdin);
        scanf("%d", &room[i].aircond);
        } while(room[i].aircond != 1 && room[i].aircond != 0);
    }
}

int main()
{
    int choice;
    int dachon1 = 0;
    int num;
    float size, sizetmp;
    int sizefound = 0;
    char nametmp[5];
    int aircondtmp;
    int btu9 = 0, btu12 = 0, btu18 = 0, btu21 = 0;
    phongtro room[100];
    do{
        printf("---MENU---\n");
        printf("|1. Nhap thong tin\n");
        printf("|2. In thong tin\n");
        printf("|3. Tim kiem\n");
        printf("|4. Sap xep\n");
        printf("|5. Bo sung dieu hoa\n");
        printf("|6. Ket thuc\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d",&choice);
        while(choice < 1 || choice > 6){
            printf("Lua chon khong hop le! Nhap lai: ");
            scanf("%d",&choice);
        }
        if (choice == 1) {
            dachon1++;
        }

        while (dachon1 == 0 && (choice == 2 || choice == 3 || choice == 4 || choice == 5)){
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
                printf("Nhap vao so luong phong tro: ");
                    scanf("%d",&num);
                    if (num <= 0){
                        printf("So luong phong tro lon hon 0. Nhap lai!\n");
                    }
                }while (num<=0);
            input(&num, room);
            break;
        case 2:
                printf("In thong tin da nhap\n");
                printf("Ten phong   Dien tich   Dieu hoa\n");
                for (int i=0; i<num; i++){
                    printf("%-9s%-12f%-11d\n",room[i].name,room[i].size,room[i].aircond);
                }
                break;
        case 3:
            printf("Tim kiem theo dien tich ");
            scanf("%f", &size);
            for (int i=0; i<num; i++) {
                    if ((size - 5) <= room[i].size || (size + 5) <= room[i].size){
                        printf("%-9s%-12f%-11d\n",room[i].name,room[i].size,room[i].aircond);
                         sizefound = 1;
                    }
                }
            if(sizefound == 0){printf("NOT FOUND!\n");}
            break;
        case 4:
            printf("Sap xep theo dien tich phong giam dan\n");
            for(int i = 0; i < num - 1; i++)
                for(int j = i + 1; j < num; j++)
                if(room[i].size > room[j].size){
                    //sap xep size
                    sizetmp = room[i].size;
                    room[i].size = room[j].size;
                    room[j].size = sizetmp;
                    //sap xep ten
                    strcpy(nametmp, room[i].name);
                    strcpy(room[i].name, room[j].name);
                    strcpy(room[j].name, nametmp);
                    //sap xep dieu hoa
                    aircondtmp = room[i].aircond;
                    room[i].aircond = room[j].aircond;
                    room[j].aircond = aircondtmp;
                }
            printf("Ket qua giam dan:\n");
            for(int i = 0; i < num-1; i++){
                printf("%-9s%-12f%-11d\n",room[i].name,room[i].size,room[i].aircond);
            }
            break;
        case 5:
            for(int i = 0; i < num; i++){
                if(room[i].size<15){
                    btu9++;
                }
                if(room[i].size<22 && room[i].size>=15){
                    btu12++;
                }
                if(room[i].size<30 && room[i].size>=22){
                    btu18++;
                }
                if(room[i].size<=40 && room[i].size>=30){
                    btu21++;
                }
            }
            printf("So dieu hoa 9000BTU la: %d\n", btu9);
            printf("So dieu hoa 12000BTU la: %d\n", btu12);
            printf("So dieu hoa 18000BTU la: %d\n", btu18);
            printf("So dieu hoa 21000BTU la: %d\n", btu21);
            break;
        }
    } while(choice != 6);
    return 0;
}
