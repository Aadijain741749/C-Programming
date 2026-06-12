#include <stdio.h>
#include <string.h>
int main()
{
  char name[50];
  printf("Please, enter your name: ");
  scanf("%[^\n]s", name);
 // fgets(name, 50, stdin);

  int size = strlen(name);
  printf("The length of your name is %d", size);
  return 0;
}