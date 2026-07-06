#include <stdio.h>

int main() {
    int seats[10] = {0}; // 0 = available, 1 = booked
    int choice, seatNo;

    do {
        printf("\n--- Ticket Menu ---\n");
        printf("1. Book Ticket\n2. Display Seats\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter seat number (1-10): ");
            scanf("%d", &seatNo);
            if (seatNo >= 1 && seatNo <= 10 && seats[seatNo-1] == 0) {
                seats[seatNo-1] = 1;
                printf("Seat %d booked!\n", seatNo);
            } else {
                printf("Invalid or already booked!\n");
            }
        } else if (choice == 2) {
            printf("Seats status (0=Free,1=Booked):\n");
            for (int i = 0; i < 10; i++)
                printf("Seat %d: %d\n", i+1, seats[i]);
        }
    } while (choice != 3);

    return 0;
}
