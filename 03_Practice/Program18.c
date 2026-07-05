#include <stdio.h> 
int main()
{
  int Dnum = 0, i = 0, Bnum[100];
  printf("Enter the value of number in decimal: ");
  scanf("%d", &Dnum);
  int copy = Dnum;
  while(Dnum > 0){
    Bnum[i] = (Dnum % 2);
    Dnum = (Dnum / 2);
    i = i + 1;
  }
  printf("The value of %d in binary base number is ", copy);
  for(int j = i - 1; j >= 0; j--){
    printf("%d", Bnum[j]);
  }
  return 0;
}