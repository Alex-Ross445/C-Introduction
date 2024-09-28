#include <stdio.h>

int main() {
	int numPass = 0, numFail = 0, count = 0, result;

	while (count <= 10) {
		printf("Enter student %d's result: ", count + 1);
		do{
			scanf("%d", &result);
		} while (result != 0 || result != 1);

		if (result == 1) {
			numPass++;
		}else {
			numFail++;
		}

		count++;
	}
}