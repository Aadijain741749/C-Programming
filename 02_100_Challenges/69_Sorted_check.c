#include <stdio.h>

int is_sorted(int arr[], int size);

int main(){
  printf("Welcome to checking array is sorted.\n");
  int arr1[6] = {5, 8, 9, 9, 10, 15}; // increasing order sorted
  int arr2[6] = {76, 70, 50, 12, 12, 0}; // decreasing order sorted
  int arr3[6] = {87, 0, 67, -98, 5, 5}; // not sorted

  if(is_sorted(arr1, 6)){
    printf("First array is Sorted.\n");
  }
  else{
    printf("FIrst array is not Sorted.\n");
  }

  if(is_sorted(arr2, 6)){
    printf("Second array is Sorted.\n");
  }
  else{
    printf("Second array is not Sorted.\n");
  }

  if(is_sorted(arr3, 6)){
    printf("Third array is Sorted.\n");
  }
  else{
    printf("Third array is not Sorted.\n");
  }

  return 0;
}

int is_sorted(int arr[], int size){
  int increasing = 1;
  int decreasing = 1;

  for(int i = 1; i < size; i++){
    if(arr[i] > arr[i - 1]){
      decreasing = 0;
    }
    else if(arr[i] < arr[i - 1]){
      increasing = 0;
    }
  }
  return increasing || decreasing;
}