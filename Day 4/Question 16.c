#include <stdio.h>

int main() {
    int start, end, num, original, rem, result;

    printf("Enter the start of the range:");
    scanf("%d", &start);

    printf("Enter the end of the range:");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        original = num;
        result = 0;

        while (original != 0) {
            rem = original % 10;
            result += rem * rem * rem;
            original/= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
