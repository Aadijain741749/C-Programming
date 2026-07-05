#include <stdio.h>

int binary_search(int arr[], int n, int x){
  int low = 0;
  int high = n - 1;
  while(low <= high){
    int mid = low + (high - low)/2;

    if(arr[mid] == x){
      return mid;
    }
    if(arr[mid] < x){
      low = mid + 1;
    }
    else{
      high = mid - 1;
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
  printf("Now, enter the elements in ascending order\n");
  for(int i = 0; i < n; i++){
    printf("arr[%d]: ",i);
    scanf("%d", &arr[i]);
  }

  printf("Now, enter the elements you want to search: ");
  scanf("%d", &x);
  
  int result = binary_search(arr, n, x);
  (result == -1) 
       ? printf("Element is not present in array")
       : printf("Element is present at index %d", result);
  return 0;
}