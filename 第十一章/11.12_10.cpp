#include <stdio.h>

int my_strlen(char *);

int main(void) {

    char string[20] = "zhaosi";

    printf("×Ö·û´®³¤¶ÈÎª£º%d\n", my_strlen(string));

    return 0;
}

int my_strlen(char * str) {
    int number = 0;
    while(*str++ != '\0') {
        number++;
    }

    return number;
}
