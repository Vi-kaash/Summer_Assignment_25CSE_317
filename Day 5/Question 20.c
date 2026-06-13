#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num, largest = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            largest = i;
        }
    }

    if (largest != -1)
        printf("Largest prime factor of %d is %d\n", num, largest);
    else
        printf("%d has no prime factors.\n", num);

    return 0;
}
