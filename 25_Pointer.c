#include <stdio.h>
int main(){
  int i = 3;
  int *j;
  j = &i;
  int **k;
  k = &j;
  
  printf("Adress of i is %p\n", j);
  printf("Adress of i is %p\n", *k); printf("Adress of j is %p\n", k);
  printf("Adress of i is %p\n", &i);
  printf("Adress of j is %p\n", &j);
  printf("Value of i is %d.\n", i);
  printf("Value of i is %d.\n", *(&i));
  printf("Value of k is %p.\n", k);
  return 0;
}
