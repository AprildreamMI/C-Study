/*
  ʹ��ָ�봫�������׵�ַ��β����ַ
*/
#include <stdio.h>
#define SIZE 10

/*
  ͨ��ָ�봫��������׵�ַ��β��ַ
*/
int sump (int * start, int * end) {
  int total = 0;
  // ���׵�ַ��ʼ������β��ַ
  while (start < end) {
    total += *start;
    // ÿ��������ַ
    start++;
  }

  return total;
}

int main (void) {
  int mar_array[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
  long answer;

  // ���������׵�ַ, �� �����С
  answer = sump(mar_array, mar_array + SIZE);

  // ����Ԫ��֮��
  printf("����Ԫ��֮�ͣ�%ld\n", answer);
  // 40 �ֽ�
  // ������ÿ��Ԫ�ص��ֽڴ�С
  printf("��������ֽڴ�С��%u\n", sizeof(mar_array));
}
