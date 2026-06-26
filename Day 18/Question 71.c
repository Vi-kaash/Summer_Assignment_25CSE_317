#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    int low, high, mid;

    // Input size of array
    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Binary Search logic
    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            return 0;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found.\n");
    return 0;
}
