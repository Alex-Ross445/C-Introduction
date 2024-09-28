#include<stdio.h>
#include <string.h>
typedef struct {
    int ID;
    char Nation[4];
    char Name[31];
    float R[3];
    float FR;
}TTVDV;
void clear_buffer(void){
    int ch;
    while ( (ch=getchar()) != '\n' && ch!=EOF);
}
void EnternumVDV(int *n, TTVDV *DS){
    int i;
    for (i=0; i<*n; i++) {
        printf("ID: ");
        scanf("%d", &DS[i].ID);
        printf("Nation: ");
        scanf("%s",DS[i].Nation);
        printf("Name: ");
        clear_buffer();
        fgets(DS[i].Name,31,stdin);
        DS[i].Name[strlen(DS[i].Name)-1]='\0';
        printf("----\n");
    }
}
int main(){
    int choice,i,j;
    int numberVDV = 0;
    TTVDV DSVDV[40],tmp;
    char NationName[5],TenVDV[31];
    float max;
    int dachon1 = 0;
    int dachon3 = 0;
    do{
        printf("---MENU---\n");
        printf("|1. Nhap thong tin truoc khi thi dau\n");
        printf("|2. In thong tin\n");
        printf("|3. Thi dau\n");
        printf("|4. Tim kiem\n");
        printf("|5. In ket qua\n");
        printf("|6. Ket thuc\n");
        //Kiemtra choice - not done
        printf("Nhap lua chon cua ban: ");
        scanf("%d",&choice);
        if (choice == 1) {
            dachon1++;
        }
        while (dachon1 == 0) {
            printf("ERROR! Chua chon chuc nang 1!\n");
            printf("Nhap lua chon cua ban: ");
            scanf("%d",&choice);
            if (choice == 1) {
                dachon1++;
            }
        }
        
        while (dachon3 == 0 & (choice == 4 || choice == 5)) {
            printf("ERROR! Chua chon chuc nang 3!\n");
            printf("Chon chuc nang 3: ");
            scanf("%d",&choice);
            if (choice == 3){
            dachon3++;
            }
        }
          
        while ((choice==1 && dachon1 == 2) || (choice==3 && dachon3 == 2)) {
            printf("DA NHAP THONG TIN. Nhap lai\n");
            printf("Nhap lua chon cua ban: ");
            scanf("%d",&choice);
        }
        switch (choice) {
            case 1:
                do{
                    printf("Nhap vao so luong van dong vien: ");
                    scanf("%d",&numberVDV);
                    if (numberVDV>20 || numberVDV<=0){
                        printf("So luong VDV lon hon 0 va khong qua 20. Nhap lai!\n");
                    }
                }while (numberVDV>20 || numberVDV<=0);
                EnternumVDV(&numberVDV,DSVDV);
                break;
            case 2:
                printf("In thong tin da nhap\n");
                printf("ID     Nation    Name                       R1\tR2\tR3\tFR\n");
                for (i=0; i<numberVDV; i++) {
                    printf("%-7d%-10s%-27s\n",DSVDV[i].ID,DSVDV[i].Nation,DSVDV[i].Name);
                }
                break;
            case 3:
                printf("Nhap ket qua thi dau cua cac VDV\n");
                for (i=0; i<3; i++) {
                    printf("Lan %d:\n",i+1);
                    for (j=0; j<numberVDV; j++) {
                        do{
                            printf("\t");
                            printf("%s (ID %d): ",DSVDV[j].Name, DSVDV[j].ID);
                            scanf("%f",&DSVDV[j].R[i]);
                            if (DSVDV[j].R[i]>= 20 || DSVDV[j].R[i]<0) {
                                printf("Ket qua thi dau khong am va nho hon 20. Nhap lai\n");
                            }
                        }while (DSVDV[j].R[i]>= 20 || DSVDV[j].R[i]<0);
                        
                    }
                }
                //Tinh FR
                for (i=0; i<numberVDV;i++){
                    max = DSVDV[i].R[0];
                    for (j=1; j<3; j++) {
                        if (DSVDV[i].R[j]>max){
                            max = DSVDV[i].R[j];
                        }
                    }
                    DSVDV[i].FR=max;
                }
                break;
            case 4:
                printf("4. TIM KIEM\na) TIM KIEM THEO QUOC GIA\n");
                printf("Nhap ten quoc gia: ");
                scanf("%s",NationName);
                printf("---Results---\nID     Nation    Name                       R1    R2    R3    FR\n");
                int testSnation = 0;
                for (i=0; i<numberVDV; i++) {
                    if (strstr(DSVDV[i].Nation,NationName)!=NULL){
                        printf("%-7d%-10s%-27s",DSVDV[i].ID,DSVDV[i].Nation,DSVDV[i].Name);
                        for (j=0; j<3; j++) {
                            if (DSVDV[i].R[j] == 0) {
                                printf("-     ");
                            }else printf("%.2f\t",DSVDV[i].R[j]);
                            //Format
                            if (DSVDV[i].R[j]>=10) {printf(" ");}
                        }
                        printf("%.2f\n",DSVDV[i].FR);
                        testSnation = 1;
                    }
                }
                if (testSnation == 0) {
                    printf("NOT FOUND\n");
                }
                printf("b) TIM KIEM THEO TEN\n");
                printf("Nhap ten VDV: ");
                clear_buffer();
                fgets(TenVDV,31,stdin);
                TenVDV[strlen(TenVDV)-1]='\0';
                printf("---Results---\nID     Nation    Name                       R1    R2    R3    FR\n");
                int testSname = 0;
                for (i=0; i<numberVDV; i++) {
                    if (strstr(DSVDV[i].Name,TenVDV)!=NULL){
                        printf("%-7d%-10s%-27s",DSVDV[i].ID,DSVDV[i].Nation,DSVDV[i].Name);
                        for (j=0; j<3; j++) {
                            if (DSVDV[i].R[j] == 0) {
                                printf("-     ");
                            }else printf("%.2f\t",DSVDV[i].R[j]);
                            //Format
                            if (DSVDV[i].R[j]>=10) {printf(" ");}
                        }
                        printf("%.2f\n",DSVDV[i].FR);
                        testSname = 1;
                    }
                }
                if (testSname == 0) {
                    printf("NOT FOUND\n");
                }
                break;
            case 5:
                //Sap xep FR giam dan
                for (i=0; i<numberVDV-1; i++) {
                    for (j=i+1; j<numberVDV; j++) {
                        if (DSVDV[i].FR < DSVDV[j].FR){
                            tmp=DSVDV[i];
                            DSVDV[i]=DSVDV[j];
                            DSVDV[j]=tmp;
                        }
                    }
                }
                //In theo thu tu giam dan
                printf("---KET QUA FR giam dan---\nID     Nation    Name                       R1    R2    R3    FR\n");
                for (i=0; i<numberVDV; i++) {
                    printf("%-7d%-10s%-27s",DSVDV[i].ID,DSVDV[i].Nation,DSVDV[i].Name);
                    for (j=0; j<3; j++) {
                        if (DSVDV[i].R[j] == 0) {
                            printf("-     ");
                        }else printf("%.2f\t",DSVDV[i].R[j]);
                        //Format
                        if (DSVDV[i].R[j]>=10) {printf(" ");}
                    }
                    printf("%.2f\n",DSVDV[i].FR);
                }
                break;
            case 6: printf("CHUONG TRINH KET THUC.\n");
            default: break;
        }
    }while (choice != 6);
    return 0;
}
