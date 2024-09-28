#include <stdio.h>

// double DongNang (double m, double v) {
// 	return m * v * v / 2;
// }

double DongNang(double m, double v);

int main() {
	double m, v, dn;
	do{
		printf("Nhap khoi luong vat (m > 0): ");
		scanf("%lf", &m);
		printf("Nhap van toc vat (v > 0): ");
		scanf("%lf", &v);
	} while (m <= 0 || v <= 0);

	dn = DongNang(m, v);
	printf("Dong nang vat la: %.5lf\n", dn);

	return 0;

	double DongNang (double m, double v) {
		return m * v * v / 2;
	}
}