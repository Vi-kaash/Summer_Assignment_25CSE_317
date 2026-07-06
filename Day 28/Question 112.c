#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int count = 0, choice;
    char searchName[50];

    do {
        printf("\n--- Contact Menu ---\n");
        printf("1. Add Contact\n2. Display Contacts\n3. Search Contact\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Name: ");
            scanf(" %[^\n]", contacts[count].name);
            printf("Enter Phone: ");
            scanf(" %[^\n]", contacts[count].phone);
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++)
                printf("%s | %s\n", contacts[i].name, contacts[i].phone);
        } else if (choice == 3) {
            printf("Enter name to search: ");
            scanf(" %[^\n]", searchName);
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(contacts[i].name, searchName) == 0) {
                    printf("Found: %s | %s\n", contacts[i].name, contacts[i].phone);
                    found = 1;
                }
            }
            if (!found) printf("Contact not found!\n");
        }
    } while (choice != 4);

    return 0;
}
