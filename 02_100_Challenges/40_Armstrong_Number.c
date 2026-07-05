 #include <stdio.h>
 int main()
 {
  int num;
  printf("Welcome to Armstrong number calculator.\n");
  printf("Please, enter the number: ");
  scanf("%d", &num);

  int sum = 0;
  int copy = num;
  while (copy > 0) {
    int digit = copy % 10;
    sum += digit*digit*digit;
    copy /= 10;
  }
  if(sum == num){
    printf("The number %d is a Armstorng number.\n", num);
  }
  else{
    printf("The number %d is not a Armstrong number.\n", num);
  }
  return 0;
  /*Create a program to check if a number is an Armstrong number.*/
 }