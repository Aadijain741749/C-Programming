#include <stdio.h>

int main(){
  int n, min, max;
  printf("Please, enter the no. of elemets in array: ");
  scanf("%d", &n);

  int a[n];
  printf("Now, enter the elements:\n");
  for(int i = 0; i < n; i++){
    printf("a[%d]: ", i);
    scanf("%d", &a[i]);
  }

  min = max = a[0];
  for(int i = 1; i < n; i++){
    if(a[i] < min){
      min = a[i];
    }
    if(a[i] > max){
      max = a[i];
    }
  }
  printf("The mimimum and maximum numbers are %d and %d", min , max);
  return 0;
}