/*
  ָ�����
*/
#include <stdio.h>
#define SIZE 5
int main(void) {
  int urn[5] = {100, 200, 300, 400, 500};
  int * ptr1, * ptr2, * ptr3;

  // �����׵�ַ��ֵ��ָ��
  ptr1 = urn;
  // ����ĵڶ�����ַ��ֵ��
  ptr2 = &urn[2];

  printf("���ָ���ֵ�͵�ַ��");
  /*
   ָ��ptr1��ָ��ĵ�ַ,
   ָ��ptr1��ָ��ĵ�ַ��ֵ
   ָ�����ptr1�ĵ�ַ
  */
  printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

  // ָ��ļӷ�
  ptr3 = ptr1 + 4;
  printf("ptr3 = %p, *ptr3 = %d\n", ptr3, *ptr3);

  // ����ָ��
  ptr1++;
  printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

  // �ݼ�ָ��
  ptr2--;
  printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);


  // �ָ�ָ���ʼֵ
  --ptr1;
  ++ptr2;
  printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

  // һ��ָ��ȥ����һ��ָ��
  // ָ����ָ��ĵ�ַ֮��ļӼ�
  printf("ptr1 = %p, ptr2 = %p, ptr2 - ptr1 = %ld\n", ptr1, ptr2, ptr2 - ptr1);

  // һ��ָ�����һ������
  // ָ����ָ��ĵ�ַ֮��ļӼ�
  printf("ptr3 = %p, ptr3 - 2 = %p", ptr3, ptr3 - 2);


  return 0;
}
