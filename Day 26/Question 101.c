#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number, attempts = 0;
    srand(time(0));  // random seed
    number = rand() % 100 + 1;  // random number between 1–100

    printf("Guess the number (1-100): ");
    do {
        scanf("%d", &guess);
        attempts++;
        if (guess > number)
            printf("Too high! Try again: ");
        else if (guess < number)
            printf("Too low! Try again: ");
        else
            printf("Correct! You guessed in %d attempts.\n", attempts);
    } while (guess != number);

    return 0;
}
