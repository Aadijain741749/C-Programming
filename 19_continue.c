#include <stdio.h>
int main()
{
  for(int i = 1; i <= 100; i++){
    if(i %2 == 0){
      continue;
    }
    printf("%d\n", i);
  }
  int num = 1;
  while(num <=100){
    if(num %2 == 0){
      num++;
      continue;
    }
    printf("%d\n", num);
    num++;
  }
  return 0;
}
