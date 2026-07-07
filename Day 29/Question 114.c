#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum, largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    do {
        printf("\n--- Array Menu ---\n");
        printf("1. Display\n2. Sum\n3. Largest\n4. Smallest\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Array elements: ");
                for(i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 2:
                sum = 0;
                for(i = 0; i < n; i++) sum += arr[i];
                printf("Sum = %d\n", sum);
                break;
            case 3:
                largest = arr[0];
                for(i = 1; i < n; i++) if(arr[i] > largest) largest = arr[i];
                printf("Largest = %d\n", largest);
                break;
            case 4:
                smallest = arr[0];
                for(i = 1; i < n; i++) if(arr[i] < smallest) smallest = arr[i];
                printf("Smallest = %d\n", smallest);
                break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 5);

    return 0;
}
