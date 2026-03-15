#include <stdio.h>
int main()
{
  int num, sumeven = 0, sumodd = 0;
  printf("Please, enter the number: ");
  scanf("%d", &num);

  for(int i = 1; i<= num; i++){
    if(i % 2 == 0){
      sumeven += i;
    }
    else{
      sumodd += i;
    }
  }
  printf("The sum of all even numbers up to %d is %d.\n", num, sumeven);
  printf("The sum of all odd numbers up to %d is %d.\n", num, sumodd);
  return 0;
}