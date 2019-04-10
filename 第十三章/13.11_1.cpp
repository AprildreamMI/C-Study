#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char ch;
//    目标文件名和源文件名
    char app_fileName[40], src_fileName[40];
    FILE *fp;
    unsigned long my_count = 0;
    printf("请输入目标文件名：\n");
    scanf("%s", app_fileName);
    getchar();
    printf("请输入源文件名：\n");
    scanf("%s", src_fileName);
//    printf("%s -- %s\n", app_fileName, src_fileName);

    if ((fp = fopen(src_fileName, "r")) == NULL) {
        printf("读取源文件%s失败\n", src_fileName);
        exit(EXIT_FAILURE);
    }
    while((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        my_count++;
    }
    fclose(fp);
    printf("%s文件有%d个字符", src_fileName, my_count);


    return 0;
}
