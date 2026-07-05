#include <stdio.h>

int main(){
  const float mile_per_km = 0.621371;
  long kms;
  printf("Welcome to distance convertor.\n");
  printf("Please, enter the kms: ");
  scanf("%ld", &kms);

  long miles = kms * mile_per_km;
  printf("The number of miles are %ld", miles);
  return 0;
}
/*Create a program that converts a large number of kilometers to miles,
using long or long long to store the distance.*/