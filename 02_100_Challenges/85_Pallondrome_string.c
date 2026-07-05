#include <stdio.h>
#include <string.h>

int is_pallindrome(char arr[]);

int main(){
  char text[20];
  printf("Welcome to Pallindrome string checker.\n");
  printf("Now, enter your string: ");
  scanf("%s", text);

  if(is_pallindrome(text)){
    puts("Your input is pallindrome.");
  }
  else{
    puts("Your input is not pallindrome.");
  }
  return 0;
}

int is_pallindrome(char arr[]){
  int length = strlen(arr);
  for(int i = 0; i < length / 2; i++){
    if(arr[i] != arr[length - 1 - i]){
      return 0;
    }
  }
  return 1;
}