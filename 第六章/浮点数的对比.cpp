/*�������ĶԱ� ����math.hͷ�ļ���Ȼ��ʹ�þ���ֵ���� ������Աȣ�
���������ֵ�����ھ���֮�У�����Ϊ��� p144*/
#include <math.h>
#include <stdio.h>
int main(void) {
  const double pi = 3.14156;
  double myPi;
  printf("���������pi��\n");
  scanf("%lf", &myPi);

  while(fabs(pi - myPi) > 0.0001) {
    printf("���������pi��\n");
    scanf("%lf", &myPi);
  }
  printf("�������ֵ�Ѿ��ܽӽ���ȷ����\n");

/*  ��ྭ��ḻ�ĳ���Ա������ڹ����Ƚ��Ƿ���ȵı��ʽʱ����ϰ�߰ѳ����������    */
  return 0;
}
