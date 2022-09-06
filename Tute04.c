/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int maximum(int a, int b);
int minimum(int c, int d);
int multiply(int e, int f);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int maximum(int a, int b) {
  
  int result1;

  if (a > b)
    result1 = a;
  else
    result1 = b;
  
return result1;
}

int minimum(int c, int d) {
  
  int result2;

  if (c > d)
    result2 = d;
  else
    result2 = c;

return result2;
}

int multiply(int e, int f) {

  int result3;

  result3 = e * f;

return result3;
}