#include <stdio.h>
long long factorial(int);

int main(){
  int num;
  printf("Please, enter the number: ");
  scanf("%d", &num);

  long long result = factorial(num);
  printf("The factorial of %d is %lld", num, result);
  return 0;
}
long long factorial(int num){
  if(num <= 1){
    return 1;
  }
  return num * factorial(num - 1);
}
/*Write a program to demonstrate the difference in range between
long and long long by calculating the factorial of 20.*/