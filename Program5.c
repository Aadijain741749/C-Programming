#include <stdio.h>
int main()
{
  int num1, num2, num3;
  printf("Please, enter the three numbers: ");
  scanf("%d%d%d", &num1, &num2, &num3);
  printf("You entered the three numbers %d, %d and %d.\n", num1, num2, num3);

  if(num1>num3 && num1>num3){
    printf("%d is the greatest number among three\n",num1);
  }
  else if(num2>num3){
    printf("%d is the greatest number among three\n.",num2);
  }
  else{
    printf("%d is the greatest number among three.\n", num3);
  }
  return 0;
}