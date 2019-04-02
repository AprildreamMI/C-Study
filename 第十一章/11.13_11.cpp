#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define COL 51
#define SIZE 10

char * s_gets(char *, int );
void printf_menu(char [][COL]);

int main(void) {

    char origin_str[SIZE][COL];
    puts("请输入十行行字符串");
    for (int i = 0; i < SIZE; i++) {
        s_gets(origin_str[i], COL);
    }
//    while(getchar() != '\n') {
//        continue;
//    }
    printf_menu(origin_str);

    return 0;
}

void puts_origin_str (char str[][COL]) {
    puts("我是打印出来的源字符串列表");
    for (int i = 0; i < SIZE; i++) {
        puts(str[i]);
    }
}

void puts_strcmp(char str[][COL]) {
    char *pstr[SIZE], *temp;
    for (int i = 0; i < SIZE; i++) {
        pstr[i] = str[i];
    }
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++ ) {
            if (strcmp(pstr[i], pstr[j]) > 0) {
                temp = pstr[i];
                pstr[i] = pstr[j];
                pstr[j] = temp;
            }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        puts(pstr[i]);
    }
}

void puts_strlen(char str[][COL]) {
    char *pstr[SIZE], *temp;
    for (int i = 0; i < SIZE; i++) {
        pstr[i] = str[i];
    }
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++ ) {
            if (strlen(pstr[i]) > strlen(pstr[j]) ) {
                temp = pstr[i];
                pstr[i] = pstr[j];
                pstr[j] = temp;
            }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        puts(pstr[i]);
    }
}

void puts_word_strlen(char str[][COL]) {
    char *pstr[SIZE], *temp;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < COL; j++) {
            while(str[i][j]) {

            }
        }
    }
}

// 打印菜单
// skdhajwhdawgady
// fkehsafjhsefgsw
// wldjaklwhnfjhaw
// dwhajdfhwajfghawgf
// dwkjakhgajghwhagak
// lewgjklsjgksejgjesij
// waejalkghjsawehgasgers
// elgjlksejfgeishguelgjs
// egljsjgeishgoshgsoeighs
// geojgsiogjsioehgshg
void printf_menu(char str[][COL]) {
    int menu_number, bol;

    printf("===========请输入菜单项对应的数字===========\n");
    printf("1、打印源字符列表\n");
    printf("2、以ASCII中的顺序打印字符串\n");
    printf("3、按长度递增顺序打印字符串\n");
    printf("4、按字符串中第1个单词的长度打印字符串\n");
    printf("5、退出\n");
    printf("===========请输入菜单项对应的数字===========\n");
    bol = scanf("%d", &menu_number);
    if (menu_number != 5) {
        if (bol != 1) {
            printf("*******输入错误, 请重新输入*********\n");
            while(getchar() != '\n') {
                continue;
            }
            printf_menu(str);
        } else {
            switch(menu_number) {
                case 1 : {
                    printf("打印源字符串列表\n");
                    puts_origin_str(str);
                    printf_menu(str);
                };break;
                case 2 : {
                    printf("以ASCII中的顺序打印字符串\n");
                    puts_strcmp(str);
                    printf_menu(str);
                };break;
                case 3 : {
                    printf("按长度递增顺序打印字符串\n");
                    puts_strlen(str);
                    printf_menu(str);
                };break;
                case 4 : {
                    printf("按字符串中第一个单词的长度打印字符串\n");
                    printf_menu(str);
                };break;
                default: printf_menu(str);break;
            }
        }
    } else {
        printf("欢迎下次使用, 再见！！\n");
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


