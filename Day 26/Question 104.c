#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Q1: Capital of India?\n");
    printf("1. Mumbai  2. Delhi  3. Kolkata\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("Q2: 2 + 2 = ?\n");
    printf("1. 3  2. 4  3. 5\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("Q3: Largest planet?\n");
    printf("1. Earth  2. Jupiter  3. Mars\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}
