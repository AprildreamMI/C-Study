/*
  使用 fgets()
       fputs()
*/
#include <stdio.h>
#define SIZE 14
int main(void) {
  char words[SIZE];

  puts("是输入一段字符串");
  fgets(words, SIZE, stdin);
  printf("现在将用puts(将在末尾加上一段换行符)和fputs两种方式输出这段字符串\n");
  puts(words);
  fputs(words, stdout);
  puts("再次通过fgets来输入一段溢出的值");
  fgets(words, SIZE, stdin);
  printf("现在将用puts(将在末尾加上一段换行符)和fputs两种方式输出这段字符串\n");
  puts(words);
  fputs(words, stdout);
  puts(" **Done");
  return 0;

}
