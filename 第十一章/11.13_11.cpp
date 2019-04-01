#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * s_gets(char *, int );
void printf_menu();

int main(void) {

    char origin_str[11];
//    s_gets(origin_str, 11);
    fgets(origin_str, 11, stdin);



//    fputs(origin_str, stdout);

    return 0;
}

// 打印菜单
void printf_menu() {

    int menu_number;

    printf("===========请输入菜单项对应的数字===========");
    printf("1、打印源字符列表");
    printf("2、以ASCII中的顺序打印字符串");
    printf("3、按长度递增顺序打印字符串");
    printf("4、按字符串中第1个单词的长度打印字符串");
    printf("5、退出");
    printf("===========请输入菜单项对应的数字===========");

    while(scanf("%d", menu_number) != 0) {
        while(getchar() != '\n') {
            continue;
        }
        switch()
    }

}

char * s_gets(char * st, int n) {
    char * ret_val, * st_end;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
//      查找换行符，如果换行符存在，则返回其地址
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


