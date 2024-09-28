#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char ipt;

    do
    {
        printf("Menu: Chon ham muon xu ly\n");
        printf("1 - Execute task 1\n");
        printf("2 - Execute task 2\n");
        printf("3 - Execute task 3\n");
        printf("4 - Execute task 4\n");
        printf("x - Done\n");
        printf("Your choice: ");
        scanf(" %c", &ipt);

        if (ipt == '1') //đếm tần suất
        {
            int size;
            do
            {
                printf("Input a number: ");
                scanf("%d", &size);
            } while (size < 0 || size > 20);

            int array[size];
            int count[20] = {0};

            for (int i = 0; i < size; i++)
            {
                printf("Enter the value of element number %d: ", (i + 1));
                scanf("%d", &array[i]);
                count[array[i]]++;
            }

            for (int i = 0; i < 20; i++)
            {
                if (count[i] > 0)
                {
                    printf("%d %d\n", i, count[i]);
                }
            }
        }
        else if (ipt == '2') //dãy fibonacci
        {
            int n;
            do
            {
                printf("Input a number: ");
                scanf("%d", &n);
            } while (n < 0 || n > 30);

            long long a = 0, b = 1, fibo;
            if (n == 1)
            {
                printf("1 0\n");
            }
            else if (n == 2)
            {
                printf("2 1\n");
            }
            else
            {
                for (int i = 3; i <= n + 1; i++)
                {
                    fibo = a + b;
                    b = a;
                    a = fibo;
                }
                printf("%d %lld \n", n, fibo);
            }
        }
        else if (ipt == '3') //kiểm tra mật khẩu
        {
            char pass[64];
            printf("Input password: ");
            scanf("%s", pass);

            int count = 0;
            bool hasDigit = false;
            bool hasUppercase = false;
            bool hasLowercase = false;
            bool noLatinChar = false;

            for (int i = 0; pass[i] != '\0'; i++)
            {
                count++;

                if (isdigit(pass[i]))
                {
                    hasDigit = true;
                }

                if (isupper(pass[i]))
                {
                    hasUppercase = true;
                }

                if (islower(pass[i]))
                {
                    hasLowercase = true;
                }

                if (isalnum(pass[i]))
                {
                    noLatinChar = true;
                }
            }

            if (count > 11 && hasDigit && hasLowercase && hasUppercase && noLatinChar)
            {
                printf("True\n");
            }
            else
            {
                printf("False\n");
            }
        }
        else if (ipt == '4') //xđ ma trận đơn vị
        {
            int n;
            do
            {
                printf("Input a number: ");
                scanf("%d", &n);
            } while (n < 0 || n > 20);

            int **matrix = (int **)malloc(n * sizeof(int *));

            for (int i = 0; i < n; i++)
            {
                matrix[i] = (int *)malloc(n * sizeof(int));
                for (int j = 0; j < n; j++)
                {
                    printf("Input element [%d][%d]: ", (i+1), (j+1));
                    scanf("%d", &matrix[i][j]);
                }
            }

            printf("Matrix:\n");
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    printf("%d ", matrix[i][j]);
                }
                printf("\n");
            }

            bool is_identity = true;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i != j && matrix[i][j] != 0)
                    {
                        is_identity = false;
                        break;
                    }
                    if (i == j && matrix[i][j] != 1)
                    {
                        is_identity = false;
                        break;
                    }
                }
            }

            if (is_identity)
            {
                printf("Yes, it is an identity matrix.\n");
            }
            else
            {
                printf("No, it is not an identity matrix.\n");
            }

            for (int i = 0; i < n; i++)
            {
                free(matrix[i]);
            }
            free(matrix);

            return 0;
        }
    } while (ipt != 'x');

    return 0;
}