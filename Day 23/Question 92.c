#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}, i, len, max = 0;
    char result;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        freq[(int)str[i]]++;
        if(freq[(int)str[i]] > max) {
            max = freq[(int)str[i]];
            result = str[i];
        }
    }

    printf("Maximum occurring character: %c (appears %d times)\n", result, max);
    return 0;
}
