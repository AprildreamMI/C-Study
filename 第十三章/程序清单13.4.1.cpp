#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void) {
    FILE *fp;
    char words[MAX];

    if ((fp = fopen("wordy.txt", "a+")) == NULL) {
        fprintf(stdout, "不能打开也不能新建wordy文件\n");
        exit(EXIT_FAILURE);
    }

    puts("请输入单词向文件中添加,输入\"#\"结束输入");
    while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) {
        fprintf(fp, "%s\n", words);
    }

    puts("文件内容为: ");
    rewind(fp);     // 回到文件开始处
    while(fscanf(fp, "%s", words) == 1) {
        puts(words);
    }
    puts("Done");

    if (fclose(fp) != 0) {
        fprintf(stderr, "关闭文件错误\n");
    }

    return 0;



    return 0;
}
