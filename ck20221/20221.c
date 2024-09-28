#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char teamN[20]; // tên đội (không chứa dấu cách)
    int point;      // điểm số
    int diff;       // hiệu số bàn thắng – thua
} Compet;

void bubbleSort(Compet *team, int teamNum)
{
    for (int i = 0; i < teamNum - 1; i++)
    {
        for (int j = 0; j < teamNum - i - 1; j++)
        {
            if (team[j].point < team[j + 1].point)
            {
                // Swap teams
                Compet temp = team[j];
                team[j] = team[j + 1];
                team[j + 1] = temp;
            }
        }
    }
}

void displayTeams(Compet *team, int teamNum, const char *group)
{
    printf("Bang %s: \n", group);
    for (int i = 0; i < teamNum; i++)
    {
        printf("%s\t%d\t%d\n", team[i].teamN, team[i].point, team[i].diff);
    }
}

void displayMatchResults(int bk1_res[2], int bk2_res[2], int ck_res[2], Compet *team)
{
    printf("BK1: %s %s\n", team[0].teamN, team[1].teamN);
    printf("BK2: %s %s\n", team[2].teamN, team[3].teamN);
    printf("CK: %s %s\n", team[1].teamN, team[2].teamN);

    printf("CHAMPION: %s\n", (ck_res[0] > ck_res[1]) ? team[1].teamN : team[2].teamN);
}

int main(int argc, char const *argv[])
{
    char ipt;
    Compet team[50];
    int teamNumA, teamNumB;

    do
    {
        printf("Menu: Chon ham muon xu ly\n");
        printf("1 - Execute task 1\n");
        printf("2 - Execute task 2\n");
        printf("3 - Execute task 3\n");
        printf("x - Done\n");
        printf("Your choice: ");
        scanf(" %c", &ipt);

        if (ipt == '1')
        {
            do
            {
                printf("Input the number of teams in group A and B: ");
                scanf("%d", &teamNumA);
                teamNumB = teamNumA;
            } while (teamNumA < 1 || teamNumA > 5);

            printf("Group A: \n");
            for (int i = 0; i < teamNumA; i++)
            {
                printf("Name of the team number %d: ", (i + 1));
                scanf("%s", team[i].teamN);
                printf("Their point: ");
                scanf("%d", &team[i].point);
                printf("Goal difference: ");
                scanf("%d", &team[i].diff);
            }

            printf("Group B: \n");
            for (int j = 0; j < teamNumB; j++)
            {
                printf("Name of the team number %d: ", (j + 1));
                scanf("%s", team[j + teamNumA].teamN);
                printf("Their point: ");
                scanf("%d", &team[j + teamNumA].point);
                printf("Goal difference: ");
                scanf("%d", &team[j + teamNumA].diff);
            }

            printf("Bang A: \n");
            for (int i = 0; i < teamNumA; i++)
            {
                printf("%s\t%d\t%d\n", team[i].teamN, team[i].point, team[i].diff);
            }

            printf("Bang B: \n");
            for (int j = 0; j < teamNumB; j++)
            {
                printf("%s\t%d\t%d\n", team[j + teamNumB].teamN, team[j + teamNumB].point, team[j + teamNumB].diff);
            }
        }
        else if (ipt == '2')
        {
            bubbleSort(team, teamNumA);
            bubbleSort(team + teamNumA, teamNumB);

            displayTeams(team, teamNumA, "A");
            displayTeams(team + teamNumA, teamNumB, "B");
        }
        else if (ipt == '3')
        {
            int bk1_res[2], bk2_res[2], ck_res[2];

            printf("Nhập kết quả trận bán kết 1 (BK1) giữa đội nhấtBảng 1 và đội nhì Bảng 2: ");
            scanf("%d %d", &bk1_res[0], &bk1_res[1]);

            printf("Nhập kết quả trận bán kết 2 (BK2) giữa đội nhất Bảng 2 và đội nhì Bảng 1: ");
            scanf("%d %d", &bk2_res[0], &bk2_res[1]);

            printf("Nhập kết quả trận CK giữa đội thắng trận BK1 và trận BK2: ");
            scanf("%d %d", &ck_res[0], &ck_res[1]);

            displayMatchResults(bk1_res, bk2_res, ck_res, team);
        }

    } while (ipt != 'x');

    return 0;
}