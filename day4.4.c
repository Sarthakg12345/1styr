#include <stdio.h>
int main() {
    float x;
    printf("Grader");
    printf("enter your marks");
    scanf("%f", &x);
    if (x >= 90)
        printf("Grade A");
    else if (x >= 75)
        printf("Grade B");
    else if (x >= 50)
        printf("Grade C");
    else if (x > 100)
        printf("Invalid marks");
    else if (x < 0)
        printf("Padhai krle");
    else
        printf("Grade D");
    return 0;
}