#include <stdio.h>
#include <string.h>

int count_space(char str[]);

int main() {
	char line_text[100];
	int num_space;

	printf("Nhap 1 chuoi ky tu: ");
	gets(line_text);

	num_space = count_space(line_text);

	printf("So dau khoang cach: %d.\n", num_space);
}

int count_space(char str[]) {
	int count = 0;
	int i = 0;

	while(str[i] != '\0') {
		if (str[i] == ' ')
		{
			count++;
		}
		i++;
	}

	return count;
}