#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void addStudent(struct Student s[], int *n) {
    printf("Enter roll, name, marks: ");
    scanf("%d %s %f", &s[*n].roll, s[*n].name, &s[*n].marks);
    (*n)++;
}

void displayStudents(struct Student s[], int n) {
    int i;
    printf("\nStudent Records:\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}

int main() {
    struct Student s[100];
    int n = 0, choice;

    do {
        printf("\n--- Student Record Menu ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(s, &n); break;
            case 2: displayStudents(s, n); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 3);

    return 0;
}
