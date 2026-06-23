#include <stdio.h>

int main() {
    int n, i, count = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Move non-zero elements forward
    for(i = 0; i < n; i++) {
        if(arr[i] != 0)
            arr[count++] = arr[i];
    }

    // Fill remaining with zeroes
    while(count < n)
        arr[count++] = 0;

    printf("Array after moving zeroes: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
