#include <stdio.h>

int main(void) {
    int n,rev=0;

    printf("Enter a number:");
    if (scanf("%d",&n)!=1) {
        return 1;
    }

    while (n!=0) {
        rev=rev*10+(n%10);
        n/=10;
    }

    printf("Reversed number:%d\n",rev);
    return 0;
}