#include <stdio.h>
#include <math.h>
int main()
{
  int num, sum = 0, digit = 0, digitcount = 0;
  printf("Please,enter the number: ");
  scanf("%d", &num);
  int temp = num;
  while (temp > 0){
    temp = temp/10;
    digitcount++;
  }
  temp = num;
  while(temp > 0){
    digit = temp % 10;
    sum += pow(digit, digitcount);
    temp = temp / 10;
  }
  if(num == sum){
    printf("The number %d is a Armstrong number.\n", num);
  }
  else{
      printf("The number %d is not a Armstrong number.\n", num);
  }
  return 0;
}
