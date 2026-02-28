#include <stdio.h>
#include <math.h>
int main()
{
  int P, R, T;
  float SI, CI;
  printf("Please, enter the principal amount: \n");
  scanf("%d", &P);
  printf("Now, enter the rate: \n");
  scanf("%d", &R);
  printf("Now, enter the time: \n");
  scanf("%d", &T);

  SI = (P*R*T)/100.0;
  CI = (P*pow((1 + R/100.0), T) -P);
  printf("The Simple interest is %f\n", SI);
  printf("The Compound interest is %f", CI);
  return 0;
}