#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item inventory[100];
    int count = 0, choice, i;

    do {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Item\n2. Display Items\n3. Search Item\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID, Name, Quantity, Price: ");
                scanf("%d %s %d %f", &inventory[count].id, inventory[count].name,
                      &inventory[count].quantity, &inventory[count].price);
                count++;
                break;
            case 2:
                printf("\nID\tName\tQuantity\tPrice\n");
                for(i = 0; i < count; i++) {
                    printf("%d\t%s\t%d\t\t%.2f\n", inventory[i].id, inventory[i].name,
                           inventory[i].quantity, inventory[i].price);
                }
                break;
            case 3: {
                int searchId, found = 0;
                printf("Enter ID to search: ");
                scanf("%d", &searchId);
                for(i = 0; i < count; i++) {
                    if(inventory[i].id == searchId) {
                        printf("Found: %d %s %d %.2f\n", inventory[i].id, inventory[i].name,
                               inventory[i].quantity, inventory[i].price);
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Item not found!\n");
                break;
            }
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 4);

    return 0;
}
