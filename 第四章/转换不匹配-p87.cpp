/*ת����ƥ��Ľ��ʾ��*/
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void) {
  short num = PAGES;
  short mnum = -PAGES;
  printf("�����ͺ��޷��Ŷ��������� %hd, %hu\n", num, num);

  /*
    ����Ľ��Ϊ
    -336�� 65200

    ������Ϊ��������ֵ�������޷������͵Ļ�
    ϵͳʹ�ö����Ʋ����������з�������

    0 ~ 32767 �������Ǳ���
    32768 ~ 65535 da
  */
  printf("�����Ķ����ͺ��޷��Ŷ����ͣ� %hd, %hu\n", mnum, mnum);



  return 0;
}
