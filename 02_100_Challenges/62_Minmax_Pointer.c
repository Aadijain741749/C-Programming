#include <stdio.h>
void min_max(int*, int*, int*, int*);

int main(){
  int first, second, min, max;
  printf("Welcome to finding Min and Max\n");
  printf("Please, enter the first number: ");
  scanf("%d", &first);
  printf("Now, enter the second number: ");
  scanf("%d", &second);

  min_max(&first, &second, &min, &max);
  printf("Between %d and %d, minumum is %d and maximum is %d", first, second, min, max);
  return 0;
}

void min_max(int* a, int* b, int* min, int* max){
  if(*a > *b){
    *min = *b;
    *max = *a;
  }
  else{
    *min = *a;
    *max = *b;
  }
  return ;
}
/*Implement a void minmax(int *a, int *b, int *min, int *max) function
that takes two integer pointers a and b as input and assigns the
smaller value to min and the larger value to max using call by
reference. Write a main function to test it with different values.*/