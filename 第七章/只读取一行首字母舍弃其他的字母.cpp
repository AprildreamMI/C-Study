/*ֻ��ȡһ�е�����ĸ��������������������е���ĸ*/
#include <stdio.h>
#include <ctype.h>
int main(void) {
  char ch;

  printf("������ĸ����ӡ����������\'#\'������\n");

  while((ch = getchar()) != '#') {
    //  ����ĸ�ǻ��з�
    if ('\n' == ch) {
      continue;
    } else {
      // ������һ��ֵ ����Ϊ���ʽ�������7
      switch(ch) {
        case 'a':
          printf("aaa\n");
        break;
        case 'b':
          printf("bbb\n");
        break;
        case 'c':
          printf("ccc\n");
        break;
        case 'd':
          printf("ddd\n");
        break;
      }
    }

    //  ��������ĸ֮����ַ����ж����ǲ��ǻ��з�
    while(getchar() != '\n') {
      continue;
    }
    printf("������ĸ����ӡ����������\'#\'������\n");
  }
}
