#include <stdio.h>
int main() {
int num;
printf(" To check whether the number is positive, negative or zero");
printf("\nEnter a number: ");
scanf("%d", &num);
if (num > 0)
    printf("%d is positive\n", num);
else if (num < 0)
    printf("%d is negative\n", num);
else
    printf("%d is zero\n", num);
return 0;
}
