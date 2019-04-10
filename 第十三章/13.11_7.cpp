#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char app_fileName[40], src_fileName[40], work[40], src_work[40];
  int my_count = 0;
  FILE *app_fp, *src_fp;
  printf("请输入目标文件名：\n");
  scanf("%s", app_fileName);
  getchar();
  printf("请输入源文件名：\n");
  scanf("%s", src_fileName);

  if ((app_fp = fopen(app_fileName, "r")) == NULL) {
    printf("打开目标文件失败");
    exit(EXIT_FAILURE);
  }
  if ((src_fp = fopen(src_fileName, "r")) == NULL) {
    printf("打开源文件失败");
    exit(EXIT_FAILURE);
  }

  while((fscanf(app_fp, "%s", work) == 1) || (fscanf(src_fp, "%s", src_work) == 1)) {
    fprintf(stdout, "第一个文件的第%d行：%s\n", my_count, work);
    fprintf(stdout, "第二个文件的第%d行：%s\n", my_count, src_work);
    my_count++;
  }


  puts("输入完成");
  if (fclose(app_fp) != 0) {
    fprintf(stdout, "关闭目标文件失败\n");
  }
  if (fclose(src_fp) != 0) {
    fprintf(stdout, "关闭源文件失败\n");
  }


  return 0;
}
