#include <stdio.h>
#include <math.h>
int main()
{
  float P, R, T;
  float CI;
  printf("Welcome to compound interest calculator.");
  printf("Please, enter the principle amount: ");
  scanf("%f", &P);
  printf("Now, enter the rate: ");
  scanf("%f", &R);
  printf("Now, enter the time: ");
  scanf("%f", &T);

  CI = (P * pow((1 + R/100.0), T) - P);
  printf("Compound Interest is %.2f", CI);

  return 0;
  /*Create a program to calculate Compound interest.
  Compound Interest = P(1 + R/100)t*/
}