#include <stdio.h>
int main()
{
  float num1, num2;
  char opr;
  printf("Please, enter the first number: ");
  scanf("%f", &num1);
  printf("Now, enter the second number: ");
  scanf(" %f", &num2);
  printf("Finally, enter the operator(+,-,*,/): ");
  scanf(" %c", &opr);

  float res = num1 + num2;
  int invalid = 0;
  switch(opr){
    case '+': res = num1 + num2;
     break;
    case '-': res = num1 - num2;
     break;
    case '*': res = num1 * num2;
     break;
    case '/': res = num1 / num2;
     break;
    default :
     invalid =1;
  }
  if(invalid == 0){
    printf("The result is %.2f", res);
  } else{
    printf("Invalid operator. Please enter(+,-,*,/),\n");
  }
  return 0;
  /*Create a program to create a simple calculator that uses a
  switch statement to perform basic arithmetic operations*/
}