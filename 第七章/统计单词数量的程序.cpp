/*ͳ�Ƶ��������ĳ��� -p195*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void) {
  //  ������ַ�
  char c;
  //  �����ǰһ���ַ�
  char prev;
  //  �ַ�����
  long n_chars = 0L;
  // ����
  int n_lines = 0;
  // ������
  int n_words = 0;
  // ������������, STOP �ַ���һ���� Ҳ��������ȡ���ַ������ǻ��з�
  int p_lines = 0;
  // ��ʾһ�����ʵĿ�ͷ Ϊ��ʱ���ǵ��ʵĿ�ͷ��Ϊ��ʱ���������ַ������ǵ��ʵĿ�ͷ
  bool isword = false;

  printf("�������ı�����\'|\'Ϊ������������ͳ�����ַ������͵��������Լ�������: \n");
  //  ����ʶ����ɵ���
  prev = '\n';
  while ((c = getchar()) != STOP) {
    //  �ַ������Ӽ�
    n_chars++;
    //  ����ǻ��з�
    if (c == '\n') {
      n_lines++;
    }
    // ����ַ�c���ǿ��ַ����ұ�ʾ��ͷ��Ϊ�٣�˵���ڵ��ʵĿ�ͷ
    if (!isspace(c) && !isword) {
      // ���������Ӽ�
      n_words++;
      // �ı��ʶ ˵�����µ��ַ����Ǻ����ַ� ����c�ǿհ��ַ�
      isword = true;
    }
    // ���c�ǿհ��ַ�����ô�ѿ�ͷ��ʶ����Ϊ false
    if(isspace(c) && isword) {
      isword = false;
    }

    // ������| ����ʱ �涨�Ѿ������˵�����������ģ����������| ǰû�л��з�����˵���ⲻ����������
    prev = c;
  }

  if (prev != '\n') {
    p_lines++;
  }

  printf("������ı��ַ����У�%ld, �������У�%d, �����У�%d, �������������У�%d\n", n_chars, n_words, n_lines, p_lines);

   return 0;
}
