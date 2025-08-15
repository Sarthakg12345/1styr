#include <stdio.h>
#include <stdlib.h>
int main (){
    int a , b, c;
    a = 10;
    b = 20;
    a = ++a + b++;
    b = ++b + a++;
    c = a + b;
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    printf("The value of c is: %d\n", c);
    return 0;
}
