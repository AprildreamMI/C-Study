/*
  ȥ��fgets�����ַ����Ļ��з�
  ��
  ���������ַ��������е������ַ�
*/
#include <stdio.h>
#define SIZE 10
int main(void) {
  char words[SIZE];

  int i;

  puts("���������һ���ַ�����������н�������\n");

  while(fgets(words, SIZE, stdin) != NULL && words[0] != '\n') {
    i = 0;
    while (words[i] != '\n' && words[i] != '\0') {
      i++;
    }
    if (words[i] == '\n') {
      words[i] = '\0';
    } else {
      while(getchar() != '\n') {
        continue;
      }
    }

    puts(words);
  }

  puts("***done***");


  return 0;
}
