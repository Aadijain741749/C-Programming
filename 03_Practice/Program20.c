#include <stdio.h>

int main() {
    int rows = 5;

    printf("---Right-Angled Triangle---\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("---Inverted Right-Angled Triangle---\n");
     for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }j
    return 0;
}