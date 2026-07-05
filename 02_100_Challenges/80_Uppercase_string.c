#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  char text[100];
  printf("Welcome to converting string to UPPERCASE\n");
  printf("Please, enter your text: ");
  fgets(text, sizeof(text), stdin);
  // scanf("%[^\n]s", &text);

  //for(int i = 0; i < strlen(text); i++)
  for(int i = 0; text[i] != '\0'; i++){
    text[i] = toupper(text[i]);
  }

  printf("Here is ypur final output\n%s", text);
  return 0;
}