#include <stdio.h>
int main(void) {
/*printf() ����Ҳ�Ǵ��ڷ���ֵ��
  ���ķ���ֵ�� ����ӡ�ַ��ĸ���
  ���еģ� �����ո�Ͳ��ɼ��Ŀ��ַ�
*/
  int bp2o = 212;
  int rv;

  rv = printf("%d F is water's boiling point .\n", bp2o);
  printf("����ֵ�ǣ� %d\n", rv);

  return 0;

}
