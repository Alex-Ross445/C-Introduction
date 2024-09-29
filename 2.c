#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h> // Add missing header for isalpha()

int cnt = 0;
int soluong = 0; // Initialize soluong to zero

typedef struct phongtro {
    char ten[100];
    float dientich;
    int check; // xem co dieu hoa k 
    // 0 la chua lap , 1 la lap roi
} phongtro;

bool checkten(char s[]) {
    if (strlen(s) == 4) {
        for (int i = 0; i < strlen(s); i++) {
            if (!isalpha(s[i])) {
                return false;
            }
        }
        return true;
    }
    else return false;
}

bool checkdientich(float a) { // Change argument type to float
    if (a > 10 && a < 40) {
        return true;
    }
    return false;
}

void intput(phongtro *tro) {
    do {
        printf("hay nhap ten phong tro : \n");
        scanf("%s", tro->ten);
    } while (!checkten(tro->ten));
    do {
        printf("hay nhap dien tich phong tro : \n");
        scanf("%f", &tro->dientich);
    } while (!checkdientich(tro->dientich));
    printf("co su dung dieu hoa khong : ");
    scanf("%d", &tro->check);
}

int main() {
    int luachon = 1;
    phongtro tro[100];
    do {
        int choose;
        printf("hay nhap lua chon cua ban\n");
        scanf("%d", &choose);
        switch (choose) {
        case 1:
            printf("nhap so luong phong tro: ");
            scanf("%d", &soluong); // Add input for soluong
            int dem = cnt; // dem de luu chi so bat dau cua mang
            // cnt thi dung de luu chi so hien tai cua mang
            for (int i = dem; i < dem + soluong; i++) {
                cnt++;
                printf("thong tin phong thu %d\n", i + 1);
                intput(&tro[i]);
            }
            break;
        case 2:
            printf("thong in cac phong tro \n");
            printf("Ten phong      Dien Tich      Hoa      \n");
            for (int i = 0; i < cnt; i++) {
                printf("%s      %f      ", tro[i].ten, tro[i].dientich);
                if (tro[i].check == 0) {
                    printf("khong co dieu hoa : \n");
                }
                else printf("co dieu hoa \n");
            }
            break;
        case 3:
            printf("hay nhap vao dien tich ban muon tim kiem : ");
            float s;
            scanf("%f", &s);
            int phong = 0; // dung de xem co phong nao kong
            for (int i = 0; i < cnt; i++) {
                if (tro[i].dientich >= s - 5 &&  tro[i].dientich <= s + 5) {
                    printf("co phong thu %d voi dien tich la %f\n", i, tro[i].dientich);
                    phong++;
                }
            }
            if (phong == 0) {
                printf("khong tim duoc phong \n");
            }
            printf("\n");
            break;
        case 4: // sap xep
            for (int i = 0; i < cnt; i++) {
                // Use j instead of i in inner loop
                for (int j = 0; j < cnt; j++) {
                    phongtro tro_tmp;
                    if (tro[i].dientich > tro[j].dientich) {
                        tro_tmp = tro[i];
                        tro[i] = tro[j];
                        tro[j] = tro_tmp;
                    }
                }
            }
            printf("thong in cac phong tro \n");
            printf("Ten phong      Dien Tich      Hoa      \n");
            for (int i = 0; i < cnt; i++) {
                printf("%s      %f      ", tro[i].ten, tro[i].dientich);
                if (tro[i].check == 0) {
                    printf("khong co dieu hoa : \n");
                }
                else printf("co dieu hoa \n");
            }
            break;
        case 5:
            // Add missing code for case 5
            break;
        case 6:
            luachon = 0;
        }
    } while (luachon);
}