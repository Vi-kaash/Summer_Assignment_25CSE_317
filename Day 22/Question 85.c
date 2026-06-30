#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    // Reverse the string
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    // Compare original and reversed
    if(strcmp(str, rev) == 0)
        printf("Palindrome string\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
