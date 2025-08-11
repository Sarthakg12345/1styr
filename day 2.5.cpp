#include <stdio.h>
#include <iostream>
int main() {
    printf ("To find the greatest number among three numbers\n");
    long long int a, b, c;
    printf("Enter first number: ");
    scanf("%lld", &a);
    printf("Enter second number: ");
    scanf("%lld", &b);
    printf("Enter third number: ");
    scanf("%lld", &c);
    if (a >= b && a >= c) {
        printf("%lld is the greatest number\n", a);
    } else if (b >= a && b >= c) {
        printf("%lld is the greatest number\n", b);
    } else {
        printf("%lld is the greatest number\n", c);
    }
    return 0;
}