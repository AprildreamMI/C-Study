#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char app_fileName[40], src_fileName[40], work[40];
  FILE *app_fp, *src_fp;
  printf("������Ŀ���ļ�����\n");
  scanf("%s", app_fileName);
  getchar();
  printf("������Դ�ļ�����\n");
  scanf("%s", src_fileName);

  if ((app_fp = fopen(app_fileName, "a+")) == NULL) {
    printf("��Ŀ���ļ�ʧ��");
    exit(EXIT_FAILURE);
  }
  if ((src_fp = fopen(src_fileName, "r")) == NULL) {
    printf("��Դ�ļ�ʧ��");
    exit(EXIT_FAILURE);
  }

  while(fscanf(src_fp, "%s", work) == 1) {
    fprintf(app_fp, "%s\n", work);
  }

//  �ص��ļ���ͷ
  rewind(app_fp);

  puts("���Ŀ���ļ��е�����");
  while(fscanf(app_fp, "%s", work) == 1) {
    puts(work);
  }
  puts("�������");

  if (fclose(app_fp) != 0) {
    fprintf(stdout, "�ر�Ŀ���ļ�ʧ��\n");
  }
  if (fclose(src_fp) != 0) {
    fprintf(stdout, "�ر�Դ�ļ�ʧ��\n");
  }


  return 0;
}
