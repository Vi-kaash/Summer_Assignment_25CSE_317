#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array after removing duplicates:\n");
    for(int i = 0; i < n; i++) {
        int flag = 0;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
