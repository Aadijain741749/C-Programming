#include <stdio.h>
#include <string.h>

void print_book(char title[], char author[], float price){
  printf("\n%s is written by %s, and is sold for Rs%.2f", title, author, price);
}

int main(){
  char titles[3][100];
  char authors[3][100];
  float prices[3];

  printf("Welcome to the Book store.\n");
  for(int i = 0; i < 3; i++){
    printf("\nPlease, enter the book title: ");
    fgets(titles[i], 100, stdin);
    titles[i][strcspn(titles[i], "\n")] = 0;
    printf("Now, enter the book's author: ");
    fgets(authors[i], 100, stdin);
    authors[i][strcspn(authors[i], "\n")] = 0;
    printf("Finally, enter the book's price in Rs; ");
    scanf("%f", &prices[i]);
    while(getchar() != '\n');
  }

  printf("Here are the details of all books: ");
  for(int i = 0; i < 3; i++){
    print_book(titles[i], authors[i], prices[i]);
  }
  return 0;
}