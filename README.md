# lijikyar ([elisp/lisp/manual](https://www.gnu.org/software/emacs/manual/html_node/eintr/))

The provided code snippet is a simple Markdown header with the text "lijikyar". The code block itself does not require any additional code beyond the immediate scope.

# lijikyar ([html/manual](https://developer.mozilla.org/en-US/docs/Web/HTML))

The provided code snippet is a simple Markdown header with the text "lijikyar". The code block itself does not require any additional code beyond the immediate scope.

# lijikyar ([javascript/manual](https://developer.mozilla.org/en-US/docs/Web/JavaScript#:~:text=JavaScript%20(JS)%20is%20a%20lightweight,Apache%20CouchDB%20and%20Adobe%20Acrobat.))

The provided code snippet is a simple Markdown header with the text "lijikyar". The code block itself does not require any additional code beyond the immediate scope.

# lijikyar ([css/manual](https://developer.mozilla.org/en-US/docs/Web/CSS))

The provided code snippet is a simple Markdown header with the text "lijikyar". The code block itself does not require any additional code beyond the immediate scope.

# makefile example connector lijikyar better or charger
```makefile
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

SRC = 
OBJ = $(SRC:.cc=.o)
EXEC = lijikyar

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)
```

# c++ and C source files
```c++
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
```
# install makefile
$-> make all
