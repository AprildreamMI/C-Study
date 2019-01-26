/*ctype 头文件的一些函数*/
#include <stdio.h>
#include <ctype.h>
int main(void) {

  char ch;
  while((ch = getchar()) != '\n') {
    //  如果是字符的话
    if (isalpha(ch)) {
      putchar(ch + 1);
    } else {
      putchar(ch);
    }
  }999op
  putchar(ch);

  return 0;

}
