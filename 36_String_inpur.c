#include <stdio.h>
#include <string.h>

int main(){

  char name[50];
  // printf("Please, enter your name: ");
  // gets(name);
  // printf("Goode morning:");
  // puts(name);

  printf("Now, enter your nickname: ");
  fgets(name, sizeof(name), stdin);
  puts(name);
  printf("Good morning ");
  puts(name);
  return 0;
}