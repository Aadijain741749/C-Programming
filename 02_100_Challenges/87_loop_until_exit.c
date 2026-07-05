#include <stdio.h>
#include <string.h>

int main(){
  const char EXIT[]= "exit";
  char command[20];
  printf("Welcome to our system\n");

  while(1){
    printf("\nPlease, enter your command: ");
    scanf("%s", command);
    if(!strcmp(command, EXIT)){
      break;
    }
  };

  printf("\nExit successfully.");
  return 0;
}