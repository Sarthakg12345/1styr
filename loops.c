#include <stdio.h>
int main (){
    // for loop
printf("\n now using for loop");
 for (long long i = 1; i <= 10; i++) {
     printf("\n %lld ", i);
 }
 printf("\n now using while loop");
 int i = 1;
 while (i <= 10) {
     printf("\n %d ", i);
     i++;
 }
 printf("\n now using do while loop");
 i = 1;
 do {
     printf("\n %d ", i);
     i++;
 } while (i <= 10);
 printf("\n now doing the same in reverse for \"for\" loop");
 for (long long i = 10; i >= 1; i--) {
     printf("\n %lld ", i);
 }
 printf("\n now doing the same in reverse for \"while\" loop");
 i = 10;
 while (i >= 1) {
     printf("\n %d ", i);
     i--;
 }
 printf("\n now doing the same in reverse for \"do while\" loop");
 i = 10;
 do {
     printf("\n %d ", i);
     i--;
 } while (i >= 1);
 printf("\n now doing the same in reverse for \"do while\" loop");
 i = 10;
 do {
     printf("\n %d ", i);
     i--;
 } while (i >= 1);
 return 0;
}

