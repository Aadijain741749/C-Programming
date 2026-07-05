#include <stdio.h>

int occurrences(int arr[], int size, int element);

int main(){
  int arr[] = {3,6,7,98,45,3,6,3,71,10};
  printf("Welcome to finding element occurrences\n");
  int result = occurrences(arr,10,98);
  printf("The number of occurrences of 98 are %d\n", result);

  result = occurrences(arr,10,3);
  printf("The number of occurrences of 3 are %d\n", result);

  result = occurrences(arr,10,6);
  printf("The number of occurrences of 6 are %d\n", result);

  result = occurrences(arr,10,7);
  printf("The number of occurrences of 7 are %d\n", result);
  return 0;
}

int occurrences(int arr[], int size, int element){
  int counter = 0;
  for(int i = 0; i < size; i++){
    if(arr[i] == element){
      counter++;
    }
  }
  return counter;
}