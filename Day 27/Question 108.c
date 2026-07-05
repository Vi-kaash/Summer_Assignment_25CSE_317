#include <stdio.h>

int main(void) {
	char name[50];
	int roll;
	float marks[5], total = 0.0f, percentage;
	char grade;

	printf("Enter student name: ");
	scanf("%49s", name);

	printf("Enter roll number: ");
	scanf("%d", &roll);

	for (int i = 0; i < 5; i++) {
		printf("Enter marks for subject %d: ", i + 1);
		scanf("%f", &marks[i]);
		total += marks[i];
	}

	percentage = total / 5.0f;

	if (percentage >= 90.0f)
		grade = 'A';
	else if (percentage >= 75.0f)
		grade = 'B';
	else if (percentage >= 60.0f)
		grade = 'C';
	else if (percentage >= 40.0f)
		grade = 'D';
	else
		grade = 'F';

	printf("\n----- MARKSHEET -----\n");
	printf("Name        : %s\n", name);
	printf("Roll Number : %d\n", roll);

	for (int i = 0; i < 5; i++) {
		printf("Subject %d   : %.2f\n", i + 1, marks[i]);
	}

	printf("Total       : %.2f\n", total);
	printf("Percentage  : %.2f%%\n", percentage);
	printf("Grade       : %c\n", grade);

	return 0;
}
