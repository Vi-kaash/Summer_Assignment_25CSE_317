#include <stdio.h>
#define SIZE 3

int main() {
    int a[SIZE][SIZE], b[SIZE][SIZE], sum[SIZE][SIZE];
    int i, j;

    printf("Enter elements of first matrix:\n");
    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Resultant Matrix (Addition):\n");
    for(i=0;i<SIZE;i++) {
        for(j=0;j<SIZE;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
