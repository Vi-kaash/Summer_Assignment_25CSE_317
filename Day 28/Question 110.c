#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;
    int choice;
    acc.accNo = 1001;
    acc.balance = 0;
    strcpy(acc.name, "Vikash");

    do {
        printf("\n--- Bank Menu ---\n");
        printf("1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            float amt;
            printf("Enter amount to deposit: ");
            scanf("%f", &amt);
            acc.balance += amt;
        } else if (choice == 2) {
            float amt;
            printf("Enter amount to withdraw: ");
            scanf("%f", &amt);
            if (amt <= acc.balance)
                acc.balance -= amt;
            else
                printf("Insufficient balance!\n");
        } else if (choice == 3) {
            printf("Account: %d | Name: %s | Balance: %.2f\n", acc.accNo, acc.name, acc.balance);
        }
    } while (choice != 4);

    return 0;
}
