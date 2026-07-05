#include <stdio.h>

void reverse(int arr[], int size);
void swap(int *first, int*second);
void print_arr(int arr[], int size);

int main(){
  printf("Welcome to Reversing arrays\n");
  int arr1[] = {1, 2, 3, 4, 5, 6, 7};
  int arr2[] = {2, 3, 6, 2, 6};

  printf("\nReverse this array: \n");
  print_arr(arr1, 7);
  reverse(arr1, 7);
  printf("\nAfter reversing: \n");
  print_arr(arr1, 7);

  printf("\nReverse this array: \n");
  print_arr(arr2, 5);
  reverse(arr2, 5);
  printf("\nAfter reversing: \n");
  print_arr(arr2, 5);

  return 0;
}

void print_arr(int arr[], int size){
  for(int i = 0; i < size; i++){
    printf("arr[%d]: %d\n", i, arr[i]);
  }
}

void swap(int *first, int *second){
  int temp = *first;
  *first = *second;
  *second = temp;
}

void reverse(int arr[], int size){
  for(int i = 0; i < size / 2; i++){
    swap(&arr[i], &arr[size - 1 - i]);
  }
}