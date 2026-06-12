#include <stdio.h>
long factorial(int);


int main(){
  printf("Factorial of 4: %ld\n", factorial(4));
  printf("Factorial of 5: %ld\n", factorial(5));
  printf("Factorial of 10: %ld\n", factorial(10));
  printf("Factorial of 15: %ld\n", factorial(15));
  printf("Factorial of 20: %ld\n", factorial(20));
  printf("Factorial of 25: %ld\n", factorial(25));

  return 0;
}


long factorial(int num){

  int result = 1;
  for (int i = 2; i<= num; i++){
    result *= i;
  }
  return result;
}