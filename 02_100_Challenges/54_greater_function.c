#include <stdio.h>

float max(float, float);

int main(){
  float first, second;
  printf("Welcome to finding the max element.\n");
  printf("Please, enter the first number: ");
  scanf("%f", &first);
  printf("Please, enter the second number: ");
  scanf("%f", &second);

  printf("\nThe larger number is %.2f", max(first, second));
  return 0;
}

float max(float first, float second){
  return first > second ? first : second;
}
/*Create a function max that takes two float arguments and returns the
larger value.*/