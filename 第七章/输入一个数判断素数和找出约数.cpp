/*�ҳ�Լ���� �ж�����*/
#include <stdio.h>
#include <stdbool.h>
int main(void) {
  //  �������, ���ܵ�Ծ��
  unsigned long num, div;
  bool isPrime;

  printf("����һ�������������ҳ�����Լ�����ж����ǲ�������, ����q�˳���\n");
  while(scanf("%lu", &num) == 1) {
    //   Լ�� С�ڵ��ڲ�������ƽ����
    for (div = 2, isPrime = false; (div * div) <= num; div++) {
      if (num % div == 0) {
        if ((div * div ) != num) {
          printf("%ld �� %ld �� %ld ��Լ��\n", div, num / div, num);
        } else {
          printf("%ld �� %ld ��Լ��\n", div, num);
        }
        //  �ж��Ƿ������� true �Ͳ������� �ܱ�����������
        isPrime = true;
      }
    }

    if (!isPrime) {
      printf("%ld ������\n", num);
    }
    printf("����һ�������������ҳ�����Լ�����ж����ǲ�������, ����q�˳���\n");
  }

  return 0;

}
