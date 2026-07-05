#include <stdio.h>
void swap(int* , int*);

int main(){
  int x = 4;
  int y = 5;
  printf("The value of x is %d and value of y is %d.\n", x, y);
  swap(&x, &y);
  printf("The value of x is %d and value of y is %d.\n", x, y);
  return 0;
}

void swap(int* ptr1, int* ptr2){
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}
