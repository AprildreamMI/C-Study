#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void) {
    FILE *fp;
    char words[MAX];

    if ((fp = fopen("wordy.txt", "a+")) == NULL) {
        fprintf(stdout, "���ܴ�Ҳ�����½�wordy�ļ�\n");
        exit(EXIT_FAILURE);
    }

    puts("�����뵥�����ļ������,����\"#\"��������");
    while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) {
        fprintf(fp, "%s\n", words);
    }

    puts("�ļ�����Ϊ: ");
    rewind(fp);     // �ص��ļ���ʼ��
    while(fscanf(fp, "%s", words) == 1) {
        puts(words);
    }
    puts("Done");

    if (fclose(fp) != 0) {
        fprintf(stderr, "�ر��ļ�����\n");
    }

    return 0;



    return 0;
}
