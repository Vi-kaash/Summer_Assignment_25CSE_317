#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int n = strlen(str);
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        
        for (int k = 0; k < j; k++) {
            if (str[k] == str[i]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if (!isDuplicate) {
            str[j++] = str[i];
        }
    }
    
    str[j] = '\0';
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%99s", str);
    
    printf("Original string: %s\n", str);
    
    removeDuplicates(str);
    
    printf("String after removing duplicates: %s\n", str);
    
    return 0;
}
