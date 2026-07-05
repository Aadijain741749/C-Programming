#include <stdio.h>
int reverse (int num, int rev);

int main(){
  int num;
  printf("Welcome to Palindrome checker.\n");
  printf("Please, enter the number: ");
  scanf("%d", &num);
  int rev = reverse(num, 0);
  if(num == rev){
    printf("%d is pallindrome", num);
  }
  else{
    printf("%d is not pallindrome", num);
  }
  return 0;
}

int reverse(int num, int rev){
  if(num == 0){
    return rev;
  }
  int remainder = num % 10;
  int new_num = num / 10;
  int new_rev = rev * 10 + remainder;
  return reverse(new_num, new_rev);
}
/*Create a program using recursion to check if a number is a
palindrome using recursion.*/