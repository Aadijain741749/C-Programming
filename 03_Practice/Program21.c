#include <stdio.h>
void sum(int arr1[], int arr2[], int arr3[], int n);
int main()
{
  int n;
  printf("Please, enter the number of elemnts in an array: ");
  scanf("%d", &n);

  int arr1[n], arr2[n], result[n];

  printf("Please, enter the element of first array:\n");
  for(int i = 0; i < n; i++){
    printf("arr1[%d]: ", i);
    scanf("%d", &arr1[i]);
  }

  printf("Now, enter the element of second array:\n");
  for(int i = 0; i < n; i++){
    printf("arr2[%d]: ", i);
    scanf("%d", &arr2[i]);
  }
  sum(arr1, arr2, result, n);
  
  printf("\nFirst array: ");
  for(int i = 0; i < n; i++){
    printf("%d ", arr1[i]);
  }
  printf("\n");
  
  printf("Second array: ");
  for(int i = 0; i < n; i++){
    printf("%d ", arr2[i]);
  }
  printf("\n");
  
  printf("Sum array: ");
  for(int i = 0; i < n; i++){
    printf("%d ", result[i]);
  }
  printf("\n");
  return 0;
}

void sum(int arr1[], int arr2[], int arr3[], int n){
  for(int i = 0; i < n; i++){
    arr3[i] = arr1[i] + arr2[i];
  }
  return;
}