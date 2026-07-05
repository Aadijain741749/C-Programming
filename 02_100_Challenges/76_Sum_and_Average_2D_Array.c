#include <stdio.h>

int sum(int rows, int cols, int arr[rows][cols]);
int main(){
  int rows, cols;
  printf("Welcome to sum and average in 2D array.\n");
  printf("Please, enter the number of rows: ");
  scanf("%d", &rows);
  printf("Please, enter the number of columns: ");
  scanf("%d", &cols);

  int arr[rows][cols];
  printf("Please, enter the elements: ");
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      printf("arr[%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  int addition = sum(rows, cols, arr);
  printf("The sum of element of 2D array is: %d\n", addition);
  float average = (addition) / (rows*cols);
  printf("The average of element of 2D array: %.2f", average);
  return 0;
} 

int sum(int rows, int cols, int arr[rows][cols]){
  int add = 0;
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      add += arr[i][j];
    }
  }
  return add;
}