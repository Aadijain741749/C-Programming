#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("Weclome to our dynamic characters\n");
  char *sentense = (char*) calloc(100, sizeof(char));
  if(sentense == NULL){
    printf("Memory Error !!!!");
    return 1;
  }

  printf("Ensuring all elements are initialized.");
  for(int i = 0; i < 100; i++){
    printf(" %d", sentense[i]);
  }

  printf("\nNow enter a piece of text: ");
  fgets(sentense, 100, stdin);

  printf("Here is your text: %s", sentense);

  free(sentense);
  sentense = NULL;
  return 0;
}