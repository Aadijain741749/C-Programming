#include <stdio.h>
#include <stdlib.h>

int main(){
  int size;
  printf("Please, enter the number of elements: ");
  scanf("%d", &size);

  int *arr = (int*)calloc(size, sizeof(int));
  if(arr == NULL){
    printf("Not enough memory");
    return 1;
  }

  for(int i = 0; i < size; i++){
    printf("arr[%d]: %d ", i+1, arr[i]);
  }
  
  printf("\nEnter the elements: \n");
  for(int i = 0; i < size; i++){
    printf("arr[%d]: ", i+1);
    scanf("%d", &arr[i]);
  }
  
  int sum = 0;
  for(int i = 0; i < size; i++){
    sum += arr[i];
  }

  printf("The sum of array elements is %d", sum);
  return 0;
}