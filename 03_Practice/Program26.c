#include <stdio.h>
int main()
{
  int rm1, cm1, rm2, cm2;
  printf("Please, enter the number of rows of matrix 1: ");
  scanf("%d", &rm1);
  printf("Now, enter the number of columns of matrix 2: ");
  scanf("%d", &cm1);
  printf("Please, enter the number of rows of matrix 2: ");
  scanf("%d", &rm2);
  printf("Now, enter the number of columns of matrix 2: ");
  scanf("%d", &cm2);

  int matrix1[rm1][cm1];
  printf("Now, enter the elements of first matrix\n");
  for(int i = 0; i < rm1; i++){
    for(int j = 0; j < cm1; j++){
      printf("matrix1[%d][%d]: ", i, j);
      scanf("%d", &matrix1[i][j]);
    }
  }

  int matrix2[rm2][cm2];
  printf("Now, enter the elements of second matrix\n");
  for(int i = 0; i < rm2; i++){
    for(int j = 0; j < cm2; j++){
      printf("matrix2[%d][%d]: ", i, j);
      scanf("%d", &matrix2[i][j]);
    }
  }

  if(rm1 == rm2 && cm1 == cm2){
    int sum_matrix[rm1][cm1];
    for(int i = 0; i < rm1; i++){
      for(int j = 0; j < cm1; j++){
        sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
      }
    }
  
    printf("The addition of two matrix are:\n");
    for(int i = 0; i < rm1; i++){
      for(int j = 0; j < cm1; j++){
        printf("sum_matrix[%d][%d]: %d\n", i, j, sum_matrix[i][j]);
      }
    }
  }
  else{
    printf("Addition require identical dimensions\n");
  }

  if(cm1 = rm2){
    int mul_matrix[rm1][cm2];
    for(int i = 0; i < rm1; i++){
      for(int j = 0; j < cm2; j++){
        mul_matrix[i][j] = 0;
        for(int k = 0; k < cm1; k++){
          mul_matrix[i][j] = mul_matrix[i][j] + matrix1[i][k]*matrix2[k][j];
        }
      }
    } 

    printf("The multiplication of two matrix is\n");
    for(int i = 0; i < rm1; i++){
      for(int j = 0; j < cm2; j++){
       printf("mul_matrix[%d][%d]: %d\n", i, j, mul_matrix[i][j]);
      }
    }
  }
  else{
    printf("Matrix multipication is not possible because column of matrix 1 is not equal to row of matrix 2\n");
  }
  return 0;
}