#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char app_fileName[40], src_fileName[40], work[40];
  FILE *app_fp, *src_fp;
  printf("请输入目标文件名：\n");
  scanf("%s", app_fileName);
  getchar();
  printf("请输入源文件名：\n");
  scanf("%s", src_fileName);

  if ((app_fp = fopen(app_fileName, "a+")) == NULL) {
    printf("打开目标文件失败");
    exit(EXIT_FAILURE);
  }
  if ((src_fp = fopen(src_fileName, "r")) == NULL) {
    printf("打开源文件失败");
    exit(EXIT_FAILURE);
  }

  while(fscanf(src_fp, "%s", work) == 1) {
    fprintf(app_fp, "%s\n", work);
  }

//  回到文件开头
  rewind(app_fp);

  puts("输出目标文件中的内容");
  while(fscanf(app_fp, "%s", work) == 1) {
    puts(work);
  }
  puts("拷贝完成");

  if (fclose(app_fp) != 0) {
    fprintf(stdout, "关闭目标文件失败\n");
  }
  if (fclose(src_fp) != 0) {
    fprintf(stdout, "关闭源文件失败\n");
  }


  return 0;
}
