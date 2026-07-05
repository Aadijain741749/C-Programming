#include <stdio.h>

int linear_search(int arr[], int n, int x){
  for(int i = 0; i < n; i++){
    if (arr[i] == x){
      return i;
    }
  }
  return -1;
}

int main(){
  int n;
  printf("Please, enter the number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  int x;
  printf("Now, enter the elements\n");
  for(int i = 0; i < n; i++){
    printf("arr[%d]: ",i);
    scanf("%d", &arr[i]);
  }
 
  printf("Now, enter the elements you want to search: ");
  scanf("%d", &x);
  
  int result = linear_search(arr, n, x);
  (result == -1) 
       ? printf("Element is not present in array")
       : printf("Element is present at index %d", result);
  return 0;
}