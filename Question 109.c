#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book library[100];
    int count = 0, choice;

    do {
        printf("\n--- Library Menu ---\n");
        printf("1. Add Book\n2. Display Books\n3. Search Book\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Book ID: ");
            scanf("%d", &library[count].id);
            printf("Enter Title: ");
            scanf(" %[^\n]", library[count].title);
            printf("Enter Author: ");
            scanf(" %[^\n]", library[count].author);
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++)
                printf("%d | %s | %s\n", library[i].id, library[i].title, library[i].author);
        } else if (choice == 3) {
            int id, found = 0;
            printf("Enter Book ID to search: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (library[i].id == id) {
                    printf("Found: %s by %s\n", library[i].title, library[i].author);
                    found = 1;
                }
            }
            if (!found) printf("Book not found!\n");
        }
    } while (choice != 4);

    return 0;
}
