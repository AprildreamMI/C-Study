#include <stdio.h>

char * getchar_n(int );

int main(void) {

    char *str1;
    int n = 6;

    str1 = getchar_n(n);

    while(n > 0) {
        putchar(*str1++);
        putchar('\n');
        n--;
    }

    return 0;
}

char * getchar_n (int n) {
    static char str[6];
    int i = 0;

    while(i < n) {
        str[i] = getchar();
        while(getchar() != '\n') {
            continue;
        }
        if (str[i] == ' ' || str[i] == '\n') {
            printf("%d\n", n);
            return str;
        }
        printf("i = %d\n", i);
        i++;
    }

    return str;
}
