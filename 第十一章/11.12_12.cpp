#include <stdio.h>
#include <string.h>

char * find_span (char *);

int main(void) {

    char string[20] = "zhaosi si";


    printf("%s", find_span(string));

    return 0;
}

char * find_span(char * str) {

    char *p;

    while(*str != '\0') {
        if (*str == ' ') {
            return str;
        } else {
            str++;
        }
    }

    return NULL;
}
