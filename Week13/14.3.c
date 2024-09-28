#include <stdio.h>
#include <string.h>

typedef struct {
	char id[8];
	char name[31];
	float grade;
	char classment;
} Student;

void struct_input(Student *A);
void struct_output(Student A);

int main(){
	int n;
	Student std[100], temp;

	printf("Input number of students: n = ");
	scanf("%d", &n);

	printf("Input information for %d students:\n", n);
	for(int i = 0; i < n; i++){
		printf("----- student %d -----\n", i+1);
		struct_input(&std[i]);
	}

	for(int i = 0; i < n - 1; i++)
		for(int j = i + 1; j < n; j++)
			if(std[i].grade < std[j].grade){
				temp = std[i];
				std[i] = std[j];
				std[j] = temp;
			}

	printf("Output information of %d students:\n", n);
	printf("%-30s %-5s %-s\n", "Name", "Grade", "Classment");
	for(int i = 0; i < n; i++)
		struct_output(std[i]);

	return 0;
}

void struct_input(Student *A){
    // input id
    printf("id = ");
    scanf(" %s", A->id);
    // input name
    printf("name = ");
    fflush(stdin);
    fgets(A->name, 30, stdin);
    strtok(A->name, "\n");
    //gets(A->name);
    // input grade
    printf("grade = ");
    scanf("%f", &A->grade);
	// input classment
	if (A->grade >= 9 && A->grade <= 10)
		A->classment = 'A';
	else if (A->grade >= 8 && A->grade < 9)
		A->classment = 'B';
	else if (A->grade >= 6.5 && A->grade < 8)
		A->classment = 'C';
	else
		A->classment = 'D'; 		   
}

void struct_output(Student A){
	printf("%-30s %-5.1f %-c\n", A.name, A.grade, A.classment);
}