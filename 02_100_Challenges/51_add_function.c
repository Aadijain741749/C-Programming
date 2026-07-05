#include <stdio.h>
int add(int, int, int, int);

int main(){
  printf("Welcome to adding 4 numbers\n");
  printf("\n %d", add(1, 2, 3 ,4));
  printf("\n %d", add(145, 26, 35 ,4));
  printf("\n %d", add(15, 27, 336 ,46));
  return 0;
}

int add(int a, int b, int c, int d){
  int sum = a + b + c + d;
  return sum;
}
/*Write a function that adds that takes 4 int parameters and returns the
sum.*/