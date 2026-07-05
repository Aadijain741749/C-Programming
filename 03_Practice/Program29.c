#include <stdio.h>

int my_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

char* my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
    return dest;
}

char* my_strcat(char *dest, const char *src) {
    int dest_len = my_strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}

int my_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main() {
    char str1[50] = "Hello";
    char str2[] = " World";
    char copy_dest[50];

    printf("Length of '%s': %d\n", str1, my_strlen(str1));

    my_strcpy(copy_dest, str1);
    printf("Copied string: %s\n", copy_dest);

    my_strcat(str1, str2);
    printf("Concatenated: %s\n", str1);

    printf("Comparison (equal): %d\n", my_strcmp("apple", "apple"));
    printf("Comparison (different): %d\n", my_strcmp("apple", "banana"));

    return 0;
}