#include <stdio.h>
#include <string.h>

struct Book{
  char title[100];
  char author[100];
  float price;
};

typedef struct Book Book;

void print_book(Book *book){
  printf("\n%s is written by %s, and is sold for Rs%.2f", book->title, book->author, book->price);
}

void input_book(Book *Book){
  printf("\nPlease, enter the book title: ");
    fgets(Book->title, 100, stdin);
    Book->title[strcspn(Book->title, "\n")] = 0;
    printf("Now, enter the book's author: ");
    fgets(Book->author, 100, stdin);
    Book->author[strcspn(Book->author, "\n")] = 0;
    printf("Finally, enter the book's price in Rs: ");
    scanf("%f", &Book->price);
    while(getchar() != '\n');
}

int main(){
  
  printf("Welcome to the Book store.\n");
  Book books[3];
  for(int i = 0; i < 3; i++){
    input_book(&books[i]);
  }

  printf("Here are the details of all books: ");
  for(int i = 0; i < 3; i++){
    print_book(&books[i]);
  }
  return 0;
}