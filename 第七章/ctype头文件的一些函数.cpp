/*ctype ͷ�ļ���һЩ����*/
#include <stdio.h>
#include <ctype.h>
int main(void) {

  char ch;
  while((ch = getchar()) != '\n') {
    //  ������ַ��Ļ�
    if (isalpha(ch)) {
      putchar(ch + 1);
    } else {
      putchar(ch);
    }
  }999op
  putchar(ch);

  return 0;

}
