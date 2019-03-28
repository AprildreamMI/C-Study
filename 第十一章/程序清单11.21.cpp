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

        // ���һ��з���������з����ڣ��򷵻����ַ
        st_end = strchr(st, '\n');
//      �����ַ���ڣ�ֱ�Ӹ�ֵ�˵�ַ�ϵ�ֵΪ���ַ�
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
