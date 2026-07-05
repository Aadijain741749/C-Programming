#include <stdio.h>

int search(int arr[][], int rows, int cols, int element);

int main(){
  printf("Welcome to searching in 2D array.\n");
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};

  printf("Searching for 1 found %d occurnece", search(arr, 3, 3, 1));
  printf("Searching for 5 found %d occurnece", search(arr, 3, 3, 5));
  printf("Searching for 9 found %d occurnece", search(arr, 3, 3, 9));
  return 0;
}

int search(int arr[][3], int rows, int cols, int element){
  int occ = 0;
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      if(arr[i][j] == element){
        occ++;
      }
    }
  }
  return occ;
}