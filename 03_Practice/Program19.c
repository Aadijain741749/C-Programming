#include <stdio.h>

int main()
{
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter the elements:\n");
  for(int i = 0; i < n; i++){
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }
  
  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += arr[i];
  }
  
  printf("Sum of all elements: %d\n", sum);
  return 0;
}