/*
  去掉fgets输入字符串的换行符
  并
  舍弃超出字符串数组中的其他字符
*/
#include <stdio.h>
#define SIZE 10
int main(void) {
  char words[SIZE];

  int i;

  puts("请持续输入一段字符串，输入空行结束输入\n");

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
