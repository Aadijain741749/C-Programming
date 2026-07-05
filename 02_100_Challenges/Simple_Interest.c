#include <stdio.h>
int main()
{
  float principal, rate, mrate, time, year, month, days;
  printf("Welcome to simple interest caculatour\n");
  printf("Please enter the principal value: ");
  scanf("%f", &principal);
  printf("Now, enter the rate: ");
  scanf("%f", &mrate);
  printf("Now, enter the year: ");
  scanf("%f", &year);
  printf("Now, enter the month: ");
  scanf("%f", &month);
  printf("Now, enter the days: ");
  scanf("%f", &days);

  rate = (mrate*12);
  time = (year + (month/12.0) + (days/365.0));
  float Interest = (principal*rate*time)/100.0, Total = principal + Interest;
  printf("Simple ineterest is %f", Interest);
  printf("\nTotal value is %f", Total);
  return 0;
}