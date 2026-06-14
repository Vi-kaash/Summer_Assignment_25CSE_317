#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }

    printf("Set bits: %d", count);
    return 0;
}
