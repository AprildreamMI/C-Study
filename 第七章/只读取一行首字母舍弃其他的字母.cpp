/*只读取一行的首字母，舍弃其他的输入队列中的字母*/
#include <stdio.h>
#include <ctype.h>
int main(void) {
  char ch;

  printf("输入字母，打印动物名，以\'#\'结束：\n");

  while((ch = getchar()) != '#') {
    //  首字母是换行符
    if ('\n' == ch) {
      continue;
    } else {
      // 必须是一个值 不能为表达式或者语句7
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

    //  舍弃首字母之后的字符，判断他是不是换行符
    while(getchar() != '\n') {
      continue;
    }
    printf("输入字母，打印动物名，以\'#\'结束：\n");
  }
}
