#include <stdio.h>
#include <string.h>

int main(){
  char first_name[50];
  char last_name[50];

  printf("Please, enter your first name: ");
  scanf("%[^\n]s", first_name);
  printf("Please, enter your last name: ");
  scanf("%[^\n]s", last_name);

  strcat(first_name, last_name);
  printf("Your final name is %s", first_name);
  return 0;
}