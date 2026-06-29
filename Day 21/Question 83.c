
#include <stdio.h>
#include <ctype.h>

int main(void) {
	char str[1000];
	int i = 0;
	int vowels = 0, consonants = 0;

	printf("Enter a string: ");
	if (!fgets(str, sizeof str, stdin)) return 0;

	while (str[i]) {
		char ch = str[i];
		if (isalpha((unsigned char)ch)) {
			char lower = tolower((unsigned char)ch);
			if (lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u')
				vowels++;
			else
				consonants++;
		}
		i++;
	}

	printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
	return 0;
}
