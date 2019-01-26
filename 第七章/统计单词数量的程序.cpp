/*统计单词数量的程序 -p195*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void) {
  //  读入的字符
  char c;
  //  读入的前一个字符
  char prev;
  //  字符数量
  long n_chars = 0L;
  // 行数
  int n_lines = 0;
  // 单词数
  int n_words = 0;
  // 不完整的行数, STOP 字符在一行中 也就是最后读取的字符她不是换行符
  int p_lines = 0;
  // 表示一个单词的开头 为假时就是单词的开头，为真时，后续的字符都不是单词的开头
  bool isword = false;

  printf("请输入文本，以\'|\'为结束，本程序统计其字符数量和单词数量以及行数量: \n");
  //  用于识别完成的行
  prev = '\n';
  while ((c = getchar()) != STOP) {
    //  字符数量加加
    n_chars++;
    //  如果是换行符
    if (c == '\n') {
      n_lines++;
    }
    // 如果字符c不是空字符并且表示开头的为假，说明在单词的开头
    if (!isspace(c) && !isword) {
      // 单词数量加加
      n_words++;
      // 改变标识 说明其下的字符都是后续字符 除非c是空白字符
      isword = true;
    }
    // 如果c是空白字符，那么把开头标识设置为 false
    if(isspace(c) && isword) {
      isword = false;
    }

    // 再输入| 符号时 规定已经换行了的这就是完整的，如果在输入| 前没有换行符，则说明这不是完整的行
    prev = c;
  }

  if (prev != '\n') {
    p_lines++;
  }

  printf("输入的文本字符数有：%ld, 单词数有：%d, 行数有：%d, 不完整的行数有：%d\n", n_chars, n_words, n_lines, p_lines);

   return 0;
}
