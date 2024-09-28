#include <stdio.h>

void replace(char str[], char ch1, char ch2);

int main(int argc, char const *argv[])
{
	char line_text[100], ch1, ch2;

	printf("Nhap 1 chuoi ky tu: ");
	gets(line_text);

	printf("Nhap vao ky tu bi thay the: ");
	scanf(" %c", &ch1);

	printf("Nhap vao ky tu thay the: ");
	scanf(" %c", &ch2);

	replace(line_text, ch1, ch2);

	printf("Chuoi ky tu sau thay the la: ");
	printf("%s\n", line_text);

	return 0;
}

void replace(char str[], char ch1, char ch2) {
	int i = 0;
	
	while(str[i] != '\0') {
		if (str[i] == ch1)
		{
			str[i] = ch2;
		}
		i++;
	}
}