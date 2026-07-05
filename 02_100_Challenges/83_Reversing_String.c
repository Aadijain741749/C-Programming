#include <stdio.h>
#include <string.h>

void reverse_string(char str[]);

int main(){
  char text[100];
  printf("Welcome to reversing a string,\n");
  printf("Please, enter your text: ");
  fgets(text, sizeof(text), stdin);
  
  printf("Original text is: %s\n", text);
  //puts(text);
  reverse_string(text);
  printf("Text after recersal is: %s\n", text);
  // puts(text);

  return 0;
}

void reverse_string(char str[]){
  int length = strlen(str);
  for(int i = 0; i < length / 2; i++){
    char temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 -i] = temp;
  }
}