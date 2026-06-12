#include <stdio.h>
int main(){
  FILE *file_pointer;
  char text[200];

  file_pointer = fopen("Aadi.txt", "r");
  if(file_pointer == NULL){
    printf("\nFile could not be opened.");
    return 1;
  }

  // fgets(text, 200, file_pointer);
  // printf("%s\n", text);

  char ch;
  do{
    ch = fgetc(file_pointer);
    printf("%c", ch);
  } while(ch != EOF);

  int result = fclose(file_pointer);
  if (result == 0) {
  file_pointer = NULL;
  }
  else{
    printf("\nFile was not closed properly.");
  }
  
  return 0;
}