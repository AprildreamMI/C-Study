/*
  �����ϰ
  p242
*/
#include <stdio.h>
// C �ķ���ͷ�ļ�
#include <ctype.h>

// ����ɴ�ӡ�ַ�����ȷ��ASCII��ֵ
// �ո��ASCII����32 С��32�Ķ��ǷǴ�ӡ�ַ�
// ����ǷǴ�ӡ�ַ� \n �� \t ��������ӡ Ϊ�ַ���
// ������ǵĻ����ǷǴ�ӡ�ַ�����64
void printfCharAscii(void) {
  char ch;
  int count_ten;
  printf("������һ���ı�,�������ı����ַ���ӡΪASCII���ַ�");
  while((ch = getchar()) != EOF) {
    count_ten++;
    // �Ǵ�ӡ�ַ� �ո�ͻ��л����Ʊ�� ��������ӡ����ӡASCII
    if (ch <= ' ') {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
          // ������ӡ
          printf("%c      ", ch);
        } else {
          printf("%c || %d      ", ch, ch + 64);
        }
    } else {
      printf("%c || %d      ", ch, ch);
    }

    if (count_ten % 10 == 0) {
      printf("\n");
    }
  }
}


void isUpperChar (void) {
  char ch;
  int upper_num, no_upper_num;
  while ((ch = getchar()) != EOF) {
    if (isupper(ch)) {
      upper_num++;
    } else {
      no_upper_num++;
    }
  }
  printf("��д��ĸ����Ϊ��%d, Сд��ĸ����Ϊ��%d", upper_num, no_upper_num);
}

int main(void) {
  // printfCharAscii();
  isUpperChar();


  return 0;
}
