#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int numerator;
	int denominator;
} Fraction;

void fraction_input(Fraction *);
void fraction_output(Fraction );
int UCLN(int, int);
void fraction_simplify(Fraction *);
Fraction fraction_multiply(Fraction, Fraction);
Fraction fraction_summation(Fraction, Fraction);

int main(){
	Fraction A, B;

	printf("Input the first fraction:\n");
	fraction_input(&A);

	printf("Input the second fraction:\n");
	fraction_input(&B);

	Fraction AxB = fraction_multiply(A, B);

	fraction_output(A);
	printf(" x ");
	fraction_output(B);
	printf(" = ");
	fraction_output(AxB);
	printf("\n");

	Fraction AsB = fraction_summation(A, B);

	fraction_output(A);
	printf(" + ");
	fraction_output(B);
	printf(" = ");
	fraction_output(AsB);
	printf("\n");

	return 0;
}

void fraction_input(Fraction *F){
	printf("numerator = ");
	scanf("%d", &F->numerator);
	printf("denominator = ");
	scanf("%d", &F->denominator); // Assume the inputed denominator is not equal 0
}

void fraction_output(Fraction F){
	if(F.numerator * F.denominator >= 0)
		printf("%d/%d", abs(F.numerator), abs(F.denominator));
	else
		printf("-%d/%d", abs(F.numerator), abs(F.denominator));
}

int UCLN(int a, int b){
	if (a == 0) return b;
	return UCLN(b % a, a);
}

void fraction_simplify(Fraction *F){
	int ucln = UCLN(F->numerator, F->denominator);
	F->numerator /= ucln;
	F->denominator /= ucln; 
}

Fraction fraction_multiply(Fraction A, Fraction B){
	Fraction result;
	result.numerator = A.numerator * B.numerator;
	result.denominator = A.denominator * B.denominator;
	fraction_simplify(&result);
	return result;
}

Fraction fraction_summation(Fraction A, Fraction B){
	Fraction result;
	result.numerator = A.numerator * B.denominator + B.numerator * A.denominator;
	result.denominator = A.denominator * B.denominator;
	fraction_simplify(&result);
	return result;
}