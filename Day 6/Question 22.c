#include <stdio.h>

int main(void) {
	long long binary;
	long long decimal = 0;
	long long base = 1;
	int digit;

	printf("Enter a binary number: ");
	scanf("%lld", &binary);

	while (binary > 0) {
		digit = binary % 10;
		decimal += digit * base;
		base *= 2;
		binary /= 10;
	}

	printf("Decimal equivalent: %lld\n", decimal);
	return 0;
}
