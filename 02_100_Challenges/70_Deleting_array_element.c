#include <stdio.h>

void delete(int arr[], int size, int new_arr[], int *new_size, int element);
void print_arr(int arr[], int size);

int main(){
  printf("Welcome to deleting elements\n");
  int n, x;
  printf("Please, enter the no. of elements in array: ");
  scanf("%d", &n);
  
  int arr[n];
  printf("Please, enter the elemnent in array: \n");
  for (int i = 0; i < n; i++){
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  int new_arr[n];
  int new_size;
  printf("Now, enter the elememt which you want to delete: ");
  scanf("%d", &x);

  delete(arr, n, new_arr, &new_size, x);
  printf("The array after deleting %d is: \n", x);
  print_arr(new_arr, new_size);

}

void print_arr(int arr[], int size){
  for(int i = 0; i < size; i++){
    printf("arr[%d]: %d\n", i, arr[i]);
  }
}

void delete(int arr[], int size, int new_arr[], int *new_size, int element){

  int j = 0;
  for(int i = 0; i < size; i++){
    if ( arr[i] != element){
      new_arr[j] = arr[i];
      j++;
    }
  }
  *new_size = j;
}m