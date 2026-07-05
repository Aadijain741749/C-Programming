#include <stdio.h>

void insertion_sort(int arr[], int n){
  for(int i = 1; i < n; i++){
    int key = arr[i];
    int j = i - 1;
    

    while(j >= 0 && arr[j] > key){
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

void selection_sort(int arr[], int n){
  for(int i = 0; i < n - 1; i++){
    int min_index = i;
    
    for(int j = i + 1; j < n; j++){
      if(arr[j] < arr[min_index]){
        min_index = j;
      }
    }
    
    if(min_index != i){
      int temp = arr[i];
      arr[i] = arr[min_index];
      arr[min_index] = temp;
    }
  }
}

void print_array(int arr[], int n){
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void copy_array(int source[], int dest[], int n){
  for(int i = 0; i < n; i++){
    dest[i] = source[i];
  }
}

int main(){
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  printf("Enter the elements:\n");
  for(int i = 0; i < n; i++){
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }
  
  int arr_insertion[n];
  int arr_selection[n];
  
  copy_array(arr, arr_insertion, n);
  copy_array(arr, arr_selection, n);
  
  printf("\n--- Original Array ---\n");
  print_array(arr, n);
  
  insertion_sort(arr_insertion, n);
  printf("\n--- After Insertion Sort ---\n");
  print_array(arr_insertion, n);
  
  selection_sort(arr_selection, n);
  printf("\n--- After Selection Sort ---\n");
  print_array(arr_selection, n);
  
  return 0;
}