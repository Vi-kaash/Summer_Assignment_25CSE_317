#include <stdio.h>
#define SIZE 3

int main() {
    int a[SIZE][SIZE], transpose[SIZE][SIZE];
    int i, j;

    printf("Enter elements of matrix:\n");
    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++)
            transpose[j][i] = a[i][j];

    printf("Transpose of Matrix:\n");
    for(i=0;i<SIZE;i++) {
        for(j=0;j<SIZE;j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
