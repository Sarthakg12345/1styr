#include <stdio.h>
int main() {
    int x;
    printf("enter your age:");
    scanf("%d", &x);
    if (x<18)
    printf("sorry you are not eligible to vote");
    else
    printf("you are eligible to vote");
    return 0;

}