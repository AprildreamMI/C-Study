/*
  编程练习
  p242
*/
#include <stdio.h>
// C 的分类头文件
#include <ctype.h>

// 输入可打印字符的正确的ASCII码值
// 空格的ASCII码是32 小于32的都是非打印字符
// 如果是非打印字符 \n 和 \t 就正常打印 为字符串
// 如果不是的话就是非打印字符加上64
void printfCharAscii(void) {
  char ch;
  int count_ten;
  printf("请输入一段文本,本程序将文本的字符打印为ASCII码字符");
  while((ch = getchar()) != EOF) {
    count_ten++;
    // 非打印字符 空格和换行还有制表符 则正常打印不打印ASCII
    if (ch <= ' ') {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
          // 正常打印
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
  printf("大写字母数量为：%d, 小写字母数量为：%d", upper_num, no_upper_num);
}

int main(void) {
  // printfCharAscii();
  isUpperChar();


  return 0;
}
