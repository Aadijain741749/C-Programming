#include <stdio.h>
int main()
{
  float P, R, T;
  float SI;
  printf("Welcome to simple interest calculator.");
  printf("Please, enter the principle amount: ");
  scanf("%f", &P);
  printf("Now, enter the rate: ");
  scanf("%f", &R);
  printf("Now, enter the time: ");
  scanf("%f", &T);

  SI = ((P*R*T)/100.0);
  printf("Simple Interest is %.2f", SI);

  return 0;
  /*Create a program to calculate simple interest.
  Simple Interest = (P x T x R)/100*/
}