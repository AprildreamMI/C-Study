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

// ��ӡ�˵�
void printf_menu() {

    int menu_number;

    printf("===========������˵����Ӧ������===========");
    printf("1����ӡԴ�ַ��б�");
    printf("2����ASCII�е�˳���ӡ�ַ���");
    printf("3�������ȵ���˳���ӡ�ַ���");
    printf("4�����ַ����е�1�����ʵĳ��ȴ�ӡ�ַ���");
    printf("5���˳�");
    printf("===========������˵����Ӧ������===========");

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


