#include <stdio.h>
#include <string.h>

#define ANSWER "Grant"
#define SIZE 40

char * s_gets(char *, int);

int main(void) {

    char try1[SIZE];
    puts("Who is buried in Grant's tomb?");

    s_gets(try1, SIZE);
    while(strcmp(try1, ANSWER) != 0) {
        puts("No, that's wrong ,Try again .");
        s_gets(try1, SIZE);
    }
    puts("That's right");

    return 0;

}

char * s_gets(char * st, int n) {
    char * ret_val, st_end;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {

        // 查找换行符，如果换行符存在，则返回其地址
        st_end = strchr(st, '\n');
//      如果地址存在，直接赋值此地址上的值为空字符
        if (st_end) {
            *st_end = '\0';
        } else {
            while(getchar() != '\n') {
                continue;
            }
        }
    }

    return ret_val;

}
