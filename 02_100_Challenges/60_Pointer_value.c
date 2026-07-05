#include <stdio.h>
int main(){
  int num = 5;
  int *ptr = &num;
  
  printf("Vaule of num is: %d\n.", num);
  *ptr = 87;
  printf("Vaule of num is: %d\n.", num);
  return 0;
}
/*Write a program to change the value of an integer variable using a
pointer and the * operator.*/