#include <stdio.h>

// Function to find maximum of two numbers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find maximum of three numbers
int findMaxThree(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

// Function to find maximum in an array
int findMaxArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    // Finding maximum of two numbers
    int num1 = 15, num2 = 25;
    printf("Maximum of %d and %d is: %d\n", num1, num2, findMax(num1, num2));
    
    // Finding maximum of three numbers
    int num3 = 30;
    printf("Maximum of %d, %d, and %d is: %d\n", num1, num2, num3, findMaxThree(num1, num2, num3));
    
    // Finding maximum in an array
    int arr[] = {12, 45, 23, 67, 34, 89, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum in array is: %d\n", findMaxArray(arr, n));
    
    return 0;
}