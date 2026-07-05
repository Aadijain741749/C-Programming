#include <stdio.h>
#include <math.h>
int main()
{
  int Dnum = 0, n;
  printf("Please, enter the number of element in binary number: ");
  scanf("%d", &n);
  int Bnum[n];

  printf("Please, enter the binary number from least significant to most significant digit ");
  for(int i = 0; i < n; i++){
    printf("Bnum[%d]: ", i);
    scanf("%d", Bnum + i);
  }
  for(int i = 0; i < n; i++){
    Dnum += pow(2,i)*Bnum[i];
  }
  printf("The decimal number is %d", Dnum);
  return 0;
}