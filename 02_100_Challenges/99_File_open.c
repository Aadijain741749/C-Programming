#include <stdio.h>
int main(){
  char filename[100];
  printf("Welcome to File opening tool.\n");
  printf("Please, enter the file name: ");
  scanf("%[^\n]s", filename);

  FILE *file = fopen(filename, "r");
  if(file != NULL){
    printf("%s was opened successfully", filename);
    fclose(file);
  }
  else{
    printf("File was not found.");
  }
  return 0;
}