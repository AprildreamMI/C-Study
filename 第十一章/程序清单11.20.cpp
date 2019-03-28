#include <stdio.h>
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40

char * s_gets(char * , int );

int main(void) {

    char try1[SIZE];

    puts("Who is buried in Grant's tomb?");

    s_gets(try1, SIZE);

    while(try1 != ANSWER) {
        puts("No, that's wrong ,Try again .");
        s_gets(try1, SIZE);
    }
    puts("That's right");

    return 0;
}

char * s_gets(char * st, int n) {
    char * ret_val;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {

        while(*st != '\n' && *st != '\0') {
            st++;
        }
        if (*st == '\n') {
            *st = '\0';
        } else {
            while(getchar() != '\n') {
                continue;
            }
        }
    }

    return ret_val;

}
