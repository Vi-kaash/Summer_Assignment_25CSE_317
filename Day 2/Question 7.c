#include <stdio.h>

int main() {
    int num, digit, product=1;
    
    printf("Enter a number:");
    scanf("%d",&num);
    if (num<0) {
        num=-num;
    }
    if (num==0) {
        printf("Product of digits:0\n");
        return 0;
    }
    while (num>0) {
        digit=num%10;
        product*=digit;
        num/=10;
    }
    
    printf("Product of digits:%d\n",product);
    
    return 0;
}
