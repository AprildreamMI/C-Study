#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char app_fileName[40], src_fileName[40], work[40], src_work[40];
  int my_count = 0;
  FILE *app_fp, *src_fp;
  printf("������Ŀ���ļ�����\n");
  scanf("%s", app_fileName);
  getchar();
  printf("������Դ�ļ�����\n");
  scanf("%s", src_fileName);

  if ((app_fp = fopen(app_fileName, "r")) == NULL) {
    printf("��Ŀ���ļ�ʧ��");
    exit(EXIT_FAILURE);
  }
  if ((src_fp = fopen(src_fileName, "r")) == NULL) {
    printf("��Դ�ļ�ʧ��");
    exit(EXIT_FAILURE);
  }

  while((fscanf(app_fp, "%s", work) == 1) || (fscanf(src_fp, "%s", src_work) == 1)) {
    fprintf(stdout, "��һ���ļ��ĵ�%d�У�%s\n", my_count, work);
    fprintf(stdout, "�ڶ����ļ��ĵ�%d�У�%s\n", my_count, src_work);
    my_count++;
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
