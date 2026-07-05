#include <stdio.h>
void increment(int);

int main(){
  int num;
  printf("Welcome to showing call by value,\n");
  printf("Please, enter the number: ");
  scanf("%d", &num);

  printf("\nBefore, calling the function: value of num is %d", num);
  increment(num);
  printf("\nAfter, calling the function: value of num is %d", num);
  return 0;
}

void increment(int a){
  printf("\nIn function before: value of a is %d", a);
  a++;
  printf("\nIn function after: value of a is %d", a);
}
/*Demonstrate with a function increment that the original integer
passed to it does not change after incrementing it inside the function.*/