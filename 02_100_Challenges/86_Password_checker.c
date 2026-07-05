#include <stdio.h>
#include <string.h>

int main(){
  const char STORED_PASSWORD[] = "Pa$$word";
  char password[20];
  printf("Welcome to secure system\n");

  do{
    printf("\nPlease, enter correct password: ");
    //scanf("%s", password);
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';
  } while(strcmp(password, STORED_PASSWORD) != 0);

  printf("\nAccess Granted");
  return 0;
}