#include <stdio.h>

int main() {
    int i, j, s, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (s = 1; s <= rows - i; s++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
