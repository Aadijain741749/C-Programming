#include <stdio.h> 
int main()
{
  int num, fb0 = 0, fb1 = 1, fbn;
  printf("Please enter the number: ");
  scanf("%d", &num);
  
  if(num < 0){
    printf("Invalid Input.");
  }
  else if(num == 0){
    printf("The fibonacci series is : 0");
  }
  else if (num == 1){
    printf("The fibonacci series is : %d %d", fb0, fb1);
  }
  else{
    printf("The finonacci series is : %d %d", fb0, fb1);
    for(int i = 2; i <= num; i++){
      fbn = fb0 + fb1;
      printf(" %d", fbn);
      fb0 = fb1;
      fb1 = fbn;
    }
  }
  return 0;
}