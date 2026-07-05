#include <stdio.h>
#include <limits.h>

int main(){
  unsigned int positive = UINT_MAX;
  int normal = INT_MAX;

  printf("\nMax value of unsigned int is: %u", positive);
  printf("\nMax value of normal int is %d", normal);
 
  positive++;
  normal++;
  printf("\nMax value of unsigned int is: %u", positive);
  printf("\nMax value of normal int is %d", normal);
  return 0;
}
/*Write a C program that initializes an unsigned int to its maximum
possible value and an int to a negative number. Add 1 to both, and
print the results to show how the unsigned int wraps*/