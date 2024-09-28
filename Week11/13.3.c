#include <stdio.h>
#include <ctype.h>

int checkCode(char code[])
int int main(int argc, char const *argv[])
{
	char code[8];

	printf("Ma khach hang co dinh dang LLLNNNN\n");
	printf("L la chu cai, N la so\n");
	printf("Nhap ma khach hang: ");
	scanf("%s", code);

	while (!checkCode(code))
	{
		printf("Nhap sai dinh dang, hay nhap lai: ");
		scanf("%s", code);
	}

	printf("Cam on qui khach!\n");

	return 0;
}

int checkCode(char code[]) {
	for (int i = 0; i < 3; ++i)
	{
		if (!isalpha(code[i]))
		{
			return 0;
		}
	}
}