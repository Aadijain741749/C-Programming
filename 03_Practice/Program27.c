#include <stdio.h>
int main()
{
  int rnum, cnum, sum = 0;
  printf("Please, enter the number of row of matrix: ");
  scanf("%d", &rnum);
  printf("Now, enter the number of columns of matrix: ");
  scanf("%d", &cnum);

  int matrix[rnum][cnum];
  printf("Now, enter the elements of matrix\n");
  for(int i = 0; i < rnum; i++){
    for(int j = 0; j < cnum; j++){
      printf("matriz[%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
  
  if(rnum == cnum){
    int limit = (rnum < cnum) ? rnum : cnum;
    for(int i = 0; i < limit; i++){
      sum += matrix[i][i];
    }
    printf("Sum of diagonal elements: %d\n", sum);
  }
  else{
    printf("The matrix is not square, so additon of diagonal elements is not possible\n");
  }
  return 0;
}