// conditional operator
// ? is like "if" and ":" is like "else"
#include <stdio.h>

int main() {
    int a, b, c , d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = (a > b && a > c && a > d) ? a : (b > c && b > d) ? b : (c > d) ? c : d;
    printf("Max: %d\n", max);
    return 0;
}
