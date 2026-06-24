#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxCount = 0, element = arr[0];
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d (appears %d times)\n", element, maxCount);
    return 0;
}
