#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char ch;
//    Ŀ���ļ�����Դ�ļ���
    char app_fileName[40], src_fileName[40];
    FILE *fp;
    unsigned long my_count = 0;
    printf("������Ŀ���ļ�����\n");
    scanf("%s", app_fileName);
    getchar();
    printf("������Դ�ļ�����\n");
    scanf("%s", src_fileName);
//    printf("%s -- %s\n", app_fileName, src_fileName);

    if ((fp = fopen(src_fileName, "r")) == NULL) {
        printf("��ȡԴ�ļ�%sʧ��\n", src_fileName);
        exit(EXIT_FAILURE);
    }
    while((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        my_count++;
    }
    fclose(fp);
    printf("%s�ļ���%d���ַ�", src_fileName, my_count);


    return 0;
}
