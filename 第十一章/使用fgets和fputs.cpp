/*
  ʹ�� fgets()
       fputs()
*/
#include <stdio.h>
#define SIZE 14
int main(void) {
  char words[SIZE];

  puts("������һ���ַ���");
  fgets(words, SIZE, stdin);
  printf("���ڽ���puts(����ĩβ����һ�λ��з�)��fputs���ַ�ʽ�������ַ���\n");
  puts(words);
  fputs(words, stdout);
  puts("�ٴ�ͨ��fgets������һ�������ֵ");
  fgets(words, SIZE, stdin);
  printf("���ڽ���puts(����ĩβ����һ�λ��з�)��fputs���ַ�ʽ�������ַ���\n");
  puts(words);
  fputs(words, stdout);
  puts(" **Done");
  return 0;

}
