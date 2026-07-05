#include <stdio.h>
int main()
{
  int integer;
  float decimal;
  double doub;
  char character;

  printf("The size of int is %d bytes\n", sizeof(integer));
  printf("The size of float is %d bytes\n", sizeof(decimal));
  printf("The size of double is %d bytes\n", sizeof(doub));
  printf("The size of char is %d bytes\n", sizeof(character));
  return 0;
}
/* Create a program that declares one variable of each of the
fundamental data types (int, float, double, char) and prints their
size using sizeof() operator. */
