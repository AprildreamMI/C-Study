#include <stdio.h>
#include <string.h>

char * find_index(char [], char );

int main(void) {

    char origin[20] = "zhaosi shige da";
    char *p_index;

    p_index = find_index(origin, 'd');

    putchar(*p_index);

    return 0;
}

char * find_index(char origin_char[], char ch) {

    char *p_index = origin_char;

    while(*p_index != '\0') {
        if (*p_index == ch) {
            return p_index;
        } else {
            p_index++;
        }
    }


    return NULL;
}
