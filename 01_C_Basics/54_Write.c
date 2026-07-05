#include <stdio.h>
int main(){
  FILE *file_pointer;

  file_pointer = fopen("writing.txt", "w");
  if(file_pointer == NULL){
    printf("\nFile could not be opened.");
    return 1;
  }

  fprintf(file_pointer, "I completer the Btech 1st year.");

  int result = fclose(file_pointer);
  if (result == 0) {
  file_pointer = NULL;
  }
  else{
    printf("\nFile was not closed properly.");
  }
  return 0;
}