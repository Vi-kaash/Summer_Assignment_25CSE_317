// Check whether a matrix is symmetric
#include <stdio.h>

int main(void) {
	int n, i, j;
	int a[100][100];
	int symmetric = 1;

	printf("Enter the order of the square matrix: ");
	if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
		printf("Invalid matrix size.\n");
		return 1;
	}

	printf("Enter %d elements:\n", n * n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < n && symmetric; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i][j] != a[j][i]) {
				symmetric = 0;
				break;
			}
		}
	}

	if (symmetric) {
		printf("The matrix is symmetric.\n");
	} else {
		printf("The matrix is not symmetric.\n");
	}

	return 0;
}
