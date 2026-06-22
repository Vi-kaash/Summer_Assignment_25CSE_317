#include <stdio.h>

int main() {
    int n, i, largest, second;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = second = -99999; // assume very small

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if(second == -99999)
        printf("No second largest element\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}
