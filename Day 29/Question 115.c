#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n--- String Menu ---\n");
        printf("1. Length\n2. Copy\n3. Concatenate\n4. Reverse\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: printf("Length = %lu\n", strlen(str)); break;
            case 2: strcpy(str2, str); printf("Copied string = %s\n", str2); break;
            case 3: 
                printf("Enter another string: ");
                scanf("%s", str2);
                strcat(str, str2);
                printf("Concatenated string = %s\n", str);
                break;
            case 4: {
                int i, len = strlen(str);
                printf("Reversed string = ");
                for(i = len - 1; i >= 0; i--) printf("%c", str[i]);
                printf("\n");
                break;
            }
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 5);

    return 0;
}
