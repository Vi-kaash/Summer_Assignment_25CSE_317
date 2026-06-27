#include <stdio.h>
#define SIZE 3

int main() {
    int a[SIZE][SIZE], i, j;
    int sum = 0;

    printf("Enter elements of matrix:\n");
    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<SIZE;i++)
        sum += a[i][i];  // main diagonal

    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
