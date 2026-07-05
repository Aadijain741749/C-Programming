#include <stdio.h>

void print_diagonal_sum(int rows, int cols, int arr[rows][cols]);

int main(){
  int rows, cols;
  printf("Welcome to sum of diagonal elements in 2D array.\n");
  printf("Please, enter the number of rows: ");
  scanf("%d", &rows);
  printf("Please, enter the number of columns: ");
  scanf("%d", &cols);

  if(rows != cols){
    printf("Error: Diagonal sum is only possible for a square matrix(rows = columns)");
    return 1;
  }

  int arr[rows][cols];
  printf("Please, enter the elements: ");
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      printf("arr[%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  print_diagonal_sum(rows, cols, arr);
  return 0;
}

void print_diagonal_sum(int rows, int cols, int arr[rows][cols]){
  int left_ds = 0;
  int right_ds = 0;
  for(int i = 0; i < rows; i++){
    left_ds += arr[i][i];
    right_ds += arr[i][cols- 1 - i];
  }
  
  printf("\nThe sum of left diagonal is %d.", left_ds);
  printf("\nThe sum of right diagonal is %d.", right_ds);

  int total_ds = left_ds + right_ds;
  if(rows % 2 == 1){
    int index = rows/2;
    total_ds -= arr[index][index];
  }
  printf("\nThe sum of total diagonal sum is %d",total_ds);
}