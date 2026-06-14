#include <stdio.h>

int main(void) {
	int n,original,reverse=0,digit;

	printf("Enter a number:");
	if (scanf("%d",&n)!=1) {
		return 1;
	}

	original=n;

	while (n!=0) {
		digit=n%10;
		reverse=reverse*10+digit;
		n/=10;
	}

	if (original==reverse) {
		printf("%d is a palindrome number\n",original);
	} else {
		printf("%d is not a palindrome number\n",original);
	}

	return 0;
}
