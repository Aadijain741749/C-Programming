#include <stdio.h>
int main(){
  int arr[10];
  printf("welcome to Max and Min of Array.\n");
  printf("Please, enter the 10 elements: \n");
  for(int i = 0; i < 10; i++){
    printf("arr[%d]: ",i);
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int min = arr[0];
  
  for(int i = 1; i < 10; i++){
    if(max < arr[i]){
      max = arr[i];
    }
    if(min > arr[i]){
      min = arr[i];
    }
  }
  printf("The maximum and minimum element are %d and %d in array.\n", max, min);
  return 0;
}