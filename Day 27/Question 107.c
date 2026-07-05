#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter ID, Name, Basic Salary: ");
        scanf("%d", &e[i].id);
        scanf("%s", e[i].name);
        scanf("%f", &e[i].basic);

        e[i].hra = 0.2 * e[i].basic;
        e[i].da  = 0.1 * e[i].basic;
        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    printf("\n--- Salary Records ---\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Gross Salary: %.2f\n", e[i].id, e[i].name, e[i].gross);
    }
    return 0;
}
