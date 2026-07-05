#include <stdio.h>
int square(int);

int main(){
  int num;
  printf("Welcome to World of squares.\n");
  printf("Please, enter your numbers: ");
  scanf("%d", &num);
  printf("\nThe square of number %d is %d.", num , square(num));
  return 0;
}

int square(int num){
  return num*num;
}
/*Define a function square that takes an int and returns its square*/