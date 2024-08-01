#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_CHARACTERS 100

void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void reverseWords(char *str) {
    int length = strlen(str);
    int start = 0, end = 0;
    char temp;

    // Reverse the entire string
    reverseString(str);

    // Reverse each word
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            reverseString(str + start);
            start = i + 1;
        }
    }
}

void removeDuplicates(char *str) {
    int length = strlen(str);
    int count = 0;

    // Remove duplicate characters
    for (int i = 0; i < length; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
        if (j == i) {
            str[count++] = str[i];
        }
    }

    str[count] = '\0';
}

int main() {
    char input[MAX_CHARACTERS];
    printf("Enter a string: ");
    fgets(input, MAX_CHARACTERS, stdin);

    // Remove leading and trailing whitespaces
    input[strcspn(input, "\n")] = '\0';

    printf("Original string: %s\n", input);

    reverseWords(input);
    printf("Reversed words: %s\n", input);

    removeDuplicates(input);
    printf("String with duplicates removed: %s\n", input);

    return 0;
}
