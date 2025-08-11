#include <stdio.h>
#include <iostream>
int main() {
    printf("To find if a number is even or odd\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
        
    }
    return 0;
}