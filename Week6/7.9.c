#include <stdio.h>

int main() {
	int a, ans = 1;
	printf("Giai thua cua: ");
	scanf("%d", &a);

	while(a >= 0) {
		if (a == 0)
		{
			printf("0! = 1\n");
			break;
		}else {
			for(int i = 1; i <= a; i++) {
				ans *= i;
			}
			printf("Giai thua cua %d la %d\n", a, ans);
			break;
		}
	}

	return 0;
}