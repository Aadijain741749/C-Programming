#include <stdio.h>
int main(){
  char name[] = "Aadi Jain";
  printf("Array Before modifying: %s\n", name);
  name[5] = 'j';
  printf("Array After modifying: %s\n", name);

  char*nick_name = "Aadi Jain";
  printf("Pointer: Before modifying: %s\n", nick_name);
  nick_name[5] = 'j';
  printf("Pointer: After modifying: %s\n", nick_name);
  return 0;
}