#include <stdio.h>
int main()
{
  float num1, num2;
  char op;
  printf("Please, enter the two numbers: ");
  scanf("%f%f", &num1, &num2);
  printf("Now, enter an operator: \n");
  scanf(" %c", &op);

  switch (op){
    case '+':
     printf("The addition of your numbers is %f", num1 + num2);
     break;
    case '-':
     printf("The subtraction of your numbers is %f", num1 - num2);
     break;
    case '*':
     printf("The multiplication of your numbers is %f", num1 * num2);
     break;
    case '/':
     printf("The division of your numbers is %f", num1 / num2);
     break;
    default:
     printf("Invalid operator");
     break;

  }
  return 0;
}