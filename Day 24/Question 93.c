#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    if(strlen(s1) != strlen(s2)) return 0;
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1); // concatenate string with itself
    return strstr(temp, s2) != NULL; // check if s2 is substring
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if(isRotation(str1, str2))
        printf("Yes, rotation\n");
    else
        printf("No, not rotation\n");
    return 0;
}
