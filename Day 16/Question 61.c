#include <stdio.h>

int main() {
    int n, sum = 0, total;
    printf("Enter size of array (n): ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter %d elements (1 to n with one missing):\n", n-1);
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;  // sum of 1 to n
    printf("Missing number is: %d\n", total - sum);
    return 0;
}
