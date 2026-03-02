#include <stdio.h>
int main()
{
  int year;
  printf("Please, enter the year: ");
  scanf("%d", &year);
  printf("You entered the year %d\n", year);

  if(year%400 == 0 || year%4 == 0 && year%100 !=0){
    printf("Your number is leap year.\n");
  }
  else{
    printf("Your number is not leap year.\n");
  }
  return 0;
}