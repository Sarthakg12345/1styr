#include <stdio.h>

int main() {
    printf("if the number is divisible by 5\n");
    int num;
    scanf("%d", &num);
    if (num % 5 == 0)
        printf("%d is divisible by 5\n", num);
    else
        printf("%d is not divisible by 5\n", num);
    return 0;
}