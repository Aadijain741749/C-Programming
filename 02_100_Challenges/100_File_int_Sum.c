#include <stdio.h>

int main(){
  const char filename[] = "Number.txt";
  FILE *file = fopen(filename, "r");
  if (file == NULL){
    printf("File could not be opened");
    return 1;
  }

  int temp;
  int sum = 0;
  int read_status;
   while(fscanf(file, "%d", &temp) == 1){
    sum += temp;
   }

  printf("\n The sum of all number is: %d", sum);
  fclose(file);
  file = NULL;
  return 0;
}