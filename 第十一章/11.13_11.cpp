#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define COL 51
#define SIZE 10

char * s_gets(char *, int );
void printf_menu(char [][COL]);

int main(void) {

    char origin_str[SIZE][COL];
    puts("������ʮ�����ַ���");
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
    puts("���Ǵ�ӡ������Դ�ַ����б�");
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

// ��ӡ�˵�
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

    printf("===========������˵����Ӧ������===========\n");
    printf("1����ӡԴ�ַ��б�\n");
    printf("2����ASCII�е�˳���ӡ�ַ���\n");
    printf("3�������ȵ���˳���ӡ�ַ���\n");
    printf("4�����ַ����е�1�����ʵĳ��ȴ�ӡ�ַ���\n");
    printf("5���˳�\n");
    printf("===========������˵����Ӧ������===========\n");
    bol = scanf("%d", &menu_number);
    if (menu_number != 5) {
        if (bol != 1) {
            printf("*******�������, ����������*********\n");
            while(getchar() != '\n') {
                continue;
            }
            printf_menu(str);
        } else {
            switch(menu_number) {
                case 1 : {
                    printf("��ӡԴ�ַ����б�\n");
                    puts_origin_str(str);
                    printf_menu(str);
                };break;
                case 2 : {
                    printf("��ASCII�е�˳���ӡ�ַ���\n");
                    puts_strcmp(str);
                    printf_menu(str);
                };break;
                case 3 : {
                    printf("�����ȵ���˳���ӡ�ַ���\n");
                    puts_strlen(str);
                    printf_menu(str);
                };break;
                case 4 : {
                    printf("���ַ����е�һ�����ʵĳ��ȴ�ӡ�ַ���\n");
                    printf_menu(str);
                };break;
                default: printf_menu(str);break;
            }
        }
    } else {
        printf("��ӭ�´�ʹ��, �ټ�����\n");
    }
}

char * s_gets(char * st, int n) {
    char * ret_val, * st_end;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
//      ���һ��з���������з����ڣ��򷵻����ַ
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


