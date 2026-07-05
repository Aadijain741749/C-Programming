#include <stdio.h>

int factorial(int n){
  if(n == 1){
    return 1;
  }
  else{
    return (n*factorial(n-1));
  }
}

int fibonacci(int i){
  if(i == 0){
    return 0;
  }
  if( i == 1){
    return (0,1);
  }
  return (fibonacci(i - 1) + fibonacci(i - 2));
}

int main(){
  int n;
  printf("Enter a number to find its factorial: ");
  scanf("%d", &n);
  if(n < 0){
    printf("Factorial is not defind for negatice numbers.\n");
  }
  else{
    printf("Factorial of %d is %d\n", n, factorial(n));
  }

  printf("\nEnter the number of terms for the Fibonacci series: ");
  scanf("%d", &n);
  printf("Fibonacci series upto %d terms: ", n);
  for(int i = 0; i < n; i++){
    printf("%d ", fibonacci(i));
  }
  printf("\n");
  return 0;
}