#include <stdio.h>
#include <stdbool.h>

void swap(int* xp, int* yp){
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void bubble_sort(int arr[], int n){
  bool swapped;
  for(int i = 0; i < n - 1; i++){
    swapped = false; 
    for(int j = 0; j < n - 1 - i; j++){
      if(arr[j] > arr[j + 1]){
        swap(&arr[j], &arr[j+1]);
        swapped = true;
      }
    }
    if (swapped == false){
      break;
    }
  }
}

void print_array(int arr[], int size){
  for(int i = 0; i < size; i++){
    printf("%d\n", arr[i]);
  }
}

int main(){
  int n;
  printf("Please, enter the number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  printf("Now, enter the elements\n");
  for(int i = 0; i < n; i++){
    printf("arr[%d]: ",i);
    scanf("%d", &arr[i]);
  }

  bubble_sort(arr, n);
  printf("Sorted array: \n");
  print_array(arr, n);
  return 0;

}