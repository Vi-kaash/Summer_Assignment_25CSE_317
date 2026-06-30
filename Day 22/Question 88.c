#include <stdio.h>

int main(void) {
	char str[1000];
	int i, j = 0;

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') {
			str[j++] = str[i];
		}
	}
	str[j] = '\0';

	printf("String after removing spaces: %s", str);
	return 0;
}
