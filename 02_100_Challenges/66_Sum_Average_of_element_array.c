#include <stdio.h>

int sum(int arr[], int size);

int main(){
  int n;
  printf("Please, enter no. of element in array: ");
  scanf("%d", &n);
  
  int arr[n];
  printf("Now, enter the elements of array:\n");
  for(int i = 0; i < n; i++){
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  int result = sum(arr, n);
  float average = (result/n);
  printf("Sum of all elements of array is: %d\n", result);
  printf("Average of all elements of array is: %.2f", average);
  return 0;
}

int sum(int arr[], int size){
  int sum = 0;
  for(int i = 0; i < size; i++){
    sum += arr[i];
  }
  return sum;
}